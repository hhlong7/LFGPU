`timescale 1ns/1ps

// Data memory interface — GPU reads and writes; testbench responds
interface data_mem_if #(
    parameter NUM_CHANNELS = 4,
    parameter ADDR_BITS    = 8,
    parameter DATA_BITS    = 8
) (input logic clk);
    // Read channel
    logic [NUM_CHANNELS-1:0]  read_valid;
    logic [ADDR_BITS-1:0]     read_address  [NUM_CHANNELS-1:0];
    logic [NUM_CHANNELS-1:0]  read_ready;
    logic [DATA_BITS-1:0]     read_data     [NUM_CHANNELS-1:0];

    // Write channel
    logic [NUM_CHANNELS-1:0]  write_valid;
    logic [ADDR_BITS-1:0]     write_address [NUM_CHANNELS-1:0];
    logic [DATA_BITS-1:0]     write_data    [NUM_CHANNELS-1:0];
    logic [NUM_CHANNELS-1:0]  write_ready;

    // GPU drives valid/address/write_data; testbench drives ready/read_data
    clocking driver_cb @(posedge clk);
        default input #1 output #1;
        input  read_valid;
        input  read_address;
        output read_ready;
        output read_data;
        input  write_valid;
        input  write_address;
        input  write_data;
        output write_ready;
    endclocking

    clocking monitor_cb @(posedge clk);
        default input #1;
        input read_valid;
        input read_address;
        input read_ready;
        input read_data;
        input write_valid;
        input write_address;
        input write_data;
        input write_ready;
    endclocking

    modport driver_mp  (clocking driver_cb,  input clk);
    modport monitor_mp (clocking monitor_cb, input clk);
endinterface
