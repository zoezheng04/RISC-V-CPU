# Individual Statement - Zoe Zheng
## Table of Contents
- [Overview](#overview)
- [Register File](#register-file)
- [ALU](#alu)
- [Cache](#cache)
  - [Direct Mapped Cache](#direct-mapped-cache)
  - [Two Way Set Associative Cache](#two-way-set-associative-cache)
- [Conclusion](#conclusion)
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
The Register File module consists of an array of registers, each capable of holding data of the specified width. The register file's capacity is determined by the address width parameter, allowing for scalability and adaptability to various RISC-V configurations. In the context of the project, this register file supports 32 registers, with a special consideration given to register 10 (a0).

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
The ALU module I designed is parameterized to accommodate different data widths, providing flexibility for integration into the broader RISC-V architecture. The module takes two source operands, SrcA and SrcB, along with a 4-bit ALUControl signal. It produces the ALUResult as the output, representing the result of the specified operation, and a Zero signal indicating whether the result is zero.
### Supported Instructions
The supported instructions of the ALU was determined based on the instructions used in the reference program as well as f1 program we wrote. The ALUControl signal selects one of the instructions to be executed, there are a total of  14 supported instructions required, so we chose the ALUControl signal to be 4 bits to accomodate this.
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
The Zero flag is set to 1 if the ALUResult is zero, providing a crucial status indicator for conditional branching in the RISC-V processor.
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

### Direct Mapped Cache
The initial phase of my cache design involved the creation of the Direct Mapped Cache module. This design employs a direct mapping strategy, associating each memory block with a specific cache location. The module is parameterized to support various data widths and cache configurations. 
![direct_mapped_cache](images/direct_mapped_cache.png)
#### Cache Hit
#### Cache Miss
#### Data Output
#### Overwrite

### Two Way Set Associative Cache
Recognizing the limitations of the direct-mapped approach, my contributions extended to the development of a more sophisticated Two-Way Set Associative Cache. This cache design mitigates conflicts by allowing multiple lines in a set, thus providing a more nuanced solution to memory access challenges. The cache employs a Least Recently Used (LRU) eviction policy to manage data placement and replacement.
#### 
## Conclusion
In conclusion, my contributions spanned various modules, design decisions, and testing phases. The project allowed me to enhance my understanding of RISC-V, SystemVerilog, and hardware design principles.

## Reflection
