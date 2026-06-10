// Represents one data-memory transaction (read or write)
class data_mem_seq_item extends uvm_sequence_item;
    `uvm_object_utils(data_mem_seq_item)

    int unsigned  channel;
    logic [31:0]  address;
    logic [31:0]  data;
    logic         is_write;

    function new(string name = "data_mem_seq_item");
        super.new(name);
    endfunction

    function string convert2string();
        return $sformatf("%s ch=%0d addr=0x%08h data=0x%08h",
                         is_write ? "WR" : "RD", channel, address, data);
    endfunction
endclass
