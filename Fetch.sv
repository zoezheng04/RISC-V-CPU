module Fetch (
    input logic             clk,
    input logic             reset,
    input logic             trigger, // trigger not implemented!
    input logic             Stall,
    input logic [31:0]      PCTargetE,
    input logic             PCSrcE,

    output logic [31:0]     InstrD,
    output logic [31:0]     PCD,
    output logic [31:0]     PCPlus4D         
);

////////////////// Wires //////////////////////
logic  [31:0]            PCF_wire;
logic  [31:0]            PCNext_wire;
logic  [31:0]            PCPlus4F_wire;
logic  [31:0]            InstrF_wire;

//////////////// Assignments /////////////////
assign PCPlus4F_wire = PC_wire + 4;
assign PCNext_wire = PCSrcE ? PCTargetE : PCPlus4F_wire;

//////////// Instantiating Modules ///////////
PC ProgramCounter(
    .clk(clk),
    .rst(reset),
    .PCNext(PCNext_wire),
    .PC(PCF_wire)
);

rom Instruction_Memory(
    .addr(PCF_wire),
    .dout(InstrF_wire)
);

RegF Pipeline_RegisterF(
    .InstrF(InstrF_wire),
    .PCF(PCF_wire),
    .PCPlus4F(PCPlus4F_wire),
    .clk(clk),
    .Stall(Stall),
    .InstrD(InstrD),
    .PCD(PCD),
    .PCPlus4D(PCPlus4D)
);
    
endmodule