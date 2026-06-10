`default_nettype none
`timescale 1ns/1ns

// ARITHMETIC-LOGIC UNIT  (RV32I + branch comparators)
// decoded_alu_op encoding:
//   ADD=0  SUB=1  SLL=2  SLT=3  SLTU=4  XOR=5  SRL=6  SRA=7
//   OR=8   AND=9
//   BEQ=10 BNE=11 BLT=12 BGE=13 BLTU=14 BGEU=15
// For branch ops alu_out[0] = branch-taken flag used by pc.sv.
// decoded_alu_src_imm selects immediate vs rs2 as second operand.
// decoded_src_pc selects current_pc vs rs1 as first operand (AUIPC).
module alu (
    input  wire        clk,
    input  wire        reset,
    input  wire        enable,

    input  reg  [2:0]  core_state,

    input  reg  [3:0]  decoded_alu_op,
    input  reg         decoded_alu_src_imm,
    input  reg         decoded_src_pc,

    input  reg  [31:0] rs,
    input  reg  [31:0] rt,
    input  reg  [31:0] decoded_immediate,
    input  reg  [31:0] current_pc,

    output wire [31:0] alu_out
);
    reg [31:0] alu_out_reg;
    assign alu_out = alu_out_reg;

    // Operand selection
    wire [31:0] op_a = decoded_src_pc    ? current_pc       : rs;
    wire [31:0] op_b = decoded_alu_src_imm ? decoded_immediate : rt;

    // Shift amount is always lower 5 bits of op_b
    wire [4:0] shamt = op_b[4:0];

    always @(posedge clk) begin
        if (reset) begin
            alu_out_reg <= 32'b0;
        end else if (enable && core_state == 3'b101) begin   // EXECUTE
            case (decoded_alu_op)
                4'd0:  alu_out_reg <= op_a + op_b;                                    // ADD / ADDI / LUI / AUIPC / addr calc
                4'd1:  alu_out_reg <= op_a - op_b;                                    // SUB
                4'd2:  alu_out_reg <= op_a << shamt;                                  // SLL / SLLI
                4'd3:  alu_out_reg <= {31'b0, $signed(op_a) < $signed(op_b)};         // SLT / SLTI
                4'd4:  alu_out_reg <= {31'b0, op_a < op_b};                           // SLTU / SLTIU
                4'd5:  alu_out_reg <= op_a ^ op_b;                                    // XOR / XORI
                4'd6:  alu_out_reg <= op_a >> shamt;                                  // SRL / SRLI
                4'd7:  alu_out_reg <= $signed(op_a) >>> shamt;                        // SRA / SRAI
                4'd8:  alu_out_reg <= op_a | op_b;                                    // OR  / ORI
                4'd9:  alu_out_reg <= op_a & op_b;                                    // AND / ANDI
                // Branch comparators — alu_out[0] = taken
                4'd10: alu_out_reg <= {31'b0, op_a == op_b};                          // BEQ
                4'd11: alu_out_reg <= {31'b0, op_a != op_b};                          // BNE
                4'd12: alu_out_reg <= {31'b0, $signed(op_a) <  $signed(op_b)};        // BLT
                4'd13: alu_out_reg <= {31'b0, $signed(op_a) >= $signed(op_b)};        // BGE
                4'd14: alu_out_reg <= {31'b0, op_a <  op_b};                          // BLTU
                4'd15: alu_out_reg <= {31'b0, op_a >= op_b};                          // BGEU
                default: alu_out_reg <= 32'b0;
            endcase
        end
    end
endmodule
