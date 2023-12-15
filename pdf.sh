sed -i 's/f1.mem/pdf.hex/' rtl/rom.sv

rm -rf obj_dir
rm -f Vcpu.vcd

verilator -Wall -cc --trace cpu.sv --exe pdf_tb.cpp -Irtl -Itest

make -j -C obj_dir/ -f Vcpu.mk Vcpu

obj_dir/Vcpu