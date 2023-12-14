module Fetch (
    input logic             clk,
    input logic             reset,
    input logic             trigger,
    input logic             StallPC,
    input logic             StallF,
    input logic [31:0]      PCBranchD,
    input logic             BranchD,
    input logic             PCSrcD,

    output logic [31:0]     InstrD,
    output logic [31:0]     PCPlus4D         
);

////////////////// Wires //////////////////////
logic  [31:0]            PCF_wire;
logic  [31:0]            PCNext_wire;
logic  [31:0]            PCPlus4F_wire;
logic  [31:0]            InstrF_wire;
logic                    FlushF;

//////////////// Assignments /////////////////
assign PCPlus4F_wire = PCF_wire + 4;
assign PCNext_wire = trigger ? (PCSrcD ? PCBranchD : PCPlus4F_wire) : 32'h0;
assign FlushF = (((BranchD == 0) && PCSrcD));
//////////// Instantiating Modules ///////////
PC ProgramCounter(
    //////// INPUTS ////////
    .clk(clk),
    .rst(reset),
    .Stall(StallPC),
    .PCNext(PCNext_wire),
    //////// OUTPUTS ///////
    .PC(PCF_wire)
);

rom Instruction_Memory(
    //////// INPUTS ////////
    .addr(PCF_wire),
    //////// OUTPUTS ///////
    .dout(InstrF_wire)
);

RegF Pipeline_RegisterF(
    //////// INPUTS ////////
    .InstrF(InstrF_wire),
    .PCPlus4F(PCPlus4F_wire),
    .clk(clk),
    .Stall(StallF),
    .FlushF(FlushF),
    //////// OUTPUTS ///////
    .InstrD(InstrD),
    .PCPlus4D(PCPlus4D)
);
    
endmodule
