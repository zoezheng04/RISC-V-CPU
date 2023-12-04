module regfile #(
    parameter ADDRESS_WIDTH = 5,
            DATA_WIDTH = 32
)(
    input logic                     clk,
    input logic  [DATA_WIDTH-1:0]   instr,
    input logic                     WE3, //write enable
    input logic  [DATA_WIDTH-1:0]   WD3, //write data <- ALUout
    output logic [DATA_WIDTH-1:0]   RD1, // read data 1
    output logic [DATA_WIDTH-1:0]   RD2, // read data 2
    output logic [DATA_WIDTH-1:0]   a0 // a0
);

logic [DATA_WIDTH-1:0] registers [2**ADDRESS_WIDTH-1:0];

logic [ADDRESS_WIDTH-1:0] AD1; //read register 1
logic [ADDRESS_WIDTH-1:0] AD2; //read register 2
logic [ADDRESS_WIDTH-1:0] AD3; //write register

assign AD1 = instr[19:15];
assign AD2 = instr[24:20];
assign AD3 = instr[11:7];

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
