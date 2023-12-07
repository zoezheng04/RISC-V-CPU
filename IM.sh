#!/bin/sh

#cleanup
rm -rf obj_dir
rm -f InstructionMemory.vcd

# run Verilator to translate Verilog into C++, including C++ testbench
verilator -Wall -cc --trace InstructionMemory.sv --exe InstructionMemory_tb.cpp

# build C++ project via make automatically generated by Verilator
make -j -C obj_dir/ -f VInstructionMemory.mk VInstructionMemory

# run executable simulation file
obj_dir/VInstructionMemory