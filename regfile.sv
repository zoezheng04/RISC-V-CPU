module regfile #(
    parameter ADDRESS_WIDTH = 5,
            DATA_WIDTH = 32
)(
    input logic                         clk,
    input logic                         WE3, //write enable
    input logic  [DATA_WIDTH-1:0]       WD3, //write data <- ALUout
    input logic  [ADDRESS_WIDTH-1:0]    AD1,
    input logic  [ADDRESS_WIDTH-1:0]    AD2,
    input logic  [ADDRESS_WIDTH-1:0]    AD3,
    output logic [DATA_WIDTH-1:0]       RD1, // read data 1
    output logic [DATA_WIDTH-1:0]       RD2, // read data 2
    output logic [DATA_WIDTH-1:0]       a0 // a0
);

logic [DATA_WIDTH-1:0] registers [2**ADDRESS_WIDTH-1:0];

//Write to register
always_ff @(posedge clk) begin
    if(WE3)
        registers[AD3] <= WD3;
end

//Read from register
assign RD1 = registers[AD1];
assign RD2 = registers[AD2];
assign a0 = registers[10];
endmodule
