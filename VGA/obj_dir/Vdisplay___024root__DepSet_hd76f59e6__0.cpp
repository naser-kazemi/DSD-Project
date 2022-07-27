// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdisplay.h for the primary calling header

#include "verilated.h"

#include "Vdisplay___024root.h"

VL_INLINE_OPT void Vdisplay___024root___sequent__TOP__0(Vdisplay___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdisplay__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdisplay___024root___sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ display__DOT__video_on;
    // Body
    vlSelf->display__DOT__vga_sync_unit__DOT__v_sync_reg 
        = ((~ (IData)(vlSelf->reset)) & ((0x201U <= (IData)(vlSelf->display__DOT__vga_sync_unit__DOT__v_count_reg)) 
                                         & (0x202U 
                                            >= (IData)(vlSelf->display__DOT__vga_sync_unit__DOT__v_count_reg))));
    vlSelf->display__DOT__vga_sync_unit__DOT__h_sync_reg 
        = ((~ (IData)(vlSelf->reset)) & ((0x290U <= (IData)(vlSelf->display__DOT__vga_sync_unit__DOT__h_count_reg)) 
                                         & (0x2efU 
                                            >= (IData)(vlSelf->display__DOT__vga_sync_unit__DOT__h_count_reg))));
    if (vlSelf->reset) {
        vlSelf->display__DOT__graphics_unit__DOT__ball_x_l = 0U;
        vlSelf->display__DOT__graphics_unit__DOT__ball_y_t = 0U;
        vlSelf->display__DOT__vga_sync_unit__DOT__v_count_reg = 0U;
        vlSelf->display__DOT__vga_sync_unit__DOT__h_count_reg = 0U;
    } else {
        vlSelf->display__DOT__graphics_unit__DOT__ball_x_l 
            = vlSelf->display__DOT__graphics_unit__DOT__ball_x_l_next;
        vlSelf->display__DOT__graphics_unit__DOT__ball_y_t 
            = vlSelf->display__DOT__graphics_unit__DOT__ball_y_t_next;
        vlSelf->display__DOT__vga_sync_unit__DOT__v_count_reg 
            = vlSelf->display__DOT__vga_sync_unit__DOT__v_count_next;
        vlSelf->display__DOT__vga_sync_unit__DOT__h_count_reg 
            = vlSelf->display__DOT__vga_sync_unit__DOT__h_count_next;
    }
    if (vlSelf->display__DOT__vga_sync_unit__DOT__mod2_reg) {
        vlSelf->display__DOT__rgb_reg = vlSelf->display__DOT__rgb_next;
    }
    vlSelf->rgb = vlSelf->display__DOT__rgb_reg;
    vlSelf->display__DOT__vga_sync_unit__DOT__mod2_reg 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->display__DOT__vga_sync_unit__DOT__mod2_next));
    vlSelf->display__DOT__vga_sync_unit__DOT__h_count_next 
        = (0x3ffU & ((IData)(vlSelf->display__DOT__vga_sync_unit__DOT__mod2_reg)
                      ? ((0x31fU == (IData)(vlSelf->display__DOT__vga_sync_unit__DOT__h_count_reg))
                          ? 0U : ((IData)(1U) + (IData)(vlSelf->display__DOT__vga_sync_unit__DOT__h_count_reg)))
                      : (IData)(vlSelf->display__DOT__vga_sync_unit__DOT__h_count_reg)));
    vlSelf->vsync = vlSelf->display__DOT__vga_sync_unit__DOT__v_sync_reg;
    vlSelf->hsync = vlSelf->display__DOT__vga_sync_unit__DOT__h_sync_reg;
    vlSelf->display__DOT__vga_sync_unit__DOT__mod2_next 
        = (1U & (~ (IData)(vlSelf->display__DOT__vga_sync_unit__DOT__mod2_reg)));
    vlSelf->display__DOT__vga_sync_unit__DOT__v_count_next 
        = (0x3ffU & (((IData)(vlSelf->display__DOT__vga_sync_unit__DOT__mod2_reg) 
                      & (0x31fU == (IData)(vlSelf->display__DOT__vga_sync_unit__DOT__h_count_reg)))
                      ? ((0x20cU == (IData)(vlSelf->display__DOT__vga_sync_unit__DOT__v_count_reg))
                          ? 0U : ((IData)(1U) + (IData)(vlSelf->display__DOT__vga_sync_unit__DOT__v_count_reg)))
                      : (IData)(vlSelf->display__DOT__vga_sync_unit__DOT__v_count_reg)));
    display__DOT__video_on = ((0x280U > (IData)(vlSelf->display__DOT__vga_sync_unit__DOT__h_count_reg)) 
                              & (0x1e0U > (IData)(vlSelf->display__DOT__vga_sync_unit__DOT__v_count_reg)));
    vlSelf->display__DOT__rgb_next = 0U;
    if (display__DOT__video_on) {
        vlSelf->display__DOT__rgb_next = 7U;
    }
    if (((IData)(display__DOT__video_on) & (0x271U 
                                            >= (((((IData)(0x19U) 
                                                   + (IData)(vlSelf->display__DOT__graphics_unit__DOT__ball_x_l)) 
                                                  - (IData)(vlSelf->display__DOT__vga_sync_unit__DOT__h_count_reg)) 
                                                 * 
                                                 (((IData)(0x19U) 
                                                   + (IData)(vlSelf->display__DOT__graphics_unit__DOT__ball_x_l)) 
                                                  - (IData)(vlSelf->display__DOT__vga_sync_unit__DOT__h_count_reg))) 
                                                + (
                                                   (((IData)(0x19U) 
                                                     + (IData)(vlSelf->display__DOT__graphics_unit__DOT__ball_y_t)) 
                                                    - (IData)(vlSelf->display__DOT__vga_sync_unit__DOT__v_count_reg)) 
                                                   * 
                                                   (((IData)(0x19U) 
                                                     + (IData)(vlSelf->display__DOT__graphics_unit__DOT__ball_y_t)) 
                                                    - (IData)(vlSelf->display__DOT__vga_sync_unit__DOT__v_count_reg))))))) {
        vlSelf->display__DOT__rgb_next = 1U;
    }
}

VL_INLINE_OPT void Vdisplay___024root___combo__TOP__0(Vdisplay___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdisplay__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdisplay___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->display__DOT__graphics_unit__DOT__ball_x_l_next 
        = vlSelf->display__DOT__graphics_unit__DOT__ball_x_l;
    if (vlSelf->r) {
        vlSelf->display__DOT__graphics_unit__DOT__ball_x_l_next 
            = (0x3ffU & ((IData)(1U) + (IData)(vlSelf->display__DOT__graphics_unit__DOT__ball_x_l)));
    }
    if (vlSelf->l) {
        vlSelf->display__DOT__graphics_unit__DOT__ball_x_l_next 
            = (0x3ffU & ((IData)(vlSelf->display__DOT__graphics_unit__DOT__ball_x_l) 
                         - (IData)(1U)));
    }
    vlSelf->display__DOT__graphics_unit__DOT__ball_y_t_next 
        = vlSelf->display__DOT__graphics_unit__DOT__ball_y_t;
    if (vlSelf->d) {
        vlSelf->display__DOT__graphics_unit__DOT__ball_y_t_next 
            = (0x3ffU & ((IData)(1U) + (IData)(vlSelf->display__DOT__graphics_unit__DOT__ball_y_t)));
    }
    if (vlSelf->u) {
        vlSelf->display__DOT__graphics_unit__DOT__ball_y_t_next 
            = (0x3ffU & ((IData)(vlSelf->display__DOT__graphics_unit__DOT__ball_y_t) 
                         - (IData)(1U)));
    }
}

void Vdisplay___024root___eval(Vdisplay___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdisplay__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdisplay___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vdisplay___024root___sequent__TOP__0(vlSelf);
    }
    Vdisplay___024root___combo__TOP__0(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void Vdisplay___024root___eval_debug_assertions(Vdisplay___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdisplay__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdisplay___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->u & 0xfeU))) {
        Verilated::overWidthError("u");}
    if (VL_UNLIKELY((vlSelf->d & 0xfeU))) {
        Verilated::overWidthError("d");}
    if (VL_UNLIKELY((vlSelf->l & 0xfeU))) {
        Verilated::overWidthError("l");}
    if (VL_UNLIKELY((vlSelf->r & 0xfeU))) {
        Verilated::overWidthError("r");}
}
#endif  // VL_DEBUG
