class gpu_ctrl_driver extends uvm_driver #(gpu_ctrl_seq_item);
    `uvm_component_utils(gpu_ctrl_driver)

    virtual gpu_ctrl_if vif;

    function new(string name, uvm_component parent);
        super.new(name, parent);
    endfunction

    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        if (!uvm_config_db #(virtual gpu_ctrl_if)::get(this, "", "gpu_ctrl_vif", vif))
            `uvm_fatal("NO_VIF", "gpu_ctrl_driver: gpu_ctrl_vif not found in config db")
    endfunction

    task run_phase(uvm_phase phase);
        gpu_ctrl_seq_item item;
        // Default quiescent state
        vif.driver_cb.reset                    <= 1'b0;
        vif.driver_cb.start                    <= 1'b0;
        vif.driver_cb.device_control_data      <= 8'h00;
        vif.driver_cb.device_control_write_enable <= 1'b0;
        forever begin
            seq_item_port.get_next_item(item);
            drive_item(item);
            seq_item_port.item_done();
        end
    endtask

    task drive_item(gpu_ctrl_seq_item item);
        repeat (item.hold_cycles) begin
            @(vif.driver_cb);
            vif.driver_cb.reset                       <= item.reset;
            vif.driver_cb.start                       <= item.start;
            vif.driver_cb.device_control_data         <= item.device_control_data;
            vif.driver_cb.device_control_write_enable <= item.device_control_write_enable;
        end
    endtask
endclass
