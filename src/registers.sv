`default_nettype none
`timescale 1ns/1ns

// REGISTER FILE  (RV32I: 32 × 32-bit, x0 hardwired to zero)
// Special GPU metadata (threadIdx, blockIdx, blockDim) provided via CSR bank.
// reg_input_mux:  00=ALU  01=memory  10=PC+4 (JAL/JALR link)  11=CSR read
module registers #(
    parameter THREADS_PER_BLOCK = 4,
    parameter THREAD_ID         = 0,
    parameter DATA_BITS         = 32
) (
    input wire clk,
    input wire reset,
    input wire enable,

    // Block metadata (kept for future CSR use; not written to register file here)
    input reg [7:0] block_id,

    input reg [2:0]  core_state,

    // Instruction fields
    input reg [4:0]  decoded_rd_address,
    input reg [4:0]  decoded_rs_address,
    input reg [4:0]  decoded_rt_address,

    // Control
    input reg        decoded_reg_write_enable,
    input reg [1:0]  decoded_reg_input_mux,
    input reg [31:0] decoded_immediate,      // for future CSR/immediate writeback

    // Compute results
    input reg [31:0] alu_out,
    input reg [31:0] lsu_out,

    // current_pc needed for JAL/JALR link register (rd = PC+4)
    input reg [31:0] current_pc,

    // CSR read result (from csr.sv instance in core.sv)
    input reg [31:0] csr_out,

    output reg [31:0] rs,
    output reg [31:0] rt
);
    localparam ARITHMETIC = 2'b00,
               MEMORY     = 2'b01,
               PC_PLUS4   = 2'b10,
               CSR_READ   = 2'b11;

    reg [31:0] registers [31:0];

    always @(posedge clk) begin
        if (reset) begin
            rs <= 0;
            rt <= 0;
            for (int i = 0; i < 32; i++) registers[i] <= 32'b0;
        end else if (enable) begin
            // READ — core_state = REQUEST (3'b011)
            if (core_state == 3'b011) begin
                rs <= (decoded_rs_address == 5'b0) ? 32'b0 : registers[decoded_rs_address];
                rt <= (decoded_rt_address == 5'b0) ? 32'b0 : registers[decoded_rt_address];
            end

            // WRITE — core_state = UPDATE (3'b110)
            if (core_state == 3'b110) begin
                // x0 is always zero; never write to it
                if (decoded_reg_write_enable && decoded_rd_address != 5'b0) begin
                    case (decoded_reg_input_mux)
                        ARITHMETIC: registers[decoded_rd_address] <= alu_out;
                        MEMORY:     registers[decoded_rd_address] <= lsu_out;
                        PC_PLUS4:   registers[decoded_rd_address] <= current_pc + 32'd4;
                        CSR_READ:   registers[decoded_rd_address] <= csr_out;
                    endcase
                end
            end
        end
    end
endmodule
