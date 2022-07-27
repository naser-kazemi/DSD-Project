// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdisplay.h for the primary calling header

#include "verilated.h"

#include "Vdisplay__Syms.h"
#include "Vdisplay___024root.h"

void Vdisplay___024root___ctor_var_reset(Vdisplay___024root* vlSelf);

Vdisplay___024root::Vdisplay___024root(Vdisplay__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vdisplay___024root___ctor_var_reset(this);
}

void Vdisplay___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vdisplay___024root::~Vdisplay___024root() {
}
