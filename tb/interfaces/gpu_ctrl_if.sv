`timescale 1ns/1ps

// GPU control interface: reset/start/done and device control register
interface gpu_ctrl_if (input logic clk);
    logic        reset;
    logic        start;
    logic        done;
    logic [7:0]  device_control_data;
    logic        device_control_write_enable;

    clocking driver_cb @(posedge clk);
        default input #1 output #1;
        output reset;
        output start;
        output device_control_data;
        output device_control_write_enable;
        input  done;
    endclocking

    clocking monitor_cb @(posedge clk);
        default input #1;
        input reset;
        input start;
        input done;
        input device_control_data;
        input device_control_write_enable;
    endclocking

    modport driver_mp  (clocking driver_cb,  input clk);
    modport monitor_mp (clocking monitor_cb, input clk);
endinterface
