# Individual Statement - Gurjan Singh Samra
## Table of Contents
- [Overview](#overview)
- [Instruction Memory](#Instruction-Memory)
- [Sign Extend](#Sign-Extend)
- [Testing Control-Unit](#testing-control-unit)
- [Single Cycle CPU](#single-cycle-cpu)
    - [Design](#design)
    - [Testing and Debugging](#Testing-and-Debugging)
- [Debugging Pipelining](#Debugging-Pipelining)
- [Cache](#Cache)
    - [Direct Mapping Cache](#Direct-Mapping-Cache)
    - [Two-way Associative Cache](#Two-way-associative-cache)
- [Reflection](#reflection)

  
## Overview
This statement gives an overview of my contributions to the project. All design decisions, modules, files, and any relevant structural or minor changes are detailed in the sections below:

My main roles were:

* Full responsibility of writing, designing and testing the [Sign Extend](path/to/Sign-Extend), [Instruction Memory](path/to/Instruction-Memory).
* Full responsibility of writing, designing and testing the [Single Cycle CPU](path/to/single-cycle).
* Debugging any files that aren't functioning correctly.
* Minor contributions on helping to debug [pipelining](path/to/pipelining).
* Minor contributions in debugging the [Two-way Associative Cache](path/to/2way)
* Implementing both types of [cache] into the pipelined CPU.

## Instruction Memory

### Module Description
The Instruction Memory holds the instruction set, with an input for the address (which is a multiple of 4 due to byte addressing) of an instruction, outputting the instruction to the relevant components.

For the Instruction Memory, I used the ROM file from the previous Lab 4 CPU, since there weren't many changes that needed to be made. I had to make a small tweak to the file in order to make the byte addresssing little endian as opposed to big endian.

### Testing

To test the Instruction Memory, I created a testbench which would input the clock cycle number multiplied by 4 as the address. 9This will give an output of the instuction memory, as shown in the waveform below:

![](images/ROM_waveform.jpg)

As you can see, the Instructon Memory is working as expected. ([commit](e67034616b1cd96eefeac8041b371dea3d4c3f10))

## Sign Extend

### Module Discription

The Sign Extend Module takes in an input supplied by the Instruction Memory. This is then sign extended according to the relevent ImmSrc signal given by the Control Unit.

### Creating the Design

To implement the Sign Extend, I used the table of the different types of sign extends possible, which was given in the lectures.

![](images/instructions_tables.png)

As you can see in the table, there are 5 types of sign extend which are all needed to run the reference and f1 programmes. Therefore ImmSrc will need to be 3 bits as opposed to 2, which is what was shown in the diagram in the lectures.

I then created the file as required, for which the code can be seen below.

```System Verilog
module SignExtend#(
        parameter DATA_WIDTH = 32
)(
    input logic [DATA_WIDTH-1:0]    Imm_i,
    input logic [2:0]               ImmSrc,
    output logic [DATA_WIDTH-1:0]   Imm_o
);

always_comb begin
    case(ImmSrc)
    //I-type
    3'b000: Imm_o = {{21{Imm_i[31]}}, Imm_i[30:20]};
    //U-type
    3'b001: Imm_o = {Imm_i[31:12], 12'b0};
    //S-type
    3'b010: Imm_o = {{21{Imm_i[31]}}, Imm_i[30:25], Imm_i[11:7]};
    //B-type
    3'b011: Imm_o = {{20{Imm_i[31]}}, Imm_i[7], Imm_i[30:25], Imm_i[11:8], 1'b0};
    //J-type
    3'b100: Imm_o = {{12{Imm_i[31]}}, Imm_i[19:12], Imm_i[20], Imm_i[30:21], 1'b0};
    endcase
end

endmodule
```

### Testing


I tested the sign extend component by creating a ROM, which contained a few 32 bit values, these are sign extended by the SignExtend component. I manually changed the ImmSrc through the testbench, since I was testing this without the control unit. I used the ROM file I had already created.([commit](8deafdd4bcd85961811da103f1514683d156d496))

Pictures of each waveform for it's correspondin ImmSrc value:

ImmSrc = 0:
![](images/SignExtend0.png)

ImmSrc = 1:
![](images/SignExtend1.png)

ImmSrc = 2:
![](images/SignExtend2.png)

ImmSrc = 3:
![](images/SignExtend3.png)

ImmSrc = 4:
![](images/SignExtend4.png)

## Testing Control Unit

After Arjan had finished making the Control Unit, I, with the aid of Arjan, tested it using a Programme Counter and a ROM file containg the reference programme. We used the reference programme since it contained all types of instructions, so we could test the control unit rigorously. I created a top file containing the Control Unit alongside the PC and ROM. All the signals of the Control Unit were set as the outputs. I checked the waveform to see if the corresponding opcode supplied by the ROM was given the correct signals as outputs, which can be seen below.([commit](393afede862866801644593bc12f0e32e1fb5a0f))

![](images/control_unit_waveform.png)

## Single Cycle CPU

I was responsible for creating, testing and debugging the Single Cycle CPU, which was a crucial part of this project. It was essential that the Single Cycle CPU fully functioned as intended, allowing us to attempt the stretched goals.

### Design

Before creating the top file, I drew out a schematic diagram for the single cycle CPU. It was quite similar to the diagram shown in lectures however included various muxes to implement the jump instructions and include the trigger.

We had decided to implement all the muxes in the top file instead of in the component files. This would make it easier to test each component before putting the CPU together to reduce errors and make the debugging easier.

For the trigger, I added it so that it functions like a overridde start and reset button, so when pressed it will start the programme from the beginning.

![](images/single-cycle.jpg)

### Testing and Debugging

At first I tested the cpu with the counter from lab 4 since we knew that the counter machine code was working from the previous lab.

When testing the cpu, there was an error which would cause Verilator to abort due to there not being a 'dc convergence'. This was the first time I had gotten such an error and was unsure on how to debug this. After discussing with the team, I broke down the top file into 4 different top files for various stages and then created another top file to put them all together. This allowed me to test the 3 different stages independently for errors and to help solve the problem.([commit](a59c95c0c4fb2b720fcfe34eb5130a01b0c0bc4d))

![](images/altered_single_cycle.png)

After making this change and testing all the top files individually, the cpu worked for the counter!

Here's a video of the counter working:
<video src="videos/counter.mp4" controls title="Title"></video>

### Machine Code for F1

When testing the f1 machine code, there was a problem with the jump instructions. This was because we had nested subroutines which meant that the return address for the main instruction was lost. This would cause the return address of the main loop to be lost causing the pc to jump to the wrong line of the machine code.

A solution to this could’ve been to store the return address of the main instruction in a register. However when looking at the machine code, there was no need to have a nested subroutine as the jump was to the next line in the machine code so the pc would automatically go to that line anyway. Therfore I just removed the unnecessary jumps which fixed that error.

There were also a few small errors in the machine code as well, such as using bne instead of beq, which were easy fixes. ([commit](2da7dd0318fe400977b4cc3f78c983215cb208e7))

For the random delay after the all the lights were on, we used a lfsr using xor's to make it random.
```
lfsr:
    srli    a3, a2, 0x2             # shift bit at position 3 to the first bit
    srli    a4, a2, 0x6             # shift bit at position 7 to the first bit
    xor     a5, a4, a3              # XOR bits at positions 3 and 7 - taps
    andi    a5, a5, 0x1             # extract the feedback bit
    slli    a6, a2, 0x1             # shift seed to the left for 1 bit
    or      a6, a6, a5              # add the feedback bit
    andi    a6, a6, 0x7f            # make sure that number generated is 7-bit long (h7f = d127 = b1111111)
    addi    a2, a6, 0x0             # store the random number in a2
    addi    t4, a2, 0x0             # load t4 with a2 (the random number)
```
The final machine code can be viewed in the main.

After fixing the issues with the machine code, the f1 lights were working as expected.

<video src="videos/single_cycle_f1.mp4" controls title="Title"></video>

### Register File

When testing the reference programme, a problem that occurred was that when we wrote to the zero register, it actually stored the value rather than setting it back to zero. Therefore the property of the zero register wouldn’t hold and RET instructions couldn't be execucted properly. To solve this problem, I changed the register file so that it always writes 0 to the zero register. After I made this change, the zero register functioned as expected allowing us to use RET properly. ([commit](2da7dd0318fe400977b4cc3f78c983215cb208e7))

```System Verilog
always_ff @(posedge clk) begin
    registers[0] <= 32'b0;
    if(WE3)
        registers[AD3] <= WD3;
end
```

### ALU

There was a problem with the LBU instruction. The address of the Data Memory, where the data is supposed to be loaded, from was wrong. The ALU was outputting SrcB, which would be just the offset when we needed the offset plus the address, hence we were always loading from the address 0.

![](images/alu-problem.png)

After checking the ALU file, I saw the error was that the addressing for the data memory was wrong which I then ammended. ([commit](21f294281fd50dee8bbaded092bf4d8e6ee10b21))

The issue was that the alu was zero extending the address, instead of the actual data being zero extended. To fix this I simply changed the address to be the sum of the 2 inputs so that the alu gave us the address with an offset. The rest of the changes were made to the [Data Memory](#data-memory)

Alongside this I also made a few changes to the bne and beq instructions, since they were outputting single bits when a 32 bit signal was expected causing a warning ([commit](98a181ebcc0473b54c38a991b15bdcf80a8a0cfc)). To fix this, I changed the bne and beq instructions to use xor since xor has the property of =, this made me realise that the alu could be significantly optimised, since most of the instructions use the same fundamental operations. This would be a good improvment that I would've implemented if I was to do a project like this again.

### Data Memory
The reference programme uses load byte instructions for which we had no hardware implemented. Natalie made the changes needed in the Data Memory and I then added these changes to the relevant top file. ([commit](98a181ebcc0473b54c38a991b15bdcf80a8a0cfc))

### Working CPU

After debugging all the files, I finally managed to get the single cycle cpu to work!

Here's evindence of it working:

Gaussian:

<video src="videos/single_cycle_gaussian.mp4" controls title="Title"></video>

Sine:

<video src="videos/single_cycle_sine.mp4" controls title="Title"></video>

Triangle:

<video src="videos/single_cycle_triangle.mp4" controls title="Title"></video>

## Debugging Pipelining

After completing the single cycle cpu, I also helped out Arjan with the debugging of the pipelined cpu, but my contribution was mainly verbal advice.

One problem we faced was that the branch instructions weren’t working properly. The problem was that the branch instructions needed a delay of 2 clock cycles but we only had one. To temporarily test this, we added a NOP after each branch instruction and the f1 programme was being executed as expected. However using a NOP would defeat the purpose of the hazard unit and so we discussed how to implement this in the cpu and we came with the idea of adding another register to implement 2 stalls. Arjan then went on to implement the necessary changes.

When testing with the reference programme, there was a problem with the load instructions. Looking at the waveform, I saw that the problem was that the MemType and ResultSrc flags were high after the memory was supposed to be accessed due to the pipelining registers. Therefore the result of the ALU, which is the address of the memory, was being outputted instead of the data located at that address. I passed this one to Arjan who implemented the necessary changes

## Cache

My role with the cache was to implement the cache into the pipelined cpu. I did this by creating a top file for the memory which contained the main memory and the cache.

### Direct Mapping Cache

Implementimng the direct mapping cache wasn't too complex. I first created a diagram to allow me to visualise how the cache will link with the main memory.

![](images/direct_cache.png)

After drawing the diagram, I created the top file to implementing the cache. ([commit](37275f94e7ba441b0a5b1b33ca261f8477e418b6)) I then tested the cache and it worked! Evidence of it working can be viewed in the main READme file.

### Two-way Associative Cache

Unfortunately we didn't have enough time to get the two-way associative cache to work with the cpu, however I did managed to get it to work with by itself.

When testing the two way associative cache, there was a 'DIDNOTCONVERGE' error which was caused by the counter. This error occurred due to the combinational loop in the counter caused by the line:

```System Verilog
Lru_counter_0[data_set] = lru_counter_0[data_set] + 1
``````

To fix this, I made the whole block sequential so that the cache will output on a positive clock cycle. ([commit](2fe475d16562c7747c06f51c4551463826c2297f))

After that, I drew out a diagram to implement the cache into the memory. I then wrote up the top file. ([commit](7bc86815073b0c0cfd2a241a234e2e260f85d5bf))

## Reflection

I think we worked well as a team. To maximise the amount we could get done, we worked on most tasks in parallel, such as doing the pipelining  and single cycle at the same time. This allowed us to get all the tasks done by utilising each team member.

However, looking back I would've liked to contribute to pipelining more as I didn't get to contribute much due to the lack of time. This was mainly because I was trying to debug the single cycle cpu which was crucial in the overall achievement of our group.

Overall, I am happy with how our group has performed as we managed to complete all streched goals. I think I contributed greatly to the overall performance of our group by geting the single cycle cpu to fully function and implementing the cache into pipelining.
