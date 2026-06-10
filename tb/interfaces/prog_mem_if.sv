`timescale 1ns/1ps

// Program memory interface — GPU requests instructions; testbench responds
// Matches gpu.sv's unpacked-array port style
interface prog_mem_if #(
    parameter NUM_CHANNELS = 1,
    parameter ADDR_BITS    = 8,
    parameter DATA_BITS    = 16
) (input logic clk);
    logic [NUM_CHANNELS-1:0]  read_valid;
    logic [ADDR_BITS-1:0]     read_address [NUM_CHANNELS-1:0];
    logic [NUM_CHANNELS-1:0]  read_ready;
    logic [DATA_BITS-1:0]     read_data    [NUM_CHANNELS-1:0];

    // GPU drives valid/address; testbench drives ready/data
    clocking driver_cb @(posedge clk);
        default input #1 output #1;
        input  read_valid;
        input  read_address;
        output read_ready;
        output read_data;
    endclocking

    clocking monitor_cb @(posedge clk);
        default input #1;
        input read_valid;
        input read_address;
        input read_ready;
        input read_data;
    endclocking

    modport driver_mp  (clocking driver_cb,  input clk);
    modport monitor_mp (clocking monitor_cb, input clk);
endinterface
