// Top-level UVM environment for the LFGPU.
// Parameters must match the DUT instantiation in tb_top.sv.
class gpu_env #(
    parameter PROG_MEM_NUM_CH   = 1,
    parameter PROG_MEM_ADDR     = 8,
    parameter PROG_MEM_DATA     = 16,   // 32 after Phase 1
    parameter DATA_MEM_NUM_CH   = 4,
    parameter DATA_MEM_ADDR     = 8,
    parameter DATA_MEM_DATA     = 8     // 32 after Phase 1
) extends uvm_env;
    `uvm_component_param_utils(gpu_env #(
        PROG_MEM_NUM_CH, PROG_MEM_ADDR, PROG_MEM_DATA,
        DATA_MEM_NUM_CH, DATA_MEM_ADDR, DATA_MEM_DATA))

    typedef prog_mem_agent #(PROG_MEM_NUM_CH, PROG_MEM_ADDR, PROG_MEM_DATA) prog_agent_t;
    typedef data_mem_agent #(DATA_MEM_NUM_CH, DATA_MEM_ADDR, DATA_MEM_DATA) data_agent_t;

    gpu_ctrl_agent   ctrl_agent;
    prog_agent_t     prog_agent;
    data_agent_t     data_agent;
    gpu_scoreboard   scoreboard;
    gpu_coverage     coverage;

    function new(string name, uvm_component parent);
        super.new(name, parent);
    endfunction

    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        ctrl_agent  = gpu_ctrl_agent::type_id::create("ctrl_agent", this);
        prog_agent  = prog_agent_t::type_id::create("prog_agent", this);
        data_agent  = data_agent_t::type_id::create("data_agent", this);
        scoreboard  = gpu_scoreboard::type_id::create("scoreboard", this);
        coverage    = gpu_coverage::type_id::create("coverage", this);
    endfunction

    function void connect_phase(uvm_phase phase);
        // Data memory writes → scoreboard
        data_agent.driver.write_ap.connect(scoreboard.write_imp);
        // Instruction fetches → coverage
        prog_agent.ap.connect(coverage.analysis_export);
    endfunction
endclass
