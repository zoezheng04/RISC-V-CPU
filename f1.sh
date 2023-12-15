sed -i 's/pdf.hex/f1.mem/' rtl/rom.sv

rm -rf obj_dir
rm -f Vcpu.vcd

verilator -Wall -cc --trace cpu.sv --exe f1_tb.cpp -Irtl -Itest

make -j -C obj_dir/ -f Vcpu.mk Vcpu

obj_dir/Vcpu