// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


//======================

void Vtop::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Vtop::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vtop__Syms* __restrict vlSymsp = static_cast<Vtop__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vtop::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Vtop::traceInitTop(void* userp, VerilatedVcd* tracep) {
    Vtop__Syms* __restrict vlSymsp = static_cast<Vtop__Syms*>(userp);
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Vtop::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    Vtop__Syms* __restrict vlSymsp = static_cast<Vtop__Syms*>(userp);
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+99,"clk", false,-1);
        tracep->declBit(c+100,"reset", false,-1);
        tracep->declBus(c+101,"a0", false,-1, 31,0);
        tracep->declBit(c+99,"top clk", false,-1);
        tracep->declBit(c+100,"top reset", false,-1);
        tracep->declBus(c+101,"top a0", false,-1, 31,0);
        tracep->declBus(c+1,"top InstrD_wire", false,-1, 31,0);
        tracep->declBus(c+2,"top ExtImmE_wire", false,-1, 31,0);
        tracep->declBus(c+3,"top ALUResultM_wire", false,-1, 31,0);
        tracep->declBus(c+4,"top ALUResultW_wire", false,-1, 31,0);
        tracep->declBus(c+5,"top ResultW_wire", false,-1, 31,0);
        tracep->declBus(c+102,"top PCBranchD_wire", false,-1, 31,0);
        tracep->declBus(c+6,"top ReadDataW_wire", false,-1, 31,0);
        tracep->declBus(c+7,"top PCPlus4D_wire", false,-1, 31,0);
        tracep->declBus(c+8,"top WriteDataM_wire", false,-1, 31,0);
        tracep->declBus(c+9,"top RD1E_wire", false,-1, 31,0);
        tracep->declBus(c+10,"top RD2E_wire", false,-1, 31,0);
        tracep->declBus(c+11,"top ALUctrlE_wire", false,-1, 3,0);
        tracep->declBit(c+12,"top RegWriteE_wire", false,-1);
        tracep->declBit(c+13,"top RegWriteM_wire", false,-1);
        tracep->declBit(c+14,"top RegWriteW_wire", false,-1);
        tracep->declBit(c+15,"top StallF_wire", false,-1);
        tracep->declBit(c+16,"top StallD_wire", false,-1);
        tracep->declBus(c+17,"top ForwardAE_wire", false,-1, 1,0);
        tracep->declBus(c+18,"top ForwardBE_wire", false,-1, 1,0);
        tracep->declBit(c+19,"top MemWriteE_wire", false,-1);
        tracep->declBit(c+20,"top MemWriteM_wire", false,-1);
        tracep->declBit(c+21,"top ForwardAD_wire", false,-1);
        tracep->declBit(c+22,"top ForwardBD_wire", false,-1);
        tracep->declBit(c+94,"top PCSrcD_wire", false,-1);
        tracep->declBit(c+23,"top ALUsrcE_wire", false,-1);
        tracep->declBus(c+24,"top Rs1E_wire", false,-1, 4,0);
        tracep->declBus(c+25,"top Rs2E_wire", false,-1, 4,0);
        tracep->declBus(c+26,"top RdE_wire", false,-1, 4,0);
        tracep->declBus(c+27,"top RdM_wire", false,-1, 4,0);
        tracep->declBus(c+28,"top RdW_wire", false,-1, 4,0);
        tracep->declBus(c+29,"top Rs1D_wire", false,-1, 4,0);
        tracep->declBus(c+30,"top Rs2D_wire", false,-1, 4,0);
        tracep->declBit(c+31,"top ResultSrcE_wire", false,-1);
        tracep->declBit(c+32,"top ResultSrcM_wire", false,-1);
        tracep->declBit(c+33,"top ResultSrcW_wire", false,-1);
        tracep->declBit(c+34,"top BranchD_wire", false,-1);
        tracep->declBit(c+105,"top FlushE_wire", false,-1);
        tracep->declBit(c+99,"top Fetch_Stage clk", false,-1);
        tracep->declBit(c+100,"top Fetch_Stage reset", false,-1);
        tracep->declBit(c+15,"top Fetch_Stage StallF", false,-1);
        tracep->declBit(c+16,"top Fetch_Stage StallD", false,-1);
        tracep->declBus(c+102,"top Fetch_Stage PCBranchD", false,-1, 31,0);
        tracep->declBit(c+94,"top Fetch_Stage PCSrcD", false,-1);
        tracep->declBus(c+1,"top Fetch_Stage InstrD", false,-1, 31,0);
        tracep->declBus(c+7,"top Fetch_Stage PCPlus4D", false,-1, 31,0);
        tracep->declBus(c+59,"top Fetch_Stage PCF_wire", false,-1, 31,0);
        tracep->declBus(c+103,"top Fetch_Stage PCNext_wire", false,-1, 31,0);
        tracep->declBus(c+60,"top Fetch_Stage PCPlus4F_wire", false,-1, 31,0);
        tracep->declBus(c+61,"top Fetch_Stage InstrF_wire", false,-1, 31,0);
        tracep->declBus(c+106,"top Fetch_Stage ProgramCounter WIDTH", false,-1, 31,0);
        tracep->declBit(c+99,"top Fetch_Stage ProgramCounter clk", false,-1);
        tracep->declBit(c+100,"top Fetch_Stage ProgramCounter rst", false,-1);
        tracep->declBus(c+103,"top Fetch_Stage ProgramCounter PCNext", false,-1, 31,0);
        tracep->declBit(c+15,"top Fetch_Stage ProgramCounter Stall", false,-1);
        tracep->declBus(c+59,"top Fetch_Stage ProgramCounter PC", false,-1, 31,0);
        tracep->declBus(c+106,"top Fetch_Stage Instruction_Memory ADDRESS_WIDTH", false,-1, 31,0);
        tracep->declBus(c+107,"top Fetch_Stage Instruction_Memory DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+59,"top Fetch_Stage Instruction_Memory addr", false,-1, 31,0);
        tracep->declBus(c+61,"top Fetch_Stage Instruction_Memory dout", false,-1, 31,0);
        tracep->declBus(c+61,"top Fetch_Stage Pipeline_RegisterF InstrF", false,-1, 31,0);
        tracep->declBus(c+60,"top Fetch_Stage Pipeline_RegisterF PCPlus4F", false,-1, 31,0);
        tracep->declBit(c+99,"top Fetch_Stage Pipeline_RegisterF clk", false,-1);
        tracep->declBit(c+16,"top Fetch_Stage Pipeline_RegisterF Stall", false,-1);
        tracep->declBit(c+94,"top Fetch_Stage Pipeline_RegisterF Flush", false,-1);
        tracep->declBus(c+1,"top Fetch_Stage Pipeline_RegisterF InstrD", false,-1, 31,0);
        tracep->declBus(c+7,"top Fetch_Stage Pipeline_RegisterF PCPlus4D", false,-1, 31,0);
        tracep->declBit(c+99,"top Decode_Stage clk", false,-1);
        tracep->declBit(c+105,"top Decode_Stage FlushE", false,-1);
        tracep->declBus(c+1,"top Decode_Stage InstrD", false,-1, 31,0);
        tracep->declBus(c+7,"top Decode_Stage PCPlus4D", false,-1, 31,0);
        tracep->declBit(c+14,"top Decode_Stage RegWriteW", false,-1);
        tracep->declBus(c+28,"top Decode_Stage RdW", false,-1, 4,0);
        tracep->declBus(c+5,"top Decode_Stage ResultW", false,-1, 31,0);
        tracep->declBus(c+3,"top Decode_Stage ALUOutM", false,-1, 31,0);
        tracep->declBit(c+21,"top Decode_Stage ForwardAD", false,-1);
        tracep->declBit(c+22,"top Decode_Stage ForwardBD", false,-1);
        tracep->declBit(c+12,"top Decode_Stage RegWriteE", false,-1);
        tracep->declBit(c+31,"top Decode_Stage ResultSrcE", false,-1);
        tracep->declBit(c+19,"top Decode_Stage MemWriteE", false,-1);
        tracep->declBit(c+94,"top Decode_Stage PCSrcD", false,-1);
        tracep->declBus(c+11,"top Decode_Stage ALUctrlE", false,-1, 3,0);
        tracep->declBit(c+23,"top Decode_Stage ALUsrcE", false,-1);
        tracep->declBus(c+9,"top Decode_Stage RD1E", false,-1, 31,0);
        tracep->declBus(c+10,"top Decode_Stage RD2E", false,-1, 31,0);
        tracep->declBus(c+24,"top Decode_Stage Rs1E", false,-1, 4,0);
        tracep->declBus(c+25,"top Decode_Stage Rs2E", false,-1, 4,0);
        tracep->declBus(c+29,"top Decode_Stage Rs1D", false,-1, 4,0);
        tracep->declBus(c+30,"top Decode_Stage Rs2D", false,-1, 4,0);
        tracep->declBus(c+26,"top Decode_Stage RdE", false,-1, 4,0);
        tracep->declBus(c+2,"top Decode_Stage ExtImmE", false,-1, 31,0);
        tracep->declBus(c+102,"top Decode_Stage PCBranchD", false,-1, 31,0);
        tracep->declBit(c+34,"top Decode_Stage BranchD", false,-1);
        tracep->declBus(c+101,"top Decode_Stage a0", false,-1, 31,0);
        tracep->declBit(c+35,"top Decode_Stage RegWrite_wire", false,-1);
        tracep->declBus(c+36,"top Decode_Stage ALUctrl_wire", false,-1, 3,0);
        tracep->declBit(c+37,"top Decode_Stage ALUSrc_wire", false,-1);
        tracep->declBus(c+38,"top Decode_Stage ImmSrc_wire", false,-1, 2,0);
        tracep->declBit(c+39,"top Decode_Stage MemWrite_wire", false,-1);
        tracep->declBit(c+40,"top Decode_Stage ResultSrc_wire", false,-1);
        tracep->declBit(c+108,"top Decode_Stage BranchD_wire", false,-1);
        tracep->declBit(c+41,"top Decode_Stage JumpSrc_wire", false,-1);
        tracep->declBit(c+42,"top Decode_Stage JRetSrc_wire", false,-1);
        tracep->declBit(c+43,"top Decode_Stage BEQ_wire", false,-1);
        tracep->declBit(c+44,"top Decode_Stage BNE_wire", false,-1);
        tracep->declBus(c+95,"top Decode_Stage RD1D_wire", false,-1, 31,0);
        tracep->declBus(c+96,"top Decode_Stage RD2D_wire", false,-1, 31,0);
        tracep->declBus(c+45,"top Decode_Stage ExtImmD_wire", false,-1, 31,0);
        tracep->declBus(c+46,"top Decode_Stage ExtImmDReg_wire", false,-1, 31,0);
        tracep->declBus(c+97,"top Decode_Stage ForwardAD_MUX", false,-1, 31,0);
        tracep->declBus(c+98,"top Decode_Stage ForwardBD_MUX", false,-1, 31,0);
        tracep->declBus(c+47,"top Decode_Stage ControlUnit opcode", false,-1, 6,0);
        tracep->declBus(c+48,"top Decode_Stage ControlUnit funct3", false,-1, 2,0);
        tracep->declBit(c+49,"top Decode_Stage ControlUnit funct7", false,-1);
        tracep->declBit(c+35,"top Decode_Stage ControlUnit RegWrite", false,-1);
        tracep->declBus(c+36,"top Decode_Stage ControlUnit ALUctrl", false,-1, 3,0);
        tracep->declBit(c+37,"top Decode_Stage ControlUnit ALUsrc", false,-1);
        tracep->declBus(c+38,"top Decode_Stage ControlUnit ImmSrc", false,-1, 2,0);
        tracep->declBit(c+39,"top Decode_Stage ControlUnit MemWrite", false,-1);
        tracep->declBit(c+40,"top Decode_Stage ControlUnit ResultSrc", false,-1);
        tracep->declBit(c+41,"top Decode_Stage ControlUnit JumpSrc", false,-1);
        tracep->declBit(c+42,"top Decode_Stage ControlUnit JRetSrc", false,-1);
        tracep->declBit(c+43,"top Decode_Stage ControlUnit BEQ", false,-1);
        tracep->declBit(c+44,"top Decode_Stage ControlUnit BNE", false,-1);
        tracep->declBus(c+50,"top Decode_Stage ControlUnit unnamedblk1 Type_O", false,-1, 6,0);
        tracep->declBus(c+109,"top Decode_Stage RegisterFile ADDRESS_WIDTH", false,-1, 31,0);
        tracep->declBus(c+106,"top Decode_Stage RegisterFile DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+99,"top Decode_Stage RegisterFile clk", false,-1);
        tracep->declBit(c+14,"top Decode_Stage RegisterFile WE3", false,-1);
        tracep->declBus(c+5,"top Decode_Stage RegisterFile WD3", false,-1, 31,0);
        tracep->declBus(c+29,"top Decode_Stage RegisterFile AD1", false,-1, 4,0);
        tracep->declBus(c+30,"top Decode_Stage RegisterFile AD2", false,-1, 4,0);
        tracep->declBus(c+28,"top Decode_Stage RegisterFile AD3", false,-1, 4,0);
        tracep->declBus(c+95,"top Decode_Stage RegisterFile RD1", false,-1, 31,0);
        tracep->declBus(c+96,"top Decode_Stage RegisterFile RD2", false,-1, 31,0);
        tracep->declBus(c+101,"top Decode_Stage RegisterFile a0", false,-1, 31,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declBus(c+62+i*1,"top Decode_Stage RegisterFile registers", true,(i+0), 31,0);}}
        tracep->declBus(c+106,"top Decode_Stage SignExtend DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+51,"top Decode_Stage SignExtend Imm_i", false,-1, 31,7);
        tracep->declBus(c+38,"top Decode_Stage SignExtend ImmSrc", false,-1, 2,0);
        tracep->declBus(c+45,"top Decode_Stage SignExtend Imm_o", false,-1, 31,0);
        tracep->declBit(c+35,"top Decode_Stage Pipeline_RegisterD RegWriteD", false,-1);
        tracep->declBit(c+40,"top Decode_Stage Pipeline_RegisterD ResultSrcD", false,-1);
        tracep->declBit(c+39,"top Decode_Stage Pipeline_RegisterD MemWriteD", false,-1);
        tracep->declBus(c+36,"top Decode_Stage Pipeline_RegisterD ALUctrlD", false,-1, 3,0);
        tracep->declBit(c+37,"top Decode_Stage Pipeline_RegisterD ALUsrcD", false,-1);
        tracep->declBus(c+95,"top Decode_Stage Pipeline_RegisterD RD1D", false,-1, 31,0);
        tracep->declBus(c+96,"top Decode_Stage Pipeline_RegisterD RD2D", false,-1, 31,0);
        tracep->declBus(c+29,"top Decode_Stage Pipeline_RegisterD Rs1D", false,-1, 4,0);
        tracep->declBus(c+30,"top Decode_Stage Pipeline_RegisterD Rs2D", false,-1, 4,0);
        tracep->declBus(c+52,"top Decode_Stage Pipeline_RegisterD RdD", false,-1, 4,0);
        tracep->declBus(c+46,"top Decode_Stage Pipeline_RegisterD ExtImmD", false,-1, 31,0);
        tracep->declBit(c+99,"top Decode_Stage Pipeline_RegisterD clk", false,-1);
        tracep->declBit(c+105,"top Decode_Stage Pipeline_RegisterD FlushE", false,-1);
        tracep->declBit(c+12,"top Decode_Stage Pipeline_RegisterD RegWriteE", false,-1);
        tracep->declBit(c+31,"top Decode_Stage Pipeline_RegisterD ResultSrcE", false,-1);
        tracep->declBit(c+19,"top Decode_Stage Pipeline_RegisterD MemWriteE", false,-1);
        tracep->declBus(c+11,"top Decode_Stage Pipeline_RegisterD ALUctrlE", false,-1, 3,0);
        tracep->declBit(c+23,"top Decode_Stage Pipeline_RegisterD ALUsrcE", false,-1);
        tracep->declBus(c+9,"top Decode_Stage Pipeline_RegisterD RD1E", false,-1, 31,0);
        tracep->declBus(c+10,"top Decode_Stage Pipeline_RegisterD RD2E", false,-1, 31,0);
        tracep->declBus(c+24,"top Decode_Stage Pipeline_RegisterD Rs1E", false,-1, 4,0);
        tracep->declBus(c+25,"top Decode_Stage Pipeline_RegisterD Rs2E", false,-1, 4,0);
        tracep->declBus(c+26,"top Decode_Stage Pipeline_RegisterD RdE", false,-1, 4,0);
        tracep->declBus(c+2,"top Decode_Stage Pipeline_RegisterD ExtImmE", false,-1, 31,0);
        tracep->declBit(c+99,"top Execute_Stage clk", false,-1);
        tracep->declBit(c+12,"top Execute_Stage RegWriteE", false,-1);
        tracep->declBit(c+31,"top Execute_Stage ResultSrcE", false,-1);
        tracep->declBit(c+19,"top Execute_Stage MemWriteE", false,-1);
        tracep->declBus(c+11,"top Execute_Stage ALUctrlE", false,-1, 3,0);
        tracep->declBit(c+23,"top Execute_Stage ALUsrcE", false,-1);
        tracep->declBus(c+9,"top Execute_Stage RD1E", false,-1, 31,0);
        tracep->declBus(c+10,"top Execute_Stage RD2E", false,-1, 31,0);
        tracep->declBus(c+26,"top Execute_Stage RdE", false,-1, 4,0);
        tracep->declBus(c+2,"top Execute_Stage ExtImmE", false,-1, 31,0);
        tracep->declBus(c+17,"top Execute_Stage ForwardAE", false,-1, 1,0);
        tracep->declBus(c+18,"top Execute_Stage ForwardBE", false,-1, 1,0);
        tracep->declBus(c+5,"top Execute_Stage ResultW", false,-1, 31,0);
        tracep->declBit(c+13,"top Execute_Stage RegWriteM", false,-1);
        tracep->declBit(c+32,"top Execute_Stage ResultSrcM", false,-1);
        tracep->declBit(c+20,"top Execute_Stage MemWriteM", false,-1);
        tracep->declBus(c+3,"top Execute_Stage ALUResultM", false,-1, 31,0);
        tracep->declBus(c+8,"top Execute_Stage WriteDataM", false,-1, 31,0);
        tracep->declBus(c+27,"top Execute_Stage RdM", false,-1, 4,0);
        tracep->declBus(c+53,"top Execute_Stage SrcAE_wire", false,-1, 31,0);
        tracep->declBus(c+54,"top Execute_Stage SrcBE_wire", false,-1, 31,0);
        tracep->declBus(c+55,"top Execute_Stage SrcBE_Forwarding_wire", false,-1, 31,0);
        tracep->declBus(c+56,"top Execute_Stage Result_wire", false,-1, 31,0);
        tracep->declBus(c+106,"top Execute_Stage ALU DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+53,"top Execute_Stage ALU SrcA", false,-1, 31,0);
        tracep->declBus(c+54,"top Execute_Stage ALU SrcB", false,-1, 31,0);
        tracep->declBus(c+11,"top Execute_Stage ALU ALUControl", false,-1, 3,0);
        tracep->declBus(c+56,"top Execute_Stage ALU ALUResult", false,-1, 31,0);
        tracep->declBit(c+12,"top Execute_Stage Pipeline_RegisterE RegWriteE", false,-1);
        tracep->declBit(c+31,"top Execute_Stage Pipeline_RegisterE ResultSrcE", false,-1);
        tracep->declBit(c+19,"top Execute_Stage Pipeline_RegisterE MemWriteE", false,-1);
        tracep->declBus(c+56,"top Execute_Stage Pipeline_RegisterE ALUResultE", false,-1, 31,0);
        tracep->declBus(c+55,"top Execute_Stage Pipeline_RegisterE WriteDataE", false,-1, 31,0);
        tracep->declBus(c+26,"top Execute_Stage Pipeline_RegisterE RdE", false,-1, 4,0);
        tracep->declBit(c+99,"top Execute_Stage Pipeline_RegisterE clk", false,-1);
        tracep->declBit(c+13,"top Execute_Stage Pipeline_RegisterE RegWriteM", false,-1);
        tracep->declBit(c+32,"top Execute_Stage Pipeline_RegisterE ResultSrcM", false,-1);
        tracep->declBit(c+20,"top Execute_Stage Pipeline_RegisterE MemWriteM", false,-1);
        tracep->declBus(c+3,"top Execute_Stage Pipeline_RegisterE ALUResultM", false,-1, 31,0);
        tracep->declBus(c+8,"top Execute_Stage Pipeline_RegisterE WriteDataM", false,-1, 31,0);
        tracep->declBus(c+27,"top Execute_Stage Pipeline_RegisterE RdM", false,-1, 4,0);
        tracep->declBit(c+99,"top Memory_Stage clk", false,-1);
        tracep->declBit(c+13,"top Memory_Stage RegWriteM", false,-1);
        tracep->declBit(c+32,"top Memory_Stage ResultSrcM", false,-1);
        tracep->declBit(c+20,"top Memory_Stage MemWriteM", false,-1);
        tracep->declBus(c+3,"top Memory_Stage ALUResultM", false,-1, 31,0);
        tracep->declBus(c+8,"top Memory_Stage WriteDataM", false,-1, 31,0);
        tracep->declBus(c+27,"top Memory_Stage RdM", false,-1, 4,0);
        tracep->declBit(c+14,"top Memory_Stage RegWriteW", false,-1);
        tracep->declBit(c+33,"top Memory_Stage ResultSrcW", false,-1);
        tracep->declBus(c+4,"top Memory_Stage ALUResultW", false,-1, 31,0);
        tracep->declBus(c+6,"top Memory_Stage ReadDataW", false,-1, 31,0);
        tracep->declBus(c+28,"top Memory_Stage RdW", false,-1, 4,0);
        tracep->declBus(c+104,"top Memory_Stage RD_wire", false,-1, 31,0);
        tracep->declBus(c+106,"top Memory_Stage Memory WIDTH", false,-1, 31,0);
        tracep->declBus(c+107,"top Memory_Stage Memory DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+99,"top Memory_Stage Memory clk", false,-1);
        tracep->declBit(c+20,"top Memory_Stage Memory WE", false,-1);
        tracep->declBus(c+3,"top Memory_Stage Memory A", false,-1, 31,0);
        tracep->declBus(c+8,"top Memory_Stage Memory WD", false,-1, 31,0);
        tracep->declBus(c+104,"top Memory_Stage Memory RD", false,-1, 31,0);
        tracep->declBit(c+13,"top Memory_Stage Pipeline_RegisterM RegWriteM", false,-1);
        tracep->declBit(c+32,"top Memory_Stage Pipeline_RegisterM ResultSrcM", false,-1);
        tracep->declBus(c+104,"top Memory_Stage Pipeline_RegisterM ReadDataM", false,-1, 31,0);
        tracep->declBus(c+27,"top Memory_Stage Pipeline_RegisterM RdM", false,-1, 4,0);
        tracep->declBus(c+3,"top Memory_Stage Pipeline_RegisterM ALUResultM", false,-1, 31,0);
        tracep->declBit(c+99,"top Memory_Stage Pipeline_RegisterM clk", false,-1);
        tracep->declBit(c+14,"top Memory_Stage Pipeline_RegisterM RegWriteW", false,-1);
        tracep->declBit(c+33,"top Memory_Stage Pipeline_RegisterM ResultSrcW", false,-1);
        tracep->declBus(c+6,"top Memory_Stage Pipeline_RegisterM ReadDataW", false,-1, 31,0);
        tracep->declBus(c+28,"top Memory_Stage Pipeline_RegisterM RdW", false,-1, 4,0);
        tracep->declBus(c+4,"top Memory_Stage Pipeline_RegisterM ALUResultW", false,-1, 31,0);
        tracep->declBit(c+33,"top WriteBack_Stage ResultSrcW", false,-1);
        tracep->declBus(c+4,"top WriteBack_Stage ALUResultW", false,-1, 31,0);
        tracep->declBus(c+6,"top WriteBack_Stage ReadDataW", false,-1, 31,0);
        tracep->declBus(c+5,"top WriteBack_Stage ResultW", false,-1, 31,0);
        tracep->declBus(c+24,"top HazardUnit Rs1E", false,-1, 4,0);
        tracep->declBus(c+25,"top HazardUnit Rs2E", false,-1, 4,0);
        tracep->declBus(c+29,"top HazardUnit Rs1D", false,-1, 4,0);
        tracep->declBus(c+30,"top HazardUnit Rs2D", false,-1, 4,0);
        tracep->declBus(c+27,"top HazardUnit RdM", false,-1, 4,0);
        tracep->declBit(c+34,"top HazardUnit BranchD", false,-1);
        tracep->declBit(c+12,"top HazardUnit RegWriteE", false,-1);
        tracep->declBit(c+13,"top HazardUnit RegWriteM", false,-1);
        tracep->declBus(c+26,"top HazardUnit WriteRegE", false,-1, 4,0);
        tracep->declBus(c+28,"top HazardUnit RdW", false,-1, 4,0);
        tracep->declBit(c+14,"top HazardUnit RegWriteW", false,-1);
        tracep->declBit(c+31,"top HazardUnit ResultSrcE", false,-1);
        tracep->declBit(c+32,"top HazardUnit ResultSrcM", false,-1);
        tracep->declBus(c+17,"top HazardUnit ForwardAE", false,-1, 1,0);
        tracep->declBus(c+18,"top HazardUnit ForwardBE", false,-1, 1,0);
        tracep->declBit(c+21,"top HazardUnit ForwardAD", false,-1);
        tracep->declBit(c+22,"top HazardUnit ForwardBD", false,-1);
        tracep->declBit(c+15,"top HazardUnit StallF", false,-1);
        tracep->declBit(c+16,"top HazardUnit StallD", false,-1);
        tracep->declBit(c+105,"top HazardUnit FlushE", false,-1);
        tracep->declBit(c+57,"top HazardUnit BranchStall", false,-1);
        tracep->declBit(c+58,"top HazardUnit lwstall", false,-1);
    }
}

void Vtop::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Vtop::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    Vtop__Syms* __restrict vlSymsp = static_cast<Vtop__Syms*>(userp);
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Vtop::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    Vtop__Syms* __restrict vlSymsp = static_cast<Vtop__Syms*>(userp);
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullIData(oldp+1,(vlTOPp->top__DOT__InstrD_wire),32);
        tracep->fullIData(oldp+2,(vlTOPp->top__DOT__ExtImmE_wire),32);
        tracep->fullIData(oldp+3,(vlTOPp->top__DOT__ALUResultM_wire),32);
        tracep->fullIData(oldp+4,(vlTOPp->top__DOT__ALUResultW_wire),32);
        tracep->fullIData(oldp+5,(vlTOPp->top__DOT__ResultW_wire),32);
        tracep->fullIData(oldp+6,(vlTOPp->top__DOT__ReadDataW_wire),32);
        tracep->fullIData(oldp+7,(vlTOPp->top__DOT__PCPlus4D_wire),32);
        tracep->fullIData(oldp+8,(vlTOPp->top__DOT__WriteDataM_wire),32);
        tracep->fullIData(oldp+9,(vlTOPp->top__DOT__RD1E_wire),32);
        tracep->fullIData(oldp+10,(vlTOPp->top__DOT__RD2E_wire),32);
        tracep->fullCData(oldp+11,(vlTOPp->top__DOT__ALUctrlE_wire),4);
        tracep->fullBit(oldp+12,(vlTOPp->top__DOT__RegWriteE_wire));
        tracep->fullBit(oldp+13,(vlTOPp->top__DOT__RegWriteM_wire));
        tracep->fullBit(oldp+14,(vlTOPp->top__DOT__RegWriteW_wire));
        tracep->fullBit(oldp+15,(vlTOPp->top__DOT__StallF_wire));
        tracep->fullBit(oldp+16,(vlTOPp->top__DOT__StallD_wire));
        tracep->fullCData(oldp+17,(vlTOPp->top__DOT__ForwardAE_wire),2);
        tracep->fullCData(oldp+18,(vlTOPp->top__DOT__ForwardBE_wire),2);
        tracep->fullBit(oldp+19,(vlTOPp->top__DOT__MemWriteE_wire));
        tracep->fullBit(oldp+20,(vlTOPp->top__DOT__MemWriteM_wire));
        tracep->fullBit(oldp+21,((((0U != (0x1fU & 
                                           (vlTOPp->top__DOT__InstrD_wire 
                                            >> 0xfU))) 
                                   & ((0x1fU & (vlTOPp->top__DOT__InstrD_wire 
                                                >> 0xfU)) 
                                      == (IData)(vlTOPp->top__DOT__RdM_wire))) 
                                  & (IData)(vlTOPp->top__DOT__RegWriteM_wire))));
        tracep->fullBit(oldp+22,((((0U != (0x1fU & 
                                           (vlTOPp->top__DOT__InstrD_wire 
                                            >> 0x14U))) 
                                   & ((0x1fU & (vlTOPp->top__DOT__InstrD_wire 
                                                >> 0x14U)) 
                                      == (IData)(vlTOPp->top__DOT__RdM_wire))) 
                                  & (IData)(vlTOPp->top__DOT__RegWriteM_wire))));
        tracep->fullBit(oldp+23,(vlTOPp->top__DOT__ALUsrcE_wire));
        tracep->fullCData(oldp+24,(vlTOPp->top__DOT__Rs1E_wire),5);
        tracep->fullCData(oldp+25,(vlTOPp->top__DOT__Rs2E_wire),5);
        tracep->fullCData(oldp+26,(vlTOPp->top__DOT__RdE_wire),5);
        tracep->fullCData(oldp+27,(vlTOPp->top__DOT__RdM_wire),5);
        tracep->fullCData(oldp+28,(vlTOPp->top__DOT__RdW_wire),5);
        tracep->fullCData(oldp+29,((0x1fU & (vlTOPp->top__DOT__InstrD_wire 
                                             >> 0xfU))),5);
        tracep->fullCData(oldp+30,((0x1fU & (vlTOPp->top__DOT__InstrD_wire 
                                             >> 0x14U))),5);
        tracep->fullBit(oldp+31,(vlTOPp->top__DOT__ResultSrcE_wire));
        tracep->fullBit(oldp+32,(vlTOPp->top__DOT__ResultSrcM_wire));
        tracep->fullBit(oldp+33,(vlTOPp->top__DOT__ResultSrcW_wire));
        tracep->fullBit(oldp+34,(vlTOPp->top__DOT__BranchD_wire));
        tracep->fullBit(oldp+35,(vlTOPp->top__DOT__Decode_Stage__DOT__RegWrite_wire));
        tracep->fullCData(oldp+36,(vlTOPp->top__DOT__Decode_Stage__DOT__ALUctrl_wire),4);
        tracep->fullBit(oldp+37,(vlTOPp->top__DOT__Decode_Stage__DOT__ALUSrc_wire));
        tracep->fullCData(oldp+38,(vlTOPp->top__DOT__Decode_Stage__DOT__ImmSrc_wire),3);
        tracep->fullBit(oldp+39,(vlTOPp->top__DOT__Decode_Stage__DOT__MemWrite_wire));
        tracep->fullBit(oldp+40,(vlTOPp->top__DOT__Decode_Stage__DOT__ResultSrc_wire));
        tracep->fullBit(oldp+41,(vlTOPp->top__DOT__Decode_Stage__DOT__JumpSrc_wire));
        tracep->fullBit(oldp+42,(vlTOPp->top__DOT__Decode_Stage__DOT__JRetSrc_wire));
        tracep->fullBit(oldp+43,(vlTOPp->top__DOT__Decode_Stage__DOT__BEQ_wire));
        tracep->fullBit(oldp+44,(vlTOPp->top__DOT__Decode_Stage__DOT__BNE_wire));
        tracep->fullIData(oldp+45,(vlTOPp->top__DOT__Decode_Stage__DOT__ExtImmD_wire),32);
        tracep->fullIData(oldp+46,(((IData)(vlTOPp->top__DOT__Decode_Stage__DOT__JumpSrc_wire)
                                     ? (vlTOPp->top__DOT__PCPlus4D_wire 
                                        - (IData)(4U))
                                     : vlTOPp->top__DOT__Decode_Stage__DOT__ExtImmD_wire)),32);
        tracep->fullCData(oldp+47,((0x7fU & vlTOPp->top__DOT__InstrD_wire)),7);
        tracep->fullCData(oldp+48,((7U & (vlTOPp->top__DOT__InstrD_wire 
                                          >> 0xcU))),3);
        tracep->fullBit(oldp+49,((1U & (vlTOPp->top__DOT__InstrD_wire 
                                        >> 0x1eU))));
        tracep->fullCData(oldp+50,(vlTOPp->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O),7);
        tracep->fullIData(oldp+51,((0x1ffffffU & (vlTOPp->top__DOT__InstrD_wire 
                                                  >> 7U))),25);
        tracep->fullCData(oldp+52,((0x1fU & (vlTOPp->top__DOT__InstrD_wire 
                                             >> 7U))),5);
        tracep->fullIData(oldp+53,(vlTOPp->top__DOT__Execute_Stage__DOT__SrcAE_wire),32);
        tracep->fullIData(oldp+54,(vlTOPp->top__DOT__Execute_Stage__DOT__SrcBE_wire),32);
        tracep->fullIData(oldp+55,(vlTOPp->top__DOT__Execute_Stage__DOT__SrcBE_Forwarding_wire),32);
        tracep->fullIData(oldp+56,(vlTOPp->top__DOT__Execute_Stage__DOT__Result_wire),32);
        tracep->fullBit(oldp+57,(vlTOPp->top__DOT__HazardUnit__DOT__BranchStall));
        tracep->fullBit(oldp+58,(vlTOPp->top__DOT__HazardUnit__DOT__lwstall));
        tracep->fullIData(oldp+59,(vlTOPp->top__DOT__Fetch_Stage__DOT__PCF_wire),32);
        tracep->fullIData(oldp+60,(((IData)(4U) + vlTOPp->top__DOT__Fetch_Stage__DOT__PCF_wire)),32);
        tracep->fullIData(oldp+61,(((vlTOPp->top__DOT__Fetch_Stage__DOT__Instruction_Memory__DOT__rom_array
                                     [(0xfffU & ((IData)(3U) 
                                                 + vlTOPp->top__DOT__Fetch_Stage__DOT__PCF_wire))] 
                                     << 0x18U) | ((
                                                   vlTOPp->top__DOT__Fetch_Stage__DOT__Instruction_Memory__DOT__rom_array
                                                   [
                                                   (0xfffU 
                                                    & ((IData)(2U) 
                                                       + vlTOPp->top__DOT__Fetch_Stage__DOT__PCF_wire))] 
                                                   << 0x10U) 
                                                  | ((vlTOPp->top__DOT__Fetch_Stage__DOT__Instruction_Memory__DOT__rom_array
                                                      [
                                                      (0xfffU 
                                                       & ((IData)(1U) 
                                                          + vlTOPp->top__DOT__Fetch_Stage__DOT__PCF_wire))] 
                                                      << 8U) 
                                                     | vlTOPp->top__DOT__Fetch_Stage__DOT__Instruction_Memory__DOT__rom_array
                                                     [
                                                     (0xfffU 
                                                      & vlTOPp->top__DOT__Fetch_Stage__DOT__PCF_wire)])))),32);
        tracep->fullIData(oldp+62,(vlTOPp->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[0]),32);
        tracep->fullIData(oldp+63,(vlTOPp->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[1]),32);
        tracep->fullIData(oldp+64,(vlTOPp->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[2]),32);
        tracep->fullIData(oldp+65,(vlTOPp->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[3]),32);
        tracep->fullIData(oldp+66,(vlTOPp->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[4]),32);
        tracep->fullIData(oldp+67,(vlTOPp->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[5]),32);
        tracep->fullIData(oldp+68,(vlTOPp->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[6]),32);
        tracep->fullIData(oldp+69,(vlTOPp->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[7]),32);
        tracep->fullIData(oldp+70,(vlTOPp->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[8]),32);
        tracep->fullIData(oldp+71,(vlTOPp->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[9]),32);
        tracep->fullIData(oldp+72,(vlTOPp->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[10]),32);
        tracep->fullIData(oldp+73,(vlTOPp->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[11]),32);
        tracep->fullIData(oldp+74,(vlTOPp->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[12]),32);
        tracep->fullIData(oldp+75,(vlTOPp->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[13]),32);
        tracep->fullIData(oldp+76,(vlTOPp->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[14]),32);
        tracep->fullIData(oldp+77,(vlTOPp->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[15]),32);
        tracep->fullIData(oldp+78,(vlTOPp->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[16]),32);
        tracep->fullIData(oldp+79,(vlTOPp->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[17]),32);
        tracep->fullIData(oldp+80,(vlTOPp->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[18]),32);
        tracep->fullIData(oldp+81,(vlTOPp->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[19]),32);
        tracep->fullIData(oldp+82,(vlTOPp->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[20]),32);
        tracep->fullIData(oldp+83,(vlTOPp->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[21]),32);
        tracep->fullIData(oldp+84,(vlTOPp->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[22]),32);
        tracep->fullIData(oldp+85,(vlTOPp->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[23]),32);
        tracep->fullIData(oldp+86,(vlTOPp->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[24]),32);
        tracep->fullIData(oldp+87,(vlTOPp->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[25]),32);
        tracep->fullIData(oldp+88,(vlTOPp->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[26]),32);
        tracep->fullIData(oldp+89,(vlTOPp->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[27]),32);
        tracep->fullIData(oldp+90,(vlTOPp->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[28]),32);
        tracep->fullIData(oldp+91,(vlTOPp->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[29]),32);
        tracep->fullIData(oldp+92,(vlTOPp->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[30]),32);
        tracep->fullIData(oldp+93,(vlTOPp->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[31]),32);
        tracep->fullBit(oldp+94,(vlTOPp->top__DOT__PCSrcD_wire));
        tracep->fullIData(oldp+95,(vlTOPp->top__DOT__Decode_Stage__DOT__RD1D_wire),32);
        tracep->fullIData(oldp+96,(vlTOPp->top__DOT__Decode_Stage__DOT__RD2D_wire),32);
        tracep->fullIData(oldp+97,(vlTOPp->top__DOT__Decode_Stage__DOT__ForwardAD_MUX),32);
        tracep->fullIData(oldp+98,(vlTOPp->top__DOT__Decode_Stage__DOT__ForwardBD_MUX),32);
        tracep->fullBit(oldp+99,(vlTOPp->clk));
        tracep->fullBit(oldp+100,(vlTOPp->reset));
        tracep->fullIData(oldp+101,(vlTOPp->a0),32);
        tracep->fullIData(oldp+102,(((IData)(vlTOPp->top__DOT__Decode_Stage__DOT__JRetSrc_wire)
                                      ? vlTOPp->top__DOT__Decode_Stage__DOT__RD1D_wire
                                      : (vlTOPp->top__DOT__Decode_Stage__DOT__ExtImmD_wire 
                                         + (vlTOPp->top__DOT__PCPlus4D_wire 
                                            - (IData)(8U))))),32);
        tracep->fullIData(oldp+103,(((IData)(vlTOPp->top__DOT__PCSrcD_wire)
                                      ? ((IData)(vlTOPp->top__DOT__Decode_Stage__DOT__JRetSrc_wire)
                                          ? vlTOPp->top__DOT__Decode_Stage__DOT__RD1D_wire
                                          : (vlTOPp->top__DOT__Decode_Stage__DOT__ExtImmD_wire 
                                             + (vlTOPp->top__DOT__PCPlus4D_wire 
                                                - (IData)(8U))))
                                      : ((IData)(4U) 
                                         + vlTOPp->top__DOT__Fetch_Stage__DOT__PCF_wire))),32);
        tracep->fullIData(oldp+104,(((vlTOPp->top__DOT__Memory_Stage__DOT__Memory__DOT__DataMemory_array
                                      [(0x1ffffU & 
                                        ((IData)(3U) 
                                         + vlTOPp->top__DOT__ALUResultM_wire))] 
                                      << 0x18U) | (
                                                   (vlTOPp->top__DOT__Memory_Stage__DOT__Memory__DOT__DataMemory_array
                                                    [
                                                    (0x1ffffU 
                                                     & ((IData)(2U) 
                                                        + vlTOPp->top__DOT__ALUResultM_wire))] 
                                                    << 0x10U) 
                                                   | ((vlTOPp->top__DOT__Memory_Stage__DOT__Memory__DOT__DataMemory_array
                                                       [
                                                       (0x1ffffU 
                                                        & ((IData)(1U) 
                                                           + vlTOPp->top__DOT__ALUResultM_wire))] 
                                                       << 8U) 
                                                      | vlTOPp->top__DOT__Memory_Stage__DOT__Memory__DOT__DataMemory_array
                                                      [
                                                      (0x1ffffU 
                                                       & vlTOPp->top__DOT__ALUResultM_wire)])))),32);
        tracep->fullBit(oldp+105,(vlTOPp->top__DOT__FlushE_wire));
        tracep->fullIData(oldp+106,(0x20U),32);
        tracep->fullIData(oldp+107,(8U),32);
        tracep->fullBit(oldp+108,(vlTOPp->top__DOT__Decode_Stage__DOT__BranchD_wire));
        tracep->fullIData(oldp+109,(5U),32);
    }
}
