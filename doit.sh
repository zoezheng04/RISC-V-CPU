rm -rf obj_dir
rm -f  Vtop.vcd

verilator -Wall -cc --trace top.sv --exe testbench.cpp

make -j -C obj_dir/ -f Vtop.mk Vtop

obj_dir/Vtop