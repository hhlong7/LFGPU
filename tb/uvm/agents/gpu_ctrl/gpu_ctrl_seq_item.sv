class gpu_ctrl_seq_item extends uvm_sequence_item;
    `uvm_object_utils(gpu_ctrl_seq_item)

    // Fields driven to the DUT
    rand logic       reset;
    rand logic       start;
    rand logic [7:0] device_control_data;
    rand logic       device_control_write_enable;

    // Response captured from DUT
    logic done;

    // How many clocks to hold this stimulus
    rand int unsigned hold_cycles;
    constraint c_hold { hold_cycles inside {[1:4]}; }

    function new(string name = "gpu_ctrl_seq_item");
        super.new(name);
    endfunction

    function string convert2string();
        return $sformatf("reset=%0b start=%0b dcr_wr=%0b dcr_data=0x%02h done=%0b",
                         reset, start, device_control_write_enable, device_control_data, done);
    endfunction
endclass
