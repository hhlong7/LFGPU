class gpu_ctrl_monitor extends uvm_monitor;
    `uvm_component_utils(gpu_ctrl_monitor)

    virtual gpu_ctrl_if vif;

    uvm_analysis_port #(gpu_ctrl_seq_item) ap;

    function new(string name, uvm_component parent);
        super.new(name, parent);
    endfunction

    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        ap = new("ap", this);
        if (!uvm_config_db #(virtual gpu_ctrl_if)::get(this, "", "gpu_ctrl_vif", vif))
            `uvm_fatal("NO_VIF", "gpu_ctrl_monitor: gpu_ctrl_vif not found in config db")
    endfunction

    task run_phase(uvm_phase phase);
        gpu_ctrl_seq_item item;
        forever begin
            @(vif.monitor_cb);
            item = gpu_ctrl_seq_item::type_id::create("item");
            item.reset                       = vif.monitor_cb.reset;
            item.start                       = vif.monitor_cb.start;
            item.device_control_data         = vif.monitor_cb.device_control_data;
            item.device_control_write_enable = vif.monitor_cb.device_control_write_enable;
            item.done                        = vif.monitor_cb.done;
            ap.write(item);
        end
    endtask
endclass
