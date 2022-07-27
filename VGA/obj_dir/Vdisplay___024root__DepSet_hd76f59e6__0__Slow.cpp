// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdisplay.h for the primary calling header

#include "verilated.h"

#include "Vdisplay___024root.h"

VL_ATTR_COLD void Vdisplay___024root___settle__TOP__0(Vdisplay___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdisplay__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdisplay___024root___settle__TOP__0\n"); );
    // Init
    CData/*0:0*/ display__DOT__video_on;
    // Body
    vlSelf->rgb = vlSelf->display__DOT__rgb_reg;
    vlSelf->hsync = vlSelf->display__DOT__vga_sync_unit__DOT__h_sync_reg;
    vlSelf->vsync = vlSelf->display__DOT__vga_sync_unit__DOT__v_sync_reg;
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
    vlSelf->display__DOT__vga_sync_unit__DOT__mod2_next 
        = (1U & (~ (IData)(vlSelf->display__DOT__vga_sync_unit__DOT__mod2_reg)));
    vlSelf->display__DOT__vga_sync_unit__DOT__h_count_next 
        = (0x3ffU & ((IData)(vlSelf->display__DOT__vga_sync_unit__DOT__mod2_reg)
                      ? ((0x31fU == (IData)(vlSelf->display__DOT__vga_sync_unit__DOT__h_count_reg))
                          ? 0U : ((IData)(1U) + (IData)(vlSelf->display__DOT__vga_sync_unit__DOT__h_count_reg)))
                      : (IData)(vlSelf->display__DOT__vga_sync_unit__DOT__h_count_reg)));
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

VL_ATTR_COLD void Vdisplay___024root___eval_initial(Vdisplay___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdisplay__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdisplay___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vdisplay___024root___eval_settle(Vdisplay___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdisplay__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdisplay___024root___eval_settle\n"); );
    // Body
    Vdisplay___024root___settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void Vdisplay___024root___final(Vdisplay___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdisplay__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdisplay___024root___final\n"); );
}

VL_ATTR_COLD void Vdisplay___024root___ctor_var_reset(Vdisplay___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdisplay__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdisplay___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->u = VL_RAND_RESET_I(1);
    vlSelf->d = VL_RAND_RESET_I(1);
    vlSelf->l = VL_RAND_RESET_I(1);
    vlSelf->r = VL_RAND_RESET_I(1);
    vlSelf->hsync = VL_RAND_RESET_I(1);
    vlSelf->vsync = VL_RAND_RESET_I(1);
    vlSelf->rgb = VL_RAND_RESET_I(3);
    vlSelf->display__DOT__rgb_reg = VL_RAND_RESET_I(3);
    vlSelf->display__DOT__rgb_next = VL_RAND_RESET_I(3);
    vlSelf->display__DOT__vga_sync_unit__DOT__mod2_reg = VL_RAND_RESET_I(1);
    vlSelf->display__DOT__vga_sync_unit__DOT__mod2_next = VL_RAND_RESET_I(1);
    vlSelf->display__DOT__vga_sync_unit__DOT__h_count_reg = VL_RAND_RESET_I(10);
    vlSelf->display__DOT__vga_sync_unit__DOT__h_count_next = VL_RAND_RESET_I(10);
    vlSelf->display__DOT__vga_sync_unit__DOT__v_count_reg = VL_RAND_RESET_I(10);
    vlSelf->display__DOT__vga_sync_unit__DOT__v_count_next = VL_RAND_RESET_I(10);
    vlSelf->display__DOT__vga_sync_unit__DOT__v_sync_reg = VL_RAND_RESET_I(1);
    vlSelf->display__DOT__vga_sync_unit__DOT__h_sync_reg = VL_RAND_RESET_I(1);
    vlSelf->display__DOT__graphics_unit__DOT__ball_x_l = VL_RAND_RESET_I(10);
    vlSelf->display__DOT__graphics_unit__DOT__ball_y_t = VL_RAND_RESET_I(10);
    vlSelf->display__DOT__graphics_unit__DOT__ball_x_l_next = VL_RAND_RESET_I(10);
    vlSelf->display__DOT__graphics_unit__DOT__ball_y_t_next = VL_RAND_RESET_I(10);
}
