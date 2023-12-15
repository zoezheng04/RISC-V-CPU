sed -i 's/f1.mem/pdf.hex/' rtl/rom.sv

sed -i 's/sine.mem/noisy.mem/' rtl/DataMemory.sv
sed -i 's/triangle.mem/noisy.mem/' rtl/DataMemory.sv
sed -i 's/gaussian.mem/noisy.mem/' rtl/DataMemory.sv

sed -i 's/i % 8 == 0/i % 1 == 0/' pdf_tb.cpp

rm -rf obj_dir
rm -f  Vcpu.vcd

verilator -Wall -cc --trace cpu.sv --exe pdf_tb.cpp -Irtl -Itest

make -j -C obj_dir/ -f Vcpu.mk Vcpu

obj_dir/Vcpu