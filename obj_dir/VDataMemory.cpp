// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VDataMemory.h"
#include "VDataMemory__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VDataMemory::VDataMemory(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VDataMemory__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , WE{vlSymsp->TOP.WE}
    , A{vlSymsp->TOP.A}
    , WD{vlSymsp->TOP.WD}
    , RD{vlSymsp->TOP.RD}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VDataMemory::VDataMemory(const char* _vcname__)
    : VDataMemory(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VDataMemory::~VDataMemory() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VDataMemory___024root___eval_initial(VDataMemory___024root* vlSelf);
void VDataMemory___024root___eval_settle(VDataMemory___024root* vlSelf);
void VDataMemory___024root___eval(VDataMemory___024root* vlSelf);
#ifdef VL_DEBUG
void VDataMemory___024root___eval_debug_assertions(VDataMemory___024root* vlSelf);
#endif  // VL_DEBUG
void VDataMemory___024root___final(VDataMemory___024root* vlSelf);

static void _eval_initial_loop(VDataMemory__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VDataMemory___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VDataMemory___024root___eval_settle(&(vlSymsp->TOP));
        VDataMemory___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VDataMemory::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VDataMemory::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VDataMemory___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VDataMemory___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* VDataMemory::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VDataMemory::final() {
    VDataMemory___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VDataMemory::hierName() const { return vlSymsp->name(); }
const char* VDataMemory::modelName() const { return "VDataMemory"; }
unsigned VDataMemory::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> VDataMemory::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VDataMemory___024root__trace_init_top(VDataMemory___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VDataMemory___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VDataMemory___024root*>(voidSelf);
    VDataMemory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VDataMemory___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VDataMemory___024root__trace_register(VDataMemory___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VDataMemory::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VDataMemory___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
