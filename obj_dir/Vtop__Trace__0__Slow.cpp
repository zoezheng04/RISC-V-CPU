// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+118,"clk", false,-1);
    tracep->declBit(c+119,"reset", false,-1);
    tracep->declBit(c+120,"trigger", false,-1);
    tracep->declBus(c+121,"a0", false,-1, 31,0);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+118,"clk", false,-1);
    tracep->declBit(c+119,"reset", false,-1);
    tracep->declBit(c+120,"trigger", false,-1);
    tracep->declBus(c+121,"a0", false,-1, 31,0);
    tracep->declBus(c+10,"InstrD_wire", false,-1, 31,0);
    tracep->declBus(c+11,"ExtImmE_wire", false,-1, 31,0);
    tracep->declBus(c+12,"ALUResultM_wire", false,-1, 31,0);
    tracep->declBus(c+13,"ALUResultW_wire", false,-1, 31,0);
    tracep->declBus(c+14,"ResultW_wire", false,-1, 31,0);
    tracep->declBus(c+15,"PCBranchD_wire", false,-1, 31,0);
    tracep->declBus(c+16,"ReadDataW_wire", false,-1, 31,0);
    tracep->declBus(c+17,"PCPlus4D_wire", false,-1, 31,0);
    tracep->declBus(c+18,"WriteDataM_wire", false,-1, 31,0);
    tracep->declBus(c+19,"RD1E_wire", false,-1, 31,0);
    tracep->declBus(c+20,"RD2E_wire", false,-1, 31,0);
    tracep->declBus(c+21,"ALUctrlE_wire", false,-1, 3,0);
    tracep->declBit(c+22,"RegWriteE_wire", false,-1);
    tracep->declBit(c+23,"RegWriteM_wire", false,-1);
    tracep->declBit(c+24,"RegWriteW_wire", false,-1);
    tracep->declBit(c+25,"StallF_wire", false,-1);
    tracep->declBit(c+26,"StallPC_wire", false,-1);
    tracep->declBus(c+27,"ForwardAE_wire", false,-1, 1,0);
    tracep->declBus(c+28,"ForwardBE_wire", false,-1, 1,0);
    tracep->declBit(c+29,"MemWriteE_wire", false,-1);
    tracep->declBit(c+30,"MemWriteM_wire", false,-1);
    tracep->declBit(c+31,"ForwardAD_wire", false,-1);
    tracep->declBit(c+32,"ForwardBD_wire", false,-1);
    tracep->declBit(c+33,"PCSrcD_wire", false,-1);
    tracep->declBit(c+34,"ALUsrcE_wire", false,-1);
    tracep->declBit(c+35,"MemTypeE_wire", false,-1);
    tracep->declBit(c+36,"MemTypeM_wire", false,-1);
    tracep->declBus(c+37,"Rs1E_wire", false,-1, 4,0);
    tracep->declBus(c+38,"Rs2E_wire", false,-1, 4,0);
    tracep->declBus(c+39,"RdE_wire", false,-1, 4,0);
    tracep->declBus(c+40,"RdM_wire", false,-1, 4,0);
    tracep->declBus(c+41,"RdW_wire", false,-1, 4,0);
    tracep->declBus(c+42,"Rs1D_wire", false,-1, 4,0);
    tracep->declBus(c+43,"Rs2D_wire", false,-1, 4,0);
    tracep->declBit(c+44,"ResultSrcE_wire", false,-1);
    tracep->declBit(c+45,"ResultSrcM_wire", false,-1);
    tracep->declBit(c+46,"ResultSrcW_wire", false,-1);
    tracep->declBit(c+47,"BranchD_wire", false,-1);
    tracep->declBit(c+48,"FlushD_wire", false,-1);
    tracep->pushNamePrefix("Decode_Stage ");
    tracep->declBit(c+118,"clk", false,-1);
    tracep->declBit(c+48,"FlushD", false,-1);
    tracep->declBus(c+10,"InstrD", false,-1, 31,0);
    tracep->declBus(c+17,"PCPlus4D", false,-1, 31,0);
    tracep->declBit(c+24,"RegWriteW", false,-1);
    tracep->declBus(c+41,"RdW", false,-1, 4,0);
    tracep->declBus(c+14,"ResultW", false,-1, 31,0);
    tracep->declBus(c+12,"ALUOutM", false,-1, 31,0);
    tracep->declBit(c+31,"ForwardAD", false,-1);
    tracep->declBit(c+32,"ForwardBD", false,-1);
    tracep->declBit(c+22,"RegWriteE", false,-1);
    tracep->declBit(c+44,"ResultSrcE", false,-1);
    tracep->declBit(c+29,"MemWriteE", false,-1);
    tracep->declBit(c+33,"PCSrcD", false,-1);
    tracep->declBus(c+21,"ALUctrlE", false,-1, 3,0);
    tracep->declBit(c+34,"ALUsrcE", false,-1);
    tracep->declBus(c+19,"RD1E", false,-1, 31,0);
    tracep->declBus(c+20,"RD2E", false,-1, 31,0);
    tracep->declBus(c+37,"Rs1E", false,-1, 4,0);
    tracep->declBus(c+38,"Rs2E", false,-1, 4,0);
    tracep->declBus(c+42,"Rs1D", false,-1, 4,0);
    tracep->declBus(c+43,"Rs2D", false,-1, 4,0);
    tracep->declBus(c+39,"RdE", false,-1, 4,0);
    tracep->declBus(c+11,"ExtImmE", false,-1, 31,0);
    tracep->declBus(c+15,"PCBranchD", false,-1, 31,0);
    tracep->declBit(c+47,"BranchD", false,-1);
    tracep->declBit(c+35,"MemTypeE", false,-1);
    tracep->declBus(c+121,"a0", false,-1, 31,0);
    tracep->declBit(c+49,"RegWrite_wire", false,-1);
    tracep->declBus(c+50,"ALUctrl_wire", false,-1, 3,0);
    tracep->declBit(c+51,"ALUSrc_wire", false,-1);
    tracep->declBus(c+52,"ImmSrc_wire", false,-1, 2,0);
    tracep->declBit(c+53,"MemWrite_wire", false,-1);
    tracep->declBit(c+54,"ResultSrc_wire", false,-1);
    tracep->declBit(c+55,"JumpSrc_wire", false,-1);
    tracep->declBit(c+56,"JRetSrc_wire", false,-1);
    tracep->declBit(c+57,"BEQ_wire", false,-1);
    tracep->declBit(c+58,"BNE_wire", false,-1);
    tracep->declBit(c+59,"MemType_wire", false,-1);
    tracep->declBus(c+60,"RD1D_wire", false,-1, 31,0);
    tracep->declBus(c+61,"RD2D_wire", false,-1, 31,0);
    tracep->declBus(c+62,"ExtImmD_wire", false,-1, 31,0);
    tracep->declBus(c+63,"ExtImmDReg_wire", false,-1, 31,0);
    tracep->declBus(c+64,"ForwardAD_MUX", false,-1, 31,0);
    tracep->declBus(c+65,"ForwardBD_MUX", false,-1, 31,0);
    tracep->pushNamePrefix("ControlUnit ");
    tracep->declBus(c+66,"opcode", false,-1, 6,0);
    tracep->declBus(c+67,"funct3", false,-1, 2,0);
    tracep->declBit(c+68,"funct7", false,-1);
    tracep->declBit(c+49,"RegWrite", false,-1);
    tracep->declBus(c+50,"ALUctrl", false,-1, 3,0);
    tracep->declBit(c+51,"ALUsrc", false,-1);
    tracep->declBus(c+52,"ImmSrc", false,-1, 2,0);
    tracep->declBit(c+53,"MemWrite", false,-1);
    tracep->declBit(c+54,"ResultSrc", false,-1);
    tracep->declBit(c+55,"JumpSrc", false,-1);
    tracep->declBit(c+56,"JRetSrc", false,-1);
    tracep->declBit(c+57,"BEQ", false,-1);
    tracep->declBit(c+58,"BNE", false,-1);
    tracep->declBit(c+59,"MemType", false,-1);
    tracep->declBus(c+69,"opfunct7", false,-1, 1,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+70,"Type_O", false,-1, 6,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Pipeline_RegisterD ");
    tracep->declBit(c+49,"RegWriteD", false,-1);
    tracep->declBit(c+54,"ResultSrcD", false,-1);
    tracep->declBit(c+53,"MemWriteD", false,-1);
    tracep->declBus(c+50,"ALUctrlD", false,-1, 3,0);
    tracep->declBit(c+51,"ALUsrcD", false,-1);
    tracep->declBus(c+60,"RD1D", false,-1, 31,0);
    tracep->declBus(c+61,"RD2D", false,-1, 31,0);
    tracep->declBus(c+42,"Rs1D", false,-1, 4,0);
    tracep->declBus(c+43,"Rs2D", false,-1, 4,0);
    tracep->declBus(c+71,"RdD", false,-1, 4,0);
    tracep->declBus(c+63,"ExtImmD", false,-1, 31,0);
    tracep->declBit(c+118,"clk", false,-1);
    tracep->declBit(c+48,"FlushD", false,-1);
    tracep->declBit(c+59,"MemTypeD", false,-1);
    tracep->declBit(c+22,"RegWriteE", false,-1);
    tracep->declBit(c+44,"ResultSrcE", false,-1);
    tracep->declBit(c+29,"MemWriteE", false,-1);
    tracep->declBus(c+21,"ALUctrlE", false,-1, 3,0);
    tracep->declBit(c+34,"ALUsrcE", false,-1);
    tracep->declBus(c+19,"RD1E", false,-1, 31,0);
    tracep->declBus(c+20,"RD2E", false,-1, 31,0);
    tracep->declBus(c+37,"Rs1E", false,-1, 4,0);
    tracep->declBus(c+38,"Rs2E", false,-1, 4,0);
    tracep->declBus(c+39,"RdE", false,-1, 4,0);
    tracep->declBus(c+11,"ExtImmE", false,-1, 31,0);
    tracep->declBit(c+35,"MemTypeE", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RegisterFile ");
    tracep->declBus(c+125,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+126,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+24,"WE3", false,-1);
    tracep->declBus(c+14,"WD3", false,-1, 31,0);
    tracep->declBus(c+42,"AD1", false,-1, 4,0);
    tracep->declBus(c+43,"AD2", false,-1, 4,0);
    tracep->declBus(c+41,"AD3", false,-1, 4,0);
    tracep->declBus(c+60,"RD1", false,-1, 31,0);
    tracep->declBus(c+61,"RD2", false,-1, 31,0);
    tracep->declBus(c+121,"a0", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+72+i*1,"registers", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SignExtend ");
    tracep->declBus(c+126,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+104,"Imm_i", false,-1, 31,7);
    tracep->declBus(c+52,"ImmSrc", false,-1, 2,0);
    tracep->declBus(c+62,"Imm_o", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Execute_Stage ");
    tracep->declBit(c+118,"clk", false,-1);
    tracep->declBit(c+22,"RegWriteE", false,-1);
    tracep->declBit(c+44,"ResultSrcE", false,-1);
    tracep->declBit(c+29,"MemWriteE", false,-1);
    tracep->declBus(c+21,"ALUctrlE", false,-1, 3,0);
    tracep->declBit(c+34,"ALUsrcE", false,-1);
    tracep->declBus(c+19,"RD1E", false,-1, 31,0);
    tracep->declBus(c+20,"RD2E", false,-1, 31,0);
    tracep->declBus(c+39,"RdE", false,-1, 4,0);
    tracep->declBus(c+11,"ExtImmE", false,-1, 31,0);
    tracep->declBus(c+27,"ForwardAE", false,-1, 1,0);
    tracep->declBus(c+28,"ForwardBE", false,-1, 1,0);
    tracep->declBus(c+14,"ResultW", false,-1, 31,0);
    tracep->declBit(c+35,"MemTypeE", false,-1);
    tracep->declBit(c+23,"RegWriteM", false,-1);
    tracep->declBit(c+45,"ResultSrcM", false,-1);
    tracep->declBit(c+30,"MemWriteM", false,-1);
    tracep->declBus(c+12,"ALUResultM", false,-1, 31,0);
    tracep->declBus(c+18,"WriteDataM", false,-1, 31,0);
    tracep->declBus(c+40,"RdM", false,-1, 4,0);
    tracep->declBit(c+36,"MemTypeM", false,-1);
    tracep->declBus(c+105,"SrcAE_wire", false,-1, 31,0);
    tracep->declBus(c+106,"SrcBE_wire", false,-1, 31,0);
    tracep->declBus(c+107,"SrcBE_Forwarding_wire", false,-1, 31,0);
    tracep->declBus(c+108,"Result_wire", false,-1, 31,0);
    tracep->pushNamePrefix("ALU ");
    tracep->declBus(c+126,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+105,"SrcA", false,-1, 31,0);
    tracep->declBus(c+106,"SrcB", false,-1, 31,0);
    tracep->declBus(c+21,"ALUControl", false,-1, 3,0);
    tracep->declBus(c+108,"ALUResult", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Pipeline_RegisterE ");
    tracep->declBit(c+22,"RegWriteE", false,-1);
    tracep->declBit(c+44,"ResultSrcE", false,-1);
    tracep->declBit(c+29,"MemWriteE", false,-1);
    tracep->declBus(c+108,"ALUResultE", false,-1, 31,0);
    tracep->declBus(c+107,"WriteDataE", false,-1, 31,0);
    tracep->declBus(c+39,"RdE", false,-1, 4,0);
    tracep->declBit(c+118,"clk", false,-1);
    tracep->declBit(c+35,"MemTypeE", false,-1);
    tracep->declBit(c+23,"RegWriteM", false,-1);
    tracep->declBit(c+45,"ResultSrcM", false,-1);
    tracep->declBit(c+30,"MemWriteM", false,-1);
    tracep->declBus(c+12,"ALUResultM", false,-1, 31,0);
    tracep->declBus(c+18,"WriteDataM", false,-1, 31,0);
    tracep->declBus(c+40,"RdM", false,-1, 4,0);
    tracep->declBit(c+36,"MemTypeM", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Fetch_Stage ");
    tracep->declBit(c+118,"clk", false,-1);
    tracep->declBit(c+119,"reset", false,-1);
    tracep->declBit(c+120,"trigger", false,-1);
    tracep->declBit(c+26,"StallPC", false,-1);
    tracep->declBit(c+25,"StallF", false,-1);
    tracep->declBus(c+15,"PCBranchD", false,-1, 31,0);
    tracep->declBit(c+47,"BranchD", false,-1);
    tracep->declBit(c+33,"PCSrcD", false,-1);
    tracep->declBus(c+10,"InstrD", false,-1, 31,0);
    tracep->declBus(c+17,"PCPlus4D", false,-1, 31,0);
    tracep->declBus(c+114,"PCF_wire", false,-1, 31,0);
    tracep->declBus(c+122,"PCNext_wire", false,-1, 31,0);
    tracep->declBus(c+115,"PCPlus4F_wire", false,-1, 31,0);
    tracep->declBus(c+116,"InstrF_wire", false,-1, 31,0);
    tracep->pushNamePrefix("Instruction_Memory ");
    tracep->declBus(c+126,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+127,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+114,"addr", false,-1, 31,0);
    tracep->declBus(c+116,"dout", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Pipeline_RegisterF ");
    tracep->declBus(c+116,"InstrF", false,-1, 31,0);
    tracep->declBus(c+115,"PCPlus4F", false,-1, 31,0);
    tracep->declBit(c+118,"clk", false,-1);
    tracep->declBit(c+25,"Stall", false,-1);
    tracep->declBus(c+10,"InstrD", false,-1, 31,0);
    tracep->declBus(c+17,"PCPlus4D", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ProgramCounter ");
    tracep->declBus(c+126,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+118,"clk", false,-1);
    tracep->declBit(c+119,"rst", false,-1);
    tracep->declBus(c+122,"PCNext", false,-1, 31,0);
    tracep->declBit(c+26,"Stall", false,-1);
    tracep->declBus(c+114,"PC", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("HazardUnit ");
    tracep->declBus(c+37,"Rs1E", false,-1, 4,0);
    tracep->declBus(c+38,"Rs2E", false,-1, 4,0);
    tracep->declBus(c+42,"Rs1D", false,-1, 4,0);
    tracep->declBus(c+43,"Rs2D", false,-1, 4,0);
    tracep->declBus(c+40,"RdM", false,-1, 4,0);
    tracep->declBit(c+47,"BranchD", false,-1);
    tracep->declBit(c+22,"RegWriteE", false,-1);
    tracep->declBit(c+23,"RegWriteM", false,-1);
    tracep->declBus(c+39,"WriteRegE", false,-1, 4,0);
    tracep->declBus(c+41,"RdW", false,-1, 4,0);
    tracep->declBit(c+24,"RegWriteW", false,-1);
    tracep->declBit(c+44,"ResultSrcE", false,-1);
    tracep->declBit(c+45,"ResultSrcM", false,-1);
    tracep->declBus(c+27,"ForwardAE", false,-1, 1,0);
    tracep->declBus(c+28,"ForwardBE", false,-1, 1,0);
    tracep->declBit(c+31,"ForwardAD", false,-1);
    tracep->declBit(c+32,"ForwardBD", false,-1);
    tracep->declBit(c+25,"StallF", false,-1);
    tracep->declBit(c+26,"StallPC", false,-1);
    tracep->declBit(c+48,"FlushD", false,-1);
    tracep->declBit(c+109,"BranchStall", false,-1);
    tracep->declBit(c+110,"lwstall", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Memory_Stage ");
    tracep->declBit(c+118,"clk", false,-1);
    tracep->declBit(c+23,"RegWriteM", false,-1);
    tracep->declBit(c+45,"ResultSrcM", false,-1);
    tracep->declBit(c+30,"MemWriteM", false,-1);
    tracep->declBus(c+12,"ALUResultM", false,-1, 31,0);
    tracep->declBus(c+18,"WriteDataM", false,-1, 31,0);
    tracep->declBus(c+40,"RdM", false,-1, 4,0);
    tracep->declBit(c+36,"MemTypeM", false,-1);
    tracep->declBit(c+24,"RegWriteW", false,-1);
    tracep->declBit(c+46,"ResultSrcW", false,-1);
    tracep->declBus(c+13,"ALUResultW", false,-1, 31,0);
    tracep->declBus(c+16,"ReadDataW", false,-1, 31,0);
    tracep->declBus(c+41,"RdW", false,-1, 4,0);
    tracep->declBus(c+123,"RD_wire", false,-1, 31,0);
    tracep->pushNamePrefix("Pipeline_RegisterM ");
    tracep->declBit(c+23,"RegWriteM", false,-1);
    tracep->declBit(c+45,"ResultSrcM", false,-1);
    tracep->declBus(c+123,"ReadDataM", false,-1, 31,0);
    tracep->declBus(c+40,"RdM", false,-1, 4,0);
    tracep->declBus(c+12,"ALUResultM", false,-1, 31,0);
    tracep->declBit(c+118,"clk", false,-1);
    tracep->declBit(c+24,"RegWriteW", false,-1);
    tracep->declBit(c+46,"ResultSrcW", false,-1);
    tracep->declBus(c+16,"ReadDataW", false,-1, 31,0);
    tracep->declBus(c+41,"RdW", false,-1, 4,0);
    tracep->declBus(c+13,"ALUResultW", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("memory ");
    tracep->declBus(c+126,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+128,"TAG_WIDTH", false,-1, 31,0);
    tracep->declBus(c+129,"SET_WIDTH", false,-1, 31,0);
    tracep->declBus(c+130,"OFFSET_WIDTH", false,-1, 31,0);
    tracep->declBus(c+127,"CACHE_WIDTH", false,-1, 31,0);
    tracep->declBit(c+118,"clk", false,-1);
    tracep->declBus(c+12,"addr", false,-1, 31,0);
    tracep->declBus(c+18,"Write_Data", false,-1, 31,0);
    tracep->declBit(c+30,"WE", false,-1);
    tracep->declBit(c+36,"MemType", false,-1);
    tracep->declBus(c+123,"Data_o", false,-1, 31,0);
    tracep->declBus(c+124,"mem_data", false,-1, 31,0);
    tracep->declBus(c+117,"cache_data_wire", false,-1, 31,0);
    tracep->declBit(c+131,"overwrite_wire", false,-1);
    tracep->declBit(c+111,"hit", false,-1);
    tracep->pushNamePrefix("cache ");
    tracep->declBus(c+126,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+128,"TAG_WIDTH", false,-1, 31,0);
    tracep->declBus(c+129,"SET_WIDTH", false,-1, 31,0);
    tracep->declBus(c+130,"OFFSET_WIDTH", false,-1, 31,0);
    tracep->declBus(c+127,"CACHE_SIZE", false,-1, 31,0);
    tracep->declBit(c+118,"clk", false,-1);
    tracep->declBit(c+131,"overwrite", false,-1);
    tracep->declBus(c+12,"address", false,-1, 31,0);
    tracep->declBus(c+124,"wr_data", false,-1, 31,0);
    tracep->declBus(c+117,"cache_data", false,-1, 31,0);
    tracep->declBit(c+111,"cache_hit", false,-1);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+132+i*1,"data", true,(i+0), 31,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+140+i*1,"tag", true,(i+0), 26,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBit(c+1+i*1,"V", true,(i+0));
    }
    tracep->declBus(c+112,"data_set", false,-1, 2,0);
    tracep->declBus(c+113,"data_tag", false,-1, 26,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+9,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("main_memory ");
    tracep->declBus(c+126,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+127,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+118,"clk", false,-1);
    tracep->declBit(c+30,"WE", false,-1);
    tracep->declBit(c+36,"MemType", false,-1);
    tracep->declBus(c+12,"A", false,-1, 31,0);
    tracep->declBus(c+18,"WD", false,-1, 31,0);
    tracep->declBus(c+124,"RD", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("WriteBack_Stage ");
    tracep->declBit(c+46,"ResultSrcW", false,-1);
    tracep->declBus(c+13,"ALUResultW", false,-1, 31,0);
    tracep->declBus(c+16,"ReadDataW", false,-1, 31,0);
    tracep->declBus(c+14,"ResultW", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__V[0]));
    bufp->fullBit(oldp+2,(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__V[1]));
    bufp->fullBit(oldp+3,(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__V[2]));
    bufp->fullBit(oldp+4,(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__V[3]));
    bufp->fullBit(oldp+5,(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__V[4]));
    bufp->fullBit(oldp+6,(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__V[5]));
    bufp->fullBit(oldp+7,(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__V[6]));
    bufp->fullBit(oldp+8,(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__V[7]));
    bufp->fullIData(oldp+9,(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+10,(vlSelf->top__DOT__InstrD_wire),32);
    bufp->fullIData(oldp+11,(vlSelf->top__DOT__ExtImmE_wire),32);
    bufp->fullIData(oldp+12,(vlSelf->top__DOT__ALUResultM_wire),32);
    bufp->fullIData(oldp+13,(vlSelf->top__DOT__ALUResultW_wire),32);
    bufp->fullIData(oldp+14,(vlSelf->top__DOT__ResultW_wire),32);
    bufp->fullIData(oldp+15,(((IData)(vlSelf->top__DOT__Decode_Stage__DOT__JRetSrc_wire)
                               ? vlSelf->top__DOT__Decode_Stage__DOT__RD1D_wire
                               : (vlSelf->top__DOT__Decode_Stage__DOT__ExtImmD_wire 
                                  + (vlSelf->top__DOT__PCPlus4D_wire 
                                     - (IData)(4U))))),32);
    bufp->fullIData(oldp+16,(vlSelf->top__DOT__ReadDataW_wire),32);
    bufp->fullIData(oldp+17,(vlSelf->top__DOT__PCPlus4D_wire),32);
    bufp->fullIData(oldp+18,(vlSelf->top__DOT__WriteDataM_wire),32);
    bufp->fullIData(oldp+19,(vlSelf->top__DOT__RD1E_wire),32);
    bufp->fullIData(oldp+20,(vlSelf->top__DOT__RD2E_wire),32);
    bufp->fullCData(oldp+21,(vlSelf->top__DOT__ALUctrlE_wire),4);
    bufp->fullBit(oldp+22,(vlSelf->top__DOT__RegWriteE_wire));
    bufp->fullBit(oldp+23,(vlSelf->top__DOT__RegWriteM_wire));
    bufp->fullBit(oldp+24,(vlSelf->top__DOT__RegWriteW_wire));
    bufp->fullBit(oldp+25,(vlSelf->top__DOT__StallF_wire));
    bufp->fullBit(oldp+26,(vlSelf->top__DOT__StallPC_wire));
    bufp->fullCData(oldp+27,(vlSelf->top__DOT__ForwardAE_wire),2);
    bufp->fullCData(oldp+28,(vlSelf->top__DOT__ForwardBE_wire),2);
    bufp->fullBit(oldp+29,(vlSelf->top__DOT__MemWriteE_wire));
    bufp->fullBit(oldp+30,(vlSelf->top__DOT__MemWriteM_wire));
    bufp->fullBit(oldp+31,((((0U != (0x1fU & (vlSelf->top__DOT__InstrD_wire 
                                              >> 0xfU))) 
                             & ((0x1fU & (vlSelf->top__DOT__InstrD_wire 
                                          >> 0xfU)) 
                                == (IData)(vlSelf->top__DOT__RdM_wire))) 
                            & (IData)(vlSelf->top__DOT__RegWriteM_wire))));
    bufp->fullBit(oldp+32,((((0U != (0x1fU & (vlSelf->top__DOT__InstrD_wire 
                                              >> 0x14U))) 
                             & ((0x1fU & (vlSelf->top__DOT__InstrD_wire 
                                          >> 0x14U)) 
                                == (IData)(vlSelf->top__DOT__RdM_wire))) 
                            & (IData)(vlSelf->top__DOT__RegWriteM_wire))));
    bufp->fullBit(oldp+33,(((IData)(vlSelf->top__DOT__Decode_Stage__DOT__BNE_wire)
                             ? (vlSelf->top__DOT__Decode_Stage__DOT__ForwardAD_MUX 
                                != vlSelf->top__DOT__Decode_Stage__DOT__ForwardBD_MUX)
                             : ((IData)(vlSelf->top__DOT__Decode_Stage__DOT__BEQ_wire)
                                 ? (vlSelf->top__DOT__Decode_Stage__DOT__ForwardAD_MUX 
                                    == vlSelf->top__DOT__Decode_Stage__DOT__ForwardBD_MUX)
                                 : ((IData)(vlSelf->top__DOT__Decode_Stage__DOT__JumpSrc_wire) 
                                    | (IData)(vlSelf->top__DOT__Decode_Stage__DOT__JRetSrc_wire))))));
    bufp->fullBit(oldp+34,(vlSelf->top__DOT__ALUsrcE_wire));
    bufp->fullBit(oldp+35,(vlSelf->top__DOT__MemTypeE_wire));
    bufp->fullBit(oldp+36,(vlSelf->top__DOT__MemTypeM_wire));
    bufp->fullCData(oldp+37,(vlSelf->top__DOT__Rs1E_wire),5);
    bufp->fullCData(oldp+38,(vlSelf->top__DOT__Rs2E_wire),5);
    bufp->fullCData(oldp+39,(vlSelf->top__DOT__RdE_wire),5);
    bufp->fullCData(oldp+40,(vlSelf->top__DOT__RdM_wire),5);
    bufp->fullCData(oldp+41,(vlSelf->top__DOT__RdW_wire),5);
    bufp->fullCData(oldp+42,((0x1fU & (vlSelf->top__DOT__InstrD_wire 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+43,((0x1fU & (vlSelf->top__DOT__InstrD_wire 
                                       >> 0x14U))),5);
    bufp->fullBit(oldp+44,(vlSelf->top__DOT__ResultSrcE_wire));
    bufp->fullBit(oldp+45,(vlSelf->top__DOT__ResultSrcM_wire));
    bufp->fullBit(oldp+46,(vlSelf->top__DOT__ResultSrcW_wire));
    bufp->fullBit(oldp+47,(vlSelf->top__DOT__BranchD_wire));
    bufp->fullBit(oldp+48,(vlSelf->top__DOT__FlushD_wire));
    bufp->fullBit(oldp+49,(vlSelf->top__DOT__Decode_Stage__DOT__RegWrite_wire));
    bufp->fullCData(oldp+50,(vlSelf->top__DOT__Decode_Stage__DOT__ALUctrl_wire),4);
    bufp->fullBit(oldp+51,(vlSelf->top__DOT__Decode_Stage__DOT__ALUSrc_wire));
    bufp->fullCData(oldp+52,(vlSelf->top__DOT__Decode_Stage__DOT__ImmSrc_wire),3);
    bufp->fullBit(oldp+53,(vlSelf->top__DOT__Decode_Stage__DOT__MemWrite_wire));
    bufp->fullBit(oldp+54,(vlSelf->top__DOT__Decode_Stage__DOT__ResultSrc_wire));
    bufp->fullBit(oldp+55,(vlSelf->top__DOT__Decode_Stage__DOT__JumpSrc_wire));
    bufp->fullBit(oldp+56,(vlSelf->top__DOT__Decode_Stage__DOT__JRetSrc_wire));
    bufp->fullBit(oldp+57,(vlSelf->top__DOT__Decode_Stage__DOT__BEQ_wire));
    bufp->fullBit(oldp+58,(vlSelf->top__DOT__Decode_Stage__DOT__BNE_wire));
    bufp->fullBit(oldp+59,(vlSelf->top__DOT__Decode_Stage__DOT__MemType_wire));
    bufp->fullIData(oldp+60,(vlSelf->top__DOT__Decode_Stage__DOT__RD1D_wire),32);
    bufp->fullIData(oldp+61,(vlSelf->top__DOT__Decode_Stage__DOT__RD2D_wire),32);
    bufp->fullIData(oldp+62,(vlSelf->top__DOT__Decode_Stage__DOT__ExtImmD_wire),32);
    bufp->fullIData(oldp+63,(((IData)(vlSelf->top__DOT__Decode_Stage__DOT__JumpSrc_wire)
                               ? vlSelf->top__DOT__PCPlus4D_wire
                               : vlSelf->top__DOT__Decode_Stage__DOT__ExtImmD_wire)),32);
    bufp->fullIData(oldp+64,(vlSelf->top__DOT__Decode_Stage__DOT__ForwardAD_MUX),32);
    bufp->fullIData(oldp+65,(vlSelf->top__DOT__Decode_Stage__DOT__ForwardBD_MUX),32);
    bufp->fullCData(oldp+66,((0x7fU & vlSelf->top__DOT__InstrD_wire)),7);
    bufp->fullCData(oldp+67,((7U & (vlSelf->top__DOT__InstrD_wire 
                                    >> 0xcU))),3);
    bufp->fullBit(oldp+68,((1U & (vlSelf->top__DOT__InstrD_wire 
                                  >> 0x1eU))));
    bufp->fullCData(oldp+69,(vlSelf->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__opfunct7),2);
    bufp->fullCData(oldp+70,(vlSelf->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O),7);
    bufp->fullCData(oldp+71,((0x1fU & (vlSelf->top__DOT__InstrD_wire 
                                       >> 7U))),5);
    bufp->fullIData(oldp+72,(vlSelf->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[0]),32);
    bufp->fullIData(oldp+73,(vlSelf->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[1]),32);
    bufp->fullIData(oldp+74,(vlSelf->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[2]),32);
    bufp->fullIData(oldp+75,(vlSelf->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[3]),32);
    bufp->fullIData(oldp+76,(vlSelf->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[4]),32);
    bufp->fullIData(oldp+77,(vlSelf->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[5]),32);
    bufp->fullIData(oldp+78,(vlSelf->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[6]),32);
    bufp->fullIData(oldp+79,(vlSelf->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[7]),32);
    bufp->fullIData(oldp+80,(vlSelf->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[8]),32);
    bufp->fullIData(oldp+81,(vlSelf->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[9]),32);
    bufp->fullIData(oldp+82,(vlSelf->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[10]),32);
    bufp->fullIData(oldp+83,(vlSelf->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[11]),32);
    bufp->fullIData(oldp+84,(vlSelf->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[12]),32);
    bufp->fullIData(oldp+85,(vlSelf->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[13]),32);
    bufp->fullIData(oldp+86,(vlSelf->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[14]),32);
    bufp->fullIData(oldp+87,(vlSelf->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[15]),32);
    bufp->fullIData(oldp+88,(vlSelf->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[16]),32);
    bufp->fullIData(oldp+89,(vlSelf->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[17]),32);
    bufp->fullIData(oldp+90,(vlSelf->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[18]),32);
    bufp->fullIData(oldp+91,(vlSelf->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[19]),32);
    bufp->fullIData(oldp+92,(vlSelf->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[20]),32);
    bufp->fullIData(oldp+93,(vlSelf->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[21]),32);
    bufp->fullIData(oldp+94,(vlSelf->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[22]),32);
    bufp->fullIData(oldp+95,(vlSelf->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[23]),32);
    bufp->fullIData(oldp+96,(vlSelf->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[24]),32);
    bufp->fullIData(oldp+97,(vlSelf->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[25]),32);
    bufp->fullIData(oldp+98,(vlSelf->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[26]),32);
    bufp->fullIData(oldp+99,(vlSelf->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[27]),32);
    bufp->fullIData(oldp+100,(vlSelf->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[28]),32);
    bufp->fullIData(oldp+101,(vlSelf->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[29]),32);
    bufp->fullIData(oldp+102,(vlSelf->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[30]),32);
    bufp->fullIData(oldp+103,(vlSelf->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[31]),32);
    bufp->fullIData(oldp+104,((vlSelf->top__DOT__InstrD_wire 
                               >> 7U)),25);
    bufp->fullIData(oldp+105,(vlSelf->top__DOT__Execute_Stage__DOT__SrcAE_wire),32);
    bufp->fullIData(oldp+106,(vlSelf->top__DOT__Execute_Stage__DOT__SrcBE_wire),32);
    bufp->fullIData(oldp+107,(vlSelf->top__DOT__Execute_Stage__DOT__SrcBE_Forwarding_wire),32);
    bufp->fullIData(oldp+108,(vlSelf->top__DOT__Execute_Stage__DOT__Result_wire),32);
    bufp->fullBit(oldp+109,(vlSelf->top__DOT__HazardUnit__DOT__BranchStall));
    bufp->fullBit(oldp+110,(vlSelf->top__DOT__HazardUnit__DOT__lwstall));
    bufp->fullBit(oldp+111,(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__hit));
    bufp->fullCData(oldp+112,((7U & vlSelf->top__DOT__ALUResultM_wire)),3);
    bufp->fullIData(oldp+113,((0x7ffffffU & (vlSelf->top__DOT__ALUResultM_wire 
                                             >> 3U))),27);
    bufp->fullIData(oldp+114,(vlSelf->top__DOT__Fetch_Stage__DOT__PCF_wire),32);
    bufp->fullIData(oldp+115,(((IData)(4U) + vlSelf->top__DOT__Fetch_Stage__DOT__PCF_wire)),32);
    bufp->fullIData(oldp+116,(vlSelf->top__DOT__Fetch_Stage__DOT__InstrF_wire),32);
    bufp->fullIData(oldp+117,(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache_data_wire),32);
    bufp->fullBit(oldp+118,(vlSelf->clk));
    bufp->fullBit(oldp+119,(vlSelf->reset));
    bufp->fullBit(oldp+120,(vlSelf->trigger));
    bufp->fullIData(oldp+121,(vlSelf->a0),32);
    bufp->fullIData(oldp+122,(((IData)(vlSelf->trigger)
                                ? (((IData)(vlSelf->top__DOT__Decode_Stage__DOT__BNE_wire)
                                     ? (vlSelf->top__DOT__Decode_Stage__DOT__ForwardAD_MUX 
                                        != vlSelf->top__DOT__Decode_Stage__DOT__ForwardBD_MUX)
                                     : ((IData)(vlSelf->top__DOT__Decode_Stage__DOT__BEQ_wire)
                                         ? (vlSelf->top__DOT__Decode_Stage__DOT__ForwardAD_MUX 
                                            == vlSelf->top__DOT__Decode_Stage__DOT__ForwardBD_MUX)
                                         : ((IData)(vlSelf->top__DOT__Decode_Stage__DOT__JumpSrc_wire) 
                                            | (IData)(vlSelf->top__DOT__Decode_Stage__DOT__JRetSrc_wire))))
                                    ? ((IData)(vlSelf->top__DOT__Decode_Stage__DOT__JRetSrc_wire)
                                        ? vlSelf->top__DOT__Decode_Stage__DOT__RD1D_wire
                                        : (vlSelf->top__DOT__Decode_Stage__DOT__ExtImmD_wire 
                                           + (vlSelf->top__DOT__PCPlus4D_wire 
                                              - (IData)(4U))))
                                    : ((IData)(4U) 
                                       + vlSelf->top__DOT__Fetch_Stage__DOT__PCF_wire))
                                : 0U)),32);
    bufp->fullIData(oldp+123,(((IData)(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__hit)
                                ? vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache_data_wire
                                : ((IData)(vlSelf->top__DOT__MemTypeM_wire)
                                    ? vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__main_memory__DOT__DataMemory_array
                                   [(0x1ffffU & vlSelf->top__DOT__ALUResultM_wire)]
                                    : ((vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__main_memory__DOT__DataMemory_array
                                        [(0x1ffffU 
                                          & ((IData)(3U) 
                                             + vlSelf->top__DOT__ALUResultM_wire))] 
                                        << 0x18U) | 
                                       ((vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__main_memory__DOT__DataMemory_array
                                         [(0x1ffffU 
                                           & ((IData)(2U) 
                                              + vlSelf->top__DOT__ALUResultM_wire))] 
                                         << 0x10U) 
                                        | ((vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__main_memory__DOT__DataMemory_array
                                            [(0x1ffffU 
                                              & ((IData)(1U) 
                                                 + vlSelf->top__DOT__ALUResultM_wire))] 
                                            << 8U) 
                                           | vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__main_memory__DOT__DataMemory_array
                                           [(0x1ffffU 
                                             & vlSelf->top__DOT__ALUResultM_wire)])))))),32);
    bufp->fullIData(oldp+124,(((IData)(vlSelf->top__DOT__MemTypeM_wire)
                                ? vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__main_memory__DOT__DataMemory_array
                               [(0x1ffffU & vlSelf->top__DOT__ALUResultM_wire)]
                                : ((vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__main_memory__DOT__DataMemory_array
                                    [(0x1ffffU & ((IData)(3U) 
                                                  + vlSelf->top__DOT__ALUResultM_wire))] 
                                    << 0x18U) | ((vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__main_memory__DOT__DataMemory_array
                                                  [
                                                  (0x1ffffU 
                                                   & ((IData)(2U) 
                                                      + vlSelf->top__DOT__ALUResultM_wire))] 
                                                  << 0x10U) 
                                                 | ((vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__main_memory__DOT__DataMemory_array
                                                     [
                                                     (0x1ffffU 
                                                      & ((IData)(1U) 
                                                         + vlSelf->top__DOT__ALUResultM_wire))] 
                                                     << 8U) 
                                                    | vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__main_memory__DOT__DataMemory_array
                                                    [
                                                    (0x1ffffU 
                                                     & vlSelf->top__DOT__ALUResultM_wire)]))))),32);
    bufp->fullIData(oldp+125,(5U),32);
    bufp->fullIData(oldp+126,(0x20U),32);
    bufp->fullIData(oldp+127,(8U),32);
    bufp->fullIData(oldp+128,(0x1bU),32);
    bufp->fullIData(oldp+129,(3U),32);
    bufp->fullIData(oldp+130,(2U),32);
    bufp->fullBit(oldp+131,(0U));
    bufp->fullIData(oldp+132,(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__data[0]),32);
    bufp->fullIData(oldp+133,(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__data[1]),32);
    bufp->fullIData(oldp+134,(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__data[2]),32);
    bufp->fullIData(oldp+135,(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__data[3]),32);
    bufp->fullIData(oldp+136,(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__data[4]),32);
    bufp->fullIData(oldp+137,(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__data[5]),32);
    bufp->fullIData(oldp+138,(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__data[6]),32);
    bufp->fullIData(oldp+139,(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__data[7]),32);
    bufp->fullIData(oldp+140,(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__tag[0]),27);
    bufp->fullIData(oldp+141,(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__tag[1]),27);
    bufp->fullIData(oldp+142,(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__tag[2]),27);
    bufp->fullIData(oldp+143,(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__tag[3]),27);
    bufp->fullIData(oldp+144,(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__tag[4]),27);
    bufp->fullIData(oldp+145,(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__tag[5]),27);
    bufp->fullIData(oldp+146,(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__tag[6]),27);
    bufp->fullIData(oldp+147,(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__tag[7]),27);
}
