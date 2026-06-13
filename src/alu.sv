`default_nettype none
`timescale 1ns/1ns

// ARITHMETIC-LOGIC UNIT  (RV32IM + branch comparators)
// decoded_alu_op encoding:
//   ADD=0  SUB=1  SLL=2  SLT=3  SLTU=4  XOR=5  SRL=6  SRA=7
//   OR=8   AND=9
//   BEQ=10 BNE=11 BLT=12 BGE=13 BLTU=14 BGEU=15
//   MUL=16 MULH=17 MULHSU=18 MULHU=19 DIV=20 DIVU=21 REM=22 REMU=23
// For branch ops alu_out[0] = branch-taken flag used by pc.sv.
// decoded_alu_src_imm selects immediate vs rs2 as second operand.
// decoded_src_pc selects current_pc vs rs1 as first operand (AUIPC).
module alu (
    input  wire        clk,
    input  wire        reset,
    input  wire        enable,

    input  reg  [2:0]  core_state,

    input  reg  [4:0]  decoded_alu_op,
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
    wire [31:0] op_a = decoded_src_pc      ? current_pc        : rs;
    wire [31:0] op_b = decoded_alu_src_imm ? decoded_immediate : rt;

    // Shift amount is always lower 5 bits of op_b
    wire [4:0] shamt = op_b[4:0];

    // RV32M: signed/unsigned 64-bit products and quotients
    wire signed [63:0] prod_ss = $signed(op_a) * $signed(op_b);   // MULH
    wire        [63:0] prod_uu = op_a * op_b;                       // MULHU
    wire signed [63:0] prod_su = $signed(op_a) * $signed({1'b0, op_b}); // MULHSU

    // Division/remainder corner cases per RV32M spec:
    //   div-by-zero  → DIV/REM = all-ones / rs1  (DIVU/REMU = 2^32-1 / rs1)
    //   overflow     → (-2^31)/(-1) = -2^31,  REM = 0
    wire div_by_zero  = (op_b == 32'b0);
    wire div_overflow = (op_a == 32'h8000_0000) && (op_b == 32'hFFFF_FFFF);

    wire [31:0] div_result  = div_by_zero  ? 32'hFFFF_FFFF :
                              div_overflow  ? 32'h8000_0000 :
                              $signed(op_a) / $signed(op_b);
    wire [31:0] divu_result = div_by_zero  ? 32'hFFFF_FFFF : op_a / op_b;
    wire [31:0] rem_result  = div_by_zero  ? op_a :
                              div_overflow  ? 32'b0 :
                              $signed(op_a) % $signed(op_b);
    wire [31:0] remu_result = div_by_zero  ? op_a : op_a % op_b;

    always @(posedge clk) begin
        if (reset) begin
            alu_out_reg <= 32'b0;
        end else if (enable && core_state == 3'b101) begin   // EXECUTE
            case (decoded_alu_op)
                // ── RV32I ──────────────────────────────────────────────────
                5'd0:  alu_out_reg <= op_a + op_b;
                5'd1:  alu_out_reg <= op_a - op_b;
                5'd2:  alu_out_reg <= op_a << shamt;
                5'd3:  alu_out_reg <= {31'b0, $signed(op_a) < $signed(op_b)};
                5'd4:  alu_out_reg <= {31'b0, op_a < op_b};
                5'd5:  alu_out_reg <= op_a ^ op_b;
                5'd6:  alu_out_reg <= op_a >> shamt;
                5'd7:  alu_out_reg <= $signed(op_a) >>> shamt;
                5'd8:  alu_out_reg <= op_a | op_b;
                5'd9:  alu_out_reg <= op_a & op_b;
                // Branch comparators — alu_out[0] = taken
                5'd10: alu_out_reg <= {31'b0, op_a == op_b};
                5'd11: alu_out_reg <= {31'b0, op_a != op_b};
                5'd12: alu_out_reg <= {31'b0, $signed(op_a) <  $signed(op_b)};
                5'd13: alu_out_reg <= {31'b0, $signed(op_a) >= $signed(op_b)};
                5'd14: alu_out_reg <= {31'b0, op_a <  op_b};
                5'd15: alu_out_reg <= {31'b0, op_a >= op_b};
                // ── RV32M ──────────────────────────────────────────────────
                5'd16: alu_out_reg <= prod_ss[31:0];     // MUL
                5'd17: alu_out_reg <= prod_ss[63:32];    // MULH
                5'd18: alu_out_reg <= prod_su[63:32];    // MULHSU
                5'd19: alu_out_reg <= prod_uu[63:32];    // MULHU
                5'd20: alu_out_reg <= div_result;        // DIV
                5'd21: alu_out_reg <= divu_result;       // DIVU
                5'd22: alu_out_reg <= rem_result;        // REM
                5'd23: alu_out_reg <= remu_result;       // REMU
                default: alu_out_reg <= 32'b0;
            endcase
        end
    end
endmodule
