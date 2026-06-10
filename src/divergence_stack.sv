`default_nettype none
`timescale 1ns/1ns

// DIVERGENCE STACK
// Tracks branch divergence/reconvergence for each warp.
// Push on divergence_event; pop on rejoin_event.
// Note: rejoin_event is always 0 in RV32I (no JOINER instruction).
module divergence_stack #(
    parameter THREADS_PER_WARP  = 2,
    parameter THREADS_PER_BLOCK = 4,
    parameter WARPS_PER_CORE    = 2
) (
    input wire clk,
    input wire reset,
    input wire enable,

    input reg [THREADS_PER_WARP-1:0] warp_next_mask,
    input reg [THREADS_PER_WARP-1:0] head_next,
    input reg [31:0]                 next_pc,           // branch target PC
    input reg                        divergence_event,
    input reg                        rejoin_event,
    input reg [2:0]                  core_state,

    output reg [THREADS_PER_WARP-1:0] rejoining_threads_mask,
    output reg [THREADS_PER_WARP-1:0] rejoining_head,
    output reg [31:0]                 rejoining_pc,
    output reg                        empty
);
    reg [THREADS_PER_WARP-1:0] divergence_stack_r [0:THREADS_PER_WARP-1];
    reg [31:0]                 pc_stack            [0:THREADS_PER_WARP-1];
    reg [THREADS_PER_WARP-1:0] head_stack          [0:THREADS_PER_WARP-1];
    reg [THREADS_PER_WARP-1:0] stack_pointer;

    always @(posedge clk) begin
        if (reset) begin
            for (int i = 0; i < THREADS_PER_WARP; i++) begin
                divergence_stack_r[i] <= 0;
                pc_stack[i]           <= 0;
                head_stack[i]         <= 0;
            end
            stack_pointer          <= 0;
            rejoining_threads_mask <= 0;
            rejoining_head         <= 0;
            rejoining_pc           <= 0;
            empty                  <= 1;
        end else if (enable) begin
            if (divergence_event && core_state == 3'b000) begin
                divergence_stack_r[stack_pointer] <= warp_next_mask;
                head_stack[stack_pointer]         <= head_next;
                pc_stack[stack_pointer]           <= next_pc;
                stack_pointer                     <= stack_pointer + 1;
                empty                             <= 0;
            end

            if (rejoin_event && core_state == 3'b100) begin
                if (stack_pointer > 0) begin
                    rejoining_threads_mask <= divergence_stack_r[stack_pointer-1];
                    rejoining_head         <= head_stack[stack_pointer-1];
                    rejoining_pc           <= pc_stack[stack_pointer-1];
                    stack_pointer          <= stack_pointer - 1;
                    empty                  <= (stack_pointer == 1);
                end else begin
                    empty                  <= 1;
                    rejoining_threads_mask <= {THREADS_PER_WARP{1'b1}};
                    rejoining_head         <= 0;
                    rejoining_pc           <= 0;
                end
            end
        end
    end
endmodule
