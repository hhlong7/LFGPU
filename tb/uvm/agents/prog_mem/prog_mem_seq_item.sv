// Represents one program-memory fetch transaction
class prog_mem_seq_item extends uvm_sequence_item;
    `uvm_object_utils(prog_mem_seq_item)

    int unsigned  channel;
    logic [31:0]  address;   // wide enough for future 32-bit PC
    logic [31:0]  data;      // wide enough for future 32-bit instruction

    function new(string name = "prog_mem_seq_item");
        super.new(name);
    endfunction

    function string convert2string();
        return $sformatf("ch=%0d addr=0x%08h data=0x%08h", channel, address, data);
    endfunction
endclass
