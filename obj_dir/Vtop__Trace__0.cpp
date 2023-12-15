// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgBit(oldp+0,(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__V[0]));
        bufp->chgBit(oldp+1,(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__V[1]));
        bufp->chgBit(oldp+2,(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__V[2]));
        bufp->chgBit(oldp+3,(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__V[3]));
        bufp->chgBit(oldp+4,(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__V[4]));
        bufp->chgBit(oldp+5,(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__V[5]));
        bufp->chgBit(oldp+6,(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__V[6]));
        bufp->chgBit(oldp+7,(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__V[7]));
        bufp->chgIData(oldp+8,(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache__DOT__unnamedblk1__DOT__i),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+9,(vlSelf->top__DOT__InstrD_wire),32);
        bufp->chgIData(oldp+10,(vlSelf->top__DOT__ExtImmE_wire),32);
        bufp->chgIData(oldp+11,(vlSelf->top__DOT__ALUResultM_wire),32);
        bufp->chgIData(oldp+12,(vlSelf->top__DOT__ALUResultW_wire),32);
        bufp->chgIData(oldp+13,(vlSelf->top__DOT__ResultW_wire),32);
        bufp->chgIData(oldp+14,(((IData)(vlSelf->top__DOT__Decode_Stage__DOT__JRetSrc_wire)
                                  ? vlSelf->top__DOT__Decode_Stage__DOT__RD1D_wire
                                  : (vlSelf->top__DOT__Decode_Stage__DOT__ExtImmD_wire 
                                     + (vlSelf->top__DOT__PCPlus4D_wire 
                                        - (IData)(4U))))),32);
        bufp->chgIData(oldp+15,(vlSelf->top__DOT__ReadDataW_wire),32);
        bufp->chgIData(oldp+16,(vlSelf->top__DOT__PCPlus4D_wire),32);
        bufp->chgIData(oldp+17,(vlSelf->top__DOT__WriteDataM_wire),32);
        bufp->chgIData(oldp+18,(vlSelf->top__DOT__RD1E_wire),32);
        bufp->chgIData(oldp+19,(vlSelf->top__DOT__RD2E_wire),32);
        bufp->chgCData(oldp+20,(vlSelf->top__DOT__ALUctrlE_wire),4);
        bufp->chgBit(oldp+21,(vlSelf->top__DOT__RegWriteE_wire));
        bufp->chgBit(oldp+22,(vlSelf->top__DOT__RegWriteM_wire));
        bufp->chgBit(oldp+23,(vlSelf->top__DOT__RegWriteW_wire));
        bufp->chgBit(oldp+24,(vlSelf->top__DOT__StallF_wire));
        bufp->chgBit(oldp+25,(vlSelf->top__DOT__StallPC_wire));
        bufp->chgCData(oldp+26,(vlSelf->top__DOT__ForwardAE_wire),2);
        bufp->chgCData(oldp+27,(vlSelf->top__DOT__ForwardBE_wire),2);
        bufp->chgBit(oldp+28,(vlSelf->top__DOT__MemWriteE_wire));
        bufp->chgBit(oldp+29,(vlSelf->top__DOT__MemWriteM_wire));
        bufp->chgBit(oldp+30,((((0U != (0x1fU & (vlSelf->top__DOT__InstrD_wire 
                                                 >> 0xfU))) 
                                & ((0x1fU & (vlSelf->top__DOT__InstrD_wire 
                                             >> 0xfU)) 
                                   == (IData)(vlSelf->top__DOT__RdM_wire))) 
                               & (IData)(vlSelf->top__DOT__RegWriteM_wire))));
        bufp->chgBit(oldp+31,((((0U != (0x1fU & (vlSelf->top__DOT__InstrD_wire 
                                                 >> 0x14U))) 
                                & ((0x1fU & (vlSelf->top__DOT__InstrD_wire 
                                             >> 0x14U)) 
                                   == (IData)(vlSelf->top__DOT__RdM_wire))) 
                               & (IData)(vlSelf->top__DOT__RegWriteM_wire))));
        bufp->chgBit(oldp+32,(((IData)(vlSelf->top__DOT__Decode_Stage__DOT__BNE_wire)
                                ? (vlSelf->top__DOT__Decode_Stage__DOT__ForwardAD_MUX 
                                   != vlSelf->top__DOT__Decode_Stage__DOT__ForwardBD_MUX)
                                : ((IData)(vlSelf->top__DOT__Decode_Stage__DOT__BEQ_wire)
                                    ? (vlSelf->top__DOT__Decode_Stage__DOT__ForwardAD_MUX 
                                       == vlSelf->top__DOT__Decode_Stage__DOT__ForwardBD_MUX)
                                    : ((IData)(vlSelf->top__DOT__Decode_Stage__DOT__JumpSrc_wire) 
                                       | (IData)(vlSelf->top__DOT__Decode_Stage__DOT__JRetSrc_wire))))));
        bufp->chgBit(oldp+33,(vlSelf->top__DOT__ALUsrcE_wire));
        bufp->chgBit(oldp+34,(vlSelf->top__DOT__MemTypeE_wire));
        bufp->chgBit(oldp+35,(vlSelf->top__DOT__MemTypeM_wire));
        bufp->chgCData(oldp+36,(vlSelf->top__DOT__Rs1E_wire),5);
        bufp->chgCData(oldp+37,(vlSelf->top__DOT__Rs2E_wire),5);
        bufp->chgCData(oldp+38,(vlSelf->top__DOT__RdE_wire),5);
        bufp->chgCData(oldp+39,(vlSelf->top__DOT__RdM_wire),5);
        bufp->chgCData(oldp+40,(vlSelf->top__DOT__RdW_wire),5);
        bufp->chgCData(oldp+41,((0x1fU & (vlSelf->top__DOT__InstrD_wire 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+42,((0x1fU & (vlSelf->top__DOT__InstrD_wire 
                                          >> 0x14U))),5);
        bufp->chgBit(oldp+43,(vlSelf->top__DOT__ResultSrcE_wire));
        bufp->chgBit(oldp+44,(vlSelf->top__DOT__ResultSrcM_wire));
        bufp->chgBit(oldp+45,(vlSelf->top__DOT__ResultSrcW_wire));
        bufp->chgBit(oldp+46,(vlSelf->top__DOT__BranchD_wire));
        bufp->chgBit(oldp+47,(vlSelf->top__DOT__FlushD_wire));
        bufp->chgBit(oldp+48,(vlSelf->top__DOT__Decode_Stage__DOT__RegWrite_wire));
        bufp->chgCData(oldp+49,(vlSelf->top__DOT__Decode_Stage__DOT__ALUctrl_wire),4);
        bufp->chgBit(oldp+50,(vlSelf->top__DOT__Decode_Stage__DOT__ALUSrc_wire));
        bufp->chgCData(oldp+51,(vlSelf->top__DOT__Decode_Stage__DOT__ImmSrc_wire),3);
        bufp->chgBit(oldp+52,(vlSelf->top__DOT__Decode_Stage__DOT__MemWrite_wire));
        bufp->chgBit(oldp+53,(vlSelf->top__DOT__Decode_Stage__DOT__ResultSrc_wire));
        bufp->chgBit(oldp+54,(vlSelf->top__DOT__Decode_Stage__DOT__JumpSrc_wire));
        bufp->chgBit(oldp+55,(vlSelf->top__DOT__Decode_Stage__DOT__JRetSrc_wire));
        bufp->chgBit(oldp+56,(vlSelf->top__DOT__Decode_Stage__DOT__BEQ_wire));
        bufp->chgBit(oldp+57,(vlSelf->top__DOT__Decode_Stage__DOT__BNE_wire));
        bufp->chgBit(oldp+58,(vlSelf->top__DOT__Decode_Stage__DOT__MemType_wire));
        bufp->chgIData(oldp+59,(vlSelf->top__DOT__Decode_Stage__DOT__RD1D_wire),32);
        bufp->chgIData(oldp+60,(vlSelf->top__DOT__Decode_Stage__DOT__RD2D_wire),32);
        bufp->chgIData(oldp+61,(vlSelf->top__DOT__Decode_Stage__DOT__ExtImmD_wire),32);
        bufp->chgIData(oldp+62,(((IData)(vlSelf->top__DOT__Decode_Stage__DOT__JumpSrc_wire)
                                  ? vlSelf->top__DOT__PCPlus4D_wire
                                  : vlSelf->top__DOT__Decode_Stage__DOT__ExtImmD_wire)),32);
        bufp->chgIData(oldp+63,(vlSelf->top__DOT__Decode_Stage__DOT__ForwardAD_MUX),32);
        bufp->chgIData(oldp+64,(vlSelf->top__DOT__Decode_Stage__DOT__ForwardBD_MUX),32);
        bufp->chgCData(oldp+65,((0x7fU & vlSelf->top__DOT__InstrD_wire)),7);
        bufp->chgCData(oldp+66,((7U & (vlSelf->top__DOT__InstrD_wire 
                                       >> 0xcU))),3);
        bufp->chgBit(oldp+67,((1U & (vlSelf->top__DOT__InstrD_wire 
                                     >> 0x1eU))));
        bufp->chgCData(oldp+68,(vlSelf->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__opfunct7),2);
        bufp->chgCData(oldp+69,(vlSelf->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O),7);
        bufp->chgCData(oldp+70,((0x1fU & (vlSelf->top__DOT__InstrD_wire 
                                          >> 7U))),5);
        bufp->chgIData(oldp+71,(vlSelf->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[0]),32);
        bufp->chgIData(oldp+72,(vlSelf->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[1]),32);
        bufp->chgIData(oldp+73,(vlSelf->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[2]),32);
        bufp->chgIData(oldp+74,(vlSelf->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[3]),32);
        bufp->chgIData(oldp+75,(vlSelf->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[4]),32);
        bufp->chgIData(oldp+76,(vlSelf->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[5]),32);
        bufp->chgIData(oldp+77,(vlSelf->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[6]),32);
        bufp->chgIData(oldp+78,(vlSelf->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[7]),32);
        bufp->chgIData(oldp+79,(vlSelf->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[8]),32);
        bufp->chgIData(oldp+80,(vlSelf->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[9]),32);
        bufp->chgIData(oldp+81,(vlSelf->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[10]),32);
        bufp->chgIData(oldp+82,(vlSelf->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[11]),32);
        bufp->chgIData(oldp+83,(vlSelf->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[12]),32);
        bufp->chgIData(oldp+84,(vlSelf->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[13]),32);
        bufp->chgIData(oldp+85,(vlSelf->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[14]),32);
        bufp->chgIData(oldp+86,(vlSelf->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[15]),32);
        bufp->chgIData(oldp+87,(vlSelf->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[16]),32);
        bufp->chgIData(oldp+88,(vlSelf->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[17]),32);
        bufp->chgIData(oldp+89,(vlSelf->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[18]),32);
        bufp->chgIData(oldp+90,(vlSelf->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[19]),32);
        bufp->chgIData(oldp+91,(vlSelf->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[20]),32);
        bufp->chgIData(oldp+92,(vlSelf->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[21]),32);
        bufp->chgIData(oldp+93,(vlSelf->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[22]),32);
        bufp->chgIData(oldp+94,(vlSelf->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[23]),32);
        bufp->chgIData(oldp+95,(vlSelf->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[24]),32);
        bufp->chgIData(oldp+96,(vlSelf->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[25]),32);
        bufp->chgIData(oldp+97,(vlSelf->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[26]),32);
        bufp->chgIData(oldp+98,(vlSelf->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[27]),32);
        bufp->chgIData(oldp+99,(vlSelf->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[28]),32);
        bufp->chgIData(oldp+100,(vlSelf->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[29]),32);
        bufp->chgIData(oldp+101,(vlSelf->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[30]),32);
        bufp->chgIData(oldp+102,(vlSelf->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[31]),32);
        bufp->chgIData(oldp+103,((vlSelf->top__DOT__InstrD_wire 
                                  >> 7U)),25);
        bufp->chgIData(oldp+104,(vlSelf->top__DOT__Execute_Stage__DOT__SrcAE_wire),32);
        bufp->chgIData(oldp+105,(vlSelf->top__DOT__Execute_Stage__DOT__SrcBE_wire),32);
        bufp->chgIData(oldp+106,(vlSelf->top__DOT__Execute_Stage__DOT__SrcBE_Forwarding_wire),32);
        bufp->chgIData(oldp+107,(vlSelf->top__DOT__Execute_Stage__DOT__Result_wire),32);
        bufp->chgBit(oldp+108,(vlSelf->top__DOT__HazardUnit__DOT__BranchStall));
        bufp->chgBit(oldp+109,(vlSelf->top__DOT__HazardUnit__DOT__lwstall));
        bufp->chgBit(oldp+110,(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__hit));
        bufp->chgCData(oldp+111,((7U & vlSelf->top__DOT__ALUResultM_wire)),3);
        bufp->chgIData(oldp+112,((0x7ffffffU & (vlSelf->top__DOT__ALUResultM_wire 
                                                >> 3U))),27);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+113,(vlSelf->top__DOT__Fetch_Stage__DOT__PCF_wire),32);
        bufp->chgIData(oldp+114,(((IData)(4U) + vlSelf->top__DOT__Fetch_Stage__DOT__PCF_wire)),32);
        bufp->chgIData(oldp+115,(vlSelf->top__DOT__Fetch_Stage__DOT__InstrF_wire),32);
        bufp->chgIData(oldp+116,(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache_data_wire),32);
    }
    bufp->chgBit(oldp+117,(vlSelf->clk));
    bufp->chgBit(oldp+118,(vlSelf->reset));
    bufp->chgBit(oldp+119,(vlSelf->trigger));
    bufp->chgIData(oldp+120,(vlSelf->a0),32);
    bufp->chgIData(oldp+121,(((IData)(vlSelf->trigger)
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
                                   : ((IData)(4U) + vlSelf->top__DOT__Fetch_Stage__DOT__PCF_wire))
                               : 0U)),32);
    bufp->chgIData(oldp+122,(((IData)(vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__hit)
                               ? vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__cache_data_wire
                               : ((IData)(vlSelf->top__DOT__MemTypeM_wire)
                                   ? vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__main_memory__DOT__DataMemory_array
                                  [(0x1ffffU & vlSelf->top__DOT__ALUResultM_wire)]
                                   : ((vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__main_memory__DOT__DataMemory_array
                                       [(0x1ffffU & 
                                         ((IData)(3U) 
                                          + vlSelf->top__DOT__ALUResultM_wire))] 
                                       << 0x18U) | 
                                      ((vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__main_memory__DOT__DataMemory_array
                                        [(0x1ffffU 
                                          & ((IData)(2U) 
                                             + vlSelf->top__DOT__ALUResultM_wire))] 
                                        << 0x10U) | 
                                       ((vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__main_memory__DOT__DataMemory_array
                                         [(0x1ffffU 
                                           & ((IData)(1U) 
                                              + vlSelf->top__DOT__ALUResultM_wire))] 
                                         << 8U) | vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__main_memory__DOT__DataMemory_array
                                        [(0x1ffffU 
                                          & vlSelf->top__DOT__ALUResultM_wire)])))))),32);
    bufp->chgIData(oldp+123,(((IData)(vlSelf->top__DOT__MemTypeM_wire)
                               ? vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__main_memory__DOT__DataMemory_array
                              [(0x1ffffU & vlSelf->top__DOT__ALUResultM_wire)]
                               : ((vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__main_memory__DOT__DataMemory_array
                                   [(0x1ffffU & ((IData)(3U) 
                                                 + vlSelf->top__DOT__ALUResultM_wire))] 
                                   << 0x18U) | ((vlSelf->top__DOT__Memory_Stage__DOT__memory__DOT__main_memory__DOT__DataMemory_array
                                                 [(0x1ffffU 
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
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
