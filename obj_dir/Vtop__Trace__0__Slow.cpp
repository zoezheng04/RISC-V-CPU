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
    tracep->declBit(c+196,"clk", false,-1);
    tracep->declBit(c+197,"reset", false,-1);
    tracep->declBit(c+198,"trigger", false,-1);
    tracep->declBus(c+199,"a0", false,-1, 31,0);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+196,"clk", false,-1);
    tracep->declBit(c+197,"reset", false,-1);
    tracep->declBit(c+198,"trigger", false,-1);
    tracep->declBus(c+199,"a0", false,-1, 31,0);
    tracep->declBus(c+1,"InstrD_wire", false,-1, 31,0);
    tracep->declBus(c+2,"ExtImmE_wire", false,-1, 31,0);
    tracep->declBus(c+98,"ALUResultM_wire", false,-1, 31,0);
    tracep->declBus(c+3,"ALUResultW_wire", false,-1, 31,0);
    tracep->declBus(c+4,"ResultW_wire", false,-1, 31,0);
    tracep->declBus(c+5,"PCBranchD_wire", false,-1, 31,0);
    tracep->declBus(c+6,"ReadDataW_wire", false,-1, 31,0);
    tracep->declBus(c+7,"PCPlus4D_wire", false,-1, 31,0);
    tracep->declBus(c+8,"WriteDataM_wire", false,-1, 31,0);
    tracep->declBus(c+9,"RD1E_wire", false,-1, 31,0);
    tracep->declBus(c+10,"RD2E_wire", false,-1, 31,0);
    tracep->declBus(c+11,"ALUctrlE_wire", false,-1, 3,0);
    tracep->declBit(c+12,"RegWriteE_wire", false,-1);
    tracep->declBit(c+13,"RegWriteM_wire", false,-1);
    tracep->declBit(c+14,"RegWriteW_wire", false,-1);
    tracep->declBit(c+15,"StallF_wire", false,-1);
    tracep->declBit(c+16,"StallPC_wire", false,-1);
    tracep->declBus(c+17,"ForwardAE_wire", false,-1, 1,0);
    tracep->declBus(c+18,"ForwardBE_wire", false,-1, 1,0);
    tracep->declBit(c+19,"MemWriteE_wire", false,-1);
    tracep->declBit(c+20,"MemWriteM_wire", false,-1);
    tracep->declBit(c+21,"ForwardAD_wire", false,-1);
    tracep->declBit(c+22,"ForwardBD_wire", false,-1);
    tracep->declBit(c+200,"PCSrcD_wire", false,-1);
    tracep->declBit(c+23,"ALUsrcE_wire", false,-1);
    tracep->declBit(c+24,"MemTypeE_wire", false,-1);
    tracep->declBit(c+25,"MemTypeM_wire", false,-1);
    tracep->declBus(c+26,"Rs1E_wire", false,-1, 4,0);
    tracep->declBus(c+27,"Rs2E_wire", false,-1, 4,0);
    tracep->declBus(c+28,"RdE_wire", false,-1, 4,0);
    tracep->declBus(c+29,"RdM_wire", false,-1, 4,0);
    tracep->declBus(c+30,"RdW_wire", false,-1, 4,0);
    tracep->declBus(c+31,"Rs1D_wire", false,-1, 4,0);
    tracep->declBus(c+32,"Rs2D_wire", false,-1, 4,0);
    tracep->declBit(c+33,"ResultSrcE_wire", false,-1);
    tracep->declBit(c+34,"ResultSrcM_wire", false,-1);
    tracep->declBit(c+35,"ResultSrcW_wire", false,-1);
    tracep->declBit(c+36,"BranchD_wire", false,-1);
    tracep->declBit(c+37,"FlushD_wire", false,-1);
    tracep->pushNamePrefix("Decode_Stage ");
    tracep->declBit(c+196,"clk", false,-1);
    tracep->declBit(c+37,"FlushD", false,-1);
    tracep->declBus(c+1,"InstrD", false,-1, 31,0);
    tracep->declBus(c+7,"PCPlus4D", false,-1, 31,0);
    tracep->declBit(c+14,"RegWriteW", false,-1);
    tracep->declBus(c+30,"RdW", false,-1, 4,0);
    tracep->declBus(c+4,"ResultW", false,-1, 31,0);
    tracep->declBus(c+98,"ALUOutM", false,-1, 31,0);
    tracep->declBit(c+21,"ForwardAD", false,-1);
    tracep->declBit(c+22,"ForwardBD", false,-1);
    tracep->declBit(c+12,"RegWriteE", false,-1);
    tracep->declBit(c+33,"ResultSrcE", false,-1);
    tracep->declBit(c+19,"MemWriteE", false,-1);
    tracep->declBit(c+200,"PCSrcD", false,-1);
    tracep->declBus(c+11,"ALUctrlE", false,-1, 3,0);
    tracep->declBit(c+23,"ALUsrcE", false,-1);
    tracep->declBus(c+9,"RD1E", false,-1, 31,0);
    tracep->declBus(c+10,"RD2E", false,-1, 31,0);
    tracep->declBus(c+26,"Rs1E", false,-1, 4,0);
    tracep->declBus(c+27,"Rs2E", false,-1, 4,0);
    tracep->declBus(c+31,"Rs1D", false,-1, 4,0);
    tracep->declBus(c+32,"Rs2D", false,-1, 4,0);
    tracep->declBus(c+28,"RdE", false,-1, 4,0);
    tracep->declBus(c+2,"ExtImmE", false,-1, 31,0);
    tracep->declBus(c+5,"PCBranchD", false,-1, 31,0);
    tracep->declBit(c+36,"BranchD", false,-1);
    tracep->declBit(c+24,"MemTypeE", false,-1);
    tracep->declBus(c+199,"a0", false,-1, 31,0);
    tracep->declBit(c+38,"RegWrite_wire", false,-1);
    tracep->declBus(c+39,"ALUctrl_wire", false,-1, 3,0);
    tracep->declBit(c+40,"ALUSrc_wire", false,-1);
    tracep->declBus(c+41,"ImmSrc_wire", false,-1, 2,0);
    tracep->declBit(c+42,"MemWrite_wire", false,-1);
    tracep->declBit(c+43,"ResultSrc_wire", false,-1);
    tracep->declBit(c+44,"JumpSrc_wire", false,-1);
    tracep->declBit(c+45,"JRetSrc_wire", false,-1);
    tracep->declBit(c+46,"BEQ_wire", false,-1);
    tracep->declBit(c+47,"BNE_wire", false,-1);
    tracep->declBit(c+48,"MemType_wire", false,-1);
    tracep->declBus(c+49,"RD1D_wire", false,-1, 31,0);
    tracep->declBus(c+50,"RD2D_wire", false,-1, 31,0);
    tracep->declBus(c+51,"ExtImmD_wire", false,-1, 31,0);
    tracep->declBus(c+52,"ExtImmDReg_wire", false,-1, 31,0);
    tracep->declBus(c+99,"ForwardAD_MUX", false,-1, 31,0);
    tracep->declBus(c+100,"ForwardBD_MUX", false,-1, 31,0);
    tracep->pushNamePrefix("ControlUnit ");
    tracep->declBus(c+53,"opcode", false,-1, 6,0);
    tracep->declBus(c+54,"funct3", false,-1, 2,0);
    tracep->declBit(c+55,"funct7", false,-1);
    tracep->declBit(c+38,"RegWrite", false,-1);
    tracep->declBus(c+39,"ALUctrl", false,-1, 3,0);
    tracep->declBit(c+40,"ALUsrc", false,-1);
    tracep->declBus(c+41,"ImmSrc", false,-1, 2,0);
    tracep->declBit(c+42,"MemWrite", false,-1);
    tracep->declBit(c+43,"ResultSrc", false,-1);
    tracep->declBit(c+44,"JumpSrc", false,-1);
    tracep->declBit(c+45,"JRetSrc", false,-1);
    tracep->declBit(c+46,"BEQ", false,-1);
    tracep->declBit(c+47,"BNE", false,-1);
    tracep->declBit(c+48,"MemType", false,-1);
    tracep->declBus(c+56,"opfunct7", false,-1, 1,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+57,"Type_O", false,-1, 6,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Pipeline_RegisterD ");
    tracep->declBit(c+38,"RegWriteD", false,-1);
    tracep->declBit(c+43,"ResultSrcD", false,-1);
    tracep->declBit(c+42,"MemWriteD", false,-1);
    tracep->declBus(c+39,"ALUctrlD", false,-1, 3,0);
    tracep->declBit(c+40,"ALUsrcD", false,-1);
    tracep->declBus(c+49,"RD1D", false,-1, 31,0);
    tracep->declBus(c+50,"RD2D", false,-1, 31,0);
    tracep->declBus(c+31,"Rs1D", false,-1, 4,0);
    tracep->declBus(c+32,"Rs2D", false,-1, 4,0);
    tracep->declBus(c+58,"RdD", false,-1, 4,0);
    tracep->declBus(c+52,"ExtImmD", false,-1, 31,0);
    tracep->declBit(c+196,"clk", false,-1);
    tracep->declBit(c+37,"FlushD", false,-1);
    tracep->declBit(c+48,"MemTypeD", false,-1);
    tracep->declBit(c+12,"RegWriteE", false,-1);
    tracep->declBit(c+33,"ResultSrcE", false,-1);
    tracep->declBit(c+19,"MemWriteE", false,-1);
    tracep->declBus(c+11,"ALUctrlE", false,-1, 3,0);
    tracep->declBit(c+23,"ALUsrcE", false,-1);
    tracep->declBus(c+9,"RD1E", false,-1, 31,0);
    tracep->declBus(c+10,"RD2E", false,-1, 31,0);
    tracep->declBus(c+26,"Rs1E", false,-1, 4,0);
    tracep->declBus(c+27,"Rs2E", false,-1, 4,0);
    tracep->declBus(c+28,"RdE", false,-1, 4,0);
    tracep->declBus(c+2,"ExtImmE", false,-1, 31,0);
    tracep->declBit(c+24,"MemTypeE", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RegisterFile ");
    tracep->declBus(c+203,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+204,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+14,"WE3", false,-1);
    tracep->declBus(c+4,"WD3", false,-1, 31,0);
    tracep->declBus(c+31,"AD1", false,-1, 4,0);
    tracep->declBus(c+32,"AD2", false,-1, 4,0);
    tracep->declBus(c+30,"AD3", false,-1, 4,0);
    tracep->declBus(c+49,"RD1", false,-1, 31,0);
    tracep->declBus(c+50,"RD2", false,-1, 31,0);
    tracep->declBus(c+199,"a0", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+59+i*1,"registers", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SignExtend ");
    tracep->declBus(c+204,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+91,"Imm_i", false,-1, 31,7);
    tracep->declBus(c+41,"ImmSrc", false,-1, 2,0);
    tracep->declBus(c+51,"Imm_o", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Execute_Stage ");
    tracep->declBit(c+196,"clk", false,-1);
    tracep->declBit(c+12,"RegWriteE", false,-1);
    tracep->declBit(c+33,"ResultSrcE", false,-1);
    tracep->declBit(c+19,"MemWriteE", false,-1);
    tracep->declBus(c+11,"ALUctrlE", false,-1, 3,0);
    tracep->declBit(c+23,"ALUsrcE", false,-1);
    tracep->declBus(c+9,"RD1E", false,-1, 31,0);
    tracep->declBus(c+10,"RD2E", false,-1, 31,0);
    tracep->declBus(c+28,"RdE", false,-1, 4,0);
    tracep->declBus(c+2,"ExtImmE", false,-1, 31,0);
    tracep->declBus(c+17,"ForwardAE", false,-1, 1,0);
    tracep->declBus(c+18,"ForwardBE", false,-1, 1,0);
    tracep->declBus(c+4,"ResultW", false,-1, 31,0);
    tracep->declBit(c+24,"MemTypeE", false,-1);
    tracep->declBit(c+13,"RegWriteM", false,-1);
    tracep->declBit(c+34,"ResultSrcM", false,-1);
    tracep->declBit(c+20,"MemWriteM", false,-1);
    tracep->declBus(c+98,"ALUResultM", false,-1, 31,0);
    tracep->declBus(c+8,"WriteDataM", false,-1, 31,0);
    tracep->declBus(c+29,"RdM", false,-1, 4,0);
    tracep->declBit(c+25,"MemTypeM", false,-1);
    tracep->declBus(c+101,"SrcAE_wire", false,-1, 31,0);
    tracep->declBus(c+102,"SrcBE_wire", false,-1, 31,0);
    tracep->declBus(c+103,"SrcBE_Forwarding_wire", false,-1, 31,0);
    tracep->declBus(c+104,"Result_wire", false,-1, 31,0);
    tracep->pushNamePrefix("ALU ");
    tracep->declBus(c+204,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+101,"SrcA", false,-1, 31,0);
    tracep->declBus(c+102,"SrcB", false,-1, 31,0);
    tracep->declBus(c+11,"ALUControl", false,-1, 3,0);
    tracep->declBus(c+104,"ALUResult", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Pipeline_RegisterE ");
    tracep->declBit(c+12,"RegWriteE", false,-1);
    tracep->declBit(c+33,"ResultSrcE", false,-1);
    tracep->declBit(c+19,"MemWriteE", false,-1);
    tracep->declBus(c+104,"ALUResultE", false,-1, 31,0);
    tracep->declBus(c+103,"WriteDataE", false,-1, 31,0);
    tracep->declBus(c+28,"RdE", false,-1, 4,0);
    tracep->declBit(c+196,"clk", false,-1);
    tracep->declBit(c+24,"MemTypeE", false,-1);
    tracep->declBit(c+13,"RegWriteM", false,-1);
    tracep->declBit(c+34,"ResultSrcM", false,-1);
    tracep->declBit(c+20,"MemWriteM", false,-1);
    tracep->declBus(c+98,"ALUResultM", false,-1, 31,0);
    tracep->declBus(c+8,"WriteDataM", false,-1, 31,0);
    tracep->declBus(c+29,"RdM", false,-1, 4,0);
    tracep->declBit(c+25,"MemTypeM", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Fetch_Stage ");
    tracep->declBit(c+196,"clk", false,-1);
    tracep->declBit(c+197,"reset", false,-1);
    tracep->declBit(c+198,"trigger", false,-1);
    tracep->declBit(c+16,"StallPC", false,-1);
    tracep->declBit(c+15,"StallF", false,-1);
    tracep->declBus(c+5,"PCBranchD", false,-1, 31,0);
    tracep->declBit(c+36,"BranchD", false,-1);
    tracep->declBit(c+200,"PCSrcD", false,-1);
    tracep->declBus(c+1,"InstrD", false,-1, 31,0);
    tracep->declBus(c+7,"PCPlus4D", false,-1, 31,0);
    tracep->declBus(c+94,"PCF_wire", false,-1, 31,0);
    tracep->declBus(c+201,"PCNext_wire", false,-1, 31,0);
    tracep->declBus(c+95,"PCPlus4F_wire", false,-1, 31,0);
    tracep->declBus(c+96,"InstrF_wire", false,-1, 31,0);
    tracep->pushNamePrefix("Instruction_Memory ");
    tracep->declBus(c+204,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+205,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+94,"addr", false,-1, 31,0);
    tracep->declBus(c+96,"dout", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Pipeline_RegisterF ");
    tracep->declBus(c+96,"InstrF", false,-1, 31,0);
    tracep->declBus(c+95,"PCPlus4F", false,-1, 31,0);
    tracep->declBit(c+196,"clk", false,-1);
    tracep->declBit(c+15,"Stall", false,-1);
    tracep->declBus(c+1,"InstrD", false,-1, 31,0);
    tracep->declBus(c+7,"PCPlus4D", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ProgramCounter ");
    tracep->declBus(c+204,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+196,"clk", false,-1);
    tracep->declBit(c+197,"rst", false,-1);
    tracep->declBus(c+201,"PCNext", false,-1, 31,0);
    tracep->declBit(c+16,"Stall", false,-1);
    tracep->declBus(c+94,"PC", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("HazardUnit ");
    tracep->declBus(c+26,"Rs1E", false,-1, 4,0);
    tracep->declBus(c+27,"Rs2E", false,-1, 4,0);
    tracep->declBus(c+31,"Rs1D", false,-1, 4,0);
    tracep->declBus(c+32,"Rs2D", false,-1, 4,0);
    tracep->declBus(c+29,"RdM", false,-1, 4,0);
    tracep->declBit(c+36,"BranchD", false,-1);
    tracep->declBit(c+12,"RegWriteE", false,-1);
    tracep->declBit(c+13,"RegWriteM", false,-1);
    tracep->declBus(c+28,"WriteRegE", false,-1, 4,0);
    tracep->declBus(c+30,"RdW", false,-1, 4,0);
    tracep->declBit(c+14,"RegWriteW", false,-1);
    tracep->declBit(c+33,"ResultSrcE", false,-1);
    tracep->declBit(c+34,"ResultSrcM", false,-1);
    tracep->declBus(c+17,"ForwardAE", false,-1, 1,0);
    tracep->declBus(c+18,"ForwardBE", false,-1, 1,0);
    tracep->declBit(c+21,"ForwardAD", false,-1);
    tracep->declBit(c+22,"ForwardBD", false,-1);
    tracep->declBit(c+15,"StallF", false,-1);
    tracep->declBit(c+16,"StallPC", false,-1);
    tracep->declBit(c+37,"FlushD", false,-1);
    tracep->declBit(c+92,"BranchStall", false,-1);
    tracep->declBit(c+93,"lwstall", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Memory_Stage ");
    tracep->declBit(c+196,"clk", false,-1);
    tracep->declBit(c+13,"RegWriteM", false,-1);
    tracep->declBit(c+34,"ResultSrcM", false,-1);
    tracep->declBit(c+20,"MemWriteM", false,-1);
    tracep->declBus(c+98,"ALUResultM", false,-1, 31,0);
    tracep->declBus(c+8,"WriteDataM", false,-1, 31,0);
    tracep->declBus(c+29,"RdM", false,-1, 4,0);
    tracep->declBit(c+25,"MemTypeM", false,-1);
    tracep->declBit(c+14,"RegWriteW", false,-1);
    tracep->declBit(c+35,"ResultSrcW", false,-1);
    tracep->declBus(c+3,"ALUResultW", false,-1, 31,0);
    tracep->declBus(c+6,"ReadDataW", false,-1, 31,0);
    tracep->declBus(c+30,"RdW", false,-1, 4,0);
    tracep->declBus(c+202,"RD_wire", false,-1, 31,0);
    tracep->pushNamePrefix("Pipeline_RegisterM ");
    tracep->declBit(c+13,"RegWriteM", false,-1);
    tracep->declBit(c+34,"ResultSrcM", false,-1);
    tracep->declBus(c+202,"ReadDataM", false,-1, 31,0);
    tracep->declBus(c+29,"RdM", false,-1, 4,0);
    tracep->declBus(c+98,"ALUResultM", false,-1, 31,0);
    tracep->declBit(c+196,"clk", false,-1);
    tracep->declBit(c+14,"RegWriteW", false,-1);
    tracep->declBit(c+35,"ResultSrcW", false,-1);
    tracep->declBus(c+6,"ReadDataW", false,-1, 31,0);
    tracep->declBus(c+30,"RdW", false,-1, 4,0);
    tracep->declBus(c+3,"ALUResultW", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("memory ");
    tracep->declBus(c+204,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+206,"TAG_WIDTH", false,-1, 31,0);
    tracep->declBus(c+207,"SET_WIDTH", false,-1, 31,0);
    tracep->declBus(c+208,"OFFSET_WIDTH", false,-1, 31,0);
    tracep->declBus(c+205,"CACHE_WIDTH", false,-1, 31,0);
    tracep->declBit(c+196,"clk", false,-1);
    tracep->declBus(c+98,"addr", false,-1, 31,0);
    tracep->declBus(c+8,"Write_Data", false,-1, 31,0);
    tracep->declBit(c+20,"WE", false,-1);
    tracep->declBit(c+25,"MemType", false,-1);
    tracep->declBus(c+202,"Data_o", false,-1, 31,0);
    tracep->declBus(c+105,"WBData", false,-1, 31,0);
    tracep->declBus(c+106,"WBaddr", false,-1, 31,0);
    tracep->declBus(c+107,"mem_addr", false,-1, 31,0);
    tracep->declBus(c+146,"mem_data", false,-1, 31,0);
    tracep->declBus(c+147,"missed_data", false,-1, 31,0);
    tracep->declBus(c+97,"cache_data_wire", false,-1, 31,0);
    tracep->declBit(c+108,"hit_wire", false,-1);
    tracep->declBit(c+109,"WBEN", false,-1);
    tracep->pushNamePrefix("cache ");
    tracep->declBus(c+204,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+206,"TAG_WIDTH", false,-1, 31,0);
    tracep->declBus(c+207,"SET_WIDTH", false,-1, 31,0);
    tracep->declBus(c+208,"OFFSET_WIDTH", false,-1, 31,0);
    tracep->declBus(c+205,"CACHE_LENGTH", false,-1, 31,0);
    tracep->declBit(c+196,"clk", false,-1);
    tracep->declBit(c+20,"write_enable", false,-1);
    tracep->declBus(c+98,"address", false,-1, 31,0);
    tracep->declBus(c+147,"data", false,-1, 31,0);
    tracep->declBit(c+108,"cache_hit", false,-1);
    tracep->declBus(c+97,"cache_data", false,-1, 31,0);
    tracep->declBus(c+105,"write_back_data", false,-1, 31,0);
    tracep->declBus(c+106,"write_back_address", false,-1, 31,0);
    tracep->declBit(c+109,"write_back_enable", false,-1);
    for (int i = 0; i < 8; ++i) {
        tracep->declBit(c+148+i*1,"lru_counter_0", true,(i+0));
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBit(c+156+i*1,"lru_counter_1", true,(i+0));
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBit(c+110+i*1,"V_0", true,(i+0));
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBit(c+164+i*1,"D_0", true,(i+0));
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+118+i*1,"tag_0", true,(i+0), 26,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+172+i*1,"data_0", true,(i+0), 31,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBit(c+126+i*1,"V_1", true,(i+0));
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBit(c+180+i*1,"D_1", true,(i+0));
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+134+i*1,"tag_1", true,(i+0), 26,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+188+i*1,"data_1", true,(i+0), 31,0);
    }
    tracep->declBus(c+142,"data_set", false,-1, 2,0);
    tracep->declBus(c+143,"data_tag", false,-1, 26,0);
    tracep->declBit(c+144,"cache_hit_0", false,-1);
    tracep->declBit(c+145,"cache_hit_1", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("main_memory ");
    tracep->declBus(c+204,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+205,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+196,"clk", false,-1);
    tracep->declBit(c+109,"WE", false,-1);
    tracep->declBit(c+25,"MemType", false,-1);
    tracep->declBus(c+107,"A", false,-1, 31,0);
    tracep->declBus(c+105,"WD", false,-1, 31,0);
    tracep->declBus(c+146,"RD", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("WriteBack_Stage ");
    tracep->declBit(c+35,"ResultSrcW", false,-1);
    tracep->declBus(c+3,"ALUResultW", false,-1, 31,0);
    tracep->declBus(c+6,"ReadDataW", false,-1, 31,0);
    tracep->declBus(c+4,"ResultW", false,-1, 31,0);
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
    bufp->fullIData(oldp+1,(vlSelf->top__DOT__InstrD_wire),32);
    bufp->fullIData(oldp+2,(vlSelf->top__DOT__ExtImmE_wire),32);
    bufp->fullIData(oldp+3,(vlSelf->top__DOT__ALUResultW_wire),32);
    bufp->fullIData(oldp+4,(vlSelf->top__DOT__ResultW_wire),32);
    bufp->fullIData(oldp+5,(((IData)(vlSelf->top__DOT__Decode_Stage__DOT__JRetSrc_wire)
                              ? vlSelf->top__DOT__Decode_Stage__DOT__RD1D_wire
                              : (vlSelf->top__DOT__Decode_Stage__DOT__ExtImmD_wire 
                                 + (vlSelf->top__DOT__PCPlus4D_wire 
                                    - (IData)(4U))))),32);
    bufp->fullIData(oldp+6,(vlSelf->top__DOT__ReadDataW_wire),32);
    bufp->fullIData(oldp+7,(vlSelf->top__DOT__PCPlus4D_wire),32);
    bufp->fullIData(oldp+8,(vlSelf->top__DOT__WriteDataM_wire),32);
    bufp->fullIData(oldp+9,(vlSelf->top__DOT__RD1E_wire),32);
    bufp->fullIData(oldp+10,(vlSelf->top__DOT__RD2E_wire),32);
    bufp->fullCData(oldp+11,(vlSelf->top__DOT__ALUctrlE_wire),4);
    bufp->fullBit(oldp+12,(vlSelf->top__DOT__RegWriteE_wire));
    bufp->fullBit(oldp+13,(vlSelf->top__DOT__RegWriteM_wire));
    bufp->fullBit(oldp+14,(vlSelf->top__DOT__RegWriteW_wire));
    bufp->fullBit(oldp+15,(vlSelf->top__DOT__StallF_wire));
    bufp->fullBit(oldp+16,(vlSelf->top__DOT__StallPC_wire));
    bufp->fullCData(oldp+17,(vlSelf->top__DOT__ForwardAE_wire),2);
    bufp->fullCData(oldp+18,(vlSelf->top__DOT__ForwardBE_wire),2);
    bufp->fullBit(oldp+19,(vlSelf->top__DOT__MemWriteE_wire));
    bufp->fullBit(oldp+20,(vlSelf->top__DOT__MemWriteM_wire));
    bufp->fullBit(oldp+21,((((0U != (0x1fU & (vlSelf->top__DOT__InstrD_wire 
                                              >> 0xfU))) 
                             & ((0x1fU & (vlSelf->top__DOT__InstrD_wire 
                                          >> 0xfU)) 
                                == (IData)(vlSelf->top__DOT__RdM_wire))) 
                            & (IData)(vlSelf->top__DOT__RegWriteM_wire))));
    bufp->fullBit(oldp+22,((((0U != (0x1fU & (vlSelf->top__DOT__InstrD_wire 
                                              >> 0x14U))) 
                             & ((0x1fU & (vlSelf->top__DOT__InstrD_wire 
                                          >> 0x14U)) 
                                == (IData)(vlSelf->top__DOT__RdM_wire))) 
                            & (IData)(vlSelf->top__DOT__RegWriteM_wire))));
    bufp->fullBit(oldp+23,(vlSelf->top__DOT__ALUsrcE_wire));
    bufp->fullBit(oldp+24,(vlSelf->top__DOT__MemTypeE_wire));
    bufp->fullBit(oldp+25,(vlSelf->top__DOT__MemTypeM_wire));
    bufp->fullCData(oldp+26,(vlSelf->top__DOT__Rs1E_wire),5);
    bufp->fullCData(oldp+27,(vlSelf->top__DOT__Rs2E_wire),5);
    bufp->fullCData(oldp+28,(vlSelf->top__DOT__RdE_wire),5);
    bufp->fullCData(oldp+29,(vlSelf->top__DOT__RdM_wire),5);
    bufp->fullCData(oldp+30,(vlSelf->top__DOT__RdW_wire),5);
    bufp->fullCData(oldp+31,((0x1fU & (vlSelf->top__DOT__InstrD_wire 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+32,((0x1fU & (vlSelf->top__DOT__InstrD_wire 
                                       >> 0x14U))),5);
    bufp->fullBit(oldp+33,(vlSelf->top__DOT__ResultSrcE_wire));
    bufp->fullBit(oldp+34,(vlSelf->top__DOT__ResultSrcM_wire));
    bufp->fullBit(oldp+35,(vlSelf->top__DOT__ResultSrcW_wire));
    bufp->fullBit(oldp+36,(vlSelf->top__DOT__BranchD_wire));
    bufp->fullBit(oldp+37,(vlSelf->top__DOT__FlushD_wire));
    bufp->fullBit(oldp+38,(vlSelf->top__DOT__Decode_Stage__DOT__RegWrite_wire));
    bufp->fullCData(oldp+39,(vlSelf->top__DOT__Decode_Stage__DOT__ALUctrl_wire),4);
    bufp->fullBit(oldp+40,(vlSelf->top__DOT__Decode_Stage__DOT__ALUSrc_wire));
    bufp->fullCData(oldp+41,(vlSelf->top__DOT__Decode_Stage__DOT__ImmSrc_wire),3);
    bufp->fullBit(oldp+42,(vlSelf->top__DOT__Decode_Stage__DOT__MemWrite_wire));
    bufp->fullBit(oldp+43,(vlSelf->top__DOT__Decode_Stage__DOT__ResultSrc_wire));
    bufp->fullBit(oldp+44,(vlSelf->top__DOT__Decode_Stage__DOT__JumpSrc_wire));
    bufp->fullBit(oldp+45,(vlSelf->top__DOT__Decode_Stage__DOT__JRetSrc_wire));
    bufp->fullBit(oldp+46,(vlSelf->top__DOT__Decode_Stage__DOT__BEQ_wire));
    bufp->fullBit(oldp+47,(vlSelf->top__DOT__Decode_Stage__DOT__BNE_wire));
    bufp->fullBit(oldp+48,(vlSelf->top__DOT__Decode_Stage__DOT__MemType_wire));
    bufp->fullIData(oldp+49,(vlSelf->top__DOT__Decode_Stage__DOT__RD1D_wire),32);
    bufp->fullIData(oldp+50,(vlSelf->top__DOT__Decode_Stage__DOT__RD2D_wire),32);
    bufp->fullIData(oldp+51,(vlSelf->top__DOT__Decode_Stage__DOT__ExtImmD_wire),32);
    bufp->fullIData(oldp+52,(((IData)(vlSelf->top__DOT__Decode_Stage__DOT__JumpSrc_wire)
                               ? vlSelf->top__DOT__PCPlus4D_wire
                               : vlSelf->top__DOT__Decode_Stage__DOT__ExtImmD_wire)),32);
    bufp->fullCData(oldp+53,((0x7fU & vlSelf->top__DOT__InstrD_wire)),7);
    bufp->fullCData(oldp+54,((7U & (vlSelf->top__DOT__InstrD_wire 
                                    >> 0xcU))),3);
    bufp->fullBit(oldp+55,((1U & (vlSelf->top__DOT__InstrD_wire 
                                  >> 0x1eU))));
    bufp->fullCData(oldp+56,(vlSelf->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__opfunct7),2);
    bufp->fullCData(oldp+57,(vlSelf->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O),7);
    bufp->fullCData(oldp+58,((0x1fU & (vlSelf->top__DOT__InstrD_wire 
                                       >> 7U))),5);
    bufp->fullIData(oldp+59,(vlSelf->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[0]),32);
    bufp->fullIData(oldp+60,(vlSelf->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[1]),32);
    bufp->fullIData(oldp+61,(vlSelf->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[2]),32);
    bufp->fullIData(oldp+62,(vlSelf->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[3]),32);
    bufp->fullIData(oldp+63,(vlSelf->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[4]),32);
    bufp->fullIData(oldp+64,(vlSelf->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[5]),32);
    bufp->fullIData(oldp+65,(vlSelf->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[6]),32);
    bufp->fullIData(oldp+66,(vlSelf->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[7]),32);
    bufp->fullIData(oldp+67,(vlSelf->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[8]),32);
    bufp->fullIData(oldp+68,(vlSelf->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[9]),32);
    bufp->fullIData(oldp+69,(vlSelf->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[10]),32);
    bufp->fullIData(oldp+70,(vlSelf->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[11]),32);
    bufp->fullIData(oldp+71,(vlSelf->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[12]),32);
    bufp->fullIData(oldp+72,(vlSelf->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[13]),32);
    bufp->fullIData(oldp+73,(vlSelf->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[14]),32);
    bufp->fullIData(oldp+74,(vlSelf->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[15]),32);
    bufp->fullIData(oldp+75,(vlSelf->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[16]),32);
    bufp->fullIData(oldp+76,(vlSelf->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[17]),32);
    bufp->fullIData(oldp+77,(vlSelf->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[18]),32);
    bufp->fullIData(oldp+78,(vlSelf->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[19]),32);
    bufp->fullIData(oldp+79,(vlSelf->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[20]),32);
    bufp->fullIData(oldp+80,(vlSelf->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[21]),32);
    bufp->fullIData(oldp+81,(vlSelf->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[22]),32);
    bufp->fullIData(oldp+82,(vlSelf->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[23]),32);
    bufp->fullIData(oldp+83,(vlSelf->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[24]),32);
    bufp->fullIData(oldp+84,(vlSelf->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[25]),32);
    bufp->fullIData(oldp+85,(vlSelf->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[26]),32);
    bufp->fullIData(oldp+86,(vlSelf->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[27]),32);
    bufp->fullIData(oldp+87,(vlSelf->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[28]),32);
    bufp->fullIData(oldp+88,(vlSelf->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[29]),32);
    bufp->fullIData(oldp+89,(vlSelf->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[30]),32);
    bufp->fullIData(oldp+90,(vlSelf->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[31]),32);
    bufp->fullIData(oldp+91,((vlSelf->top__DOT__InstrD_wire 
                              >> 7U)),25);
    bufp->fullBit(oldp+92,(vlSelf->top__DOT__HazardUnit__DOT__BranchStall));
    bufp->fullBit(oldp+93,(vlSelf->top__DOT__HazardUnit__DOT__lwstall));
    bufp->fullIData(oldp+94,(vlSelf->top__DOT__Fetch_Stage__DOT__PCF_wire),32);
    bufp->fullIData(oldp+95,(((IData)(4U) + vlSelf->top__DOT__Fetch_Stage__DOT__PCF_wire)),32);
    bufp->fullIData(oldp+96,(vlSelf->top__DOT__Fetch_Stage__DOT__InstrF_wire),32);
    bufp->fullIData(oldp+97,(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache_data_wire),32);
    bufp->fullIData(oldp+98,(vlSelf->top__DOT__ALUResultM_wire),32);
    bufp->fullIData(oldp+99,(vlSelf->top__DOT__Decode_Stage__DOT__ForwardAD_MUX),32);
    bufp->fullIData(oldp+100,(vlSelf->top__DOT__Decode_Stage__DOT__ForwardBD_MUX),32);
    bufp->fullIData(oldp+101,(vlSelf->top__DOT__Execute_Stage__DOT__SrcAE_wire),32);
    bufp->fullIData(oldp+102,(vlSelf->top__DOT__Execute_Stage__DOT__SrcBE_wire),32);
    bufp->fullIData(oldp+103,(vlSelf->top__DOT__Execute_Stage__DOT__SrcBE_Forwarding_wire),32);
    bufp->fullIData(oldp+104,(vlSelf->top__DOT__Execute_Stage__DOT__Result_wire),32);
    bufp->fullIData(oldp+105,(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__WBData),32);
    bufp->fullIData(oldp+106,(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__WBaddr),32);
    bufp->fullIData(oldp+107,(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__mem_addr),32);
    bufp->fullBit(oldp+108,(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__hit_wire));
    bufp->fullBit(oldp+109,(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__WBEN));
    bufp->fullBit(oldp+110,(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__V_0[0]));
    bufp->fullBit(oldp+111,(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__V_0[1]));
    bufp->fullBit(oldp+112,(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__V_0[2]));
    bufp->fullBit(oldp+113,(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__V_0[3]));
    bufp->fullBit(oldp+114,(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__V_0[4]));
    bufp->fullBit(oldp+115,(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__V_0[5]));
    bufp->fullBit(oldp+116,(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__V_0[6]));
    bufp->fullBit(oldp+117,(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__V_0[7]));
    bufp->fullIData(oldp+118,(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__tag_0[0]),27);
    bufp->fullIData(oldp+119,(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__tag_0[1]),27);
    bufp->fullIData(oldp+120,(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__tag_0[2]),27);
    bufp->fullIData(oldp+121,(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__tag_0[3]),27);
    bufp->fullIData(oldp+122,(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__tag_0[4]),27);
    bufp->fullIData(oldp+123,(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__tag_0[5]),27);
    bufp->fullIData(oldp+124,(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__tag_0[6]),27);
    bufp->fullIData(oldp+125,(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__tag_0[7]),27);
    bufp->fullBit(oldp+126,(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__V_1[0]));
    bufp->fullBit(oldp+127,(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__V_1[1]));
    bufp->fullBit(oldp+128,(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__V_1[2]));
    bufp->fullBit(oldp+129,(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__V_1[3]));
    bufp->fullBit(oldp+130,(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__V_1[4]));
    bufp->fullBit(oldp+131,(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__V_1[5]));
    bufp->fullBit(oldp+132,(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__V_1[6]));
    bufp->fullBit(oldp+133,(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__V_1[7]));
    bufp->fullIData(oldp+134,(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__tag_1[0]),27);
    bufp->fullIData(oldp+135,(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__tag_1[1]),27);
    bufp->fullIData(oldp+136,(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__tag_1[2]),27);
    bufp->fullIData(oldp+137,(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__tag_1[3]),27);
    bufp->fullIData(oldp+138,(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__tag_1[4]),27);
    bufp->fullIData(oldp+139,(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__tag_1[5]),27);
    bufp->fullIData(oldp+140,(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__tag_1[6]),27);
    bufp->fullIData(oldp+141,(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__tag_1[7]),27);
    bufp->fullCData(oldp+142,((7U & (vlSelf->top__DOT__ALUResultM_wire 
                                     >> 2U))),3);
    bufp->fullIData(oldp+143,((vlSelf->top__DOT__ALUResultM_wire 
                               >> 5U)),27);
    bufp->fullBit(oldp+144,(((vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__tag_0
                              [(7U & (vlSelf->top__DOT__ALUResultM_wire 
                                      >> 2U))] == (vlSelf->top__DOT__ALUResultM_wire 
                                                   >> 5U)) 
                             & vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__V_0
                             [(7U & (vlSelf->top__DOT__ALUResultM_wire 
                                     >> 2U))])));
    bufp->fullBit(oldp+145,(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__cache_hit_1));
    bufp->fullIData(oldp+146,(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__mem_data),32);
    bufp->fullIData(oldp+147,(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__missed_data),32);
    bufp->fullBit(oldp+148,(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__lru_counter_0[0]));
    bufp->fullBit(oldp+149,(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__lru_counter_0[1]));
    bufp->fullBit(oldp+150,(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__lru_counter_0[2]));
    bufp->fullBit(oldp+151,(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__lru_counter_0[3]));
    bufp->fullBit(oldp+152,(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__lru_counter_0[4]));
    bufp->fullBit(oldp+153,(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__lru_counter_0[5]));
    bufp->fullBit(oldp+154,(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__lru_counter_0[6]));
    bufp->fullBit(oldp+155,(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__lru_counter_0[7]));
    bufp->fullBit(oldp+156,(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__lru_counter_1[0]));
    bufp->fullBit(oldp+157,(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__lru_counter_1[1]));
    bufp->fullBit(oldp+158,(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__lru_counter_1[2]));
    bufp->fullBit(oldp+159,(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__lru_counter_1[3]));
    bufp->fullBit(oldp+160,(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__lru_counter_1[4]));
    bufp->fullBit(oldp+161,(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__lru_counter_1[5]));
    bufp->fullBit(oldp+162,(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__lru_counter_1[6]));
    bufp->fullBit(oldp+163,(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__lru_counter_1[7]));
    bufp->fullBit(oldp+164,(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__D_0[0]));
    bufp->fullBit(oldp+165,(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__D_0[1]));
    bufp->fullBit(oldp+166,(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__D_0[2]));
    bufp->fullBit(oldp+167,(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__D_0[3]));
    bufp->fullBit(oldp+168,(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__D_0[4]));
    bufp->fullBit(oldp+169,(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__D_0[5]));
    bufp->fullBit(oldp+170,(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__D_0[6]));
    bufp->fullBit(oldp+171,(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__D_0[7]));
    bufp->fullIData(oldp+172,(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__data_0[0]),32);
    bufp->fullIData(oldp+173,(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__data_0[1]),32);
    bufp->fullIData(oldp+174,(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__data_0[2]),32);
    bufp->fullIData(oldp+175,(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__data_0[3]),32);
    bufp->fullIData(oldp+176,(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__data_0[4]),32);
    bufp->fullIData(oldp+177,(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__data_0[5]),32);
    bufp->fullIData(oldp+178,(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__data_0[6]),32);
    bufp->fullIData(oldp+179,(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__data_0[7]),32);
    bufp->fullBit(oldp+180,(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__D_1[0]));
    bufp->fullBit(oldp+181,(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__D_1[1]));
    bufp->fullBit(oldp+182,(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__D_1[2]));
    bufp->fullBit(oldp+183,(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__D_1[3]));
    bufp->fullBit(oldp+184,(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__D_1[4]));
    bufp->fullBit(oldp+185,(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__D_1[5]));
    bufp->fullBit(oldp+186,(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__D_1[6]));
    bufp->fullBit(oldp+187,(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__D_1[7]));
    bufp->fullIData(oldp+188,(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__data_1[0]),32);
    bufp->fullIData(oldp+189,(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__data_1[1]),32);
    bufp->fullIData(oldp+190,(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__data_1[2]),32);
    bufp->fullIData(oldp+191,(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__data_1[3]),32);
    bufp->fullIData(oldp+192,(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__data_1[4]),32);
    bufp->fullIData(oldp+193,(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__data_1[5]),32);
    bufp->fullIData(oldp+194,(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__data_1[6]),32);
    bufp->fullIData(oldp+195,(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__data_1[7]),32);
    bufp->fullBit(oldp+196,(vlSelf->clk));
    bufp->fullBit(oldp+197,(vlSelf->reset));
    bufp->fullBit(oldp+198,(vlSelf->trigger));
    bufp->fullIData(oldp+199,(vlSelf->a0),32);
    bufp->fullBit(oldp+200,(((IData)(vlSelf->top__DOT__Decode_Stage__DOT__BNE_wire)
                              ? (vlSelf->top__DOT__Decode_Stage__DOT__ForwardAD_MUX 
                                 != vlSelf->top__DOT__Decode_Stage__DOT__ForwardBD_MUX)
                              : ((IData)(vlSelf->top__DOT__Decode_Stage__DOT__BEQ_wire)
                                  ? (vlSelf->top__DOT__Decode_Stage__DOT__ForwardAD_MUX 
                                     == vlSelf->top__DOT__Decode_Stage__DOT__ForwardBD_MUX)
                                  : ((IData)(vlSelf->top__DOT__Decode_Stage__DOT__JumpSrc_wire) 
                                     | (IData)(vlSelf->top__DOT__Decode_Stage__DOT__JRetSrc_wire))))));
    bufp->fullIData(oldp+201,(((IData)(vlSelf->trigger)
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
    bufp->fullIData(oldp+202,(((IData)(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__hit_wire)
                                ? vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache_data_wire
                                : vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__mem_data)),32);
    bufp->fullIData(oldp+203,(5U),32);
    bufp->fullIData(oldp+204,(0x20U),32);
    bufp->fullIData(oldp+205,(8U),32);
    bufp->fullIData(oldp+206,(0x1bU),32);
    bufp->fullIData(oldp+207,(3U),32);
    bufp->fullIData(oldp+208,(2U),32);
}
