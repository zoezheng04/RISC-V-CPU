module HazardUnit (
    
    input logic             Rs1E,
    input logic             Rs2E,
    input logic             RdM,
    input logic             RegWriteM,
    input logic             RdW,
    input logic             RegWriteW,

    output logic  [1:0]     ForwardAE,
    output logic  [1:0]     ForwardBE

);

always_comb begin
    // Initialize signals to no forwarding
    ForwardAE = 2'b00;
    ForwardBE = 2'b00;

    // Check for data hazards
        if (RegWriteW && (RdW == Rs1E)) 
            ForwardAE = 2'b01; // Forward data from write-back stage (W) to execute stage (E) for RD1E
        
        if (RegWriteW && (RdW == Rs2E)) 
            ForwardBE = 2'b01; // Forward data from write-back stage (W) to execute stage (E) for RD2E
                

        if (RegWriteM && (RdM == Rs1E)) 
            ForwardAE = 2'b10; // Forward data from memory stage (M) to execute stage (E) for RD1E
        

        if (RegWriteM && (RdM == Rs2E)) 
            ForwardBE = 2'b10; // Forward data from memory stage (M) to execute stage (E) for RD2E
        
    end

endmodule
