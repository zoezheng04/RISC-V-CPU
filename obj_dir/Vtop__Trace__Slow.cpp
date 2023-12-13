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
        tracep->declBit(c+103,"clk", false,-1);
        tracep->declBit(c+104,"reset", false,-1);
        tracep->declBit(c+105,"trigger", false,-1);
        tracep->declBus(c+106,"a0", false,-1, 31,0);
        tracep->declBit(c+103,"top clk", false,-1);
        tracep->declBit(c+104,"top reset", false,-1);
        tracep->declBit(c+105,"top trigger", false,-1);
        tracep->declBus(c+106,"top a0", false,-1, 31,0);
        tracep->declBus(c+61,"top InstrD_wire", false,-1, 31,0);
        tracep->declBus(c+49,"top ExtImmE_wire", false,-1, 31,0);
        tracep->declBus(c+1,"top ALUResultM_wire", false,-1, 31,0);
        tracep->declBus(c+2,"top ALUResultW_wire", false,-1, 31,0);
        tracep->declBus(c+3,"top ResultW_wire", false,-1, 31,0);
        tracep->declBus(c+62,"top PCBranchD_wire", false,-1, 31,0);
        tracep->declBus(c+4,"top ReadDataW_wire", false,-1, 31,0);
        tracep->declBus(c+63,"top PCPlus4D_wire", false,-1, 31,0);
        tracep->declBus(c+5,"top WriteDataM_wire", false,-1, 31,0);
        tracep->declBus(c+50,"top RD1E_wire", false,-1, 31,0);
        tracep->declBus(c+51,"top RD2E_wire", false,-1, 31,0);
        tracep->declBus(c+52,"top ALUctrlE_wire", false,-1, 3,0);
        tracep->declBit(c+53,"top RegWriteE_wire", false,-1);
        tracep->declBit(c+6,"top RegWriteM_wire", false,-1);
        tracep->declBit(c+7,"top RegWriteW_wire", false,-1);
        tracep->declBit(c+92,"top StallF_wire", false,-1);
        tracep->declBit(c+93,"top StallD_wire", false,-1);
        tracep->declBus(c+94,"top ForwardAE_wire", false,-1, 1,0);
        tracep->declBus(c+95,"top ForwardBE_wire", false,-1, 1,0);
        tracep->declBit(c+54,"top MemWriteE_wire", false,-1);
        tracep->declBit(c+8,"top MemWriteM_wire", false,-1);
        tracep->declBit(c+107,"top ForwardAD_wire", false,-1);
        tracep->declBit(c+108,"top ForwardBD_wire", false,-1);
        tracep->declBit(c+64,"top PCSrcD_wire", false,-1);
        tracep->declBit(c+55,"top ALUsrcE_wire", false,-1);
        tracep->declBit(c+56,"top MemTypeE_wire", false,-1);
        tracep->declBit(c+9,"top MemTypeM_wire", false,-1);
        tracep->declBus(c+57,"top Rs1E_wire", false,-1, 4,0);
        tracep->declBus(c+58,"top Rs2E_wire", false,-1, 4,0);
        tracep->declBus(c+59,"top RdE_wire", false,-1, 4,0);
        tracep->declBus(c+10,"top RdM_wire", false,-1, 4,0);
        tracep->declBus(c+11,"top RdW_wire", false,-1, 4,0);
        tracep->declBus(c+65,"top Rs1D_wire", false,-1, 4,0);
        tracep->declBus(c+66,"top Rs2D_wire", false,-1, 4,0);
        tracep->declBit(c+60,"top ResultSrcE_wire", false,-1);
        tracep->declBit(c+12,"top ResultSrcM_wire", false,-1);
        tracep->declBit(c+13,"top ResultSrcW_wire", false,-1);
        tracep->declBit(c+67,"top BranchD_wire", false,-1);
        tracep->declBit(c+96,"top FlushE_wire", false,-1);
        tracep->declBit(c+103,"top Fetch_Stage clk", false,-1);
        tracep->declBit(c+104,"top Fetch_Stage reset", false,-1);
        tracep->declBit(c+105,"top Fetch_Stage trigger", false,-1);
        tracep->declBit(c+92,"top Fetch_Stage StallF", false,-1);
        tracep->declBit(c+93,"top Fetch_Stage StallD", false,-1);
        tracep->declBus(c+62,"top Fetch_Stage PCBranchD", false,-1, 31,0);
        tracep->declBit(c+67,"top Fetch_Stage BranchD", false,-1);
        tracep->declBit(c+64,"top Fetch_Stage PCSrcD", false,-1);
        tracep->declBus(c+61,"top Fetch_Stage InstrD", false,-1, 31,0);
        tracep->declBus(c+63,"top Fetch_Stage PCPlus4D", false,-1, 31,0);
        tracep->declBus(c+46,"top Fetch_Stage PCF_wire", false,-1, 31,0);
        tracep->declBus(c+109,"top Fetch_Stage PCNext_wire", false,-1, 31,0);
        tracep->declBus(c+47,"top Fetch_Stage PCPlus4F_wire", false,-1, 31,0);
        tracep->declBus(c+48,"top Fetch_Stage InstrF_wire", false,-1, 31,0);
        tracep->declBit(c+68,"top Fetch_Stage FlushD", false,-1);
        tracep->declBus(c+111,"top Fetch_Stage ProgramCounter WIDTH", false,-1, 31,0);
        tracep->declBit(c+103,"top Fetch_Stage ProgramCounter clk", false,-1);
        tracep->declBit(c+104,"top Fetch_Stage ProgramCounter rst", false,-1);
        tracep->declBus(c+109,"top Fetch_Stage ProgramCounter PCNext", false,-1, 31,0);
        tracep->declBit(c+92,"top Fetch_Stage ProgramCounter Stall", false,-1);
        tracep->declBus(c+46,"top Fetch_Stage ProgramCounter PC", false,-1, 31,0);
        tracep->declBus(c+111,"top Fetch_Stage Instruction_Memory ADDRESS_WIDTH", false,-1, 31,0);
        tracep->declBus(c+112,"top Fetch_Stage Instruction_Memory DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+46,"top Fetch_Stage Instruction_Memory addr", false,-1, 31,0);
        tracep->declBus(c+48,"top Fetch_Stage Instruction_Memory dout", false,-1, 31,0);
        tracep->declBus(c+48,"top Fetch_Stage Pipeline_RegisterF InstrF", false,-1, 31,0);
        tracep->declBus(c+47,"top Fetch_Stage Pipeline_RegisterF PCPlus4F", false,-1, 31,0);
        tracep->declBit(c+103,"top Fetch_Stage Pipeline_RegisterF clk", false,-1);
        tracep->declBit(c+93,"top Fetch_Stage Pipeline_RegisterF Stall", false,-1);
        tracep->declBit(c+68,"top Fetch_Stage Pipeline_RegisterF Flush", false,-1);
        tracep->declBus(c+61,"top Fetch_Stage Pipeline_RegisterF InstrD", false,-1, 31,0);
        tracep->declBus(c+63,"top Fetch_Stage Pipeline_RegisterF PCPlus4D", false,-1, 31,0);
        tracep->declBit(c+103,"top Decode_Stage clk", false,-1);
        tracep->declBit(c+96,"top Decode_Stage FlushE", false,-1);
        tracep->declBus(c+61,"top Decode_Stage InstrD", false,-1, 31,0);
        tracep->declBus(c+63,"top Decode_Stage PCPlus4D", false,-1, 31,0);
        tracep->declBit(c+7,"top Decode_Stage RegWriteW", false,-1);
        tracep->declBus(c+11,"top Decode_Stage RdW", false,-1, 4,0);
        tracep->declBus(c+3,"top Decode_Stage ResultW", false,-1, 31,0);
        tracep->declBus(c+1,"top Decode_Stage ALUOutM", false,-1, 31,0);
        tracep->declBit(c+107,"top Decode_Stage ForwardAD", false,-1);
        tracep->declBit(c+108,"top Decode_Stage ForwardBD", false,-1);
        tracep->declBit(c+53,"top Decode_Stage RegWriteE", false,-1);
        tracep->declBit(c+60,"top Decode_Stage ResultSrcE", false,-1);
        tracep->declBit(c+54,"top Decode_Stage MemWriteE", false,-1);
        tracep->declBit(c+64,"top Decode_Stage PCSrcD", false,-1);
        tracep->declBus(c+52,"top Decode_Stage ALUctrlE", false,-1, 3,0);
        tracep->declBit(c+55,"top Decode_Stage ALUsrcE", false,-1);
        tracep->declBus(c+50,"top Decode_Stage RD1E", false,-1, 31,0);
        tracep->declBus(c+51,"top Decode_Stage RD2E", false,-1, 31,0);
        tracep->declBus(c+57,"top Decode_Stage Rs1E", false,-1, 4,0);
        tracep->declBus(c+58,"top Decode_Stage Rs2E", false,-1, 4,0);
        tracep->declBus(c+65,"top Decode_Stage Rs1D", false,-1, 4,0);
        tracep->declBus(c+66,"top Decode_Stage Rs2D", false,-1, 4,0);
        tracep->declBus(c+59,"top Decode_Stage RdE", false,-1, 4,0);
        tracep->declBus(c+49,"top Decode_Stage ExtImmE", false,-1, 31,0);
        tracep->declBus(c+62,"top Decode_Stage PCBranchD", false,-1, 31,0);
        tracep->declBit(c+67,"top Decode_Stage BranchD", false,-1);
        tracep->declBit(c+56,"top Decode_Stage MemTypeE", false,-1);
        tracep->declBus(c+106,"top Decode_Stage a0", false,-1, 31,0);
        tracep->declBit(c+69,"top Decode_Stage RegWrite_wire", false,-1);
        tracep->declBus(c+70,"top Decode_Stage ALUctrl_wire", false,-1, 3,0);
        tracep->declBit(c+71,"top Decode_Stage ALUSrc_wire", false,-1);
        tracep->declBus(c+72,"top Decode_Stage ImmSrc_wire", false,-1, 2,0);
        tracep->declBit(c+73,"top Decode_Stage MemWrite_wire", false,-1);
        tracep->declBit(c+74,"top Decode_Stage ResultSrc_wire", false,-1);
        tracep->declBit(c+75,"top Decode_Stage JumpSrc_wire", false,-1);
        tracep->declBit(c+76,"top Decode_Stage JRetSrc_wire", false,-1);
        tracep->declBit(c+77,"top Decode_Stage BEQ_wire", false,-1);
        tracep->declBit(c+78,"top Decode_Stage BNE_wire", false,-1);
        tracep->declBit(c+79,"top Decode_Stage MemType_wire", false,-1);
        tracep->declBus(c+80,"top Decode_Stage RD1D_wire", false,-1, 31,0);
        tracep->declBus(c+81,"top Decode_Stage RD2D_wire", false,-1, 31,0);
        tracep->declBus(c+82,"top Decode_Stage ExtImmD_wire", false,-1, 31,0);
        tracep->declBus(c+83,"top Decode_Stage ExtImmDReg_wire", false,-1, 31,0);
        tracep->declBus(c+84,"top Decode_Stage ForwardAD_MUX", false,-1, 31,0);
        tracep->declBus(c+85,"top Decode_Stage ForwardBD_MUX", false,-1, 31,0);
        tracep->declBus(c+86,"top Decode_Stage ControlUnit opcode", false,-1, 6,0);
        tracep->declBus(c+87,"top Decode_Stage ControlUnit funct3", false,-1, 2,0);
        tracep->declBit(c+88,"top Decode_Stage ControlUnit funct7", false,-1);
        tracep->declBit(c+69,"top Decode_Stage ControlUnit RegWrite", false,-1);
        tracep->declBus(c+70,"top Decode_Stage ControlUnit ALUctrl", false,-1, 3,0);
        tracep->declBit(c+71,"top Decode_Stage ControlUnit ALUsrc", false,-1);
        tracep->declBus(c+72,"top Decode_Stage ControlUnit ImmSrc", false,-1, 2,0);
        tracep->declBit(c+73,"top Decode_Stage ControlUnit MemWrite", false,-1);
        tracep->declBit(c+74,"top Decode_Stage ControlUnit ResultSrc", false,-1);
        tracep->declBit(c+75,"top Decode_Stage ControlUnit JumpSrc", false,-1);
        tracep->declBit(c+76,"top Decode_Stage ControlUnit JRetSrc", false,-1);
        tracep->declBit(c+77,"top Decode_Stage ControlUnit BEQ", false,-1);
        tracep->declBit(c+78,"top Decode_Stage ControlUnit BNE", false,-1);
        tracep->declBit(c+79,"top Decode_Stage ControlUnit MemType", false,-1);
        tracep->declBus(c+89,"top Decode_Stage ControlUnit unnamedblk1 Type_O", false,-1, 6,0);
        tracep->declBus(c+113,"top Decode_Stage RegisterFile ADDRESS_WIDTH", false,-1, 31,0);
        tracep->declBus(c+111,"top Decode_Stage RegisterFile DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+7,"top Decode_Stage RegisterFile WE3", false,-1);
        tracep->declBus(c+3,"top Decode_Stage RegisterFile WD3", false,-1, 31,0);
        tracep->declBus(c+65,"top Decode_Stage RegisterFile AD1", false,-1, 4,0);
        tracep->declBus(c+66,"top Decode_Stage RegisterFile AD2", false,-1, 4,0);
        tracep->declBus(c+11,"top Decode_Stage RegisterFile AD3", false,-1, 4,0);
        tracep->declBus(c+80,"top Decode_Stage RegisterFile RD1", false,-1, 31,0);
        tracep->declBus(c+81,"top Decode_Stage RegisterFile RD2", false,-1, 31,0);
        tracep->declBus(c+106,"top Decode_Stage RegisterFile a0", false,-1, 31,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declBus(c+14+i*1,"top Decode_Stage RegisterFile registers", true,(i+0), 31,0);}}
        tracep->declBus(c+111,"top Decode_Stage SignExtend DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+90,"top Decode_Stage SignExtend Imm_i", false,-1, 31,7);
        tracep->declBus(c+72,"top Decode_Stage SignExtend ImmSrc", false,-1, 2,0);
        tracep->declBus(c+82,"top Decode_Stage SignExtend Imm_o", false,-1, 31,0);
        tracep->declBit(c+69,"top Decode_Stage Pipeline_RegisterD RegWriteD", false,-1);
        tracep->declBit(c+74,"top Decode_Stage Pipeline_RegisterD ResultSrcD", false,-1);
        tracep->declBit(c+73,"top Decode_Stage Pipeline_RegisterD MemWriteD", false,-1);
        tracep->declBus(c+70,"top Decode_Stage Pipeline_RegisterD ALUctrlD", false,-1, 3,0);
        tracep->declBit(c+71,"top Decode_Stage Pipeline_RegisterD ALUsrcD", false,-1);
        tracep->declBus(c+80,"top Decode_Stage Pipeline_RegisterD RD1D", false,-1, 31,0);
        tracep->declBus(c+81,"top Decode_Stage Pipeline_RegisterD RD2D", false,-1, 31,0);
        tracep->declBus(c+65,"top Decode_Stage Pipeline_RegisterD Rs1D", false,-1, 4,0);
        tracep->declBus(c+66,"top Decode_Stage Pipeline_RegisterD Rs2D", false,-1, 4,0);
        tracep->declBus(c+91,"top Decode_Stage Pipeline_RegisterD RdD", false,-1, 4,0);
        tracep->declBus(c+83,"top Decode_Stage Pipeline_RegisterD ExtImmD", false,-1, 31,0);
        tracep->declBit(c+103,"top Decode_Stage Pipeline_RegisterD clk", false,-1);
        tracep->declBit(c+96,"top Decode_Stage Pipeline_RegisterD FlushE", false,-1);
        tracep->declBit(c+79,"top Decode_Stage Pipeline_RegisterD MemTypeD", false,-1);
        tracep->declBit(c+53,"top Decode_Stage Pipeline_RegisterD RegWriteE", false,-1);
        tracep->declBit(c+60,"top Decode_Stage Pipeline_RegisterD ResultSrcE", false,-1);
        tracep->declBit(c+54,"top Decode_Stage Pipeline_RegisterD MemWriteE", false,-1);
        tracep->declBus(c+52,"top Decode_Stage Pipeline_RegisterD ALUctrlE", false,-1, 3,0);
        tracep->declBit(c+55,"top Decode_Stage Pipeline_RegisterD ALUsrcE", false,-1);
        tracep->declBus(c+50,"top Decode_Stage Pipeline_RegisterD RD1E", false,-1, 31,0);
        tracep->declBus(c+51,"top Decode_Stage Pipeline_RegisterD RD2E", false,-1, 31,0);
        tracep->declBus(c+57,"top Decode_Stage Pipeline_RegisterD Rs1E", false,-1, 4,0);
        tracep->declBus(c+58,"top Decode_Stage Pipeline_RegisterD Rs2E", false,-1, 4,0);
        tracep->declBus(c+59,"top Decode_Stage Pipeline_RegisterD RdE", false,-1, 4,0);
        tracep->declBus(c+49,"top Decode_Stage Pipeline_RegisterD ExtImmE", false,-1, 31,0);
        tracep->declBit(c+56,"top Decode_Stage Pipeline_RegisterD MemTypeE", false,-1);
        tracep->declBit(c+103,"top Execute_Stage clk", false,-1);
        tracep->declBit(c+53,"top Execute_Stage RegWriteE", false,-1);
        tracep->declBit(c+60,"top Execute_Stage ResultSrcE", false,-1);
        tracep->declBit(c+54,"top Execute_Stage MemWriteE", false,-1);
        tracep->declBus(c+52,"top Execute_Stage ALUctrlE", false,-1, 3,0);
        tracep->declBit(c+55,"top Execute_Stage ALUsrcE", false,-1);
        tracep->declBus(c+50,"top Execute_Stage RD1E", false,-1, 31,0);
        tracep->declBus(c+51,"top Execute_Stage RD2E", false,-1, 31,0);
        tracep->declBus(c+59,"top Execute_Stage RdE", false,-1, 4,0);
        tracep->declBus(c+49,"top Execute_Stage ExtImmE", false,-1, 31,0);
        tracep->declBus(c+94,"top Execute_Stage ForwardAE", false,-1, 1,0);
        tracep->declBus(c+95,"top Execute_Stage ForwardBE", false,-1, 1,0);
        tracep->declBus(c+3,"top Execute_Stage ResultW", false,-1, 31,0);
        tracep->declBit(c+56,"top Execute_Stage MemTypeE", false,-1);
        tracep->declBit(c+6,"top Execute_Stage RegWriteM", false,-1);
        tracep->declBit(c+12,"top Execute_Stage ResultSrcM", false,-1);
        tracep->declBit(c+8,"top Execute_Stage MemWriteM", false,-1);
        tracep->declBus(c+1,"top Execute_Stage ALUResultM", false,-1, 31,0);
        tracep->declBus(c+5,"top Execute_Stage WriteDataM", false,-1, 31,0);
        tracep->declBus(c+10,"top Execute_Stage RdM", false,-1, 4,0);
        tracep->declBit(c+9,"top Execute_Stage MemTypeM", false,-1);
        tracep->declBus(c+97,"top Execute_Stage SrcAE_wire", false,-1, 31,0);
        tracep->declBus(c+98,"top Execute_Stage SrcBE_wire", false,-1, 31,0);
        tracep->declBus(c+99,"top Execute_Stage SrcBE_Forwarding_wire", false,-1, 31,0);
        tracep->declBus(c+100,"top Execute_Stage Result_wire", false,-1, 31,0);
        tracep->declBus(c+111,"top Execute_Stage ALU DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+97,"top Execute_Stage ALU SrcA", false,-1, 31,0);
        tracep->declBus(c+98,"top Execute_Stage ALU SrcB", false,-1, 31,0);
        tracep->declBus(c+52,"top Execute_Stage ALU ALUControl", false,-1, 3,0);
        tracep->declBus(c+100,"top Execute_Stage ALU ALUResult", false,-1, 31,0);
        tracep->declBit(c+53,"top Execute_Stage Pipeline_RegisterE RegWriteE", false,-1);
        tracep->declBit(c+60,"top Execute_Stage Pipeline_RegisterE ResultSrcE", false,-1);
        tracep->declBit(c+54,"top Execute_Stage Pipeline_RegisterE MemWriteE", false,-1);
        tracep->declBus(c+100,"top Execute_Stage Pipeline_RegisterE ALUResultE", false,-1, 31,0);
        tracep->declBus(c+99,"top Execute_Stage Pipeline_RegisterE WriteDataE", false,-1, 31,0);
        tracep->declBus(c+59,"top Execute_Stage Pipeline_RegisterE RdE", false,-1, 4,0);
        tracep->declBit(c+103,"top Execute_Stage Pipeline_RegisterE clk", false,-1);
        tracep->declBit(c+56,"top Execute_Stage Pipeline_RegisterE MemTypeE", false,-1);
        tracep->declBit(c+6,"top Execute_Stage Pipeline_RegisterE RegWriteM", false,-1);
        tracep->declBit(c+12,"top Execute_Stage Pipeline_RegisterE ResultSrcM", false,-1);
        tracep->declBit(c+8,"top Execute_Stage Pipeline_RegisterE MemWriteM", false,-1);
        tracep->declBus(c+1,"top Execute_Stage Pipeline_RegisterE ALUResultM", false,-1, 31,0);
        tracep->declBus(c+5,"top Execute_Stage Pipeline_RegisterE WriteDataM", false,-1, 31,0);
        tracep->declBus(c+10,"top Execute_Stage Pipeline_RegisterE RdM", false,-1, 4,0);
        tracep->declBit(c+9,"top Execute_Stage Pipeline_RegisterE MemTypeM", false,-1);
        tracep->declBit(c+103,"top Memory_Stage clk", false,-1);
        tracep->declBit(c+6,"top Memory_Stage RegWriteM", false,-1);
        tracep->declBit(c+12,"top Memory_Stage ResultSrcM", false,-1);
        tracep->declBit(c+8,"top Memory_Stage MemWriteM", false,-1);
        tracep->declBus(c+1,"top Memory_Stage ALUResultM", false,-1, 31,0);
        tracep->declBus(c+5,"top Memory_Stage WriteDataM", false,-1, 31,0);
        tracep->declBus(c+10,"top Memory_Stage RdM", false,-1, 4,0);
        tracep->declBit(c+9,"top Memory_Stage MemTypeM", false,-1);
        tracep->declBit(c+7,"top Memory_Stage RegWriteW", false,-1);
        tracep->declBit(c+13,"top Memory_Stage ResultSrcW", false,-1);
        tracep->declBus(c+2,"top Memory_Stage ALUResultW", false,-1, 31,0);
        tracep->declBus(c+4,"top Memory_Stage ReadDataW", false,-1, 31,0);
        tracep->declBus(c+11,"top Memory_Stage RdW", false,-1, 4,0);
        tracep->declBus(c+110,"top Memory_Stage RD_wire", false,-1, 31,0);
        tracep->declBus(c+111,"top Memory_Stage Memory WIDTH", false,-1, 31,0);
        tracep->declBus(c+112,"top Memory_Stage Memory DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+103,"top Memory_Stage Memory clk", false,-1);
        tracep->declBit(c+8,"top Memory_Stage Memory WE", false,-1);
        tracep->declBit(c+9,"top Memory_Stage Memory MemType", false,-1);
        tracep->declBus(c+1,"top Memory_Stage Memory A", false,-1, 31,0);
        tracep->declBus(c+5,"top Memory_Stage Memory WD", false,-1, 31,0);
        tracep->declBus(c+110,"top Memory_Stage Memory RD", false,-1, 31,0);
        tracep->declBit(c+6,"top Memory_Stage Pipeline_RegisterM RegWriteM", false,-1);
        tracep->declBit(c+12,"top Memory_Stage Pipeline_RegisterM ResultSrcM", false,-1);
        tracep->declBus(c+110,"top Memory_Stage Pipeline_RegisterM ReadDataM", false,-1, 31,0);
        tracep->declBus(c+10,"top Memory_Stage Pipeline_RegisterM RdM", false,-1, 4,0);
        tracep->declBus(c+1,"top Memory_Stage Pipeline_RegisterM ALUResultM", false,-1, 31,0);
        tracep->declBit(c+103,"top Memory_Stage Pipeline_RegisterM clk", false,-1);
        tracep->declBit(c+7,"top Memory_Stage Pipeline_RegisterM RegWriteW", false,-1);
        tracep->declBit(c+13,"top Memory_Stage Pipeline_RegisterM ResultSrcW", false,-1);
        tracep->declBus(c+4,"top Memory_Stage Pipeline_RegisterM ReadDataW", false,-1, 31,0);
        tracep->declBus(c+11,"top Memory_Stage Pipeline_RegisterM RdW", false,-1, 4,0);
        tracep->declBus(c+2,"top Memory_Stage Pipeline_RegisterM ALUResultW", false,-1, 31,0);
        tracep->declBit(c+13,"top WriteBack_Stage ResultSrcW", false,-1);
        tracep->declBus(c+2,"top WriteBack_Stage ALUResultW", false,-1, 31,0);
        tracep->declBus(c+4,"top WriteBack_Stage ReadDataW", false,-1, 31,0);
        tracep->declBus(c+3,"top WriteBack_Stage ResultW", false,-1, 31,0);
        tracep->declBus(c+57,"top HazardUnit Rs1E", false,-1, 4,0);
        tracep->declBus(c+58,"top HazardUnit Rs2E", false,-1, 4,0);
        tracep->declBus(c+65,"top HazardUnit Rs1D", false,-1, 4,0);
        tracep->declBus(c+66,"top HazardUnit Rs2D", false,-1, 4,0);
        tracep->declBus(c+10,"top HazardUnit RdM", false,-1, 4,0);
        tracep->declBit(c+67,"top HazardUnit BranchD", false,-1);
        tracep->declBit(c+53,"top HazardUnit RegWriteE", false,-1);
        tracep->declBit(c+6,"top HazardUnit RegWriteM", false,-1);
        tracep->declBus(c+59,"top HazardUnit WriteRegE", false,-1, 4,0);
        tracep->declBus(c+11,"top HazardUnit RdW", false,-1, 4,0);
        tracep->declBit(c+7,"top HazardUnit RegWriteW", false,-1);
        tracep->declBit(c+60,"top HazardUnit ResultSrcE", false,-1);
        tracep->declBit(c+12,"top HazardUnit ResultSrcM", false,-1);
        tracep->declBus(c+94,"top HazardUnit ForwardAE", false,-1, 1,0);
        tracep->declBus(c+95,"top HazardUnit ForwardBE", false,-1, 1,0);
        tracep->declBit(c+107,"top HazardUnit ForwardAD", false,-1);
        tracep->declBit(c+108,"top HazardUnit ForwardBD", false,-1);
        tracep->declBit(c+92,"top HazardUnit StallF", false,-1);
        tracep->declBit(c+93,"top HazardUnit StallD", false,-1);
        tracep->declBit(c+96,"top HazardUnit FlushE", false,-1);
        tracep->declBit(c+101,"top HazardUnit BranchStall", false,-1);
        tracep->declBit(c+102,"top HazardUnit lwstall", false,-1);
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
        tracep->fullIData(oldp+1,(vlTOPp->top__DOT__ALUResultM_wire),32);
        tracep->fullIData(oldp+2,(vlTOPp->top__DOT__ALUResultW_wire),32);
        tracep->fullIData(oldp+3,(vlTOPp->top__DOT__ResultW_wire),32);
        tracep->fullIData(oldp+4,(vlTOPp->top__DOT__ReadDataW_wire),32);
        tracep->fullIData(oldp+5,(vlTOPp->top__DOT__WriteDataM_wire),32);
        tracep->fullBit(oldp+6,(vlTOPp->top__DOT__RegWriteM_wire));
        tracep->fullBit(oldp+7,(vlTOPp->top__DOT__RegWriteW_wire));
        tracep->fullBit(oldp+8,(vlTOPp->top__DOT__MemWriteM_wire));
        tracep->fullBit(oldp+9,(vlTOPp->top__DOT__MemTypeM_wire));
        tracep->fullCData(oldp+10,(vlTOPp->top__DOT__RdM_wire),5);
        tracep->fullCData(oldp+11,(vlTOPp->top__DOT__RdW_wire),5);
        tracep->fullBit(oldp+12,(vlTOPp->top__DOT__ResultSrcM_wire));
        tracep->fullBit(oldp+13,(vlTOPp->top__DOT__ResultSrcW_wire));
        tracep->fullIData(oldp+14,(vlTOPp->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[0]),32);
        tracep->fullIData(oldp+15,(vlTOPp->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[1]),32);
        tracep->fullIData(oldp+16,(vlTOPp->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[2]),32);
        tracep->fullIData(oldp+17,(vlTOPp->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[3]),32);
        tracep->fullIData(oldp+18,(vlTOPp->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[4]),32);
        tracep->fullIData(oldp+19,(vlTOPp->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[5]),32);
        tracep->fullIData(oldp+20,(vlTOPp->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[6]),32);
        tracep->fullIData(oldp+21,(vlTOPp->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[7]),32);
        tracep->fullIData(oldp+22,(vlTOPp->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[8]),32);
        tracep->fullIData(oldp+23,(vlTOPp->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[9]),32);
        tracep->fullIData(oldp+24,(vlTOPp->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[10]),32);
        tracep->fullIData(oldp+25,(vlTOPp->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[11]),32);
        tracep->fullIData(oldp+26,(vlTOPp->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[12]),32);
        tracep->fullIData(oldp+27,(vlTOPp->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[13]),32);
        tracep->fullIData(oldp+28,(vlTOPp->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[14]),32);
        tracep->fullIData(oldp+29,(vlTOPp->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[15]),32);
        tracep->fullIData(oldp+30,(vlTOPp->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[16]),32);
        tracep->fullIData(oldp+31,(vlTOPp->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[17]),32);
        tracep->fullIData(oldp+32,(vlTOPp->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[18]),32);
        tracep->fullIData(oldp+33,(vlTOPp->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[19]),32);
        tracep->fullIData(oldp+34,(vlTOPp->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[20]),32);
        tracep->fullIData(oldp+35,(vlTOPp->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[21]),32);
        tracep->fullIData(oldp+36,(vlTOPp->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[22]),32);
        tracep->fullIData(oldp+37,(vlTOPp->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[23]),32);
        tracep->fullIData(oldp+38,(vlTOPp->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[24]),32);
        tracep->fullIData(oldp+39,(vlTOPp->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[25]),32);
        tracep->fullIData(oldp+40,(vlTOPp->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[26]),32);
        tracep->fullIData(oldp+41,(vlTOPp->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[27]),32);
        tracep->fullIData(oldp+42,(vlTOPp->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[28]),32);
        tracep->fullIData(oldp+43,(vlTOPp->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[29]),32);
        tracep->fullIData(oldp+44,(vlTOPp->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[30]),32);
        tracep->fullIData(oldp+45,(vlTOPp->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[31]),32);
        tracep->fullIData(oldp+46,(vlTOPp->top__DOT__Fetch_Stage__DOT__PCF_wire),32);
        tracep->fullIData(oldp+47,(((IData)(4U) + vlTOPp->top__DOT__Fetch_Stage__DOT__PCF_wire)),32);
        tracep->fullIData(oldp+48,(vlTOPp->top__DOT__Fetch_Stage__DOT__InstrF_wire),32);
        tracep->fullIData(oldp+49,(vlTOPp->top__DOT__ExtImmE_wire),32);
        tracep->fullIData(oldp+50,(vlTOPp->top__DOT__RD1E_wire),32);
        tracep->fullIData(oldp+51,(vlTOPp->top__DOT__RD2E_wire),32);
        tracep->fullCData(oldp+52,(vlTOPp->top__DOT__ALUctrlE_wire),4);
        tracep->fullBit(oldp+53,(vlTOPp->top__DOT__RegWriteE_wire));
        tracep->fullBit(oldp+54,(vlTOPp->top__DOT__MemWriteE_wire));
        tracep->fullBit(oldp+55,(vlTOPp->top__DOT__ALUsrcE_wire));
        tracep->fullBit(oldp+56,(vlTOPp->top__DOT__MemTypeE_wire));
        tracep->fullCData(oldp+57,(vlTOPp->top__DOT__Rs1E_wire),5);
        tracep->fullCData(oldp+58,(vlTOPp->top__DOT__Rs2E_wire),5);
        tracep->fullCData(oldp+59,(vlTOPp->top__DOT__RdE_wire),5);
        tracep->fullBit(oldp+60,(vlTOPp->top__DOT__ResultSrcE_wire));
        tracep->fullIData(oldp+61,(vlTOPp->top__DOT__InstrD_wire),32);
        tracep->fullIData(oldp+62,(((IData)(vlTOPp->top__DOT__Decode_Stage__DOT__JRetSrc_wire)
                                     ? vlTOPp->top__DOT__Decode_Stage__DOT__RD1D_wire
                                     : ((IData)(vlTOPp->top__DOT__BranchD_wire)
                                         ? (vlTOPp->top__DOT__Decode_Stage__DOT__ExtImmD_wire 
                                            + (vlTOPp->top__DOT__PCPlus4D_wire 
                                               - (IData)(4U)))
                                         : (vlTOPp->top__DOT__Decode_Stage__DOT__ExtImmD_wire 
                                            + (vlTOPp->top__DOT__PCPlus4D_wire 
                                               - (IData)(8U)))))),32);
        tracep->fullIData(oldp+63,(vlTOPp->top__DOT__PCPlus4D_wire),32);
        tracep->fullBit(oldp+64,(vlTOPp->top__DOT__PCSrcD_wire));
        tracep->fullCData(oldp+65,((0x1fU & (vlTOPp->top__DOT__InstrD_wire 
                                             >> 0xfU))),5);
        tracep->fullCData(oldp+66,((0x1fU & (vlTOPp->top__DOT__InstrD_wire 
                                             >> 0x14U))),5);
        tracep->fullBit(oldp+67,(vlTOPp->top__DOT__BranchD_wire));
        tracep->fullBit(oldp+68,(vlTOPp->top__DOT__Fetch_Stage__DOT__FlushD));
        tracep->fullBit(oldp+69,(vlTOPp->top__DOT__Decode_Stage__DOT__RegWrite_wire));
        tracep->fullCData(oldp+70,(vlTOPp->top__DOT__Decode_Stage__DOT__ALUctrl_wire),4);
        tracep->fullBit(oldp+71,(vlTOPp->top__DOT__Decode_Stage__DOT__ALUSrc_wire));
        tracep->fullCData(oldp+72,(vlTOPp->top__DOT__Decode_Stage__DOT__ImmSrc_wire),3);
        tracep->fullBit(oldp+73,(vlTOPp->top__DOT__Decode_Stage__DOT__MemWrite_wire));
        tracep->fullBit(oldp+74,(vlTOPp->top__DOT__Decode_Stage__DOT__ResultSrc_wire));
        tracep->fullBit(oldp+75,(vlTOPp->top__DOT__Decode_Stage__DOT__JumpSrc_wire));
        tracep->fullBit(oldp+76,(vlTOPp->top__DOT__Decode_Stage__DOT__JRetSrc_wire));
        tracep->fullBit(oldp+77,(vlTOPp->top__DOT__Decode_Stage__DOT__BEQ_wire));
        tracep->fullBit(oldp+78,(vlTOPp->top__DOT__Decode_Stage__DOT__BNE_wire));
        tracep->fullBit(oldp+79,(vlTOPp->top__DOT__Decode_Stage__DOT__MemType_wire));
        tracep->fullIData(oldp+80,(vlTOPp->top__DOT__Decode_Stage__DOT__RD1D_wire),32);
        tracep->fullIData(oldp+81,(vlTOPp->top__DOT__Decode_Stage__DOT__RD2D_wire),32);
        tracep->fullIData(oldp+82,(vlTOPp->top__DOT__Decode_Stage__DOT__ExtImmD_wire),32);
        tracep->fullIData(oldp+83,(((IData)(vlTOPp->top__DOT__Decode_Stage__DOT__JumpSrc_wire)
                                     ? (vlTOPp->top__DOT__PCPlus4D_wire 
                                        - (IData)(4U))
                                     : vlTOPp->top__DOT__Decode_Stage__DOT__ExtImmD_wire)),32);
        tracep->fullIData(oldp+84,(vlTOPp->top__DOT__Decode_Stage__DOT__ForwardAD_MUX),32);
        tracep->fullIData(oldp+85,(vlTOPp->top__DOT__Decode_Stage__DOT__ForwardBD_MUX),32);
        tracep->fullCData(oldp+86,((0x7fU & vlTOPp->top__DOT__InstrD_wire)),7);
        tracep->fullCData(oldp+87,((7U & (vlTOPp->top__DOT__InstrD_wire 
                                          >> 0xcU))),3);
        tracep->fullBit(oldp+88,((1U & (vlTOPp->top__DOT__InstrD_wire 
                                        >> 0x1eU))));
        tracep->fullCData(oldp+89,(vlTOPp->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O),7);
        tracep->fullIData(oldp+90,((0x1ffffffU & (vlTOPp->top__DOT__InstrD_wire 
                                                  >> 7U))),25);
        tracep->fullCData(oldp+91,((0x1fU & (vlTOPp->top__DOT__InstrD_wire 
                                             >> 7U))),5);
        tracep->fullBit(oldp+92,(vlTOPp->top__DOT__StallF_wire));
        tracep->fullBit(oldp+93,(vlTOPp->top__DOT__StallD_wire));
        tracep->fullCData(oldp+94,(vlTOPp->top__DOT__ForwardAE_wire),2);
        tracep->fullCData(oldp+95,(vlTOPp->top__DOT__ForwardBE_wire),2);
        tracep->fullBit(oldp+96,(vlTOPp->top__DOT__FlushE_wire));
        tracep->fullIData(oldp+97,(vlTOPp->top__DOT__Execute_Stage__DOT__SrcAE_wire),32);
        tracep->fullIData(oldp+98,(vlTOPp->top__DOT__Execute_Stage__DOT__SrcBE_wire),32);
        tracep->fullIData(oldp+99,(vlTOPp->top__DOT__Execute_Stage__DOT__SrcBE_Forwarding_wire),32);
        tracep->fullIData(oldp+100,(vlTOPp->top__DOT__Execute_Stage__DOT__Result_wire),32);
        tracep->fullBit(oldp+101,(vlTOPp->top__DOT__HazardUnit__DOT__BranchStall));
        tracep->fullBit(oldp+102,(vlTOPp->top__DOT__HazardUnit__DOT__lwstall));
        tracep->fullBit(oldp+103,(vlTOPp->clk));
        tracep->fullBit(oldp+104,(vlTOPp->reset));
        tracep->fullBit(oldp+105,(vlTOPp->trigger));
        tracep->fullIData(oldp+106,(vlTOPp->a0),32);
        tracep->fullBit(oldp+107,((((0U != (0x1fU & 
                                            (vlTOPp->top__DOT__InstrD_wire 
                                             >> 0xfU))) 
                                    & ((0x1fU & (vlTOPp->top__DOT__InstrD_wire 
                                                 >> 0xfU)) 
                                       == (IData)(vlTOPp->top__DOT__RdM_wire))) 
                                   & (IData)(vlTOPp->top__DOT__RegWriteM_wire))));
        tracep->fullBit(oldp+108,((((0U != (0x1fU & 
                                            (vlTOPp->top__DOT__InstrD_wire 
                                             >> 0x14U))) 
                                    & ((0x1fU & (vlTOPp->top__DOT__InstrD_wire 
                                                 >> 0x14U)) 
                                       == (IData)(vlTOPp->top__DOT__RdM_wire))) 
                                   & (IData)(vlTOPp->top__DOT__RegWriteM_wire))));
        tracep->fullIData(oldp+109,(((IData)(vlTOPp->trigger)
                                      ? ((IData)(vlTOPp->top__DOT__PCSrcD_wire)
                                          ? ((IData)(vlTOPp->top__DOT__Decode_Stage__DOT__JRetSrc_wire)
                                              ? vlTOPp->top__DOT__Decode_Stage__DOT__RD1D_wire
                                              : ((IData)(vlTOPp->top__DOT__BranchD_wire)
                                                  ? 
                                                 (vlTOPp->top__DOT__Decode_Stage__DOT__ExtImmD_wire 
                                                  + 
                                                  (vlTOPp->top__DOT__PCPlus4D_wire 
                                                   - (IData)(4U)))
                                                  : 
                                                 (vlTOPp->top__DOT__Decode_Stage__DOT__ExtImmD_wire 
                                                  + 
                                                  (vlTOPp->top__DOT__PCPlus4D_wire 
                                                   - (IData)(8U)))))
                                          : ((IData)(4U) 
                                             + vlTOPp->top__DOT__Fetch_Stage__DOT__PCF_wire))
                                      : 0U)),32);
        tracep->fullIData(oldp+110,(((IData)(vlTOPp->top__DOT__MemTypeM_wire)
                                      ? vlTOPp->top__DOT__Memory_Stage__DOT__Memory__DOT__DataMemory_array
                                     [(0x1ffffU & vlTOPp->top__DOT__ALUResultM_wire)]
                                      : ((vlTOPp->top__DOT__Memory_Stage__DOT__Memory__DOT__DataMemory_array
                                          [(0x1ffffU 
                                            & ((IData)(3U) 
                                               + vlTOPp->top__DOT__ALUResultM_wire))] 
                                          << 0x18U) 
                                         | ((vlTOPp->top__DOT__Memory_Stage__DOT__Memory__DOT__DataMemory_array
                                             [(0x1ffffU 
                                               & ((IData)(2U) 
                                                  + vlTOPp->top__DOT__ALUResultM_wire))] 
                                             << 0x10U) 
                                            | ((vlTOPp->top__DOT__Memory_Stage__DOT__Memory__DOT__DataMemory_array
                                                [(0x1ffffU 
                                                  & ((IData)(1U) 
                                                     + vlTOPp->top__DOT__ALUResultM_wire))] 
                                                << 8U) 
                                               | vlTOPp->top__DOT__Memory_Stage__DOT__Memory__DOT__DataMemory_array
                                               [(0x1ffffU 
                                                 & vlTOPp->top__DOT__ALUResultM_wire)]))))),32);
        tracep->fullIData(oldp+111,(0x20U),32);
        tracep->fullIData(oldp+112,(8U),32);
        tracep->fullIData(oldp+113,(5U),32);
    }
}
