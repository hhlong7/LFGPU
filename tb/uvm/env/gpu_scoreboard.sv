// GPU scoreboard: collects data memory write transactions and compares
// against a golden reference loaded by the test.
// Phase 0: stub — logs writes, no checking yet (added in Phase 1+).
class gpu_scoreboard extends uvm_scoreboard;
    `uvm_component_utils(gpu_scoreboard)

    uvm_analysis_imp #(data_mem_seq_item, gpu_scoreboard) write_imp;

    // Golden memory reference (populated by test before run)
    logic [31:0] golden_mem [256];
    bit          check_enabled = 0;
    int unsigned error_count   = 0;

    function new(string name, uvm_component parent);
        super.new(name, parent);
    endfunction

    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        write_imp = new("write_imp", this);
        foreach (golden_mem[i]) golden_mem[i] = '0;
    endfunction

    // Called by test to arm checking
    function void set_golden(logic [31:0] gold [], bit enable = 1);
        foreach (gold[i]) golden_mem[i] = gold[i];
        check_enabled = enable;
    endfunction

    function void write(data_mem_seq_item item);
        if (!item.is_write) return;
        `uvm_info("SB", $sformatf("Write: addr=0x%02h data=0x%08h", item.address, item.data), UVM_HIGH)
        if (check_enabled) begin
            if (item.data !== golden_mem[item.address]) begin
                `uvm_error("SB_MISMATCH",
                    $sformatf("addr=0x%02h: got 0x%08h expected 0x%08h",
                              item.address, item.data, golden_mem[item.address]))
                error_count++;
            end
        end
    endfunction

    function void report_phase(uvm_phase phase);
        if (check_enabled)
            `uvm_info("SB", $sformatf("Scoreboard: %0d errors", error_count), UVM_NONE)
    endfunction
endclass
