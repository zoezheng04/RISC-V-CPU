# Individual Statement - Zoe Zheng
## Table of Contents
- [Overview](#overview)
- [Register File](#register-file)
- [ALU](#alu)
- [Cache](#cache)
  - [Direct Mapped Cache](#direct-mapped-cache)
  - [Two Way Set Associative Cache](#two-way-set-associative-cache)
- [Reflection](#reflection)
  
## Overview
This individual statement provides a comprehensive overview of my contributions to the project. Each section details specific modules or features I worked on, relevant commits, and design decisions made during the implementation.
The following are my contributions:
* Wrote, tested and debugged the [ALU](path/to/ALU/file), [Register File](path/to/Regfile/file) and relevant MUXs
* Wrote, tested and debugged the [Cache](path/to/Cache/file)
* Assisted in debugging Single Cycle design
* Assisted in integrating data cache with the pipelined RISC-V CPU
* Responsible for maintaining Git Repo structure and writing README.md file

## Register File
### Module Description
The Register File module consists of an array of registers, each capable of holding data of the specified width of 5 bits. In the context of the project, this register file supports 32 registers, with a special consideration given to register 10 (a0).

### Read and Write Operations
To support read operations, the Register File module dynamically selects the read addresses based on the instruction's encoding. 

```System Verilog
//Read from register
assign RD1 = registers[AD1];
assign RD2 = registers[AD2];
assign a0 = registers[10];
endmodule
```
In contrast, write operations are executed on the rising edge of the clock signal when the corresponding write enable signal is asserted. This synchronous design ensures data integrity and consistency during various phases of the processor's operation.
```System Verilog
//Write to register
always_ff @(posedge clk) begin
    if(WE3)
        registers[AD3] <= WD3;
end
```

## ALU
### Module Description
The ALU module I designed is parameterized to accommodate different data widths, providing flexibility for integration into the broader RISC-V architecture. The module takes two source operands, SrcA and SrcB, along with a 4-bit ALUControl signal from the Control Unit. It produces the ALUResult as the output, representing the result of the specified operation, and a Zero flag indicating whether the result is zero.
### Supported Instructions
The supported instructions of the ALU were determined based on the instructions used in the reference program as well as f1 program we wrote. The ALUControl signal selects one of the instructions to be executed, there are a total of  14 supported instructions required, so we chose the ALUControl signal to be 4 bits to accomodate this.
```System Verilog
case (ALUControl)
        4'b0000: ALUResult = SrcA + SrcB; //ADD 
        4'b0001: ALUResult = (SrcA != SrcB); //BNE
        4'b0010: ALUResult = SrcA + SrcB; //JAL
        4'b0011: ALUResult = SrcA + SrcB; //JALR
        4'b0100: ALUResult = {{20{1'b0}}, SrcB[32:12]}; //LUI
        4'b0101: ALUResult = {24'b0, SrcB[7:0]}; //LBU
        4'b0110: ALUResult = SrcA + SrcB; //SB
        4'b0111: ALUResult = SrcA << SrcB[4:0]; //SLL
        4'b1000: ALUResult = SrcA - SrcB; //SUB
        4'b1001: ALUResult = SrcA >> SrcB[4:0];//SRL
        4'b1010: ALUResult = SrcA ^ SrcB; //XOR
        4'b1011: ALUResult = SrcA | SrcB; //OR
        4'b1100: ALUResult = SrcA & SrcB; //AND
        4'b1101: ALUResult = (SrcA == SrcB); //BEQ
        default:
            ALUResult = 0;
    endcase;
```
### Zero Flag
The Zero flag is set to 1 if the ALUResult is zero, providing a status indicator for conditional branching in the RISC-V processor.
```System Verilog
case (ALUResult)
        32'b0: Zero = 1'b1;
        default: Zero = 1'b0;
    endcase;
```
### Testing
Upon completion of the ALU design, I wrote a testbench for verification. The testbench loops through all 14 instructions and outputs the ALUResult and Zero Flag
```System Verilog
for (int control = 0; control < 14; control++) {
        // Apply inputs for each instruction
        top->SrcA = 1;
        top->SrcB = 1;
        top->ALUControl = control;

        // Evaluate the module
        top->eval();

        // Display results for each instruction
        std::cout << "Instruction: " << control << std::endl;
        std::cout << "ALUResult: " << top->ALUResult << std::endl;
        std::cout << "Zero: " << static_cast<int>(top->Zero) << std::endl;
    }
```

## Cache
To enhance overall system performance by mitigating memory access latencies, I worked on designing and integrating a cache into our RISC-V processor. The cache acts as a high-speed, intermediary storage between the processor and main memory, allowing for faster retrieval of frequently accessed data. 

The cache is used to store recently accessed data and caching contiguous blocks of memory, addressing both temporal locality and spatial locality, reducing the need to fetch the same data repeatedly from slower main memory and anticipating adjacent data will be accessed in sequence.

### Direct Mapped Cache
The initial phase of my cache design involved the creation of the Direct Mapped Cache module. This design employs a direct mapping strategy, associating each memory block with a specific cache location. The module is parameterized to support various data widths and cache configurations. 

#### Cache Organization
The module consists of an array of cache lines, each with its validity bit (V), tag, and data storage. The cache width (CACHE_WIDTH) determines the number of lines, allowing for a balance between storage capacity and access speed.

#### Tag and Set Calculations
For each memory address presented to the cache, the module calculates the corresponding set and tag components. The set is determined by a subset of bits from the memory address (data_set), while the tag comprises the remaining bits (data_tag). These calculations facilitate efficient indexing and retrieval of data within the cache.

![direct_mapped_cache](images/direct_mapped_cache.png)

#### Cache Hit
A cache hit occurs when the presented memory address matches the stored tag in the identified set, indicating that the required data is already present in the cache. 
```System Verilog
assign cache_hit = ((tag == data_tag) && V);
```
In this case, the module efficiently retrieves the data from the cache, minimizing latency associated with main memory access.
```System Verilog
always_comb begin
    if (cache_hit) cache_data = data[data_set];
end
```
#### Cache Miss
A cache miss occurs when the presented memory address does not match the stored tag in the identified set, signifying that the required data is not present in the cache. In this scenario, the module initiates the process of fetching the required data from the main memory. The cache line is updated with the new tag, data, and a valid bit (V) to mark its availability.
```System Verilog
if(data_tag != tag[data_set]) begin
        tag[data_set] <= data_tag;
        data[data_set] <= data;
        V[data_set] <= 1'b1;
    end
```

#### Overwrite and Conflict Resolution
The module provides a mechanism for overwriting existing data in the cache under specific conditions. The overwrite signal controls this behavior. If enabled, and the presented memory address matches the stored tag in the identified set, the module updates the cache line with the new data, ensuring consistency and correctness in the cache contents. 
```System Verilog
if(overwrite) begin
        if(data_tag == tag[data_set]) begin
            tag[data_set] <= data_tag;
            data[data_set] <= data;
        end
    end
```
While the direct mapped cache design simplifies the mapping of memory addresses to cache lines, it introduces the potential for conflicts when multiple addresses map to the same set. The module employs a straightforward conflict resolution strategy—overwriting the existing data in the cache with the new data. This strategy ensures the cache remains coherent with the most recently accessed or modified data.

### Two Way Set Associative Cache
Recognizing the limitations of the direct-mapped approach, my contributions extended to the development of a more sophisticated Two-Way Set Associative Cache, designed to optimize memory access by providing a compromise between the simplicity of a direct-mapped cache and the flexibility of a fully associative cache. This cache design reduces conflicts by allowing multiple lines in a set, improving overall cache performance.
![direct_mapped_cache](images/2_way_cache.png)
#### Cache Organization
Unlike the Direct Mapped Cache, the Two-Way Set Associative Cache employs a set-associative organization, dividing the cache into multiple sets, each containing two cache lines. This departure from the direct-mapped approach allows for multiple addresses to map to the same set, reducing conflicts and enhancing cache utilization.
```System Verilog
logic V_0 [CACHE_WIDTH-1:0];
logic [TAG_WIDTH-1:0] tag_0 [CACHE_WIDTH-1:0];
logic [DATA_WIDTH-1:0] data_0 [CACHE_WIDTH-1:0];

logic V_1 [CACHE_WIDTH-1:0];
logic [TAG_WIDTH-1:0] tag_1 [CACHE_WIDTH-1:0];
logic [DATA_WIDTH-1:0] data_1 [CACHE_WIDTH-1:0];
```

#### Address Mapping
In the Two-Way Set Associative Cache, the memory address is still used to determine the set and tag components. However, with two cache lines per set, the potential for conflicts is mitigated, and multiple addresses can coexist in the same set without causing unnecessary cache misses. 

#### Cache Hit and Miss Handling
The module retains the concepts of cache hits and misses, but with the added sophistication of associativity. A cache hit occurs when the presented memory address matches the stored tag in either of the two cache lines within the selected set. 
```System Verilog
assign cache_hit = cache_hit_0 || cache_hit_1;
```
The module employs parallel comparison logic to determine which way contains the required data. The selected cache line's data is then outputted as the cache hit result. The data output in this cache design is controlled by a mux that dynamically selects between two ways: Way 0 and Way 1. The decision is contingent upon the state of cache_hit_1. If cache_hit_1 is asserted, the mux outputs data from Way 1; otherwise, it outputs data from Way 0.
```System Verilog
if(cache_hit) begin
        if(cache_hit_1) cache_data = data_1[data_set];
        else cache_data = data_0[data_set];
    end
```
This expanded flexibility allows for more concurrent accesses to the cache, increasing the likelihood of cache hits and reducing the impact of cache misses.

#### Conflict Resolution and Overwrite
In the Two-Way Set Associative Cache, the overwrite mechanism remains intact. When enabled, and a cache miss occurs, the module follows a Least Recently Used (LRU) eviction policy within the set to determine which cache line to update, prioritizing the least recently used way for eviction. This contrasts with the Direct Mapped Cache, where conflicts might lead to more frequent cache misses and potential performance bottlenecks.

## Reflection
