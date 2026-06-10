class gpu_ctrl_agent extends uvm_agent;
    `uvm_component_utils(gpu_ctrl_agent)

    gpu_ctrl_sequencer sequencer;
    gpu_ctrl_driver    driver;
    gpu_ctrl_monitor   monitor;

    uvm_analysis_port #(gpu_ctrl_seq_item) ap;

    function new(string name, uvm_component parent);
        super.new(name, parent);
    endfunction

    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        ap      = new("ap", this);
        monitor = gpu_ctrl_monitor::type_id::create("monitor", this);
        if (get_is_active() == UVM_ACTIVE) begin
            sequencer = gpu_ctrl_sequencer::type_id::create("sequencer", this);
            driver    = gpu_ctrl_driver::type_id::create("driver", this);
        end
    endfunction

    function void connect_phase(uvm_phase phase);
        monitor.ap.connect(ap);
        if (get_is_active() == UVM_ACTIVE)
            driver.seq_item_port.connect(sequencer.seq_item_export);
    endfunction
endclass
