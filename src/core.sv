`default_nettype none
`timescale 1ns/1ns

// COMPUTE CORE  (RV32I)
// Handles one thread block at a time.
// Phase 1+2: 32-bit datapath, RV32I ISA, LB/LH/LW/SB/SH/SW.
module core #(
    parameter DATA_MEM_ADDR_BITS   = 32,
    parameter DATA_MEM_DATA_BITS   = 32,
    parameter PROGRAM_MEM_ADDR_BITS = 32,
    parameter PROGRAM_MEM_DATA_BITS = 32,
    parameter WARPS_PER_CORE       = 1,
    parameter THREADS_PER_WARP     = 4,
    parameter THREADS_PER_BLOCK    = 4
) (
    input wire clk,
    input wire reset,

    input  wire        start,
    output wire        done,

    input  wire [7:0]                      block_id,
    input  wire [$clog2(THREADS_PER_BLOCK):0] thread_count,

    // Program memory (one channel per core)
    output reg                             program_mem_read_valid,
    output reg [PROGRAM_MEM_ADDR_BITS-1:0] program_mem_read_address,
    input  reg                             program_mem_read_ready,
    input  reg [PROGRAM_MEM_DATA_BITS-1:0] program_mem_read_data,

    // Data memory (one channel per thread in the warp)
    output reg [THREADS_PER_WARP-1:0]                 data_mem_read_valid,
    output reg [DATA_MEM_ADDR_BITS-1:0]               data_mem_read_address  [THREADS_PER_WARP-1:0],
    input  reg [THREADS_PER_WARP-1:0]                 data_mem_read_ready,
    input  reg [DATA_MEM_DATA_BITS-1:0]               data_mem_read_data     [THREADS_PER_WARP-1:0],
    output reg [THREADS_PER_WARP-1:0]                 data_mem_write_valid,
    output reg [DATA_MEM_ADDR_BITS-1:0]               data_mem_write_address [THREADS_PER_WARP-1:0],
    output reg [DATA_MEM_DATA_BITS-1:0]               data_mem_write_data    [THREADS_PER_WARP-1:0],
    input  reg [THREADS_PER_WARP-1:0]                 data_mem_write_ready
);
    // ── Pipeline state ─────────────────────────────────────────────────
    reg [2:0]  core_state;
    reg [2:0]  fetcher_state;
    reg [31:0] instruction;

    // ── Warp topology ──────────────────────────────────────────────────
    reg  [$clog2(WARPS_PER_CORE):0]          warp_index;
    wire [3:0]                               warp_ids    [THREADS_PER_BLOCK-1:0];
    wire [$clog2(THREADS_PER_BLOCK):0]       warp_groups [0:WARPS_PER_CORE-1][0:THREADS_PER_WARP-1];
    reg  [THREADS_PER_BLOCK-1:0]             masks;
    reg  [3:0]                               warp;
    wire [$clog2(THREADS_PER_BLOCK):0]       Running_Threads [0:THREADS_PER_WARP-1];
    assign Running_Threads = warp_groups[warp];

    // ── PC signals ─────────────────────────────────────────────────────
    reg  [31:0] current_pc;
    wire [31:0] next_pc [THREADS_PER_WARP-1:0];

    // ── LSU state ──────────────────────────────────────────────────────
    reg  [1:0]  lsu_state [THREADS_PER_WARP-1:0];

    // ── Block-level register operands (all threads) ────────────────────
    reg  [31:0] rs_regs      [0:THREADS_PER_BLOCK-1];
    reg  [31:0] rt_regs      [0:THREADS_PER_BLOCK-1];
    reg  [31:0] lsu_out_regs [0:THREADS_PER_BLOCK-1];
    reg  [31:0] alu_out_regs [0:THREADS_PER_BLOCK-1];

    // ── Warp-level compute operands (active warp only) ─────────────────
    reg  [31:0] rs_computes      [0:THREADS_PER_WARP-1];
    reg  [31:0] rt_computes      [0:THREADS_PER_WARP-1];
    reg  [31:0] lsu_out_computes [0:THREADS_PER_WARP-1];
    reg  [31:0] alu_out_computes [0:THREADS_PER_WARP-1];

    // ── Decoded instruction fields ────────────────────────────────────
    reg [4:0]  decoded_rd_address;
    reg [4:0]  decoded_rs_address;
    reg [4:0]  decoded_rt_address;
    reg [31:0] decoded_immediate;
    reg [2:0]  decoded_funct3;
    reg [11:0] decoded_csr_addr;

    // ── Decoded control signals ───────────────────────────────────────
    reg        decoded_reg_write_enable;
    reg        decoded_mem_read_enable;
    reg        decoded_mem_write_enable;
    reg [1:0]  decoded_reg_input_mux;
    reg [4:0]  decoded_alu_op;
    reg        decoded_alu_src_imm;
    reg        decoded_src_pc;
    reg [1:0]  decoded_pc_src;
    reg        decoded_ret;
    reg        decoded_csr_read_enable;
    reg        divergence_event;
    reg        rejoin_event;
    reg [31:0] rejoin_event_pc;

    // ── CSR outputs (one per thread in block) ─────────────────────────
    wire [31:0] csr_out_regs [0:THREADS_PER_BLOCK-1];

    // ── Fetcher ───────────────────────────────────────────────────────
    fetcher #(
        .PROGRAM_MEM_ADDR_BITS(PROGRAM_MEM_ADDR_BITS),
        .PROGRAM_MEM_DATA_BITS(PROGRAM_MEM_DATA_BITS)
    ) fetcher_instance (
        .clk             (clk),
        .reset           (reset),
        .core_state      (core_state),
        .current_pc      (current_pc),
        .mem_read_valid  (program_mem_read_valid),
        .mem_read_address(program_mem_read_address),
        .mem_read_ready  (program_mem_read_ready),
        .mem_read_data   (program_mem_read_data),
        .fetcher_state   (fetcher_state),
        .instruction     (instruction)
    );

    // ── Decoder ───────────────────────────────────────────────────────
    decoder decoder_instance (
        .clk                    (clk),
        .reset                  (reset),
        .core_state             (core_state),
        .instruction            (instruction),
        .decoded_rd_address     (decoded_rd_address),
        .decoded_rs_address     (decoded_rs_address),
        .decoded_rt_address     (decoded_rt_address),
        .decoded_immediate      (decoded_immediate),
        .decoded_funct3         (decoded_funct3),
        .decoded_reg_write_enable(decoded_reg_write_enable),
        .decoded_mem_read_enable (decoded_mem_read_enable),
        .decoded_mem_write_enable(decoded_mem_write_enable),
        .decoded_reg_input_mux  (decoded_reg_input_mux),
        .decoded_alu_op         (decoded_alu_op),
        .decoded_alu_src_imm    (decoded_alu_src_imm),
        .decoded_src_pc         (decoded_src_pc),
        .decoded_pc_src         (decoded_pc_src),
        .decoded_ret            (decoded_ret),
        .decoded_csr_read_enable(decoded_csr_read_enable),
        .decoded_csr_addr       (decoded_csr_addr),
        .divergence_event       (divergence_event),
        .rejoin_event           (rejoin_event)
    );

    // ── Warp Scheduler ────────────────────────────────────────────────
    warp_scheduler #(
        .THREADS_PER_BLOCK(THREADS_PER_BLOCK),
        .THREADS_PER_WARP (THREADS_PER_WARP),
        .WARPS_PER_CORE   (WARPS_PER_CORE)
    ) scheduler_instance (
        .clk                    (clk),
        .reset                  (reset),
        .start                  (start),
        .thread_count           (thread_count),
        .decoded_mem_read_enable (decoded_mem_read_enable),
        .decoded_mem_write_enable(decoded_mem_write_enable),
        .decoded_ret            (decoded_ret),
        .fetcher_state          (fetcher_state),
        .lsu_state              (lsu_state),
        .divergence_event       (divergence_event),
        .rejoin_event           (rejoin_event),
        .decoded_immediate      (decoded_immediate),
        .rejoin_event_pc        (rejoin_event_pc),
        .warp_index             (warp_index),
        .warp_ids               (warp_ids),
        .warp_groups            (warp_groups),
        .masks                  (masks),
        .current_pc             (current_pc),
        .next_pc                (next_pc),
        .core_state             (core_state),
        .warp                   (warp),
        .done                   (done)
    );

    // ── Warp-to-Thread Bus ────────────────────────────────────────────
    warptothreadbus #(
        .THREADS_PER_BLOCK(THREADS_PER_BLOCK),
        .THREADS_PER_WARP (THREADS_PER_WARP),
        .WARPS_PER_CORE   (WARPS_PER_CORE)
    ) warptothreadbus_instance (
        .clk            (clk),
        .reset          (reset),
        .warp           (warp),
        .rs_regs        (rs_regs),
        .rt_regs        (rt_regs),
        .lsu_out_computes(lsu_out_computes),
        .alu_out_computes(alu_out_computes),
        .Running_Threads (Running_Threads),
        .rs_computes    (rs_computes),
        .rt_computes    (rt_computes),
        .lsu_out_regs   (lsu_out_regs),
        .alu_out_regs   (alu_out_regs)
    );

    // ── Per-warp ALU / LSU / PC ───────────────────────────────────────
    genvar i;
    generate
        for (i = 0; i < THREADS_PER_WARP; i = i + 1) begin : warps
            alu alu_instance (
                .clk               (clk),
                .reset             (reset),
                .enable            (masks[Running_Threads[i]] == 1),
                .core_state        (core_state),
                .decoded_alu_op    (decoded_alu_op),
                .decoded_alu_src_imm(decoded_alu_src_imm),
                .decoded_src_pc    (decoded_src_pc),
                .rs                (rs_computes[i]),
                .rt                (rt_computes[i]),
                .decoded_immediate (decoded_immediate),
                .current_pc        (current_pc),
                .alu_out           (alu_out_computes[i])
            );

            lsu #(
                .DATA_MEM_ADDR_BITS(DATA_MEM_ADDR_BITS),
                .DATA_MEM_DATA_BITS(DATA_MEM_DATA_BITS)
            ) lsu_instance (
                .clk                 (clk),
                .reset               (reset),
                .enable              (masks[Running_Threads[i]] == 1),
                .core_state          (core_state),
                .decoded_mem_read_enable (decoded_mem_read_enable),
                .decoded_mem_write_enable(decoded_mem_write_enable),
                .decoded_immediate   (decoded_immediate),
                .decoded_funct3      (decoded_funct3),
                .rs                  (rs_computes[i]),
                .rt                  (rt_computes[i]),
                .mem_read_valid      (data_mem_read_valid[i]),
                .mem_read_address    (data_mem_read_address[i]),
                .mem_read_ready      (data_mem_read_ready[i]),
                .mem_read_data       (data_mem_read_data[i]),
                .mem_write_valid     (data_mem_write_valid[i]),
                .mem_write_address   (data_mem_write_address[i]),
                .mem_write_data      (data_mem_write_data[i]),
                .mem_write_ready     (data_mem_write_ready[i]),
                .lsu_state           (lsu_state[i]),
                .lsu_out             (lsu_out_computes[i])
            );

            pc #(
                .PROGRAM_MEM_ADDR_BITS(PROGRAM_MEM_ADDR_BITS)
            ) pc_instance (
                .clk              (clk),
                .reset            (reset),
                .enable           (masks[Running_Threads[i]] == 1),
                .core_state       (core_state),
                .decoded_pc_src   (decoded_pc_src),
                .decoded_immediate(decoded_immediate),
                .rejoin_event     (rejoin_event),
                .rejoin_event_pc  (rejoin_event_pc),
                .alu_out          (alu_out_computes[i]),
                .rs               (rs_computes[i]),
                .current_pc       (current_pc),
                .next_pc          (next_pc[i])
            );
        end

        // ── Per-block CSR banks + register files ─────────────────────
        genvar u;
        for (u = 0; u < THREADS_PER_BLOCK; u = u + 1) begin : threads
            csr #(
                .THREAD_ID        (u),
                .THREADS_PER_BLOCK(THREADS_PER_BLOCK)
            ) csr_instance (
                .block_id (block_id),
                .block_dim(thread_count),
                .csr_addr (decoded_csr_addr),
                .csr_out  (csr_out_regs[u])
            );

            registers #(
                .THREADS_PER_BLOCK(THREADS_PER_BLOCK),
                .THREAD_ID        (u),
                .DATA_BITS        (DATA_MEM_DATA_BITS)
            ) register_instance (
                .clk                    (clk),
                .reset                  (reset),
                .enable                 (u < thread_count && warp_ids[u] == warp && masks[u] == 1),
                .block_id               (block_id),
                .core_state             (core_state),
                .decoded_reg_write_enable(decoded_reg_write_enable),
                .decoded_reg_input_mux  (decoded_reg_input_mux),
                .decoded_rd_address     (decoded_rd_address),
                .decoded_rs_address     (decoded_rs_address),
                .decoded_rt_address     (decoded_rt_address),
                .decoded_immediate      (decoded_immediate),
                .alu_out                (alu_out_regs[u]),
                .lsu_out                (lsu_out_regs[u]),
                .csr_out                (csr_out_regs[u]),
                .current_pc             (current_pc),
                .rs                     (rs_regs[u]),
                .rt                     (rt_regs[u])
            );
        end
    endgenerate

endmodule
