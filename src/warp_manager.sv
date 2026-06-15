`default_nettype none
`timescale 1ns/1ns

// WARP MANAGER
// Groups threads into warps, manages execution masks, and handles
// branch divergence / reconvergence.
//
// RV32I changes vs original:
//   - All PC signals widened to 32 bits.
//   - Divergence comparison: a thread took the branch when its next_pc
//     differs from the fall-through address (current_pc + 4).
//   - Branch target passed to divergence_stack as current_pc + decoded_immediate.
module warp_manager #(
    parameter THREADS_PER_WARP  = 2,
    parameter THREADS_PER_BLOCK = 4,
    parameter WARPS_PER_CORE    = 2
) (
    input wire clk,
    input wire reset,
    input wire start,
    input reg [$clog2(THREADS_PER_BLOCK):0] thread_count,

    input wire [3:0] warp,
    input wire [7:0] warps_states  [WARPS_PER_CORE-1:0],
    input wire [1:0] warp_status   [WARPS_PER_CORE-1:0],

    // Per-thread next PCs from PC modules
    input wire [31:0]  next_pcs [THREADS_PER_WARP-1:0],
    input reg  [2:0]   core_state,
    input reg          divergence_event,
    input reg          rejoin_event,

    // decoded_immediate holds the branch offset (imm_b) or 0 for non-branches
    input reg  [31:0]  decoded_immediate,
    // current_pc needed to compute branch target = current_pc + decoded_immediate
    input reg  [31:0]  current_pc,

    output reg [31:0]  rejoin_event_pc,

    output reg [WARPS_PER_CORE-1:0]  empty,
    output reg [THREADS_PER_BLOCK-1:0] masks,
    output reg [THREADS_PER_WARP-1:0]  head,
    output reg [3:0]   warp_ids    [THREADS_PER_BLOCK-1:0],
    output reg [$clog2(THREADS_PER_BLOCK):0] warp_groups [0:WARPS_PER_CORE-1][0:THREADS_PER_WARP-1],

    output reg         done,
    output wire [7:0]  total_warps
);
    assign total_warps = (thread_count + THREADS_PER_WARP - 1) / THREADS_PER_WARP;

    reg        done_warps      [WARPS_PER_CORE-1:0];
    reg [7:0]  warps_done;
    reg        start_execution;

    reg [THREADS_PER_WARP-1:0] warp_next_mask;
    reg [THREADS_PER_WARP-1:0] head_next;
    reg [THREADS_PER_WARP-1:0] rejoining_threads_mask;
    reg [THREADS_PER_WARP-1:0] rejoin_event_head;
    reg branch_any_taken;
    reg branch_any_fallthrough;

    // Branch target for divergence stack = current_pc + imm_b
    wire [31:0] branch_target = current_pc + decoded_immediate;

    genvar i;
    generate
        for (i = 0; i < WARPS_PER_CORE; i = i + 1) begin : divergence_stack_gen
            divergence_stack #(
                .THREADS_PER_WARP (THREADS_PER_WARP),
                .THREADS_PER_BLOCK(THREADS_PER_BLOCK),
                .WARPS_PER_CORE   (WARPS_PER_CORE)
            ) divergence_stack_inst (
                .clk                  (clk),
                .reset                (reset),
                .enable               (i == warp),
                .warp_next_mask       (warp_next_mask),
                .head_next            (head_next),
                .next_pc              (branch_target),   // 32-bit branch target
                .divergence_event     (divergence_event),
                .rejoin_event         (rejoin_event),
                .core_state           (core_state),
                .rejoining_threads_mask(rejoining_threads_mask),
                .rejoining_head       (rejoin_event_head),
                .rejoining_pc         (rejoin_event_pc),
                .empty                (empty[i])
            );
        end
    endgenerate

    always @(posedge clk) begin
        if (reset) begin
            warps_done      <= 0;
            start_execution <= 0;
            done            <= 0;
            head            <= 0;
            head_next       <= 0;
            warp_next_mask  <= {THREADS_PER_WARP{1'b0}};
            masks           <= {THREADS_PER_BLOCK{1'b1}};
            for (int j = 0; j < WARPS_PER_CORE; j++) done_warps[j]  <= 0;
            for (int j = 1; j < THREADS_PER_BLOCK; j++) warp_ids[j] <= (THREADS_PER_BLOCK/THREADS_PER_WARP);
            for (int j = 0; j < WARPS_PER_CORE; j++)
                for (int k = 0; k < THREADS_PER_WARP; k++)
                    warp_groups[j][k] <= 0;
        end else if (start) begin
            // Assign threads to warps once on the first start cycle
            if (!start_execution) begin
                for (int j = 0; j < WARPS_PER_CORE; j++)
                    for (int k = 0; k < THREADS_PER_WARP; k++) begin
                        warp_ids[(THREADS_PER_WARP*j)+k]  <= j;
                        warp_groups[j][k]                  <= (THREADS_PER_WARP*j)+k;
                    end
                start_execution <= 1;
            end

            if (warps_done == total_warps) done <= 1;

            for (int j = 0; j < WARPS_PER_CORE; j++) begin
                if ((warps_states[j] == 3'b111) && (j < total_warps) && (!done_warps[j])) begin
                    warps_done   <= warps_done + 1;
                    done_warps[j] <= 1;
                end
            end

            // ── Branch divergence (UPDATE state) ────────────────────────
            // A thread took the branch if its next_pc != current_pc + 4.
            if (divergence_event && core_state == 3'b110) begin
                branch_any_taken = 1'b0;
                branch_any_fallthrough = 1'b0;
                for (int j = 0; j < THREADS_PER_WARP; j++) begin
                    if (masks[warp_groups[warp][j]] == 1) begin
                        if (next_pcs[j] != (current_pc + 32'd4))
                            branch_any_taken = 1'b1;
                        else
                            branch_any_fallthrough = 1'b1;
                    end
                end

                warp_next_mask <= {THREADS_PER_WARP{1'b0}};
                for (int j = 0; j < THREADS_PER_WARP; j++) begin
                    if (masks[warp_groups[warp][j]] == 1) begin
                        if (branch_any_taken && branch_any_fallthrough) begin
                            if (next_pcs[j] != (current_pc + 32'd4)) begin
                                // On true divergence, run fall-through lanes first and stack taken lanes.
                                head_next         <= j;
                                warp_next_mask[j] <= 1;
                                masks[warp_groups[warp][j]] <= 0;
                            end else begin
                                head <= j;
                            end
                        end else begin
                            head <= j;
                        end
                    end
                end
            end

            // ── Rejoin (WAIT state) ──────────────────────────────────────
            if (rejoin_event && core_state == 3'b101) begin
                for (int j = 0; j < THREADS_PER_WARP; j++)
                    masks[warp_groups[warp][j]] <= rejoining_threads_mask[j];
                head <= rejoin_event_head;
            end
        end
    end
endmodule
