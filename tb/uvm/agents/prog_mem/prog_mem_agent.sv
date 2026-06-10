class prog_mem_agent #(
    parameter NUM_CHANNELS = 1,
    parameter ADDR_BITS    = 8,
    parameter DATA_BITS    = 16
) extends uvm_agent;
    `uvm_component_param_utils(prog_mem_agent #(NUM_CHANNELS, ADDR_BITS, DATA_BITS))

    typedef prog_mem_driver  #(NUM_CHANNELS, ADDR_BITS, DATA_BITS) driver_t;
    typedef prog_mem_monitor #(NUM_CHANNELS, ADDR_BITS, DATA_BITS) monitor_t;

    driver_t  driver;   // autonomous responder — no sequencer needed
    monitor_t monitor;

    uvm_analysis_port #(prog_mem_seq_item) ap;

    function new(string name, uvm_component parent);
        super.new(name, parent);
    endfunction

    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        ap      = new("ap", this);
        monitor = monitor_t::type_id::create("monitor", this);
        // Driver is always needed (responds to DUT), regardless of active/passive
        driver  = driver_t::type_id::create("driver", this);
    endfunction

    function void connect_phase(uvm_phase phase);
        monitor.ap.connect(ap);
    endfunction

    function void set_mem(logic [DATA_BITS-1:0] instructions []);
        driver.set_mem(instructions);
    endfunction
endclass
