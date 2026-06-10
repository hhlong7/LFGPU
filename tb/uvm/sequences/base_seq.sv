// Base sequence: applies reset and configures the DCR.
// All test-level sequences should extend this.
class base_seq extends uvm_sequence #(gpu_ctrl_seq_item);
    `uvm_object_utils(base_seq)

    int unsigned thread_count = 4; // default; override before start()

    function new(string name = "base_seq");
        super.new(name);
    endfunction

    task body();
        gpu_ctrl_seq_item item;

        // Assert reset for 4 cycles
        `uvm_do_with(item, {
            item.reset                       == 1'b1;
            item.start                       == 1'b0;
            item.device_control_write_enable == 1'b0;
            item.hold_cycles                 == 4;
        })

        // Deassert reset
        `uvm_do_with(item, {
            item.reset                       == 1'b0;
            item.start                       == 1'b0;
            item.device_control_write_enable == 1'b0;
            item.hold_cycles                 == 2;
        })

        // Write thread count to DCR
        `uvm_do_with(item, {
            item.reset                       == 1'b0;
            item.start                       == 1'b0;
            item.device_control_data         == thread_count[7:0];
            item.device_control_write_enable == 1'b1;
            item.hold_cycles                 == 1;
        })

        // Clear DCR write enable
        `uvm_do_with(item, {
            item.reset                       == 1'b0;
            item.start                       == 1'b0;
            item.device_control_write_enable == 1'b0;
            item.hold_cycles                 == 1;
        })
    endtask
endclass
