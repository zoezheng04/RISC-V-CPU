// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcpu1__Syms.h"


VL_ATTR_COLD void Vcpu1___024root__trace_init_sub__TOP__0(Vcpu1___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu1___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+65,"clk", false,-1);
    tracep->declBit(c+66,"rst", false,-1);
    tracep->declBit(c+67,"trigger", false,-1);
    tracep->declBus(c+68,"a0", false,-1, 31,0);
    tracep->pushNamePrefix("cpu1 ");
    tracep->declBus(c+70,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+65,"clk", false,-1);
    tracep->declBit(c+66,"rst", false,-1);
    tracep->declBit(c+67,"trigger", false,-1);
    tracep->declBus(c+68,"a0", false,-1, 31,0);
    tracep->declBit(c+44,"PCSrc_wire", false,-1);
    tracep->declBit(c+45,"ResultSrc_wire", false,-1);
    tracep->declBit(c+46,"MemWrite_wire", false,-1);
    tracep->declBus(c+47,"ALUctrl_wire", false,-1, 3,0);
    tracep->declBit(c+48,"ALUSrc_wire", false,-1);
    tracep->declBit(c+49,"JumpSrc_wire", false,-1);
    tracep->declBit(c+50,"JRetSrc_wire", false,-1);
    tracep->declBus(c+51,"Result_wire", false,-1, 31,0);
    tracep->declBus(c+1,"instr_wire", false,-1, 31,0);
    tracep->declBus(c+52,"WD3_wire", false,-1, 31,0);
    tracep->declBit(c+53,"EQ_wire", false,-1);
    tracep->declBus(c+2,"RD1_wire", false,-1, 31,0);
    tracep->declBus(c+3,"RD2_wire", false,-1, 31,0);
    tracep->declBus(c+54,"Imm_o_wire", false,-1, 31,0);
    tracep->declBus(c+55,"ALU_o_wire", false,-1, 31,0);
    tracep->declBus(c+71,"JRet_o", false,-1, 31,0);
    tracep->declBus(c+56,"PC_target", false,-1, 31,0);
    tracep->declBus(c+4,"PC_out_wire", false,-1, 31,0);
    tracep->declBus(c+57,"JRet_o_wire", false,-1, 31,0);
    tracep->pushNamePrefix("D ");
    tracep->declBus(c+70,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+72,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+65,"clk", false,-1);
    tracep->declBus(c+1,"instr", false,-1, 31,0);
    tracep->declBus(c+52,"WD3", false,-1, 31,0);
    tracep->declBit(c+53,"EQ", false,-1);
    tracep->declBus(c+2,"RD1", false,-1, 31,0);
    tracep->declBus(c+3,"RD2", false,-1, 31,0);
    tracep->declBus(c+54,"Imm_o", false,-1, 31,0);
    tracep->declBus(c+47,"ALUctrl", false,-1, 3,0);
    tracep->declBit(c+44,"PCSrc", false,-1);
    tracep->declBit(c+45,"ResultSrc", false,-1);
    tracep->declBit(c+46,"MemWrite", false,-1);
    tracep->declBit(c+48,"ALUsrc", false,-1);
    tracep->declBit(c+49,"JumpSrc", false,-1);
    tracep->declBit(c+50,"JRetSrc", false,-1);
    tracep->declBus(c+68,"a0", false,-1, 31,0);
    tracep->declBus(c+58,"ImmSrc_wire", false,-1, 2,0);
    tracep->declBit(c+59,"RegWrite_wire", false,-1);
    tracep->pushNamePrefix("control ");
    tracep->declBus(c+5,"opcode", false,-1, 6,0);
    tracep->declBus(c+6,"funct3", false,-1, 2,0);
    tracep->declBit(c+7,"funct7", false,-1);
    tracep->declBit(c+53,"EQ", false,-1);
    tracep->declBit(c+59,"RegWrite", false,-1);
    tracep->declBus(c+47,"ALUctrl", false,-1, 3,0);
    tracep->declBit(c+48,"ALUsrc", false,-1);
    tracep->declBus(c+58,"ImmSrc", false,-1, 2,0);
    tracep->declBit(c+44,"PCSrc", false,-1);
    tracep->declBit(c+46,"MemWrite", false,-1);
    tracep->declBit(c+45,"ResultSrc", false,-1);
    tracep->declBit(c+49,"JumpSrc", false,-1);
    tracep->declBit(c+50,"JRetSrc", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+60,"Type_O", false,-1, 6,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("extend ");
    tracep->declBus(c+70,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+8,"Imm_i", false,-1, 31,7);
    tracep->declBus(c+58,"ImmSrc", false,-1, 2,0);
    tracep->declBus(c+54,"Imm_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rf ");
    tracep->declBus(c+73,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+70,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+65,"clk", false,-1);
    tracep->declBit(c+59,"WE3", false,-1);
    tracep->declBus(c+52,"WD3", false,-1, 31,0);
    tracep->declBus(c+9,"AD1", false,-1, 4,0);
    tracep->declBus(c+10,"AD2", false,-1, 4,0);
    tracep->declBus(c+11,"AD3", false,-1, 4,0);
    tracep->declBus(c+2,"RD1", false,-1, 31,0);
    tracep->declBus(c+3,"RD2", false,-1, 31,0);
    tracep->declBus(c+68,"a0", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+12+i*1,"registers", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("E ");
    tracep->declBus(c+70,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+2,"RD1", false,-1, 31,0);
    tracep->declBus(c+3,"RD2", false,-1, 31,0);
    tracep->declBus(c+54,"Imm_o", false,-1, 31,0);
    tracep->declBus(c+47,"ALUctrl", false,-1, 3,0);
    tracep->declBit(c+48,"ALUsrc", false,-1);
    tracep->declBit(c+53,"EQ", false,-1);
    tracep->declBus(c+55,"ALU_o", false,-1, 31,0);
    tracep->declBus(c+61,"ALUop2", false,-1, 31,0);
    tracep->pushNamePrefix("alu_top ");
    tracep->declBus(c+70,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+2,"SrcA", false,-1, 31,0);
    tracep->declBus(c+61,"SrcB", false,-1, 31,0);
    tracep->declBus(c+47,"ALUControl", false,-1, 3,0);
    tracep->declBus(c+55,"ALUResult", false,-1, 31,0);
    tracep->declBit(c+53,"Zero", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IM ");
    tracep->declBus(c+70,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+65,"clk", false,-1);
    tracep->declBit(c+66,"rst", false,-1);
    tracep->declBit(c+67,"trigger", false,-1);
    tracep->declBit(c+49,"JumpSrc", false,-1);
    tracep->declBus(c+57,"JRet_o", false,-1, 31,0);
    tracep->declBit(c+44,"PCSrc", false,-1);
    tracep->declBus(c+51,"result", false,-1, 31,0);
    tracep->declBus(c+1,"instr", false,-1, 31,0);
    tracep->declBus(c+52,"WD3", false,-1, 31,0);
    tracep->declBus(c+4,"PC_out", false,-1, 31,0);
    tracep->declBus(c+62,"next", false,-1, 31,0);
    tracep->declBus(c+4,"pc_wire", false,-1, 31,0);
    tracep->declBus(c+63,"inc_pc", false,-1, 31,0);
    tracep->declBus(c+64,"PC_next", false,-1, 31,0);
    tracep->pushNamePrefix("InstructionMem ");
    tracep->declBus(c+70,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+74,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+4,"addr", false,-1, 31,0);
    tracep->declBus(c+1,"dout", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pc_reg ");
    tracep->declBus(c+70,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+65,"clk", false,-1);
    tracep->declBit(c+66,"rst", false,-1);
    tracep->declBus(c+62,"PCNext", false,-1, 31,0);
    tracep->declBus(c+4,"PC", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("dm_top ");
    tracep->declBus(c+70,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+65,"clk", false,-1);
    tracep->declBus(c+55,"ALU_o", false,-1, 31,0);
    tracep->declBus(c+3,"WD", false,-1, 31,0);
    tracep->declBit(c+45,"ResultSrc", false,-1);
    tracep->declBit(c+46,"MemWrite", false,-1);
    tracep->declBus(c+51,"Result", false,-1, 31,0);
    tracep->declBus(c+69,"RD_wire", false,-1, 31,0);
    tracep->pushNamePrefix("DataMem ");
    tracep->declBus(c+70,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+74,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+65,"clk", false,-1);
    tracep->declBit(c+46,"WE", false,-1);
    tracep->declBus(c+55,"A", false,-1, 31,0);
    tracep->declBus(c+3,"WD", false,-1, 31,0);
    tracep->declBus(c+69,"RD", false,-1, 31,0);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void Vcpu1___024root__trace_init_top(Vcpu1___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu1___024root__trace_init_top\n"); );
    // Body
    Vcpu1___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vcpu1___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcpu1___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcpu1___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vcpu1___024root__trace_register(Vcpu1___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu1___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vcpu1___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vcpu1___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vcpu1___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vcpu1___024root__trace_full_sub_0(Vcpu1___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vcpu1___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu1___024root__trace_full_top_0\n"); );
    // Init
    Vcpu1___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcpu1___024root*>(voidSelf);
    Vcpu1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vcpu1___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vcpu1___024root__trace_full_sub_0(Vcpu1___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu1___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->cpu1__DOT__instr_wire),32);
    bufp->fullIData(oldp+2,(vlSelf->cpu1__DOT__RD1_wire),32);
    bufp->fullIData(oldp+3,(vlSelf->cpu1__DOT__RD2_wire),32);
    bufp->fullIData(oldp+4,(vlSelf->cpu1__DOT__IM__DOT__pc_wire),32);
    bufp->fullCData(oldp+5,((0x7fU & vlSelf->cpu1__DOT__instr_wire)),7);
    bufp->fullCData(oldp+6,((7U & (vlSelf->cpu1__DOT__instr_wire 
                                   >> 0xcU))),3);
    bufp->fullBit(oldp+7,((1U & (vlSelf->cpu1__DOT__instr_wire 
                                 >> 0x1eU))));
    bufp->fullIData(oldp+8,((vlSelf->cpu1__DOT__instr_wire 
                             >> 7U)),25);
    bufp->fullCData(oldp+9,((0x1fU & (vlSelf->cpu1__DOT__instr_wire 
                                      >> 0xfU))),5);
    bufp->fullCData(oldp+10,((0x1fU & (vlSelf->cpu1__DOT__instr_wire 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+11,((0x1fU & (vlSelf->cpu1__DOT__instr_wire 
                                       >> 7U))),5);
    bufp->fullIData(oldp+12,(vlSelf->cpu1__DOT__D__DOT__rf__DOT__registers[0]),32);
    bufp->fullIData(oldp+13,(vlSelf->cpu1__DOT__D__DOT__rf__DOT__registers[1]),32);
    bufp->fullIData(oldp+14,(vlSelf->cpu1__DOT__D__DOT__rf__DOT__registers[2]),32);
    bufp->fullIData(oldp+15,(vlSelf->cpu1__DOT__D__DOT__rf__DOT__registers[3]),32);
    bufp->fullIData(oldp+16,(vlSelf->cpu1__DOT__D__DOT__rf__DOT__registers[4]),32);
    bufp->fullIData(oldp+17,(vlSelf->cpu1__DOT__D__DOT__rf__DOT__registers[5]),32);
    bufp->fullIData(oldp+18,(vlSelf->cpu1__DOT__D__DOT__rf__DOT__registers[6]),32);
    bufp->fullIData(oldp+19,(vlSelf->cpu1__DOT__D__DOT__rf__DOT__registers[7]),32);
    bufp->fullIData(oldp+20,(vlSelf->cpu1__DOT__D__DOT__rf__DOT__registers[8]),32);
    bufp->fullIData(oldp+21,(vlSelf->cpu1__DOT__D__DOT__rf__DOT__registers[9]),32);
    bufp->fullIData(oldp+22,(vlSelf->cpu1__DOT__D__DOT__rf__DOT__registers[10]),32);
    bufp->fullIData(oldp+23,(vlSelf->cpu1__DOT__D__DOT__rf__DOT__registers[11]),32);
    bufp->fullIData(oldp+24,(vlSelf->cpu1__DOT__D__DOT__rf__DOT__registers[12]),32);
    bufp->fullIData(oldp+25,(vlSelf->cpu1__DOT__D__DOT__rf__DOT__registers[13]),32);
    bufp->fullIData(oldp+26,(vlSelf->cpu1__DOT__D__DOT__rf__DOT__registers[14]),32);
    bufp->fullIData(oldp+27,(vlSelf->cpu1__DOT__D__DOT__rf__DOT__registers[15]),32);
    bufp->fullIData(oldp+28,(vlSelf->cpu1__DOT__D__DOT__rf__DOT__registers[16]),32);
    bufp->fullIData(oldp+29,(vlSelf->cpu1__DOT__D__DOT__rf__DOT__registers[17]),32);
    bufp->fullIData(oldp+30,(vlSelf->cpu1__DOT__D__DOT__rf__DOT__registers[18]),32);
    bufp->fullIData(oldp+31,(vlSelf->cpu1__DOT__D__DOT__rf__DOT__registers[19]),32);
    bufp->fullIData(oldp+32,(vlSelf->cpu1__DOT__D__DOT__rf__DOT__registers[20]),32);
    bufp->fullIData(oldp+33,(vlSelf->cpu1__DOT__D__DOT__rf__DOT__registers[21]),32);
    bufp->fullIData(oldp+34,(vlSelf->cpu1__DOT__D__DOT__rf__DOT__registers[22]),32);
    bufp->fullIData(oldp+35,(vlSelf->cpu1__DOT__D__DOT__rf__DOT__registers[23]),32);
    bufp->fullIData(oldp+36,(vlSelf->cpu1__DOT__D__DOT__rf__DOT__registers[24]),32);
    bufp->fullIData(oldp+37,(vlSelf->cpu1__DOT__D__DOT__rf__DOT__registers[25]),32);
    bufp->fullIData(oldp+38,(vlSelf->cpu1__DOT__D__DOT__rf__DOT__registers[26]),32);
    bufp->fullIData(oldp+39,(vlSelf->cpu1__DOT__D__DOT__rf__DOT__registers[27]),32);
    bufp->fullIData(oldp+40,(vlSelf->cpu1__DOT__D__DOT__rf__DOT__registers[28]),32);
    bufp->fullIData(oldp+41,(vlSelf->cpu1__DOT__D__DOT__rf__DOT__registers[29]),32);
    bufp->fullIData(oldp+42,(vlSelf->cpu1__DOT__D__DOT__rf__DOT__registers[30]),32);
    bufp->fullIData(oldp+43,(vlSelf->cpu1__DOT__D__DOT__rf__DOT__registers[31]),32);
    bufp->fullBit(oldp+44,(vlSelf->cpu1__DOT__PCSrc_wire));
    bufp->fullBit(oldp+45,(vlSelf->cpu1__DOT__ResultSrc_wire));
    bufp->fullBit(oldp+46,(vlSelf->cpu1__DOT__MemWrite_wire));
    bufp->fullCData(oldp+47,(vlSelf->cpu1__DOT__ALUctrl_wire),4);
    bufp->fullBit(oldp+48,(vlSelf->cpu1__DOT__ALUSrc_wire));
    bufp->fullBit(oldp+49,(vlSelf->cpu1__DOT__JumpSrc_wire));
    bufp->fullBit(oldp+50,(vlSelf->cpu1__DOT__JRetSrc_wire));
    bufp->fullIData(oldp+51,(vlSelf->cpu1__DOT__Result_wire),32);
    bufp->fullIData(oldp+52,(vlSelf->cpu1__DOT__WD3_wire),32);
    bufp->fullBit(oldp+53,(vlSelf->cpu1__DOT__EQ_wire));
    bufp->fullIData(oldp+54,(vlSelf->cpu1__DOT__Imm_o_wire),32);
    bufp->fullIData(oldp+55,(vlSelf->cpu1__DOT__ALU_o_wire),32);
    bufp->fullIData(oldp+56,(vlSelf->cpu1__DOT__PC_target),32);
    bufp->fullIData(oldp+57,(vlSelf->cpu1__DOT__JRet_o_wire),32);
    bufp->fullCData(oldp+58,(vlSelf->cpu1__DOT__D__DOT__ImmSrc_wire),3);
    bufp->fullBit(oldp+59,(vlSelf->cpu1__DOT__D__DOT__RegWrite_wire));
    bufp->fullCData(oldp+60,(vlSelf->cpu1__DOT__D__DOT__control__DOT__unnamedblk1__DOT__Type_O),7);
    bufp->fullIData(oldp+61,(vlSelf->cpu1__DOT__E__DOT__ALUop2),32);
    bufp->fullIData(oldp+62,(vlSelf->cpu1__DOT__IM__DOT__next),32);
    bufp->fullIData(oldp+63,(vlSelf->cpu1__DOT__IM__DOT__inc_pc),32);
    bufp->fullIData(oldp+64,(vlSelf->cpu1__DOT__IM__DOT__PC_next),32);
    bufp->fullBit(oldp+65,(vlSelf->clk));
    bufp->fullBit(oldp+66,(vlSelf->rst));
    bufp->fullBit(oldp+67,(vlSelf->trigger));
    bufp->fullIData(oldp+68,(vlSelf->a0),32);
    bufp->fullIData(oldp+69,(((vlSelf->cpu1__DOT__dm_top__DOT__DataMem__DOT__DataMemory_array
                               [(0x1ffffU & ((IData)(3U) 
                                             + vlSelf->cpu1__DOT__ALU_o_wire))] 
                               << 0x18U) | ((vlSelf->cpu1__DOT__dm_top__DOT__DataMem__DOT__DataMemory_array
                                             [(0x1ffffU 
                                               & ((IData)(2U) 
                                                  + vlSelf->cpu1__DOT__ALU_o_wire))] 
                                             << 0x10U) 
                                            | ((vlSelf->cpu1__DOT__dm_top__DOT__DataMem__DOT__DataMemory_array
                                                [(0x1ffffU 
                                                  & ((IData)(1U) 
                                                     + vlSelf->cpu1__DOT__ALU_o_wire))] 
                                                << 8U) 
                                               | vlSelf->cpu1__DOT__dm_top__DOT__DataMem__DOT__DataMemory_array
                                               [(0x1ffffU 
                                                 & vlSelf->cpu1__DOT__ALU_o_wire)])))),32);
    bufp->fullIData(oldp+70,(0x20U),32);
    bufp->fullIData(oldp+71,(vlSelf->cpu1__DOT__JRet_o),32);
    bufp->fullIData(oldp+72,(3U),32);
    bufp->fullIData(oldp+73,(5U),32);
    bufp->fullIData(oldp+74,(8U),32);
}
