class data_mem_agent #(
    parameter NUM_CHANNELS = 4,
    parameter ADDR_BITS    = 8,
    parameter DATA_BITS    = 8
) extends uvm_agent;
    `uvm_component_param_utils(data_mem_agent #(NUM_CHANNELS, ADDR_BITS, DATA_BITS))

    typedef data_mem_driver  #(NUM_CHANNELS, ADDR_BITS, DATA_BITS) driver_t;
    typedef data_mem_monitor #(NUM_CHANNELS, ADDR_BITS, DATA_BITS) monitor_t;

    driver_t  driver;   // autonomous responder — no sequencer needed
    monitor_t monitor;

    uvm_analysis_port #(data_mem_seq_item) ap;

    function new(string name, uvm_component parent);
        super.new(name, parent);
    endfunction

    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        ap      = new("ap", this);
        monitor = monitor_t::type_id::create("monitor", this);
        driver  = driver_t::type_id::create("driver", this);
    endfunction

    function void connect_phase(uvm_phase phase);
        monitor.ap.connect(ap);
        // driver.write_ap is connected to scoreboard from gpu_env.connect_phase
    endfunction

    function void set_mem(logic [DATA_BITS-1:0] initial_data []);
        driver.set_mem(initial_data);
    endfunction

    function void get_mem(output logic [DATA_BITS-1:0] snapshot []);
        driver.get_mem(snapshot);
    endfunction
endclass
