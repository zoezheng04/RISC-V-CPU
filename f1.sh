sed -i 's/pdf.hex/f1.mem/' rom.sv

rm -rf obj_dir
rm -f Vtop.vcd

verilator -Wall -cc --trace top.sv --exe f1_tb.cpp

make -j -C obj_dir/ -f Vtop.mk Vtop

obj_dir/Vtop
