// Data-memory responder: RAM model that responds to GPU reads and captures writes.
// Extends uvm_component (not uvm_driver) — autonomous responder, not sequence-driven.
class data_mem_driver #(
    parameter NUM_CHANNELS = 4,
    parameter ADDR_BITS    = 8,
    parameter DATA_BITS    = 8
) extends uvm_component;
    `uvm_component_param_utils(data_mem_driver #(NUM_CHANNELS, ADDR_BITS, DATA_BITS))

    virtual data_mem_if #(NUM_CHANNELS, ADDR_BITS, DATA_BITS) vif;

    logic [DATA_BITS-1:0] mem [2**ADDR_BITS];
    int unsigned          resp_delay = 1;

    uvm_analysis_port #(data_mem_seq_item) write_ap;

    function new(string name, uvm_component parent);
        super.new(name, parent);
    endfunction

    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        write_ap = new("write_ap", this);
        if (!uvm_config_db #(virtual data_mem_if #(NUM_CHANNELS, ADDR_BITS, DATA_BITS))::get(
                this, "", "data_mem_vif", vif))
            `uvm_fatal("NO_VIF", "data_mem_driver: data_mem_vif not found in config db")
        foreach (mem[i]) mem[i] = '0;
    endfunction

    function void set_mem(logic [DATA_BITS-1:0] initial_data []);
        foreach (initial_data[i]) mem[i] = initial_data[i];
    endfunction

    function void get_mem(output logic [DATA_BITS-1:0] snapshot []);
        snapshot = new [2**ADDR_BITS];
        foreach (mem[i]) snapshot[i] = mem[i];
    endfunction

    task run_phase(uvm_phase phase);
        for (int ch = 0; ch < NUM_CHANNELS; ch++) begin
            vif.driver_cb.read_ready[ch]  <= 1'b0;
            vif.driver_cb.read_data[ch]   <= '0;
            vif.driver_cb.write_ready[ch] <= 1'b0;
        end
        forever begin
            @(vif.driver_cb);
            for (int ch = 0; ch < NUM_CHANNELS; ch++) begin
                if (vif.driver_cb.read_valid[ch]) begin
                    fork
                        automatic int unsigned c    = ch;
                        automatic logic [ADDR_BITS-1:0] addr = vif.driver_cb.read_address[c];
                    begin
                        repeat (resp_delay > 0 ? resp_delay - 1 : 0) @(vif.driver_cb);
                        vif.driver_cb.read_data[c]  <= mem[addr];
                        vif.driver_cb.read_ready[c] <= 1'b1;
                        @(vif.driver_cb);
                        vif.driver_cb.read_ready[c] <= 1'b0;
                    end
                    join_none
                end
                if (vif.driver_cb.write_valid[ch]) begin
                    fork
                        automatic int unsigned c     = ch;
                        automatic logic [ADDR_BITS-1:0] waddr = vif.driver_cb.write_address[c];
                        automatic logic [DATA_BITS-1:0] wdata = vif.driver_cb.write_data[c];
                    begin
                        repeat (resp_delay > 0 ? resp_delay - 1 : 0) @(vif.driver_cb);
                        mem[waddr] = wdata;
                        vif.driver_cb.write_ready[c] <= 1'b1;
                        @(vif.driver_cb);
                        vif.driver_cb.write_ready[c] <= 1'b0;
                        begin
                            data_mem_seq_item item = data_mem_seq_item::type_id::create("wr");
                            item.channel  = c;
                            item.address  = waddr;
                            item.data     = wdata;
                            item.is_write = 1'b1;
                            write_ap.write(item);
                        end
                    end
                    join_none
                end
            end
        end
    endtask
endclass
