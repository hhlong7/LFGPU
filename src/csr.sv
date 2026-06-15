`default_nettype none
`timescale 1ns/1ns

// GPU THREAD CSR BANK  (read-only, combinational)
// Provides per-thread metadata to the register file via CSRR instructions.
//
// Supported addresses:
//   0xCC0  threadIdx  — this thread's index within its block
//   0xCC1  blockIdx   — which block this thread belongs to
//   0xCC2  blockDim   — total threads per block
//
// One instance per thread; THREAD_ID is the thread's index within the block.
module csr #(
    parameter THREAD_ID         = 0,
    parameter THREADS_PER_BLOCK = 4
) (
    // Thread block context driven by the dispatch/core
    input wire [7:0] block_id,
    input wire [$clog2(THREADS_PER_BLOCK):0] block_dim,

    // CSR read port
    input  wire [11:0] csr_addr,
    output reg  [31:0] csr_out
);
    localparam CSR_THREAD_IDX = 12'hCC0,
               CSR_BLOCK_IDX  = 12'hCC1,
               CSR_BLOCK_DIM  = 12'hCC2;

    always @(*) begin
        case (csr_addr)
            CSR_THREAD_IDX: csr_out = 32'(THREAD_ID);
            CSR_BLOCK_IDX:  csr_out = {24'b0, block_id};
            CSR_BLOCK_DIM:  csr_out = 32'(block_dim);
            default:        csr_out = 32'b0;
        endcase
    end
endmodule
