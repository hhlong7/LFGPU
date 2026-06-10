// Functional coverage collector for the GPU.
// Phase 0: covergroups are stubs — populated in Phases 1-5.
class gpu_coverage extends uvm_subscriber #(prog_mem_seq_item);
    `uvm_component_utils(gpu_coverage)

    // Phase 1 will add: opcode bins
    // Phase 2 will add: mem access width bins
    // Phase 3 will add: CSR address bins
    covergroup cg_fetch;
        // Placeholder — no bins yet
        option.per_instance = 1;
        cp_placeholder: coverpoint 1'b0 { bins zero = {1'b0}; }
    endgroup

    function new(string name, uvm_component parent);
        super.new(name, parent);
        cg_fetch = new();
    endfunction

    function void write(prog_mem_seq_item item);
        // Phase 1: sample opcode from item.data[6:0] once RV32I is live
        cg_fetch.sample();
    endfunction
endclass
