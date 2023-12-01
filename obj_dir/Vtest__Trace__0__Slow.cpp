// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtest__Syms.h"


VL_ATTR_COLD void Vtest___024root__trace_init_sub__TOP__0(Vtest___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+8,"clk", false,-1);
    tracep->declBit(c+9,"rst", false,-1);
    tracep->declBit(c+10,"EQ", false,-1);
    tracep->declBit(c+11,"PCSrc_i", false,-1);
    tracep->declBus(c+12,"ImmOp", false,-1, 31,0);
    tracep->declBit(c+13,"RegWrite", false,-1);
    tracep->declBus(c+14,"ALUctrl", false,-1, 2,0);
    tracep->declBit(c+15,"ALUsrc", false,-1);
    tracep->declBus(c+16,"ImmSrc", false,-1, 2,0);
    tracep->declBit(c+17,"PCSrc", false,-1);
    tracep->declBit(c+18,"MemWrite", false,-1);
    tracep->declBit(c+19,"ResultSrc", false,-1);
    tracep->declBit(c+20,"JumpSrc", false,-1);
    tracep->declBit(c+21,"JRetSrc", false,-1);
    tracep->pushNamePrefix("test ");
    tracep->declBus(c+24,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+8,"clk", false,-1);
    tracep->declBit(c+9,"rst", false,-1);
    tracep->declBit(c+10,"EQ", false,-1);
    tracep->declBit(c+11,"PCSrc_i", false,-1);
    tracep->declBus(c+12,"ImmOp", false,-1, 31,0);
    tracep->declBit(c+13,"RegWrite", false,-1);
    tracep->declBus(c+14,"ALUctrl", false,-1, 2,0);
    tracep->declBit(c+15,"ALUsrc", false,-1);
    tracep->declBus(c+16,"ImmSrc", false,-1, 2,0);
    tracep->declBit(c+17,"PCSrc", false,-1);
    tracep->declBit(c+18,"MemWrite", false,-1);
    tracep->declBit(c+19,"ResultSrc", false,-1);
    tracep->declBit(c+20,"JumpSrc", false,-1);
    tracep->declBit(c+21,"JRetSrc", false,-1);
    tracep->declBus(c+1,"instr_wire", false,-1, 31,0);
    tracep->pushNamePrefix("control ");
    tracep->declBus(c+2,"opcode", false,-1, 6,0);
    tracep->declBus(c+3,"funct3", false,-1, 2,0);
    tracep->declBit(c+4,"funct7", false,-1);
    tracep->declBit(c+10,"EQ", false,-1);
    tracep->declBit(c+13,"RegWrite", false,-1);
    tracep->declBus(c+14,"ALUctrl", false,-1, 2,0);
    tracep->declBit(c+15,"ALUsrc", false,-1);
    tracep->declBus(c+16,"ImmSrc", false,-1, 2,0);
    tracep->declBit(c+17,"PCSrc", false,-1);
    tracep->declBit(c+18,"MemWrite", false,-1);
    tracep->declBit(c+19,"ResultSrc", false,-1);
    tracep->declBit(c+20,"JumpSrc", false,-1);
    tracep->declBit(c+21,"JRetSrc", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+5,"Type_O", false,-1, 6,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("in ");
    tracep->declBus(c+24,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+8,"clk", false,-1);
    tracep->declBit(c+9,"rst", false,-1);
    tracep->declBit(c+11,"PCSrc", false,-1);
    tracep->declBus(c+12,"ImmOp", false,-1, 31,0);
    tracep->declBus(c+1,"instr", false,-1, 31,0);
    tracep->declBus(c+6,"pcwire", false,-1, 31,0);
    tracep->pushNamePrefix("pc_t ");
    tracep->declBus(c+24,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+11,"PCSrc", false,-1);
    tracep->declBus(c+12,"ImmOp", false,-1, 31,0);
    tracep->declBit(c+8,"clk", false,-1);
    tracep->declBit(c+9,"rst", false,-1);
    tracep->declBus(c+6,"PCout", false,-1, 31,0);
    tracep->declBus(c+22,"branch", false,-1, 31,0);
    tracep->declBus(c+23,"next", false,-1, 31,0);
    tracep->declBus(c+7,"inc", false,-1, 31,0);
    tracep->pushNamePrefix("REG ");
    tracep->declBus(c+24,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+8,"clk", false,-1);
    tracep->declBit(c+9,"rst", false,-1);
    tracep->declBus(c+23,"next_PC", false,-1, 31,0);
    tracep->declBus(c+6,"PC", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pcmux ");
    tracep->declBus(c+24,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+7,"i0", false,-1, 31,0);
    tracep->declBus(c+22,"i1", false,-1, 31,0);
    tracep->declBit(c+11,"sel", false,-1);
    tracep->declBus(c+23,"m_out", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("rom_t ");
    tracep->declBus(c+24,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+25,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+6,"addr", false,-1, 31,0);
    tracep->declBus(c+1,"dout", false,-1, 31,0);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void Vtest___024root__trace_init_top(Vtest___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root__trace_init_top\n"); );
    // Body
    Vtest___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtest___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtest___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtest___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtest___024root__trace_register(Vtest___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtest___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtest___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtest___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtest___024root__trace_full_sub_0(Vtest___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtest___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root__trace_full_top_0\n"); );
    // Init
    Vtest___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtest___024root*>(voidSelf);
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtest___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtest___024root__trace_full_sub_0(Vtest___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->test__DOT__instr_wire),32);
    bufp->fullCData(oldp+2,((0x7fU & vlSelf->test__DOT__instr_wire)),7);
    bufp->fullCData(oldp+3,((7U & (vlSelf->test__DOT__instr_wire 
                                   >> 0xcU))),3);
    bufp->fullBit(oldp+4,((1U & (vlSelf->test__DOT__instr_wire 
                                 >> 0x1eU))));
    bufp->fullCData(oldp+5,(vlSelf->test__DOT__control__DOT__unnamedblk1__DOT__Type_O),7);
    bufp->fullIData(oldp+6,(vlSelf->test__DOT__in__DOT__pcwire),32);
    bufp->fullIData(oldp+7,(((IData)(4U) + vlSelf->test__DOT__in__DOT__pcwire)),32);
    bufp->fullBit(oldp+8,(vlSelf->clk));
    bufp->fullBit(oldp+9,(vlSelf->rst));
    bufp->fullBit(oldp+10,(vlSelf->EQ));
    bufp->fullBit(oldp+11,(vlSelf->PCSrc_i));
    bufp->fullIData(oldp+12,(vlSelf->ImmOp),32);
    bufp->fullBit(oldp+13,(vlSelf->RegWrite));
    bufp->fullCData(oldp+14,(vlSelf->ALUctrl),3);
    bufp->fullBit(oldp+15,(vlSelf->ALUsrc));
    bufp->fullCData(oldp+16,(vlSelf->ImmSrc),3);
    bufp->fullBit(oldp+17,(vlSelf->PCSrc));
    bufp->fullBit(oldp+18,(vlSelf->MemWrite));
    bufp->fullBit(oldp+19,(vlSelf->ResultSrc));
    bufp->fullBit(oldp+20,(vlSelf->JumpSrc));
    bufp->fullBit(oldp+21,(vlSelf->JRetSrc));
    bufp->fullIData(oldp+22,((vlSelf->test__DOT__in__DOT__pcwire 
                              + vlSelf->ImmOp)),32);
    bufp->fullIData(oldp+23,(((IData)(vlSelf->PCSrc_i)
                               ? (vlSelf->test__DOT__in__DOT__pcwire 
                                  + vlSelf->ImmOp) : 
                              ((IData)(4U) + vlSelf->test__DOT__in__DOT__pcwire))),32);
    bufp->fullIData(oldp+24,(0x20U),32);
    bufp->fullIData(oldp+25,(8U),32);
}
