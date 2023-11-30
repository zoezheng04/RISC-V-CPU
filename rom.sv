module rom  #(
        parameter   WIDTH = 32,     // width of the input and output
                    DATA_WIDTH = 8  // byte addressing: 4 * 8 = 32 bits, hence why we have PC + 4
)(
    input logic  [WIDTH-1:0]       addr,
    input logic                    clk,
    output logic [WIDTH-1:0]       dout
);

logic [DATA_WIDTH-1:0] rom_array [2**5:0];

initial begin
        $display("Loading rom.");
        $readmemh("instruction.mem", rom_array);
        $display("rom Loaded");
end;

always_ff@(posedge clk)
    dout = {rom_array[addr + 3],    // bits 31:24
            rom_array[addr + 2],    // bits 23:16
            rom_array[addr + 1],    // bits 15:8
            rom_array[addr]};       // bits 7:0

endmodule
