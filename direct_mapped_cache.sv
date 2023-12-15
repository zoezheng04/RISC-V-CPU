module direct_mapped_cache #(
    parameter DATA_WIDTH = 32,
              TAG_WIDTH = 27,
              SET_WIDTH = 3,
              OFFSET_WIDTH = 2,
              CACHE_SIZE = 8
)(
    input logic clk,
    input logic overwrite,
    input logic [DATA_WIDTH-1:0] address,
    input logic [DATA_WIDTH-1:0] wr_data,
    output logic [DATA_WIDTH-1:0] cache_data,
    output logic cache_hit
);

    // Define the cache arrays
    logic [DATA_WIDTH-1:0] data [CACHE_SIZE-1:0];
    logic [TAG_WIDTH-1:0] tag [CACHE_SIZE-1:0];
    logic V [CACHE_SIZE-1:0]; // Valid bits

    // Extract the index and tag from the address
    logic [SET_WIDTH-1:0] data_set;
    logic [TAG_WIDTH-1:0] data_tag;
    assign data_set = address[SET_WIDTH-1:0];
    assign data_tag = address[31:SET_WIDTH];

    // Compute the cache hit signal
    assign cache_hit = V[data_set] && (tag[data_set] == data_tag);

    // Initialize the valid bits
    initial begin
        for (int i = 0; i < CACHE_SIZE; i++) begin
            V[i] = 0;
        end
    end

    // Perform read and write operations
    always_ff @(posedge clk) begin
        if (overwrite) begin
            // Write operation
            V[data_set] <= 1;
            tag[data_set] <= data_tag;
            data[data_set] <= wr_data;
        end else begin
            // Read operation
            if (cache_hit) begin
                cache_data <= data[data_set];
            end else begin
                // Handle cache miss 
                cache_data <= '0; //default value
            end
        end
    end

endmodule





