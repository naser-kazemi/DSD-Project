// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vdisplay.h"
#include "Vdisplay__Syms.h"

//============================================================
// Constructors

Vdisplay::Vdisplay(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vdisplay__Syms(_vcontextp__, _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , reset{vlSymsp->TOP.reset}
    , u{vlSymsp->TOP.u}
    , d{vlSymsp->TOP.d}
    , l{vlSymsp->TOP.l}
    , r{vlSymsp->TOP.r}
    , hsync{vlSymsp->TOP.hsync}
    , vsync{vlSymsp->TOP.vsync}
    , rgb{vlSymsp->TOP.rgb}
    , rootp{&(vlSymsp->TOP)}
{
}

Vdisplay::Vdisplay(const char* _vcname__)
    : Vdisplay(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vdisplay::~Vdisplay() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vdisplay___024root___eval_initial(Vdisplay___024root* vlSelf);
void Vdisplay___024root___eval_settle(Vdisplay___024root* vlSelf);
void Vdisplay___024root___eval(Vdisplay___024root* vlSelf);
#ifdef VL_DEBUG
void Vdisplay___024root___eval_debug_assertions(Vdisplay___024root* vlSelf);
#endif  // VL_DEBUG
void Vdisplay___024root___final(Vdisplay___024root* vlSelf);

static void _eval_initial_loop(Vdisplay__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vdisplay___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vdisplay___024root___eval_settle(&(vlSymsp->TOP));
        Vdisplay___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vdisplay::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vdisplay::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vdisplay___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vdisplay___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* Vdisplay::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vdisplay::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vdisplay::final() {
    Vdisplay___024root___final(&(vlSymsp->TOP));
}
