`timescale 1ns/1ps

import uvm_pkg::*;
`include "uvm_macros.svh"
import gpu_tb_pkg::*;

// DUT parameters — update these to match each phase's parameter set
localparam PROG_MEM_NUM_CH  = 1;
localparam PROG_MEM_ADDR    = 32;
localparam PROG_MEM_DATA    = 32;
localparam DATA_MEM_NUM_CH  = 4;
localparam DATA_MEM_ADDR    = 32;
localparam DATA_MEM_DATA    = 32;

module tb_top;

    // ── Clock generation ─────────────────────────────────────────────────
    logic clk;
    initial clk = 1'b0;
    always #5 clk = ~clk; // 100 MHz

    // ── Interface instances ──────────────────────────────────────────────
    gpu_ctrl_if ctrl_if (.clk(clk));

    prog_mem_if #(
        .NUM_CHANNELS(PROG_MEM_NUM_CH),
        .ADDR_BITS   (PROG_MEM_ADDR),
        .DATA_BITS   (PROG_MEM_DATA)
    ) prog_if (.clk(clk));

    data_mem_if #(
        .NUM_CHANNELS(DATA_MEM_NUM_CH),
        .ADDR_BITS   (DATA_MEM_ADDR),
        .DATA_BITS   (DATA_MEM_DATA)
    ) data_if (.clk(clk));

    // ── DUT instantiation ────────────────────────────────────────────────
    gpu #(
        .DATA_MEM_ADDR_BITS        (DATA_MEM_ADDR),
        .DATA_MEM_DATA_BITS        (DATA_MEM_DATA),
        .DATA_MEM_NUM_CHANNELS     (DATA_MEM_NUM_CH),
        .PROGRAM_MEM_ADDR_BITS     (PROG_MEM_ADDR),
        .PROGRAM_MEM_DATA_BITS     (PROG_MEM_DATA),
        .PROGRAM_MEM_NUM_CHANNELS  (PROG_MEM_NUM_CH),
        .NUM_CORES                 (2),
        .WARPS_PER_CORE            (2),
        .THREADS_PER_WARP          (2),
        .THREADS_PER_BLOCK         (4)
    ) dut (
        .clk                       (clk),
        .reset                     (ctrl_if.reset),
        .start                     (ctrl_if.start),
        .done                      (ctrl_if.done),
        .device_control_write_enable(ctrl_if.device_control_write_enable),
        .device_control_data        (ctrl_if.device_control_data),

        .program_mem_read_valid    (prog_if.read_valid),
        .program_mem_read_address  (prog_if.read_address),
        .program_mem_read_ready    (prog_if.read_ready),
        .program_mem_read_data     (prog_if.read_data),

        .data_mem_read_valid       (data_if.read_valid),
        .data_mem_read_address     (data_if.read_address),
        .data_mem_read_ready       (data_if.read_ready),
        .data_mem_read_data        (data_if.read_data),
        .data_mem_write_valid      (data_if.write_valid),
        .data_mem_write_address    (data_if.write_address),
        .data_mem_write_data       (data_if.write_data),
        .data_mem_write_ready      (data_if.write_ready)
    );

    // ── Register interfaces in config DB ────────────────────────────────
    initial begin
        uvm_config_db #(virtual gpu_ctrl_if)::set(null, "uvm_test_top.*", "gpu_ctrl_vif", ctrl_if);
        uvm_config_db #(virtual prog_mem_if #(PROG_MEM_NUM_CH, PROG_MEM_ADDR, PROG_MEM_DATA))::set(
            null, "uvm_test_top.*", "prog_mem_vif", prog_if);
        uvm_config_db #(virtual data_mem_if #(DATA_MEM_NUM_CH, DATA_MEM_ADDR, DATA_MEM_DATA))::set(
            null, "uvm_test_top.*", "data_mem_vif", data_if);
        run_test();
    end

    // ── Simulation timeout guard ─────────────────────────────────────────
    initial begin
        #1_000_000ns;
        `uvm_fatal("TIMEOUT", "Simulation exceeded 1ms — hung?")
    end

endmodule
