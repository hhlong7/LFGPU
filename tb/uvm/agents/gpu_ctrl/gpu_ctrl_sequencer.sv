class gpu_ctrl_sequencer extends uvm_sequencer #(gpu_ctrl_seq_item);
    `uvm_component_utils(gpu_ctrl_sequencer)
    function new(string name, uvm_component parent);
        super.new(name, parent);
    endfunction
endclass
