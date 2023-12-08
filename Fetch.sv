module Fetch (
    input logic             clk,
    input logic             reset,
    input logic             trigger, // trigger not implemented!
    input logic             StallF,
    input logic             StallD,
    input logic [31:0]      PCBranchD,
    input logic             PCSrcD,

    output logic [31:0]     InstrD,
    output logic [31:0]     PCPlus4D         
);

////////////////// Wires //////////////////////
logic  [31:0]            PCF_wire;
logic  [31:0]            PCNext_wire;
logic  [31:0]            PCPlus4F_wire;
logic  [31:0]            InstrF_wire;

//////////////// Assignments /////////////////
assign PCPlus4F_wire = PCF_wire + 4;
assign PCNext_wire = PCSrcD ? PCBranchD : PCPlus4F_wire;

//////////// Instantiating Modules ///////////
PC ProgramCounter(
    .clk(clk),
    .rst(reset),
    .Stall(StallF),
    .PCNext(PCNext_wire),
    .PC(PCF_wire)
);

rom Instruction_Memory(
    .addr(PCF_wire),
    .dout(InstrF_wire)
);

RegF Pipeline_RegisterF(
    .InstrF(InstrF_wire),
    .PCPlus4F(PCPlus4F_wire),
    .clk(clk),
    .Stall(StallD),
    .InstrD(InstrD),
    .PCPlus4D(PCPlus4D)
);
    
endmodule
