// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcpu1__Syms.h"


void Vcpu1___024root__trace_chg_sub_0(Vcpu1___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vcpu1___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu1___024root__trace_chg_top_0\n"); );
    // Init
    Vcpu1___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcpu1___024root*>(voidSelf);
    Vcpu1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vcpu1___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vcpu1___024root__trace_chg_sub_0(Vcpu1___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu1___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->cpu1__DOT__instr_wire),32);
        bufp->chgIData(oldp+1,(vlSelf->cpu1__DOT__RD1_wire),32);
        bufp->chgIData(oldp+2,(vlSelf->cpu1__DOT__RD2_wire),32);
        bufp->chgIData(oldp+3,(vlSelf->cpu1__DOT__IM__DOT__pc_wire),32);
        bufp->chgCData(oldp+4,((0x7fU & vlSelf->cpu1__DOT__instr_wire)),7);
        bufp->chgCData(oldp+5,((7U & (vlSelf->cpu1__DOT__instr_wire 
                                      >> 0xcU))),3);
        bufp->chgBit(oldp+6,((1U & (vlSelf->cpu1__DOT__instr_wire 
                                    >> 0x1eU))));
        bufp->chgIData(oldp+7,((vlSelf->cpu1__DOT__instr_wire 
                                >> 7U)),25);
        bufp->chgCData(oldp+8,((0x1fU & (vlSelf->cpu1__DOT__instr_wire 
                                         >> 0xfU))),5);
        bufp->chgCData(oldp+9,((0x1fU & (vlSelf->cpu1__DOT__instr_wire 
                                         >> 0x14U))),5);
        bufp->chgCData(oldp+10,((0x1fU & (vlSelf->cpu1__DOT__instr_wire 
                                          >> 7U))),5);
        bufp->chgIData(oldp+11,(vlSelf->cpu1__DOT__D__DOT__rf__DOT__registers[0]),32);
        bufp->chgIData(oldp+12,(vlSelf->cpu1__DOT__D__DOT__rf__DOT__registers[1]),32);
        bufp->chgIData(oldp+13,(vlSelf->cpu1__DOT__D__DOT__rf__DOT__registers[2]),32);
        bufp->chgIData(oldp+14,(vlSelf->cpu1__DOT__D__DOT__rf__DOT__registers[3]),32);
        bufp->chgIData(oldp+15,(vlSelf->cpu1__DOT__D__DOT__rf__DOT__registers[4]),32);
        bufp->chgIData(oldp+16,(vlSelf->cpu1__DOT__D__DOT__rf__DOT__registers[5]),32);
        bufp->chgIData(oldp+17,(vlSelf->cpu1__DOT__D__DOT__rf__DOT__registers[6]),32);
        bufp->chgIData(oldp+18,(vlSelf->cpu1__DOT__D__DOT__rf__DOT__registers[7]),32);
        bufp->chgIData(oldp+19,(vlSelf->cpu1__DOT__D__DOT__rf__DOT__registers[8]),32);
        bufp->chgIData(oldp+20,(vlSelf->cpu1__DOT__D__DOT__rf__DOT__registers[9]),32);
        bufp->chgIData(oldp+21,(vlSelf->cpu1__DOT__D__DOT__rf__DOT__registers[10]),32);
        bufp->chgIData(oldp+22,(vlSelf->cpu1__DOT__D__DOT__rf__DOT__registers[11]),32);
        bufp->chgIData(oldp+23,(vlSelf->cpu1__DOT__D__DOT__rf__DOT__registers[12]),32);
        bufp->chgIData(oldp+24,(vlSelf->cpu1__DOT__D__DOT__rf__DOT__registers[13]),32);
        bufp->chgIData(oldp+25,(vlSelf->cpu1__DOT__D__DOT__rf__DOT__registers[14]),32);
        bufp->chgIData(oldp+26,(vlSelf->cpu1__DOT__D__DOT__rf__DOT__registers[15]),32);
        bufp->chgIData(oldp+27,(vlSelf->cpu1__DOT__D__DOT__rf__DOT__registers[16]),32);
        bufp->chgIData(oldp+28,(vlSelf->cpu1__DOT__D__DOT__rf__DOT__registers[17]),32);
        bufp->chgIData(oldp+29,(vlSelf->cpu1__DOT__D__DOT__rf__DOT__registers[18]),32);
        bufp->chgIData(oldp+30,(vlSelf->cpu1__DOT__D__DOT__rf__DOT__registers[19]),32);
        bufp->chgIData(oldp+31,(vlSelf->cpu1__DOT__D__DOT__rf__DOT__registers[20]),32);
        bufp->chgIData(oldp+32,(vlSelf->cpu1__DOT__D__DOT__rf__DOT__registers[21]),32);
        bufp->chgIData(oldp+33,(vlSelf->cpu1__DOT__D__DOT__rf__DOT__registers[22]),32);
        bufp->chgIData(oldp+34,(vlSelf->cpu1__DOT__D__DOT__rf__DOT__registers[23]),32);
        bufp->chgIData(oldp+35,(vlSelf->cpu1__DOT__D__DOT__rf__DOT__registers[24]),32);
        bufp->chgIData(oldp+36,(vlSelf->cpu1__DOT__D__DOT__rf__DOT__registers[25]),32);
        bufp->chgIData(oldp+37,(vlSelf->cpu1__DOT__D__DOT__rf__DOT__registers[26]),32);
        bufp->chgIData(oldp+38,(vlSelf->cpu1__DOT__D__DOT__rf__DOT__registers[27]),32);
        bufp->chgIData(oldp+39,(vlSelf->cpu1__DOT__D__DOT__rf__DOT__registers[28]),32);
        bufp->chgIData(oldp+40,(vlSelf->cpu1__DOT__D__DOT__rf__DOT__registers[29]),32);
        bufp->chgIData(oldp+41,(vlSelf->cpu1__DOT__D__DOT__rf__DOT__registers[30]),32);
        bufp->chgIData(oldp+42,(vlSelf->cpu1__DOT__D__DOT__rf__DOT__registers[31]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+43,(vlSelf->cpu1__DOT__PCSrc_wire));
        bufp->chgBit(oldp+44,(vlSelf->cpu1__DOT__ResultSrc_wire));
        bufp->chgBit(oldp+45,(vlSelf->cpu1__DOT__MemWrite_wire));
        bufp->chgCData(oldp+46,(vlSelf->cpu1__DOT__ALUctrl_wire),4);
        bufp->chgBit(oldp+47,(vlSelf->cpu1__DOT__ALUSrc_wire));
        bufp->chgBit(oldp+48,(vlSelf->cpu1__DOT__JumpSrc_wire));
        bufp->chgBit(oldp+49,(vlSelf->cpu1__DOT__JRetSrc_wire));
        bufp->chgIData(oldp+50,(vlSelf->cpu1__DOT__Result_wire),32);
        bufp->chgIData(oldp+51,(vlSelf->cpu1__DOT__WD3_wire),32);
        bufp->chgBit(oldp+52,(vlSelf->cpu1__DOT__EQ_wire));
        bufp->chgIData(oldp+53,(vlSelf->cpu1__DOT__Imm_o_wire),32);
        bufp->chgIData(oldp+54,(vlSelf->cpu1__DOT__ALU_o_wire),32);
        bufp->chgIData(oldp+55,(vlSelf->cpu1__DOT__PC_target),32);
        bufp->chgIData(oldp+56,(vlSelf->cpu1__DOT__JRet_o_wire),32);
        bufp->chgBit(oldp+57,(vlSelf->cpu1__DOT__MemType_wire));
        bufp->chgCData(oldp+58,(vlSelf->cpu1__DOT__D__DOT__ImmSrc_wire),3);
        bufp->chgBit(oldp+59,(vlSelf->cpu1__DOT__D__DOT__RegWrite_wire));
        bufp->chgCData(oldp+60,(vlSelf->cpu1__DOT__D__DOT__control__DOT__unnamedblk1__DOT__Type_O),7);
        bufp->chgIData(oldp+61,(vlSelf->cpu1__DOT__E__DOT__ALUop2),32);
        bufp->chgIData(oldp+62,(vlSelf->cpu1__DOT__IM__DOT__next),32);
        bufp->chgIData(oldp+63,(vlSelf->cpu1__DOT__IM__DOT__inc_pc),32);
        bufp->chgIData(oldp+64,(vlSelf->cpu1__DOT__IM__DOT__PC_next),32);
    }
    bufp->chgBit(oldp+65,(vlSelf->clk));
    bufp->chgBit(oldp+66,(vlSelf->rst));
    bufp->chgBit(oldp+67,(vlSelf->trigger));
    bufp->chgIData(oldp+68,(vlSelf->a0),32);
    bufp->chgIData(oldp+69,(((IData)(vlSelf->cpu1__DOT__MemType_wire)
                              ? vlSelf->cpu1__DOT__dm_top__DOT__DataMem__DOT__DataMemory_array
                             [(0x1ffffU & vlSelf->cpu1__DOT__ALU_o_wire)]
                              : ((vlSelf->cpu1__DOT__dm_top__DOT__DataMem__DOT__DataMemory_array
                                  [(0x1ffffU & ((IData)(3U) 
                                                + vlSelf->cpu1__DOT__ALU_o_wire))] 
                                  << 0x18U) | ((vlSelf->cpu1__DOT__dm_top__DOT__DataMem__DOT__DataMemory_array
                                                [(0x1ffffU 
                                                  & ((IData)(2U) 
                                                     + vlSelf->cpu1__DOT__ALU_o_wire))] 
                                                << 0x10U) 
                                               | ((vlSelf->cpu1__DOT__dm_top__DOT__DataMem__DOT__DataMemory_array
                                                   [
                                                   (0x1ffffU 
                                                    & ((IData)(1U) 
                                                       + vlSelf->cpu1__DOT__ALU_o_wire))] 
                                                   << 8U) 
                                                  | vlSelf->cpu1__DOT__dm_top__DOT__DataMem__DOT__DataMemory_array
                                                  [
                                                  (0x1ffffU 
                                                   & vlSelf->cpu1__DOT__ALU_o_wire)]))))),32);
}

void Vcpu1___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu1___024root__trace_cleanup\n"); );
    // Init
    Vcpu1___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcpu1___024root*>(voidSelf);
    Vcpu1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
