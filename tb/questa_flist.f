// Questa compilation file list for LFGPU UVM testbench
// Compiled from the project root: vlog -f tb/questa_flist.f

// ── Compiler flags ───────────────────────────────────────────────────────
+acc
-sv
+define+UVM_NO_DEPRECATED
+define+UVM_OBJECT_MUST_HAVE_CONSTRUCTOR

// ── UVM library (Questa ships this; adjust path if needed) ───────────────
-L mtiUvm

// ── Interfaces (must be before any module/package that uses them) ────────
tb/interfaces/gpu_ctrl_if.sv
tb/interfaces/prog_mem_if.sv
tb/interfaces/data_mem_if.sv

// ── RTL source files ─────────────────────────────────────────────────────
src/dcr.sv
src/registers.sv
src/alu.sv
src/lsu.sv
src/fetcher.sv
src/decoder.sv
src/pc.sv
src/divergence_stack.sv
src/warptothreadbus.sv
src/warp_manager.sv
src/warp_scheduler.sv
src/core.sv
src/controller.sv
src/dispatch.sv
src/gpu.sv

// ── UVM testbench package ────────────────────────────────────────────────
tb/uvm/gpu_tb_pkg.sv

// ── Testbench top ────────────────────────────────────────────────────────
tb/top/tb_top.sv
