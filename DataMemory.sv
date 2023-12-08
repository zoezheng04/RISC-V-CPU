module DataMemory #(
    parameter   WIDTH = 32,
                DATA_WIDTH = 8
)(
    input   logic                   clk,
    input   logic                   WE,
    input   logic [WIDTH-1:0]       A,
    input   logic [WIDTH-1:0]       WD,
    output  logic [WIDTH-1:0]       RD
);

logic [DATA_WIDTH-1:0] DataMemory_array [32'h1ffff : 32'h0]; // according to memory map provided in brief

// initial begin
//     $display ("Loading DataMemory.");
//     $readmemh("sine.mem", DataMemory_array, 32'h10000);
//     $display ("DataMemory loaded");
// end;

always_comb
    RD = {DataMemory_array[A + 3], DataMemory_array[A + 2], DataMemory_array[A + 1], DataMemory_array[A]};

always_ff @ (posedge clk) begin
    if(WE == 1'b1) begin
        DataMemory_array[A] <= WD[7:0];
        DataMemory_array[A + 1] <= WD[15:8];
        DataMemory_array[A + 2] <= WD[23:16];
        DataMemory_array[A + 3] <= WD[31:24];
    end
end

endmodule
