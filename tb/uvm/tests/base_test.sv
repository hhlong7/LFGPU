// Base test: verifies that the UVM environment compiles, connects, and
// survives a reset without UVM_FATAL or UVM_ERROR.
// All subsequent tests extend this class.
class base_test extends uvm_test;
    `uvm_component_utils(base_test)

    // DUT parameters: RV32I — 32-bit instructions, 32-bit data
    typedef gpu_env #(1, 32, 32, 4, 32, 32) env_t;
    env_t env;

    function new(string name, uvm_component parent);
        super.new(name, parent);
    endfunction

    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        env = env_t::type_id::create("env", this);
    endfunction

    task run_phase(uvm_phase phase);
        base_seq seq;
        phase.raise_objection(this);

        seq = base_seq::type_id::create("seq");
        seq.start(env.ctrl_agent.sequencer);

        // Hold a few extra cycles to observe quiescent state
        #100ns;

        phase.drop_objection(this);
    endtask

    function void report_phase(uvm_phase phase);
        uvm_report_server svr = uvm_report_server::get_server();
        if (svr.get_severity_count(UVM_ERROR) == 0 &&
            svr.get_severity_count(UVM_FATAL) == 0)
            `uvm_info("TEST", "*** TEST PASSED ***", UVM_NONE)
        else
            `uvm_error("TEST", "*** TEST FAILED ***")
    endfunction
endclass
