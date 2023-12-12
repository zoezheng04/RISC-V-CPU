# Individual Statement - Zoe Zheng
## Table of Contents
- [Overview](#overview)
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
  
## ALU
### Description
The ALU module I designed is parameterized to accommodate different data widths, providing flexibility for integration into the broader RISC-V architecture. The module takes two source operands, SrcA and SrcB, along with a 4-bit ALUControl signal. It produces the ALUResult as the output, representing the result of the specified operation, and a Zero signal indicating whether the result is zero.
### Supported Instructions
The supported instructions of the ALU was determined based on the instructions used in the reference program as well as f1 program we wrote. There are a total of  14 supported instructions required, so we chose the ALUControl signal to be 4 bits to accomodate this.
### Zero Flag
The Zero flag is set to 1 if the ALUResult is zero, providing a crucial status indicator for conditional branching in the RISC-V processor.
### Testing
Upon completion of the ALU design, I wrote a testbench for verification. The testbench loops through all 14 instructions and outputs the ALUResult and Zero Flag
```System Verilog
# Example SV code block
module MyModule #(parameter WIDTH = 8) (
    input logic [WIDTH-1:0] input_data,
    output logic [WIDTH-1:0] output_data
);

    // Some logic here
    always_comb begin
        output_data = input_data + 1;
    end

endmodule
```

## Cache

### Direct Mapped Cache

### Two Way Set Associative Cache


## Conclusion
In conclusion, my contributions spanned various modules, design decisions, and testing phases. The project allowed me to enhance my understanding of RISC-V, SystemVerilog, and hardware design principles.

## Reflection
