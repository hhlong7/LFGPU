class data_mem_monitor #(
    parameter NUM_CHANNELS = 4,
    parameter ADDR_BITS    = 8,
    parameter DATA_BITS    = 8
) extends uvm_monitor;
    `uvm_component_param_utils(data_mem_monitor #(NUM_CHANNELS, ADDR_BITS, DATA_BITS))

    virtual data_mem_if #(NUM_CHANNELS, ADDR_BITS, DATA_BITS) vif;
    uvm_analysis_port #(data_mem_seq_item) ap;

    function new(string name, uvm_component parent);
        super.new(name, parent);
    endfunction

    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        ap = new("ap", this);
        if (!uvm_config_db #(virtual data_mem_if #(NUM_CHANNELS, ADDR_BITS, DATA_BITS))::get(
                this, "", "data_mem_vif", vif))
            `uvm_fatal("NO_VIF", "data_mem_monitor: data_mem_vif not found in config db")
    endfunction

    task run_phase(uvm_phase phase);
        forever begin
            @(vif.monitor_cb);
            for (int ch = 0; ch < NUM_CHANNELS; ch++) begin
                if (vif.monitor_cb.read_valid[ch] && vif.monitor_cb.read_ready[ch]) begin
                    data_mem_seq_item item = data_mem_seq_item::type_id::create("rd");
                    item.channel  = ch;
                    item.address  = vif.monitor_cb.read_address[ch];
                    item.data     = vif.monitor_cb.read_data[ch];
                    item.is_write = 1'b0;
                    ap.write(item);
                end
                if (vif.monitor_cb.write_valid[ch] && vif.monitor_cb.write_ready[ch]) begin
                    data_mem_seq_item item = data_mem_seq_item::type_id::create("wr");
                    item.channel  = ch;
                    item.address  = vif.monitor_cb.write_address[ch];
                    item.data     = vif.monitor_cb.write_data[ch];
                    item.is_write = 1'b1;
                    ap.write(item);
                end
            end
        end
    endtask
endclass
