// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdisplay.h for the primary calling header

#ifndef VERILATED_VDISPLAY___024ROOT_H_
#define VERILATED_VDISPLAY___024ROOT_H_  // guard

#include "verilated.h"

class Vdisplay__Syms;
VL_MODULE(Vdisplay___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(u,0,0);
    VL_IN8(d,0,0);
    VL_IN8(l,0,0);
    VL_IN8(r,0,0);
    VL_OUT8(hsync,0,0);
    VL_OUT8(vsync,0,0);
    VL_OUT8(rgb,2,0);
    CData/*2:0*/ display__DOT__rgb_reg;
    CData/*2:0*/ display__DOT__rgb_next;
    CData/*0:0*/ display__DOT__vga_sync_unit__DOT__mod2_reg;
    CData/*0:0*/ display__DOT__vga_sync_unit__DOT__mod2_next;
    CData/*0:0*/ display__DOT__vga_sync_unit__DOT__v_sync_reg;
    CData/*0:0*/ display__DOT__vga_sync_unit__DOT__h_sync_reg;
    CData/*0:0*/ __Vclklast__TOP__clk;
    SData/*9:0*/ display__DOT__vga_sync_unit__DOT__h_count_reg;
    SData/*9:0*/ display__DOT__vga_sync_unit__DOT__h_count_next;
    SData/*9:0*/ display__DOT__vga_sync_unit__DOT__v_count_reg;
    SData/*9:0*/ display__DOT__vga_sync_unit__DOT__v_count_next;
    SData/*9:0*/ display__DOT__graphics_unit__DOT__ball_x_l;
    SData/*9:0*/ display__DOT__graphics_unit__DOT__ball_y_t;
    SData/*9:0*/ display__DOT__graphics_unit__DOT__ball_x_l_next;
    SData/*9:0*/ display__DOT__graphics_unit__DOT__ball_y_t_next;

    // INTERNAL VARIABLES
    Vdisplay__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vdisplay___024root(Vdisplay__Syms* symsp, const char* name);
    ~Vdisplay___024root();
    VL_UNCOPYABLE(Vdisplay___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
