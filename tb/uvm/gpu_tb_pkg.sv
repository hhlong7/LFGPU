`ifndef GPU_TB_PKG_SV
`define GPU_TB_PKG_SV

package gpu_tb_pkg;
    import uvm_pkg::*;
    `include "uvm_macros.svh"

    // ── Sequence items ────────────────────────────────────────────────────
    `include "tb/uvm/agents/gpu_ctrl/gpu_ctrl_seq_item.sv"
    `include "tb/uvm/agents/prog_mem/prog_mem_seq_item.sv"
    `include "tb/uvm/agents/data_mem/data_mem_seq_item.sv"

    // ── gpu_ctrl agent ────────────────────────────────────────────────────
    `include "tb/uvm/agents/gpu_ctrl/gpu_ctrl_sequencer.sv"
    `include "tb/uvm/agents/gpu_ctrl/gpu_ctrl_driver.sv"
    `include "tb/uvm/agents/gpu_ctrl/gpu_ctrl_monitor.sv"
    `include "tb/uvm/agents/gpu_ctrl/gpu_ctrl_agent.sv"

    // ── prog_mem agent ────────────────────────────────────────────────────
    `include "tb/uvm/agents/prog_mem/prog_mem_sequencer.sv"
    `include "tb/uvm/agents/prog_mem/prog_mem_driver.sv"
    `include "tb/uvm/agents/prog_mem/prog_mem_monitor.sv"
    `include "tb/uvm/agents/prog_mem/prog_mem_agent.sv"

    // ── data_mem agent ────────────────────────────────────────────────────
    `include "tb/uvm/agents/data_mem/data_mem_sequencer.sv"
    `include "tb/uvm/agents/data_mem/data_mem_driver.sv"
    `include "tb/uvm/agents/data_mem/data_mem_monitor.sv"
    `include "tb/uvm/agents/data_mem/data_mem_agent.sv"

    // ── Environment ───────────────────────────────────────────────────────
    `include "tb/uvm/env/gpu_scoreboard.sv"
    `include "tb/uvm/env/gpu_coverage.sv"
    `include "tb/uvm/env/gpu_env.sv"

    // ── Sequences ─────────────────────────────────────────────────────────
    `include "tb/uvm/sequences/base_seq.sv"

    // ── Tests ─────────────────────────────────────────────────────────────
    `include "tb/uvm/tests/base_test.sv"

endpackage

`endif // GPU_TB_PKG_SV
