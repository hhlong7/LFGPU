`default_nettype none
`timescale 1ns/1ns

// PROGRAM COUNTER
// > Calculates the next PC for each thread to update to (but currently we assume all threads
//   update to the same PC and don't support branch divergence)
// > Currently, each thread in each core has it's own calculation for next PC
// > The NZP register value is set by the CMP instruction (based on >/=/< comparison) to 
//   initiate the BRnzp instruction for branching
module pc #(
    parameter DATA_MEM_DATA_BITS = 8,
    parameter PROGRAM_MEM_ADDR_BITS = 8,
    parameter WARPS_PER_CORE = 4
) (
    input wire clk,
    input wire reset,
    input wire enable, // If current block has less threads then block size, some PCs will be inactive

    // State
    input reg [2:0] core_state,

    // Control Signals
    input reg [2:0] decoded_nzp,
    input reg [DATA_MEM_DATA_BITS-1:0] decoded_immediate,
    input reg decoded_nzp_write_enable,
    input reg decoded_pc_mux, 

    input reg [1:0] warp, // The warp ID for the current thread (used to index into NZP register)
    input rejoin_event, // Signal indicating a rejoin event (e.g., reconvergence point)
    input reg [7:0] rejoin_event_pc, // The PC to rejoin

    // ALU Output - used for alu_out[2:0] to compare with NZP register
    input reg [DATA_MEM_DATA_BITS-1:0] alu_out,

    // Current & Next PCs
    input reg [PROGRAM_MEM_ADDR_BITS-1:0] current_pc,
    output reg [PROGRAM_MEM_ADDR_BITS-1:0] next_pc
);
    genvar i;
    for (i = 0; i < WARPS_PER_CORE; i = i + 1) begin
        // For now, we assume all threads in a core have the same PC, so we can just use one PC register for the whole core
        // In the future, we can extend this to have separate PC registers for each thread if we want to support branch divergence
    end
    reg [(3*WARPS_PER_CORE-1):0] nzp;

    always @(posedge clk) begin
        if (reset) begin
            nzp <= 3'b0;
            next_pc <= 0;
        end else if (enable) begin
            // Update PC when core_state = EXECUTE
            if (core_state == 3'b101) begin 
                if (decoded_pc_mux == 1) begin 
                    if (((nzp & decoded_nzp) != 3'b0)) begin 
                        // On BRnzp instruction, branch to immediate if NZP case matches previous CMP
                        next_pc <= decoded_immediate;
                    end else if (rejoin_event) begin
                        // On JOINER instruction, rejoin to immediate
                        next_pc <= rejoin_event_pc;
                    end else begin 
                        // Otherwise, just update to PC + 1 (next line)
                        next_pc <= current_pc + 1;
                    end
                end else begin 
                    // By default update to PC + 1 (next line)
                    next_pc <= current_pc + 1;
                end
            end   

            // Store NZP when core_state = UPDATE   
            if (core_state == 3'b110) begin 
                // Write to NZP register on CMP instruction
                if (decoded_nzp_write_enable) begin
                    nzp[2] <= alu_out[2];
                    nzp[1] <= alu_out[1];
                    nzp[0] <= alu_out[0];
                end
            end      
        end
        else begin
            if (core_state == 3'b101) begin
                next_pc <= current_pc + 1;
            end
        end
    end

endmodule
