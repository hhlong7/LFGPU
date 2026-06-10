`default_nettype none
`timescale 1ns/1ns

// PROGRAM COUNTER  (RV32I)
// Computes next_pc each EXECUTE cycle.
// decoded_pc_src:
//   2'b00 = PC + 4  (sequential)
//   2'b01 = branch  (PC + imm_b if alu_out[0], else PC + 4)
//   2'b10 = JAL     (PC + imm_j, unconditional)
//   2'b11 = JALR    ((rs1 + imm_i) & ~1, unconditional)
// NZP register removed; branch decision comes from alu_out[0].
// rejoin_event / rejoin_event_pc retained for divergence-stack compatibility.
module pc #(
    parameter PROGRAM_MEM_ADDR_BITS = 32
) (
    input wire clk,
    input wire reset,
    input wire enable,

    input reg [2:0]  core_state,

    input reg [1:0]  decoded_pc_src,
    input reg [31:0] decoded_immediate,   // branch offset / JAL offset / JALR imm_i

    input reg        rejoin_event,
    input reg [31:0] rejoin_event_pc,

    // alu_out[0] = branch-taken flag (set by branch-compare ALU ops)
    input reg [31:0] alu_out,
    // rs1 value needed for JALR
    input reg [31:0] rs,

    input  reg  [PROGRAM_MEM_ADDR_BITS-1:0] current_pc,
    output reg  [PROGRAM_MEM_ADDR_BITS-1:0] next_pc
);
    always @(posedge clk) begin
        if (reset) begin
            next_pc <= 0;
        end else if (enable) begin
            if (core_state == 3'b101) begin   // EXECUTE
                case (decoded_pc_src)
                    2'b00: next_pc <= current_pc + 32'd4;
                    2'b01: begin // branch
                        if (alu_out[0])
                            next_pc <= current_pc + decoded_immediate;
                        else if (rejoin_event)
                            next_pc <= rejoin_event_pc;
                        else
                            next_pc <= current_pc + 32'd4;
                    end
                    2'b10: next_pc <= current_pc + decoded_immediate;        // JAL
                    2'b11: next_pc <= (rs + decoded_immediate) & ~32'h1;     // JALR
                endcase
            end
        end else begin
            // Disabled thread still needs a valid next_pc so the scheduler
            // can read it; just advance sequentially.
            if (core_state == 3'b101)
                next_pc <= current_pc + 32'd4;
        end
    end
endmodule
