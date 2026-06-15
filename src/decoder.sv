`default_nettype none
`timescale 1ns/1ns

// INSTRUCTION DECODER  (RV32IM)
// Decodes a 32-bit RV32IM instruction into control signals on the DECODE cycle.
//
// decoded_alu_op:
//   ADD=0 SUB=1 SLL=2 SLT=3 SLTU=4 XOR=5 SRL=6 SRA=7 OR=8 AND=9
//   BEQ=10 BNE=11 BLT=12 BGE=13 BLTU=14 BGEU=15
//   MUL=16 MULH=17 MULHSU=18 MULHU=19 DIV=20 DIVU=21 REM=22 REMU=23
//
// decoded_pc_src:  00=PC+4  01=branch  10=JAL  11=JALR
//
// decoded_reg_input_mux:  00=ALU  01=mem  10=PC+4 (JAL/JALR link)  11=CSR
//
// Thread termination:  EBREAK (0x00100073) sets decoded_ret.
module decoder (
    input wire clk,
    input wire reset,

    input  reg [2:0]  core_state,
    input  reg [31:0] instruction,

    // Register addresses (5-bit RV32I)
    output reg [4:0]  decoded_rd_address,
    output reg [4:0]  decoded_rs_address,
    output reg [4:0]  decoded_rt_address,

    // Decoded immediate (type-specific, sign-extended)
    output reg [31:0] decoded_immediate,

    // funct3 passed through to LSU (load/store width) and PC (branch type)
    output reg [2:0]  decoded_funct3,

    // CSR address (instruction[31:20]) forwarded to the CSR bank
    output reg [11:0] decoded_csr_addr,

    // Control signals
    output reg        decoded_reg_write_enable,
    output reg        decoded_mem_read_enable,
    output reg        decoded_mem_write_enable,
    output reg [1:0]  decoded_reg_input_mux,
    output reg [4:0]  decoded_alu_op,
    output reg        decoded_alu_src_imm,    // 0=rs2  1=immediate
    output reg        decoded_src_pc,         // 0=rs1  1=current_pc (AUIPC)
    output reg [1:0]  decoded_pc_src,

    // Thread / divergence
    output reg        decoded_ret,
    output reg        divergence_event,       // 1 on any branch (may diverge threads)
    output reg        rejoin_event,           // always 0 in RV32I

    // CSR read enable (set by CSRR/CSRRS/CSRRC in OP_SYSTEM)
    output reg        decoded_csr_read_enable
);
    // RV32I opcode map
    localparam OP_R      = 7'b0110011,
               OP_I_ALU  = 7'b0010011,
               OP_LOAD   = 7'b0000011,
               OP_STORE  = 7'b0100011,
               OP_BRANCH = 7'b1100011,
               OP_JAL    = 7'b1101111,
               OP_JALR   = 7'b1100111,
               OP_LUI    = 7'b0110111,
               OP_AUIPC  = 7'b0010111,
               OP_SYSTEM = 7'b1110011;

    // Immediate reconstruction wires (combinational from instruction)
    wire [31:0] imm_i = {{20{instruction[31]}}, instruction[31:20]};
    wire [31:0] imm_s = {{20{instruction[31]}}, instruction[31:25], instruction[11:7]};
    wire [31:0] imm_b = {{19{instruction[31]}}, instruction[31], instruction[7],
                          instruction[30:25], instruction[11:8], 1'b0};
    wire [31:0] imm_u = {instruction[31:12], 12'b0};
    wire [31:0] imm_j = {{11{instruction[31]}}, instruction[31], instruction[19:12],
                          instruction[20], instruction[30:21], 1'b0};

    wire [6:0] opcode = instruction[6:0];
    wire [2:0] funct3 = instruction[14:12];
    wire       f7b5   = instruction[30];      // funct7[5]

    always @(posedge clk) begin
        if (reset) begin
            decoded_rd_address       <= 0;
            decoded_rs_address       <= 0;
            decoded_rt_address       <= 0;
            decoded_immediate        <= 0;
            decoded_funct3           <= 0;
            decoded_csr_addr         <= 0;
            decoded_reg_write_enable <= 0;
            decoded_mem_read_enable  <= 0;
            decoded_mem_write_enable <= 0;
            decoded_reg_input_mux    <= 0;
            decoded_alu_op           <= 5'd0;
            decoded_alu_src_imm      <= 0;
            decoded_src_pc           <= 0;
            decoded_pc_src           <= 0;
            decoded_ret              <= 0;
            divergence_event         <= 0;
            rejoin_event             <= 0;
            decoded_csr_read_enable  <= 0;
        end else if (core_state == 3'b010) begin   // DECODE
            // Common register field extraction
            decoded_rd_address <= instruction[11:7];
            decoded_rs_address <= instruction[19:15];
            decoded_rt_address <= instruction[24:20];
            decoded_funct3     <= funct3;

            // Default all control signals off
            decoded_reg_write_enable <= 0;
            decoded_mem_read_enable  <= 0;
            decoded_mem_write_enable <= 0;
            decoded_reg_input_mux    <= 2'b00;
            decoded_alu_op           <= 5'd0;
            decoded_alu_src_imm      <= 0;
            decoded_src_pc           <= 0;
            decoded_pc_src           <= 2'b00;
            decoded_immediate        <= 0;
            decoded_ret              <= 0;
            divergence_event         <= 0;
            rejoin_event             <= 0;
            decoded_csr_read_enable  <= 0;
            decoded_csr_addr         <= 0;

            case (opcode)
                // ── R-type (RV32I + RV32M) ───────────────────────────────
                OP_R: begin
                    decoded_reg_write_enable <= 1;
                    decoded_alu_src_imm      <= 0;
                    decoded_reg_input_mux    <= 2'b00;
                    if (instruction[25]) begin
                        // funct7 = 0000001 → RV32M
                        case (funct3)
                            3'b000: decoded_alu_op <= 5'd16; // MUL
                            3'b001: decoded_alu_op <= 5'd17; // MULH
                            3'b010: decoded_alu_op <= 5'd18; // MULHSU
                            3'b011: decoded_alu_op <= 5'd19; // MULHU
                            3'b100: decoded_alu_op <= 5'd20; // DIV
                            3'b101: decoded_alu_op <= 5'd21; // DIVU
                            3'b110: decoded_alu_op <= 5'd22; // REM
                            3'b111: decoded_alu_op <= 5'd23; // REMU
                            default: decoded_alu_op <= 5'd0;
                        endcase
                    end else begin
                        // funct7 = 0000000 or 0100000 → RV32I
                        case ({f7b5, funct3})
                            4'b0_000: decoded_alu_op <= 5'd0;  // ADD
                            4'b1_000: decoded_alu_op <= 5'd1;  // SUB
                            4'b0_001: decoded_alu_op <= 5'd2;  // SLL
                            4'b0_010: decoded_alu_op <= 5'd3;  // SLT
                            4'b0_011: decoded_alu_op <= 5'd4;  // SLTU
                            4'b0_100: decoded_alu_op <= 5'd5;  // XOR
                            4'b0_101: decoded_alu_op <= 5'd6;  // SRL
                            4'b1_101: decoded_alu_op <= 5'd7;  // SRA
                            4'b0_110: decoded_alu_op <= 5'd8;  // OR
                            4'b0_111: decoded_alu_op <= 5'd9;  // AND
                            default:  decoded_alu_op <= 5'd0;
                        endcase
                    end
                end

                // ── I-type ALU ────────────────────────────────────────────
                OP_I_ALU: begin
                    decoded_reg_write_enable <= 1;
                    decoded_alu_src_imm      <= 1;
                    decoded_reg_input_mux    <= 2'b00;
                    decoded_immediate        <= imm_i;
                    case (funct3)
                        3'b000: decoded_alu_op <= 5'd0;              // ADDI
                        3'b001: decoded_alu_op <= 5'd2;              // SLLI  (shamt=imm[4:0])
                        3'b010: decoded_alu_op <= 5'd3;              // SLTI
                        3'b011: decoded_alu_op <= 5'd4;              // SLTIU
                        3'b100: decoded_alu_op <= 5'd5;              // XORI
                        3'b101: decoded_alu_op <= f7b5 ? 5'd7:5'd6; // SRAI:SRLI
                        3'b110: decoded_alu_op <= 5'd8;              // ORI
                        3'b111: decoded_alu_op <= 5'd9;              // ANDI
                        default: decoded_alu_op <= 5'd0;
                    endcase
                end

                // ── Load ─────────────────────────────────────────────────
                OP_LOAD: begin
                    decoded_reg_write_enable <= 1;
                    decoded_mem_read_enable  <= 1;
                    decoded_alu_src_imm      <= 1;   // effective addr = rs1 + imm_i
                    decoded_alu_op           <= 5'd0; // ADD
                    decoded_immediate        <= imm_i;
                    decoded_reg_input_mux    <= 2'b01; // from memory
                end

                // ── Store ────────────────────────────────────────────────
                OP_STORE: begin
                    decoded_mem_write_enable <= 1;
                    decoded_alu_src_imm      <= 1;   // effective addr = rs1 + imm_s
                    decoded_alu_op           <= 5'd0;
                    decoded_immediate        <= imm_s;
                end

                // ── Branch ───────────────────────────────────────────────
                OP_BRANCH: begin
                    decoded_pc_src     <= 2'b01;
                    decoded_immediate  <= imm_b;
                    divergence_event   <= 1;
                    case (funct3)
                        3'b000: decoded_alu_op <= 5'd10; // BEQ
                        3'b001: decoded_alu_op <= 5'd11; // BNE
                        3'b100: decoded_alu_op <= 5'd12; // BLT
                        3'b101: decoded_alu_op <= 5'd13; // BGE
                        3'b110: decoded_alu_op <= 5'd14; // BLTU
                        3'b111: decoded_alu_op <= 5'd15; // BGEU
                        default: decoded_alu_op <= 5'd10;
                    endcase
                end

                // ── JAL ──────────────────────────────────────────────────
                OP_JAL: begin
                    decoded_reg_write_enable <= 1;
                    decoded_pc_src           <= 2'b10;
                    decoded_immediate        <= imm_j;
                    decoded_reg_input_mux    <= 2'b10; // rd = PC + 4
                end

                // ── JALR ─────────────────────────────────────────────────
                OP_JALR: begin
                    decoded_reg_write_enable <= 1;
                    decoded_pc_src           <= 2'b11;
                    decoded_alu_src_imm      <= 1;
                    decoded_immediate        <= imm_i;
                    decoded_reg_input_mux    <= 2'b10; // rd = PC + 4
                end

                // ── LUI ──────────────────────────────────────────────────
                OP_LUI: begin
                    decoded_reg_write_enable <= 1;
                    decoded_alu_src_imm      <= 1;
                    decoded_alu_op           <= 5'd0;  // ADD (x0 + imm_u)
                    decoded_immediate        <= imm_u;
                    decoded_rs_address       <= 5'b0;  // force rs1 = x0
                    decoded_reg_input_mux    <= 2'b00;
                end

                // ── AUIPC ────────────────────────────────────────────────
                OP_AUIPC: begin
                    decoded_reg_write_enable <= 1;
                    decoded_src_pc           <= 1;     // ALU op_a = current_pc
                    decoded_alu_src_imm      <= 1;
                    decoded_alu_op           <= 5'd0;  // ADD (pc + imm_u)
                    decoded_immediate        <= imm_u;
                    decoded_reg_input_mux    <= 2'b00;
                end

                // ── SYSTEM ───────────────────────────────────────────────
                OP_SYSTEM: begin
                    case (funct3)
                        3'b000: begin
                            // ECALL/EBREAK — funct12 selects; 12'h001 = EBREAK
                            if (instruction[31:20] == 12'h001)
                                decoded_ret <= 1;
                        end
                        3'b010: begin
                            // CSRRS (also covers CSRR when rs1=x0) — rd = CSR value
                            decoded_reg_write_enable <= 1;
                            decoded_csr_read_enable  <= 1;
                            decoded_csr_addr         <= instruction[31:20];
                            decoded_reg_input_mux    <= 2'b11; // CSR → rd
                        end
                        default: ; // other CSR variants not needed yet
                    endcase
                end

                default: ; // NOP / unimplemented
            endcase
        end
    end
endmodule
