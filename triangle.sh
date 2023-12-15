sed -i 's/f1.mem/pdf.hex/' rtl/rom.sv

sed -i 's/sine.mem/triangle.mem/' rtl/DataMemory.sv
sed -i 's/gaussian.mem/triangle.mem/' rtl/DataMemory.sv
sed -i 's/noisy.mem/triangle.mem/' rtl/DataMemory.sv

sed -i 's/i % 8 == 0/i % 1 == 0/' pdf_tb.cpp

rm -rf obj_dir
rm -f  Vtop.vcd

verilator -Wall -cc --trace top.sv --exe pdf_tb.cpp -Irtl -Itest

make -j -C obj_dir/ -f Vtop.mk Vtop

obj_dir/Vtop