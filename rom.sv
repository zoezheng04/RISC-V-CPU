module rom  #(
        parameter   ADDRESS_WIDTH = 32,     // width of the input and output
                    DATA_WIDTH = 8          // byte addressing: 4 * 8 = 32 bits, hence why we have PC + 4
)(
    input logic  [ADDRESS_WIDTH-1:0]       addr,
    input logic                            clk,
    output logic [ADDRESS_WIDTH-1:0]       dout
);

logic [DATA_WIDTH-1:0] rom_array [32'hBFC00FFF:32'hBFC00000]; //range of ROM specified

initial begin
        $display("Loading rom.");
        $readmemh("instruction.mem", rom_array);
end;

always_ff @(posedge clk)     // need little endian byte addressing
    dout = {rom_array[addr + 3],        // bits 31:24
            rom_array[addr + 2],        // bits 23:16
            rom_array[addr + 1],        // bits 15:8
            rom_array[addr]};           // bits 7:0

endmodule
