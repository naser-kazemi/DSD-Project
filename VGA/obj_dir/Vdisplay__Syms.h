// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VDISPLAY__SYMS_H_
#define VERILATED_VDISPLAY__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vdisplay.h"

// INCLUDE MODULE CLASSES
#include "Vdisplay___024root.h"

// SYMS CLASS (contains all model state)
class Vdisplay__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vdisplay* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vdisplay___024root             TOP;

    // CONSTRUCTORS
    Vdisplay__Syms(VerilatedContext* contextp, const char* namep, Vdisplay* modelp);
    ~Vdisplay__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
