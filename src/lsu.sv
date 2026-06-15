`default_nettype none
`timescale 1ns/1ns

// LOAD-STORE UNIT  (RV32I Phase 1+2)
// Supports all six load widths (LB/LH/LW/LBU/LHU) and three store widths
// (SB/SH/SW) selected by funct3.  Address is always rs1 (computed by ALU
// as rs1 + imm and stored in rs on entry to REQUESTING).
// Memory interface width is DATA_MEM_DATA_BITS (32 in RV32I).
module lsu #(
    parameter DATA_MEM_ADDR_BITS = 32,
    parameter DATA_MEM_DATA_BITS = 32
) (
    input wire clk,
    input wire reset,
    input wire enable,

    input reg [2:0]  core_state,
    input reg        decoded_mem_read_enable,
    input reg        decoded_mem_write_enable,
    input reg [2:0]  decoded_funct3,   // load/store width selector

    // rs = effective address (ALU-computed rs1+imm), rt = store data
    input reg [31:0] rs,
    input reg [31:0] rt,

    // Data memory handshake
    output reg                             mem_read_valid,
    output reg [DATA_MEM_ADDR_BITS-1:0]    mem_read_address,
    input  reg                             mem_read_ready,
    input  reg [DATA_MEM_DATA_BITS-1:0]    mem_read_data,

    output reg                             mem_write_valid,
    output reg [DATA_MEM_ADDR_BITS-1:0]    mem_write_address,
    output reg [DATA_MEM_DATA_BITS-1:0]    mem_write_data,
    input  reg                             mem_write_ready,

    output reg [1:0]  lsu_state,
    output reg [31:0] lsu_out
);
    localparam IDLE       = 2'b00,
               REQUESTING = 2'b01,
               WAITING    = 2'b10,
               DONE       = 2'b11;

    // Sign/zero-extend loaded data according to funct3
    function automatic [31:0] extend_load;
        input [DATA_MEM_DATA_BITS-1:0] raw;
        input [2:0] f3;
        case (f3)
            3'b000: extend_load = {{24{raw[7]}},  raw[7:0]};    // LB
            3'b001: extend_load = {{16{raw[15]}}, raw[15:0]};   // LH
            3'b010: extend_load = raw[31:0];                    // LW
            3'b100: extend_load = {24'b0, raw[7:0]};            // LBU
            3'b101: extend_load = {16'b0, raw[15:0]};           // LHU
            default: extend_load = raw[31:0];
        endcase
    endfunction

    // Mask store data to the appropriate width
    function automatic [DATA_MEM_DATA_BITS-1:0] mask_store;
        input [31:0] data;
        input [2:0] f3;
        case (f3)
            3'b000:  mask_store = {{(DATA_MEM_DATA_BITS-8){1'b0}},  data[7:0]};   // SB
            3'b001:  mask_store = {{(DATA_MEM_DATA_BITS-16){1'b0}}, data[15:0]};  // SH
            default: mask_store = data[DATA_MEM_DATA_BITS-1:0];                   // SW
        endcase
    endfunction

    always @(posedge clk) begin
        if (reset) begin
            lsu_state         <= IDLE;
            lsu_out           <= 0;
            mem_read_valid    <= 0;
            mem_read_address  <= 0;
            mem_write_valid   <= 0;
            mem_write_address <= 0;
            mem_write_data    <= 0;
        end else if (enable) begin
            if (decoded_mem_read_enable) begin
                case (lsu_state)
                    IDLE: begin
                        if (core_state == 3'b011)   // REQUEST
                            lsu_state <= REQUESTING;
                    end
                    REQUESTING: begin
                        mem_read_valid   <= 1;
                        mem_read_address <= rs[DATA_MEM_ADDR_BITS-1:0] >> 2;  // byte → word
                        lsu_state        <= WAITING;
                    end
                    WAITING: begin
                        if (mem_read_ready) begin
                            mem_read_valid <= 0;
                            lsu_out        <= extend_load(mem_read_data, decoded_funct3);
                            lsu_state      <= DONE;
                        end
                    end
                    DONE: begin
                        if (core_state == 3'b110)   // UPDATE
                            lsu_state <= IDLE;
                    end
                endcase
            end

            if (decoded_mem_write_enable) begin
                case (lsu_state)
                    IDLE: begin
                        if (core_state == 3'b011)
                            lsu_state <= REQUESTING;
                    end
                    REQUESTING: begin
                        mem_write_valid   <= 1;
                        mem_write_address <= rs[DATA_MEM_ADDR_BITS-1:0] >> 2;  // byte → word
                        mem_write_data    <= mask_store(rt, decoded_funct3);
                        lsu_state         <= WAITING;
                    end
                    WAITING: begin
                        if (mem_write_ready) begin
                            mem_write_valid <= 0;
                            lsu_state       <= DONE;
                        end
                    end
                    DONE: begin
                        if (core_state == 3'b110)
                            lsu_state <= IDLE;
                    end
                endcase
            end
        end
    end
endmodule
