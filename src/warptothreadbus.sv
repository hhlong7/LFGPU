`default_nettype none
`timescale 1ns/1ns

// WARP-TO-THREAD BUS
// Multiplexes warp-level compute results into the block-level register arrays
// and selects the active warp's register operands for the compute units.
module warptothreadbus #(
    parameter THREADS_PER_BLOCK = 4,
    parameter THREADS_PER_WARP  = 2,
    parameter WARPS_PER_CORE    = 2
) (
    input  wire        clk,
    input  wire        reset,
    input  wire [3:0]  warp,

    input  logic [31:0] rs_regs         [0:THREADS_PER_BLOCK-1],
    input  logic [31:0] rt_regs         [0:THREADS_PER_BLOCK-1],
    input  logic [31:0] lsu_out_computes [0:THREADS_PER_WARP-1],
    input  logic [31:0] alu_out_computes [0:THREADS_PER_WARP-1],

    input  wire [$clog2(THREADS_PER_BLOCK):0] Running_Threads [0:THREADS_PER_WARP-1],

    output logic [31:0] rs_computes     [0:THREADS_PER_WARP-1],
    output logic [31:0] rt_computes     [0:THREADS_PER_WARP-1],
    output logic [31:0] lsu_out_regs    [0:THREADS_PER_BLOCK-1],
    output logic [31:0] alu_out_regs    [0:THREADS_PER_BLOCK-1]
);
    always_comb begin
        if (reset) begin
            for (int i = 0; i < THREADS_PER_WARP; i++) begin
                rs_computes[i]  = 32'h0;
                rt_computes[i]  = 32'h0;
            end
            for (int i = 0; i < THREADS_PER_BLOCK; i++) begin
                lsu_out_regs[i] = 32'h0;
                alu_out_regs[i] = 32'h0;
            end
        end else begin
            // Default all block-level outputs to zero before mapping active warp
            for (int i = 0; i < THREADS_PER_BLOCK; i++) begin
                lsu_out_regs[i] = 32'h0;
                alu_out_regs[i] = 32'h0;
            end
            for (int i = 0; i < THREADS_PER_WARP; i++) begin
                lsu_out_regs[Running_Threads[i]] = lsu_out_computes[i];
                alu_out_regs[Running_Threads[i]] = alu_out_computes[i];
                rs_computes[i]                   = rs_regs[Running_Threads[i]];
                rt_computes[i]                   = rt_regs[Running_Threads[i]];
            end
        end
    end
endmodule
