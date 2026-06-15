`default_nettype none
`timescale 1ns/1ns

// WARP SCHEDULER
// Manages FETCH→DECODE→REQUEST→WAIT→EXECUTE→UPDATE pipeline for multiple warps.
// RV32I changes: all PC signals are 32-bit; PC advances by 4 (not 1).
module warp_scheduler #(
    parameter THREADS_PER_BLOCK = 4,
    parameter THREADS_PER_WARP  = 2,
    parameter WARPS_PER_CORE    = 2
) (
    input wire clk,
    input wire reset,
    input wire start,
    input wire [$clog2(THREADS_PER_BLOCK):0] thread_count,

    // Control signals from decoder
    input reg        decoded_mem_read_enable,
    input reg        decoded_mem_write_enable,
    input reg        decoded_ret,

    // Memory state
    input reg [2:0]  fetcher_state,
    input reg [1:0]  lsu_state [THREADS_PER_WARP-1:0],

    // Divergence / rejoin
    input reg        divergence_event,
    input reg        rejoin_event,
    input reg [31:0] decoded_immediate,   // branch offset passed to warp_manager
    output reg [31:0] rejoin_event_pc,

    // Warp topology outputs
    input  reg [$clog2(WARPS_PER_CORE):0] warp_index,
    output wire [3:0] warp_ids [THREADS_PER_BLOCK-1:0],
    output wire [$clog2(THREADS_PER_BLOCK):0] warp_groups [0:WARPS_PER_CORE-1][0:THREADS_PER_WARP-1],
    output reg  [THREADS_PER_BLOCK-1:0] masks,

    // PC interface
    output reg  [31:0] current_pc,
    input  reg  [31:0] next_pc [THREADS_PER_WARP-1:0],

    // State outputs
    output reg [2:0] core_state,
    output reg [3:0] warp,
    output reg       done
);
    reg [7:0]  warps_states [WARPS_PER_CORE-1:0];
    reg [1:0]  warp_status  [WARPS_PER_CORE-1:0];
    reg [31:0] warp_pcs     [WARPS_PER_CORE-1:0];
    reg [$clog2(WARPS_PER_CORE):0] next_warp;

    reg [THREADS_PER_WARP-1:0] head;
    reg any_waiting;

    wire [7:0] total_warps;

    localparam
        READY     = 2'b00,
        STALL     = 2'b01,
        MASKED    = 2'b10,
        SCHEDULED = 2'b11,
        IDLE      = 3'b000,
        FETCH     = 3'b001,
        DECODE    = 3'b010,
        REQUEST   = 3'b011,
        WAIT      = 3'b100,
        EXECUTE   = 3'b101,
        UPDATE    = 3'b110,
        DONE      = 3'b111;

    wire [WARPS_PER_CORE-1:0] empty;

    warp_manager #(
        .THREADS_PER_WARP (THREADS_PER_WARP),
        .THREADS_PER_BLOCK(THREADS_PER_BLOCK),
        .WARPS_PER_CORE   (WARPS_PER_CORE)
    ) warp_manager_instance (
        .clk             (clk),
        .reset           (reset),
        .start           (start),
        .thread_count    (thread_count),
        .warp            (warp),
        .core_state      (core_state),
        .warps_states    (warps_states),
        .warp_status     (warp_status),
        .divergence_event(divergence_event),
        .rejoin_event    (rejoin_event),
        .next_pcs        (next_pc),
        .decoded_immediate(decoded_immediate),
        .current_pc      (current_pc),          // needed for branch_target calc
        .rejoin_event_pc (rejoin_event_pc),
        .empty           (empty),
        .masks           (masks),
        .head            (head),
        .warp_ids        (warp_ids),
        .warp_groups     (warp_groups),
        .done            (done),
        .total_warps     (total_warps)
    );

    always @(posedge clk) begin
        if (reset) begin
            for (int i = 0; i < WARPS_PER_CORE; i++) begin
                warp_pcs[i]     <= 32'b0;
                warps_states[i] <= FETCH;
                warp_status[i]  <= READY;
            end
            next_warp  <= 0;
            core_state <= IDLE;
        end else begin
            case (core_state)
                IDLE: begin
                    if (start) begin
                        warp                     <= next_warp;
                        current_pc               <= warp_pcs[next_warp];
                        core_state               <= warps_states[next_warp];
                        warp_status[next_warp]   <= STALL;
                        next_warp                <= (next_warp == total_warps-1) ? 0 : next_warp + 1;
                    end
                end

                FETCH: begin
                    if (fetcher_state == 3'b010)    // FETCHED
                        core_state <= DECODE;
                end

                DECODE:  core_state <= REQUEST;
                REQUEST: core_state <= WAIT;

                WAIT: begin
                    any_waiting = 1'b0;
                    for (int i = 0; i < THREADS_PER_WARP; i++) begin
                        if (lsu_state[i] == 2'b01 || lsu_state[i] == 2'b10)
                            any_waiting = 1'b1;
                    end
                    if (!any_waiting) core_state <= EXECUTE;
                end

                EXECUTE: core_state <= UPDATE;

                UPDATE: begin
                    if (decoded_ret) begin
                        warps_states[warp] <= DONE;
                    end else begin
                        warp_status[warp]  <= READY;
                        warp_pcs[warp]     <= next_pc[head];
                        warps_states[warp] <= FETCH;
                    end
                    core_state <= IDLE;
                end

                DONE: ; // no-op
            endcase
        end
    end
endmodule
