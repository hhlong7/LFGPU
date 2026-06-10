// Program-memory responder: stores instruction array, serves fetch requests.
// Extends uvm_component (not uvm_driver) since it responds to DUT requests
// autonomously rather than being driven by sequences.
class prog_mem_driver #(
    parameter NUM_CHANNELS = 1,
    parameter ADDR_BITS    = 8,
    parameter DATA_BITS    = 16
) extends uvm_component;
    `uvm_component_param_utils(prog_mem_driver #(NUM_CHANNELS, ADDR_BITS, DATA_BITS))

    virtual prog_mem_if #(NUM_CHANNELS, ADDR_BITS, DATA_BITS) vif;

    logic [DATA_BITS-1:0] mem [2**ADDR_BITS];
    int unsigned          resp_delay = 1;

    function new(string name, uvm_component parent);
        super.new(name, parent);
    endfunction

    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        if (!uvm_config_db #(virtual prog_mem_if #(NUM_CHANNELS, ADDR_BITS, DATA_BITS))::get(
                this, "", "prog_mem_vif", vif))
            `uvm_fatal("NO_VIF", "prog_mem_driver: prog_mem_vif not found in config db")
        foreach (mem[i]) mem[i] = '0;
    endfunction

    function void set_mem(logic [DATA_BITS-1:0] instructions []);
        foreach (instructions[i]) mem[i] = instructions[i];
    endfunction

    task run_phase(uvm_phase phase);
        for (int ch = 0; ch < NUM_CHANNELS; ch++) begin
            vif.driver_cb.read_ready[ch] <= 1'b0;
            vif.driver_cb.read_data[ch]  <= '0;
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
            end
        end
    endtask
endclass
