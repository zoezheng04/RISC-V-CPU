// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Vtop__Syms* __restrict vlSymsp = static_cast<Vtop__Syms*>(userp);
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vtop::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Vtop__Syms* __restrict vlSymsp = static_cast<Vtop__Syms*>(userp);
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgIData(oldp+0,(vlTOPp->top__DOT__ALUResultM_wire),32);
            tracep->chgIData(oldp+1,(vlTOPp->top__DOT__ALUResultW_wire),32);
            tracep->chgIData(oldp+2,(vlTOPp->top__DOT__ResultW_wire),32);
            tracep->chgIData(oldp+3,(vlTOPp->top__DOT__ReadDataW_wire),32);
            tracep->chgIData(oldp+4,(vlTOPp->top__DOT__WriteDataM_wire),32);
            tracep->chgBit(oldp+5,(vlTOPp->top__DOT__RegWriteM_wire));
            tracep->chgBit(oldp+6,(vlTOPp->top__DOT__RegWriteW_wire));
            tracep->chgBit(oldp+7,(vlTOPp->top__DOT__MemWriteM_wire));
            tracep->chgBit(oldp+8,(vlTOPp->top__DOT__MemTypeM_wire));
            tracep->chgCData(oldp+9,(vlTOPp->top__DOT__RdM_wire),5);
            tracep->chgCData(oldp+10,(vlTOPp->top__DOT__RdW_wire),5);
            tracep->chgBit(oldp+11,(vlTOPp->top__DOT__ResultSrcM_wire));
            tracep->chgBit(oldp+12,(vlTOPp->top__DOT__ResultSrcW_wire));
            tracep->chgIData(oldp+13,(vlTOPp->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[0]),32);
            tracep->chgIData(oldp+14,(vlTOPp->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[1]),32);
            tracep->chgIData(oldp+15,(vlTOPp->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[2]),32);
            tracep->chgIData(oldp+16,(vlTOPp->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[3]),32);
            tracep->chgIData(oldp+17,(vlTOPp->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[4]),32);
            tracep->chgIData(oldp+18,(vlTOPp->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[5]),32);
            tracep->chgIData(oldp+19,(vlTOPp->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[6]),32);
            tracep->chgIData(oldp+20,(vlTOPp->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[7]),32);
            tracep->chgIData(oldp+21,(vlTOPp->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[8]),32);
            tracep->chgIData(oldp+22,(vlTOPp->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[9]),32);
            tracep->chgIData(oldp+23,(vlTOPp->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[10]),32);
            tracep->chgIData(oldp+24,(vlTOPp->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[11]),32);
            tracep->chgIData(oldp+25,(vlTOPp->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[12]),32);
            tracep->chgIData(oldp+26,(vlTOPp->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[13]),32);
            tracep->chgIData(oldp+27,(vlTOPp->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[14]),32);
            tracep->chgIData(oldp+28,(vlTOPp->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[15]),32);
            tracep->chgIData(oldp+29,(vlTOPp->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[16]),32);
            tracep->chgIData(oldp+30,(vlTOPp->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[17]),32);
            tracep->chgIData(oldp+31,(vlTOPp->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[18]),32);
            tracep->chgIData(oldp+32,(vlTOPp->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[19]),32);
            tracep->chgIData(oldp+33,(vlTOPp->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[20]),32);
            tracep->chgIData(oldp+34,(vlTOPp->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[21]),32);
            tracep->chgIData(oldp+35,(vlTOPp->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[22]),32);
            tracep->chgIData(oldp+36,(vlTOPp->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[23]),32);
            tracep->chgIData(oldp+37,(vlTOPp->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[24]),32);
            tracep->chgIData(oldp+38,(vlTOPp->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[25]),32);
            tracep->chgIData(oldp+39,(vlTOPp->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[26]),32);
            tracep->chgIData(oldp+40,(vlTOPp->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[27]),32);
            tracep->chgIData(oldp+41,(vlTOPp->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[28]),32);
            tracep->chgIData(oldp+42,(vlTOPp->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[29]),32);
            tracep->chgIData(oldp+43,(vlTOPp->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[30]),32);
            tracep->chgIData(oldp+44,(vlTOPp->top__DOT__Decode_Stage__DOT__RegisterFile__DOT__registers[31]),32);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[2U])) {
            tracep->chgIData(oldp+45,(vlTOPp->top__DOT__Fetch_Stage__DOT__PCF_wire),32);
            tracep->chgIData(oldp+46,(((IData)(4U) 
                                       + vlTOPp->top__DOT__Fetch_Stage__DOT__PCF_wire)),32);
            tracep->chgIData(oldp+47,(vlTOPp->top__DOT__Fetch_Stage__DOT__InstrF_wire),32);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [3U] | vlTOPp->__Vm_traceActivity
                         [4U]))) {
            tracep->chgIData(oldp+48,(vlTOPp->top__DOT__ExtImmE_wire),32);
            tracep->chgIData(oldp+49,(vlTOPp->top__DOT__RD1E_wire),32);
            tracep->chgIData(oldp+50,(vlTOPp->top__DOT__RD2E_wire),32);
            tracep->chgCData(oldp+51,(vlTOPp->top__DOT__ALUctrlE_wire),4);
            tracep->chgBit(oldp+52,(vlTOPp->top__DOT__RegWriteE_wire));
            tracep->chgBit(oldp+53,(vlTOPp->top__DOT__MemWriteE_wire));
            tracep->chgBit(oldp+54,(vlTOPp->top__DOT__ALUsrcE_wire));
            tracep->chgBit(oldp+55,(vlTOPp->top__DOT__MemTypeE_wire));
            tracep->chgCData(oldp+56,(vlTOPp->top__DOT__Rs1E_wire),5);
            tracep->chgCData(oldp+57,(vlTOPp->top__DOT__Rs2E_wire),5);
            tracep->chgCData(oldp+58,(vlTOPp->top__DOT__RdE_wire),5);
            tracep->chgBit(oldp+59,(vlTOPp->top__DOT__ResultSrcE_wire));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[4U])) {
            tracep->chgIData(oldp+60,(vlTOPp->top__DOT__InstrD_wire),32);
            tracep->chgIData(oldp+61,(((IData)(vlTOPp->top__DOT__Decode_Stage__DOT__JRetSrc_wire)
                                        ? vlTOPp->top__DOT__Decode_Stage__DOT__RD1D_wire
                                        : ((IData)(vlTOPp->top__DOT__BranchD_wire)
                                            ? (vlTOPp->top__DOT__Decode_Stage__DOT__ExtImmD_wire 
                                               + (vlTOPp->top__DOT__PCPlus4D_wire 
                                                  - (IData)(4U)))
                                            : (vlTOPp->top__DOT__Decode_Stage__DOT__ExtImmD_wire 
                                               + (vlTOPp->top__DOT__PCPlus4D_wire 
                                                  - (IData)(8U)))))),32);
            tracep->chgIData(oldp+62,(vlTOPp->top__DOT__PCPlus4D_wire),32);
            tracep->chgBit(oldp+63,(vlTOPp->top__DOT__PCSrcD_wire));
            tracep->chgCData(oldp+64,((0x1fU & (vlTOPp->top__DOT__InstrD_wire 
                                                >> 0xfU))),5);
            tracep->chgCData(oldp+65,((0x1fU & (vlTOPp->top__DOT__InstrD_wire 
                                                >> 0x14U))),5);
            tracep->chgBit(oldp+66,(vlTOPp->top__DOT__BranchD_wire));
            tracep->chgBit(oldp+67,(vlTOPp->top__DOT__Fetch_Stage__DOT__FlushD));
            tracep->chgBit(oldp+68,(vlTOPp->top__DOT__Decode_Stage__DOT__RegWrite_wire));
            tracep->chgCData(oldp+69,(vlTOPp->top__DOT__Decode_Stage__DOT__ALUctrl_wire),4);
            tracep->chgBit(oldp+70,(vlTOPp->top__DOT__Decode_Stage__DOT__ALUSrc_wire));
            tracep->chgCData(oldp+71,(vlTOPp->top__DOT__Decode_Stage__DOT__ImmSrc_wire),3);
            tracep->chgBit(oldp+72,(vlTOPp->top__DOT__Decode_Stage__DOT__MemWrite_wire));
            tracep->chgBit(oldp+73,(vlTOPp->top__DOT__Decode_Stage__DOT__ResultSrc_wire));
            tracep->chgBit(oldp+74,(vlTOPp->top__DOT__Decode_Stage__DOT__JumpSrc_wire));
            tracep->chgBit(oldp+75,(vlTOPp->top__DOT__Decode_Stage__DOT__JRetSrc_wire));
            tracep->chgBit(oldp+76,(vlTOPp->top__DOT__Decode_Stage__DOT__BEQ_wire));
            tracep->chgBit(oldp+77,(vlTOPp->top__DOT__Decode_Stage__DOT__BNE_wire));
            tracep->chgBit(oldp+78,(vlTOPp->top__DOT__Decode_Stage__DOT__MemType_wire));
            tracep->chgIData(oldp+79,(vlTOPp->top__DOT__Decode_Stage__DOT__RD1D_wire),32);
            tracep->chgIData(oldp+80,(vlTOPp->top__DOT__Decode_Stage__DOT__RD2D_wire),32);
            tracep->chgIData(oldp+81,(vlTOPp->top__DOT__Decode_Stage__DOT__ExtImmD_wire),32);
            tracep->chgIData(oldp+82,(((IData)(vlTOPp->top__DOT__Decode_Stage__DOT__JumpSrc_wire)
                                        ? (vlTOPp->top__DOT__PCPlus4D_wire 
                                           - (IData)(4U))
                                        : vlTOPp->top__DOT__Decode_Stage__DOT__ExtImmD_wire)),32);
            tracep->chgIData(oldp+83,(vlTOPp->top__DOT__Decode_Stage__DOT__ForwardAD_MUX),32);
            tracep->chgIData(oldp+84,(vlTOPp->top__DOT__Decode_Stage__DOT__ForwardBD_MUX),32);
            tracep->chgCData(oldp+85,((0x7fU & vlTOPp->top__DOT__InstrD_wire)),7);
            tracep->chgCData(oldp+86,((7U & (vlTOPp->top__DOT__InstrD_wire 
                                             >> 0xcU))),3);
            tracep->chgBit(oldp+87,((1U & (vlTOPp->top__DOT__InstrD_wire 
                                           >> 0x1eU))));
            tracep->chgCData(oldp+88,(vlTOPp->top__DOT__Decode_Stage__DOT__ControlUnit__DOT__unnamedblk1__DOT__Type_O),7);
            tracep->chgIData(oldp+89,((0x1ffffffU & 
                                       (vlTOPp->top__DOT__InstrD_wire 
                                        >> 7U))),25);
            tracep->chgCData(oldp+90,((0x1fU & (vlTOPp->top__DOT__InstrD_wire 
                                                >> 7U))),5);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[5U])) {
            tracep->chgBit(oldp+91,(vlTOPp->top__DOT__StallF_wire));
            tracep->chgBit(oldp+92,(vlTOPp->top__DOT__StallD_wire));
            tracep->chgCData(oldp+93,(vlTOPp->top__DOT__ForwardAE_wire),2);
            tracep->chgCData(oldp+94,(vlTOPp->top__DOT__ForwardBE_wire),2);
            tracep->chgBit(oldp+95,(vlTOPp->top__DOT__FlushE_wire));
            tracep->chgIData(oldp+96,(vlTOPp->top__DOT__Execute_Stage__DOT__SrcAE_wire),32);
            tracep->chgIData(oldp+97,(vlTOPp->top__DOT__Execute_Stage__DOT__SrcBE_wire),32);
            tracep->chgIData(oldp+98,(vlTOPp->top__DOT__Execute_Stage__DOT__SrcBE_Forwarding_wire),32);
            tracep->chgIData(oldp+99,(vlTOPp->top__DOT__Execute_Stage__DOT__Result_wire),32);
            tracep->chgBit(oldp+100,(vlTOPp->top__DOT__HazardUnit__DOT__BranchStall));
            tracep->chgBit(oldp+101,(vlTOPp->top__DOT__HazardUnit__DOT__lwstall));
        }
        tracep->chgBit(oldp+102,(vlTOPp->clk));
        tracep->chgBit(oldp+103,(vlTOPp->reset));
        tracep->chgBit(oldp+104,(vlTOPp->trigger));
        tracep->chgIData(oldp+105,(vlTOPp->a0),32);
        tracep->chgBit(oldp+106,((((0U != (0x1fU & 
                                           (vlTOPp->top__DOT__InstrD_wire 
                                            >> 0xfU))) 
                                   & ((0x1fU & (vlTOPp->top__DOT__InstrD_wire 
                                                >> 0xfU)) 
                                      == (IData)(vlTOPp->top__DOT__RdM_wire))) 
                                  & (IData)(vlTOPp->top__DOT__RegWriteM_wire))));
        tracep->chgBit(oldp+107,((((0U != (0x1fU & 
                                           (vlTOPp->top__DOT__InstrD_wire 
                                            >> 0x14U))) 
                                   & ((0x1fU & (vlTOPp->top__DOT__InstrD_wire 
                                                >> 0x14U)) 
                                      == (IData)(vlTOPp->top__DOT__RdM_wire))) 
                                  & (IData)(vlTOPp->top__DOT__RegWriteM_wire))));
        tracep->chgIData(oldp+108,(((IData)(vlTOPp->trigger)
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
        tracep->chgIData(oldp+109,(((IData)(vlTOPp->top__DOT__MemTypeM_wire)
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
    }
}

void Vtop::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vtop__Syms* __restrict vlSymsp = static_cast<Vtop__Syms*>(userp);
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
        vlTOPp->__Vm_traceActivity[2U] = 0U;
        vlTOPp->__Vm_traceActivity[3U] = 0U;
        vlTOPp->__Vm_traceActivity[4U] = 0U;
        vlTOPp->__Vm_traceActivity[5U] = 0U;
    }
}
