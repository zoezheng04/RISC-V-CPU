module HazardUnit (
    
    input logic [4:0]       Rs1E,
    input logic [4:0]       Rs2E,
    input logic [4:0]       Rs1D,
    input logic [4:0]       Rs2D,
    input logic [4:0]       RdM,
    input logic             BranchD,
    input logic             RegWriteE,
    input logic             RegWriteM,
    input logic [4:0]       WriteRegE,
    input logic [4:0]       RdW,
    input logic             RegWriteW,
    input logic             ResultSrcE,
    input logic             ResultSrcM, 

    output logic  [1:0]     ForwardAE,  
    output logic  [1:0]     ForwardBE,  
    output logic            ForwardAD,   
    output logic            ForwardBD,  
    output logic            StallF,
    output logic            StallPC,
    output logic            FlushD
);
logic                BranchStall;
logic                lwstall;
    
always_comb begin
    // Initialize signals to no forwarding
    ForwardAE = 2'b00;
    ForwardBE = 2'b00;

    ForwardAD = ((Rs1D != 0) && (Rs1D == RdM) && RegWriteM); // Forward data from memory stage (M) to decode stage (D) for RD1D
    ForwardBD = ((Rs2D != 0) && (Rs2D == RdM) && RegWriteM); // Forward data from memory stage (M) to decode stage (D) for RD2D

    // Stall registers for branch instructions in the decode stage (D) and there are data dependencies in execute (E) or memory (M) stages
    BranchStall = (BranchD && RegWriteE && ((WriteRegE == Rs1D) || (WriteRegE == Rs2D))) || (BranchD && ResultSrcM && ((RdM == Rs1D) || (RdM == Rs2D)));
    lwstall   = ((RegWriteE && ResultSrcE)); // Stall when Load instruction is detected in execute stage (E)

    StallPC = (lwstall || BranchStall);      // Stall registers (F) and (D) for load and branch hazards
    StallF = (lwstall || BranchStall);      // Stall registers (F) and (D) for load and branch hazards
    FlushD = (lwstall);                     // Flush register (E) for load hazards
    
        if ((Rs1E != 0) && RegWriteW && (RdW == Rs1E)) 
            ForwardAE = 2'b01; // Forward data from write-back stage (W) to execute stage (E) for RD1E
        
        if ((Rs2E != 0) && RegWriteW && (RdW == Rs2E)) 
            ForwardBE = 2'b01; // Forward data from write-back stage (W) to execute stage (E) for RD2E        

        if ((Rs1E != 0) && RegWriteM && (RdM == Rs1E)) 
            ForwardAE = 2'b10; // Forward data from memory stage (M) to execute stage (E) for RD1E
        
        if ((Rs2E != 0) && RegWriteM && (RdM == Rs2E)) 
            ForwardBE = 2'b10; // Forward data from memory stage (M) to execute stage (E) for RD2E
        
    end

endmodule
