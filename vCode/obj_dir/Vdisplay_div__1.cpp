// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdisplay.h for the primary calling header

#include "Vdisplay_div.h"
#include "Vdisplay__Syms.h"

VL_INLINE_OPT void Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__div1__214(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__div1__214\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__abs_a = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__dxu)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__dxu 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__dxu))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__dxu);
    this->__PVT__abs_b = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__du)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__du 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__du))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__du);
    if ((0x80000000U & this->__PVT__abs_b)) {
        this->__PVT__mult1__DOT__multiplicand = ((0x80000000U 
                                                  & ((~ 
                                                      (this->__PVT__abs_b 
                                                       >> 0x1fU)) 
                                                     << 0x1fU)) 
                                                 | (0x7fffffffU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       (~ this->__PVT__abs_b))));
        this->__PVT__mult2__DOT__multiplicand = ((0x80000000U 
                                                  & ((~ 
                                                      (this->__PVT__abs_b 
                                                       >> 0x1fU)) 
                                                     << 0x1fU)) 
                                                 | (0x7fffffffU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       (~ this->__PVT__abs_b))));
        this->__PVT__mult3__DOT__multiplicand = ((0x80000000U 
                                                  & ((~ 
                                                      (this->__PVT__abs_b 
                                                       >> 0x1fU)) 
                                                     << 0x1fU)) 
                                                 | (0x7fffffffU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       (~ this->__PVT__abs_b))));
        this->__PVT__mult4__DOT__multiplicand = ((0x80000000U 
                                                  & ((~ 
                                                      (this->__PVT__abs_b 
                                                       >> 0x1fU)) 
                                                     << 0x1fU)) 
                                                 | (0x7fffffffU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       (~ this->__PVT__abs_b))));
    } else {
        this->__PVT__mult1__DOT__multiplicand = this->__PVT__abs_b;
        this->__PVT__mult2__DOT__multiplicand = this->__PVT__abs_b;
        this->__PVT__mult3__DOT__multiplicand = this->__PVT__abs_b;
        this->__PVT__mult4__DOT__multiplicand = this->__PVT__abs_b;
    }
}

VL_INLINE_OPT void Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__div1__328(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__div1__328\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->out = ((0x80000000U & (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__dxu 
                                 ^ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__du))
                  ? ((this->__PVT__abs_a > this->__PVT__b_2)
                      ? 0xffffd000U : ((this->__PVT__abs_a 
                                        > this->__PVT__b_15)
                                        ? 0xffffe400U
                                        : ((this->__PVT__abs_a 
                                            > this->__PVT__b_67)
                                            ? 0xfffff000U
                                            : ((this->__PVT__abs_a 
                                                > this->__PVT__b_05)
                                                ? 0xfffff6b8U
                                                : 0xfffffa8fU))))
                  : ((this->__PVT__abs_a > this->__PVT__b_2)
                      ? 0x3000U : ((this->__PVT__abs_a 
                                    > this->__PVT__b_15)
                                    ? 0x1c00U : ((this->__PVT__abs_a 
                                                  > this->__PVT__b_67)
                                                  ? 0x1000U
                                                  : 
                                                 ((this->__PVT__abs_a 
                                                   > this->__PVT__b_05)
                                                   ? 0x948U
                                                   : 0x571U)))));
    this->__PVT__mult1__DOT__mult = ((0x80000000U & this->__PVT__abs_b) 
                                     | (0x7fffffffU 
                                        & ((0x80000000U 
                                            & this->__PVT__mult1__DOT__mult)
                                            ? ((IData)(1U) 
                                               + (~ (IData)(
                                                            (0xffffffffffffeULL 
                                                             & ((QData)((IData)(
                                                                                (0x7fffffffU 
                                                                                & this->__PVT__mult1__DOT__multiplicand))) 
                                                                << 1U)))))
                                            : (IData)(
                                                      (0xffffffffffffeULL 
                                                       & ((QData)((IData)(
                                                                          (0x7fffffffU 
                                                                           & this->__PVT__mult1__DOT__multiplicand))) 
                                                          << 1U))))));
    this->__PVT__mult2__DOT__mult = ((0x80000000U & this->__PVT__abs_b) 
                                     | (0x7fffffffU 
                                        & ((0x80000000U 
                                            & this->__PVT__mult2__DOT__mult)
                                            ? ((IData)(1U) 
                                               + (~ (IData)(
                                                            ((0x1800ULL 
                                                              * (QData)((IData)(
                                                                                (0x7fffffffU 
                                                                                & this->__PVT__mult2__DOT__multiplicand)))) 
                                                             >> 0xcU))))
                                            : (IData)(
                                                      ((0x1800ULL 
                                                        * (QData)((IData)(
                                                                          (0x7fffffffU 
                                                                           & this->__PVT__mult2__DOT__multiplicand)))) 
                                                       >> 0xcU)))));
    this->__PVT__mult3__DOT__mult = ((0x80000000U & this->__PVT__abs_b) 
                                     | (0x7fffffffU 
                                        & ((0x80000000U 
                                            & this->__PVT__mult3__DOT__mult)
                                            ? ((IData)(1U) 
                                               + (~ (IData)(
                                                            ((0xab8ULL 
                                                              * (QData)((IData)(
                                                                                (0x7fffffffU 
                                                                                & this->__PVT__mult3__DOT__multiplicand)))) 
                                                             >> 0xcU))))
                                            : (IData)(
                                                      ((0xab8ULL 
                                                        * (QData)((IData)(
                                                                          (0x7fffffffU 
                                                                           & this->__PVT__mult3__DOT__multiplicand)))) 
                                                       >> 0xcU)))));
    this->__PVT__mult4__DOT__mult = ((0x80000000U & this->__PVT__abs_b) 
                                     | (0x7fffffffU 
                                        & ((0x80000000U 
                                            & this->__PVT__mult4__DOT__mult)
                                            ? ((IData)(1U) 
                                               + (~ (IData)(
                                                            (0xfffffffffffffULL 
                                                             & ((QData)((IData)(
                                                                                (0x7fffffffU 
                                                                                & this->__PVT__mult4__DOT__multiplicand))) 
                                                                >> 1U)))))
                                            : (IData)(
                                                      (0xfffffffffffffULL 
                                                       & ((QData)((IData)(
                                                                          (0x7fffffffU 
                                                                           & this->__PVT__mult4__DOT__multiplicand))) 
                                                          >> 1U))))));
}

VL_INLINE_OPT void Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__div2__211(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__div2__211\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__abs_a = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__dyu)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__dyu 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__dyu))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__dyu);
    this->__PVT__abs_b = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__du)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__du 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__du))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__du);
    if ((0x80000000U & this->__PVT__abs_b)) {
        this->__PVT__mult1__DOT__multiplicand = ((0x80000000U 
                                                  & ((~ 
                                                      (this->__PVT__abs_b 
                                                       >> 0x1fU)) 
                                                     << 0x1fU)) 
                                                 | (0x7fffffffU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       (~ this->__PVT__abs_b))));
        this->__PVT__mult2__DOT__multiplicand = ((0x80000000U 
                                                  & ((~ 
                                                      (this->__PVT__abs_b 
                                                       >> 0x1fU)) 
                                                     << 0x1fU)) 
                                                 | (0x7fffffffU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       (~ this->__PVT__abs_b))));
        this->__PVT__mult3__DOT__multiplicand = ((0x80000000U 
                                                  & ((~ 
                                                      (this->__PVT__abs_b 
                                                       >> 0x1fU)) 
                                                     << 0x1fU)) 
                                                 | (0x7fffffffU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       (~ this->__PVT__abs_b))));
        this->__PVT__mult4__DOT__multiplicand = ((0x80000000U 
                                                  & ((~ 
                                                      (this->__PVT__abs_b 
                                                       >> 0x1fU)) 
                                                     << 0x1fU)) 
                                                 | (0x7fffffffU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       (~ this->__PVT__abs_b))));
    } else {
        this->__PVT__mult1__DOT__multiplicand = this->__PVT__abs_b;
        this->__PVT__mult2__DOT__multiplicand = this->__PVT__abs_b;
        this->__PVT__mult3__DOT__multiplicand = this->__PVT__abs_b;
        this->__PVT__mult4__DOT__multiplicand = this->__PVT__abs_b;
    }
}

VL_INLINE_OPT void Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__div2__325(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__div2__325\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->out = ((0x80000000U & (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__dyu 
                                 ^ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__du))
                  ? ((this->__PVT__abs_a > this->__PVT__b_2)
                      ? 0xffffd000U : ((this->__PVT__abs_a 
                                        > this->__PVT__b_15)
                                        ? 0xffffe400U
                                        : ((this->__PVT__abs_a 
                                            > this->__PVT__b_67)
                                            ? 0xfffff000U
                                            : ((this->__PVT__abs_a 
                                                > this->__PVT__b_05)
                                                ? 0xfffff6b8U
                                                : 0xfffffa8fU))))
                  : ((this->__PVT__abs_a > this->__PVT__b_2)
                      ? 0x3000U : ((this->__PVT__abs_a 
                                    > this->__PVT__b_15)
                                    ? 0x1c00U : ((this->__PVT__abs_a 
                                                  > this->__PVT__b_67)
                                                  ? 0x1000U
                                                  : 
                                                 ((this->__PVT__abs_a 
                                                   > this->__PVT__b_05)
                                                   ? 0x948U
                                                   : 0x571U)))));
    this->__PVT__mult1__DOT__mult = ((0x80000000U & this->__PVT__abs_b) 
                                     | (0x7fffffffU 
                                        & ((0x80000000U 
                                            & this->__PVT__mult1__DOT__mult)
                                            ? ((IData)(1U) 
                                               + (~ (IData)(
                                                            (0xffffffffffffeULL 
                                                             & ((QData)((IData)(
                                                                                (0x7fffffffU 
                                                                                & this->__PVT__mult1__DOT__multiplicand))) 
                                                                << 1U)))))
                                            : (IData)(
                                                      (0xffffffffffffeULL 
                                                       & ((QData)((IData)(
                                                                          (0x7fffffffU 
                                                                           & this->__PVT__mult1__DOT__multiplicand))) 
                                                          << 1U))))));
    this->__PVT__mult2__DOT__mult = ((0x80000000U & this->__PVT__abs_b) 
                                     | (0x7fffffffU 
                                        & ((0x80000000U 
                                            & this->__PVT__mult2__DOT__mult)
                                            ? ((IData)(1U) 
                                               + (~ (IData)(
                                                            ((0x1800ULL 
                                                              * (QData)((IData)(
                                                                                (0x7fffffffU 
                                                                                & this->__PVT__mult2__DOT__multiplicand)))) 
                                                             >> 0xcU))))
                                            : (IData)(
                                                      ((0x1800ULL 
                                                        * (QData)((IData)(
                                                                          (0x7fffffffU 
                                                                           & this->__PVT__mult2__DOT__multiplicand)))) 
                                                       >> 0xcU)))));
    this->__PVT__mult3__DOT__mult = ((0x80000000U & this->__PVT__abs_b) 
                                     | (0x7fffffffU 
                                        & ((0x80000000U 
                                            & this->__PVT__mult3__DOT__mult)
                                            ? ((IData)(1U) 
                                               + (~ (IData)(
                                                            ((0xab8ULL 
                                                              * (QData)((IData)(
                                                                                (0x7fffffffU 
                                                                                & this->__PVT__mult3__DOT__multiplicand)))) 
                                                             >> 0xcU))))
                                            : (IData)(
                                                      ((0xab8ULL 
                                                        * (QData)((IData)(
                                                                          (0x7fffffffU 
                                                                           & this->__PVT__mult3__DOT__multiplicand)))) 
                                                       >> 0xcU)))));
    this->__PVT__mult4__DOT__mult = ((0x80000000U & this->__PVT__abs_b) 
                                     | (0x7fffffffU 
                                        & ((0x80000000U 
                                            & this->__PVT__mult4__DOT__mult)
                                            ? ((IData)(1U) 
                                               + (~ (IData)(
                                                            (0xfffffffffffffULL 
                                                             & ((QData)((IData)(
                                                                                (0x7fffffffU 
                                                                                & this->__PVT__mult4__DOT__multiplicand))) 
                                                                >> 1U)))))
                                            : (IData)(
                                                      (0xfffffffffffffULL 
                                                       & ((QData)((IData)(
                                                                          (0x7fffffffU 
                                                                           & this->__PVT__mult4__DOT__multiplicand))) 
                                                          >> 1U))))));
}

VL_INLINE_OPT void Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__div3__228(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__div3__228\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__abs_a = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__dxd)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__dxd 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__dxd))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__dxd);
    this->__PVT__abs_b = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__dd)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__dd 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__dd))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__dd);
    if ((0x80000000U & this->__PVT__abs_b)) {
        this->__PVT__mult1__DOT__multiplicand = ((0x80000000U 
                                                  & ((~ 
                                                      (this->__PVT__abs_b 
                                                       >> 0x1fU)) 
                                                     << 0x1fU)) 
                                                 | (0x7fffffffU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       (~ this->__PVT__abs_b))));
        this->__PVT__mult2__DOT__multiplicand = ((0x80000000U 
                                                  & ((~ 
                                                      (this->__PVT__abs_b 
                                                       >> 0x1fU)) 
                                                     << 0x1fU)) 
                                                 | (0x7fffffffU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       (~ this->__PVT__abs_b))));
        this->__PVT__mult3__DOT__multiplicand = ((0x80000000U 
                                                  & ((~ 
                                                      (this->__PVT__abs_b 
                                                       >> 0x1fU)) 
                                                     << 0x1fU)) 
                                                 | (0x7fffffffU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       (~ this->__PVT__abs_b))));
        this->__PVT__mult4__DOT__multiplicand = ((0x80000000U 
                                                  & ((~ 
                                                      (this->__PVT__abs_b 
                                                       >> 0x1fU)) 
                                                     << 0x1fU)) 
                                                 | (0x7fffffffU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       (~ this->__PVT__abs_b))));
    } else {
        this->__PVT__mult1__DOT__multiplicand = this->__PVT__abs_b;
        this->__PVT__mult2__DOT__multiplicand = this->__PVT__abs_b;
        this->__PVT__mult3__DOT__multiplicand = this->__PVT__abs_b;
        this->__PVT__mult4__DOT__multiplicand = this->__PVT__abs_b;
    }
}

VL_INLINE_OPT void Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__div3__342(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__div3__342\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->out = ((0x80000000U & (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__dxd 
                                 ^ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__dd))
                  ? ((this->__PVT__abs_a > this->__PVT__b_2)
                      ? 0xffffd000U : ((this->__PVT__abs_a 
                                        > this->__PVT__b_15)
                                        ? 0xffffe400U
                                        : ((this->__PVT__abs_a 
                                            > this->__PVT__b_67)
                                            ? 0xfffff000U
                                            : ((this->__PVT__abs_a 
                                                > this->__PVT__b_05)
                                                ? 0xfffff6b8U
                                                : 0xfffffa8fU))))
                  : ((this->__PVT__abs_a > this->__PVT__b_2)
                      ? 0x3000U : ((this->__PVT__abs_a 
                                    > this->__PVT__b_15)
                                    ? 0x1c00U : ((this->__PVT__abs_a 
                                                  > this->__PVT__b_67)
                                                  ? 0x1000U
                                                  : 
                                                 ((this->__PVT__abs_a 
                                                   > this->__PVT__b_05)
                                                   ? 0x948U
                                                   : 0x571U)))));
    this->__PVT__mult1__DOT__mult = ((0x80000000U & this->__PVT__abs_b) 
                                     | (0x7fffffffU 
                                        & ((0x80000000U 
                                            & this->__PVT__mult1__DOT__mult)
                                            ? ((IData)(1U) 
                                               + (~ (IData)(
                                                            (0xffffffffffffeULL 
                                                             & ((QData)((IData)(
                                                                                (0x7fffffffU 
                                                                                & this->__PVT__mult1__DOT__multiplicand))) 
                                                                << 1U)))))
                                            : (IData)(
                                                      (0xffffffffffffeULL 
                                                       & ((QData)((IData)(
                                                                          (0x7fffffffU 
                                                                           & this->__PVT__mult1__DOT__multiplicand))) 
                                                          << 1U))))));
    this->__PVT__mult2__DOT__mult = ((0x80000000U & this->__PVT__abs_b) 
                                     | (0x7fffffffU 
                                        & ((0x80000000U 
                                            & this->__PVT__mult2__DOT__mult)
                                            ? ((IData)(1U) 
                                               + (~ (IData)(
                                                            ((0x1800ULL 
                                                              * (QData)((IData)(
                                                                                (0x7fffffffU 
                                                                                & this->__PVT__mult2__DOT__multiplicand)))) 
                                                             >> 0xcU))))
                                            : (IData)(
                                                      ((0x1800ULL 
                                                        * (QData)((IData)(
                                                                          (0x7fffffffU 
                                                                           & this->__PVT__mult2__DOT__multiplicand)))) 
                                                       >> 0xcU)))));
    this->__PVT__mult3__DOT__mult = ((0x80000000U & this->__PVT__abs_b) 
                                     | (0x7fffffffU 
                                        & ((0x80000000U 
                                            & this->__PVT__mult3__DOT__mult)
                                            ? ((IData)(1U) 
                                               + (~ (IData)(
                                                            ((0xab8ULL 
                                                              * (QData)((IData)(
                                                                                (0x7fffffffU 
                                                                                & this->__PVT__mult3__DOT__multiplicand)))) 
                                                             >> 0xcU))))
                                            : (IData)(
                                                      ((0xab8ULL 
                                                        * (QData)((IData)(
                                                                          (0x7fffffffU 
                                                                           & this->__PVT__mult3__DOT__multiplicand)))) 
                                                       >> 0xcU)))));
    this->__PVT__mult4__DOT__mult = ((0x80000000U & this->__PVT__abs_b) 
                                     | (0x7fffffffU 
                                        & ((0x80000000U 
                                            & this->__PVT__mult4__DOT__mult)
                                            ? ((IData)(1U) 
                                               + (~ (IData)(
                                                            (0xfffffffffffffULL 
                                                             & ((QData)((IData)(
                                                                                (0x7fffffffU 
                                                                                & this->__PVT__mult4__DOT__multiplicand))) 
                                                                >> 1U)))))
                                            : (IData)(
                                                      (0xfffffffffffffULL 
                                                       & ((QData)((IData)(
                                                                          (0x7fffffffU 
                                                                           & this->__PVT__mult4__DOT__multiplicand))) 
                                                          >> 1U))))));
}

VL_INLINE_OPT void Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__div4__221(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__div4__221\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__abs_a = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__dyd)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__dyd 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__dyd))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__dyd);
    this->__PVT__abs_b = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__dd)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__dd 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__dd))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__dd);
    if ((0x80000000U & this->__PVT__abs_b)) {
        this->__PVT__mult1__DOT__multiplicand = ((0x80000000U 
                                                  & ((~ 
                                                      (this->__PVT__abs_b 
                                                       >> 0x1fU)) 
                                                     << 0x1fU)) 
                                                 | (0x7fffffffU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       (~ this->__PVT__abs_b))));
        this->__PVT__mult2__DOT__multiplicand = ((0x80000000U 
                                                  & ((~ 
                                                      (this->__PVT__abs_b 
                                                       >> 0x1fU)) 
                                                     << 0x1fU)) 
                                                 | (0x7fffffffU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       (~ this->__PVT__abs_b))));
        this->__PVT__mult3__DOT__multiplicand = ((0x80000000U 
                                                  & ((~ 
                                                      (this->__PVT__abs_b 
                                                       >> 0x1fU)) 
                                                     << 0x1fU)) 
                                                 | (0x7fffffffU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       (~ this->__PVT__abs_b))));
        this->__PVT__mult4__DOT__multiplicand = ((0x80000000U 
                                                  & ((~ 
                                                      (this->__PVT__abs_b 
                                                       >> 0x1fU)) 
                                                     << 0x1fU)) 
                                                 | (0x7fffffffU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       (~ this->__PVT__abs_b))));
    } else {
        this->__PVT__mult1__DOT__multiplicand = this->__PVT__abs_b;
        this->__PVT__mult2__DOT__multiplicand = this->__PVT__abs_b;
        this->__PVT__mult3__DOT__multiplicand = this->__PVT__abs_b;
        this->__PVT__mult4__DOT__multiplicand = this->__PVT__abs_b;
    }
}

VL_INLINE_OPT void Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__div4__335(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__div4__335\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->out = ((0x80000000U & (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__dyd 
                                 ^ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__dd))
                  ? ((this->__PVT__abs_a > this->__PVT__b_2)
                      ? 0xffffd000U : ((this->__PVT__abs_a 
                                        > this->__PVT__b_15)
                                        ? 0xffffe400U
                                        : ((this->__PVT__abs_a 
                                            > this->__PVT__b_67)
                                            ? 0xfffff000U
                                            : ((this->__PVT__abs_a 
                                                > this->__PVT__b_05)
                                                ? 0xfffff6b8U
                                                : 0xfffffa8fU))))
                  : ((this->__PVT__abs_a > this->__PVT__b_2)
                      ? 0x3000U : ((this->__PVT__abs_a 
                                    > this->__PVT__b_15)
                                    ? 0x1c00U : ((this->__PVT__abs_a 
                                                  > this->__PVT__b_67)
                                                  ? 0x1000U
                                                  : 
                                                 ((this->__PVT__abs_a 
                                                   > this->__PVT__b_05)
                                                   ? 0x948U
                                                   : 0x571U)))));
    this->__PVT__mult1__DOT__mult = ((0x80000000U & this->__PVT__abs_b) 
                                     | (0x7fffffffU 
                                        & ((0x80000000U 
                                            & this->__PVT__mult1__DOT__mult)
                                            ? ((IData)(1U) 
                                               + (~ (IData)(
                                                            (0xffffffffffffeULL 
                                                             & ((QData)((IData)(
                                                                                (0x7fffffffU 
                                                                                & this->__PVT__mult1__DOT__multiplicand))) 
                                                                << 1U)))))
                                            : (IData)(
                                                      (0xffffffffffffeULL 
                                                       & ((QData)((IData)(
                                                                          (0x7fffffffU 
                                                                           & this->__PVT__mult1__DOT__multiplicand))) 
                                                          << 1U))))));
    this->__PVT__mult2__DOT__mult = ((0x80000000U & this->__PVT__abs_b) 
                                     | (0x7fffffffU 
                                        & ((0x80000000U 
                                            & this->__PVT__mult2__DOT__mult)
                                            ? ((IData)(1U) 
                                               + (~ (IData)(
                                                            ((0x1800ULL 
                                                              * (QData)((IData)(
                                                                                (0x7fffffffU 
                                                                                & this->__PVT__mult2__DOT__multiplicand)))) 
                                                             >> 0xcU))))
                                            : (IData)(
                                                      ((0x1800ULL 
                                                        * (QData)((IData)(
                                                                          (0x7fffffffU 
                                                                           & this->__PVT__mult2__DOT__multiplicand)))) 
                                                       >> 0xcU)))));
    this->__PVT__mult3__DOT__mult = ((0x80000000U & this->__PVT__abs_b) 
                                     | (0x7fffffffU 
                                        & ((0x80000000U 
                                            & this->__PVT__mult3__DOT__mult)
                                            ? ((IData)(1U) 
                                               + (~ (IData)(
                                                            ((0xab8ULL 
                                                              * (QData)((IData)(
                                                                                (0x7fffffffU 
                                                                                & this->__PVT__mult3__DOT__multiplicand)))) 
                                                             >> 0xcU))))
                                            : (IData)(
                                                      ((0xab8ULL 
                                                        * (QData)((IData)(
                                                                          (0x7fffffffU 
                                                                           & this->__PVT__mult3__DOT__multiplicand)))) 
                                                       >> 0xcU)))));
    this->__PVT__mult4__DOT__mult = ((0x80000000U & this->__PVT__abs_b) 
                                     | (0x7fffffffU 
                                        & ((0x80000000U 
                                            & this->__PVT__mult4__DOT__mult)
                                            ? ((IData)(1U) 
                                               + (~ (IData)(
                                                            (0xfffffffffffffULL 
                                                             & ((QData)((IData)(
                                                                                (0x7fffffffU 
                                                                                & this->__PVT__mult4__DOT__multiplicand))) 
                                                                >> 1U)))))
                                            : (IData)(
                                                      (0xfffffffffffffULL 
                                                       & ((QData)((IData)(
                                                                          (0x7fffffffU 
                                                                           & this->__PVT__mult4__DOT__multiplicand))) 
                                                          >> 1U))))));
}

VL_INLINE_OPT void Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div1__173(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div1__173\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__abs_a = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dxu)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dxu 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dxu))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dxu);
    this->__PVT__abs_b = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__du)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__du 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__du))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__du);
    if ((0x80000000U & this->__PVT__abs_b)) {
        this->__PVT__mult1__DOT__multiplicand = ((0x80000000U 
                                                  & ((~ 
                                                      (this->__PVT__abs_b 
                                                       >> 0x1fU)) 
                                                     << 0x1fU)) 
                                                 | (0x7fffffffU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       (~ this->__PVT__abs_b))));
        this->__PVT__mult2__DOT__multiplicand = ((0x80000000U 
                                                  & ((~ 
                                                      (this->__PVT__abs_b 
                                                       >> 0x1fU)) 
                                                     << 0x1fU)) 
                                                 | (0x7fffffffU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       (~ this->__PVT__abs_b))));
        this->__PVT__mult3__DOT__multiplicand = ((0x80000000U 
                                                  & ((~ 
                                                      (this->__PVT__abs_b 
                                                       >> 0x1fU)) 
                                                     << 0x1fU)) 
                                                 | (0x7fffffffU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       (~ this->__PVT__abs_b))));
        this->__PVT__mult4__DOT__multiplicand = ((0x80000000U 
                                                  & ((~ 
                                                      (this->__PVT__abs_b 
                                                       >> 0x1fU)) 
                                                     << 0x1fU)) 
                                                 | (0x7fffffffU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       (~ this->__PVT__abs_b))));
    } else {
        this->__PVT__mult1__DOT__multiplicand = this->__PVT__abs_b;
        this->__PVT__mult2__DOT__multiplicand = this->__PVT__abs_b;
        this->__PVT__mult3__DOT__multiplicand = this->__PVT__abs_b;
        this->__PVT__mult4__DOT__multiplicand = this->__PVT__abs_b;
    }
}

VL_INLINE_OPT void Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div1__287(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div1__287\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->out = ((0x80000000U & (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dxu 
                                 ^ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__du))
                  ? ((this->__PVT__abs_a > this->__PVT__b_2)
                      ? 0xffffd000U : ((this->__PVT__abs_a 
                                        > this->__PVT__b_15)
                                        ? 0xffffe400U
                                        : ((this->__PVT__abs_a 
                                            > this->__PVT__b_67)
                                            ? 0xfffff000U
                                            : ((this->__PVT__abs_a 
                                                > this->__PVT__b_05)
                                                ? 0xfffff6b8U
                                                : 0xfffffa8fU))))
                  : ((this->__PVT__abs_a > this->__PVT__b_2)
                      ? 0x3000U : ((this->__PVT__abs_a 
                                    > this->__PVT__b_15)
                                    ? 0x1c00U : ((this->__PVT__abs_a 
                                                  > this->__PVT__b_67)
                                                  ? 0x1000U
                                                  : 
                                                 ((this->__PVT__abs_a 
                                                   > this->__PVT__b_05)
                                                   ? 0x948U
                                                   : 0x571U)))));
    this->__PVT__mult1__DOT__mult = ((0x80000000U & this->__PVT__abs_b) 
                                     | (0x7fffffffU 
                                        & ((0x80000000U 
                                            & this->__PVT__mult1__DOT__mult)
                                            ? ((IData)(1U) 
                                               + (~ (IData)(
                                                            (0xffffffffffffeULL 
                                                             & ((QData)((IData)(
                                                                                (0x7fffffffU 
                                                                                & this->__PVT__mult1__DOT__multiplicand))) 
                                                                << 1U)))))
                                            : (IData)(
                                                      (0xffffffffffffeULL 
                                                       & ((QData)((IData)(
                                                                          (0x7fffffffU 
                                                                           & this->__PVT__mult1__DOT__multiplicand))) 
                                                          << 1U))))));
    this->__PVT__mult2__DOT__mult = ((0x80000000U & this->__PVT__abs_b) 
                                     | (0x7fffffffU 
                                        & ((0x80000000U 
                                            & this->__PVT__mult2__DOT__mult)
                                            ? ((IData)(1U) 
                                               + (~ (IData)(
                                                            ((0x1800ULL 
                                                              * (QData)((IData)(
                                                                                (0x7fffffffU 
                                                                                & this->__PVT__mult2__DOT__multiplicand)))) 
                                                             >> 0xcU))))
                                            : (IData)(
                                                      ((0x1800ULL 
                                                        * (QData)((IData)(
                                                                          (0x7fffffffU 
                                                                           & this->__PVT__mult2__DOT__multiplicand)))) 
                                                       >> 0xcU)))));
    this->__PVT__mult3__DOT__mult = ((0x80000000U & this->__PVT__abs_b) 
                                     | (0x7fffffffU 
                                        & ((0x80000000U 
                                            & this->__PVT__mult3__DOT__mult)
                                            ? ((IData)(1U) 
                                               + (~ (IData)(
                                                            ((0xab8ULL 
                                                              * (QData)((IData)(
                                                                                (0x7fffffffU 
                                                                                & this->__PVT__mult3__DOT__multiplicand)))) 
                                                             >> 0xcU))))
                                            : (IData)(
                                                      ((0xab8ULL 
                                                        * (QData)((IData)(
                                                                          (0x7fffffffU 
                                                                           & this->__PVT__mult3__DOT__multiplicand)))) 
                                                       >> 0xcU)))));
    this->__PVT__mult4__DOT__mult = ((0x80000000U & this->__PVT__abs_b) 
                                     | (0x7fffffffU 
                                        & ((0x80000000U 
                                            & this->__PVT__mult4__DOT__mult)
                                            ? ((IData)(1U) 
                                               + (~ (IData)(
                                                            (0xfffffffffffffULL 
                                                             & ((QData)((IData)(
                                                                                (0x7fffffffU 
                                                                                & this->__PVT__mult4__DOT__multiplicand))) 
                                                                >> 1U)))))
                                            : (IData)(
                                                      (0xfffffffffffffULL 
                                                       & ((QData)((IData)(
                                                                          (0x7fffffffU 
                                                                           & this->__PVT__mult4__DOT__multiplicand))) 
                                                          >> 1U))))));
}

VL_INLINE_OPT void Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div2__161(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div2__161\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__abs_a = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dyu)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dyu 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dyu))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dyu);
    this->__PVT__abs_b = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__du)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__du 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__du))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__du);
    if ((0x80000000U & this->__PVT__abs_b)) {
        this->__PVT__mult1__DOT__multiplicand = ((0x80000000U 
                                                  & ((~ 
                                                      (this->__PVT__abs_b 
                                                       >> 0x1fU)) 
                                                     << 0x1fU)) 
                                                 | (0x7fffffffU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       (~ this->__PVT__abs_b))));
        this->__PVT__mult2__DOT__multiplicand = ((0x80000000U 
                                                  & ((~ 
                                                      (this->__PVT__abs_b 
                                                       >> 0x1fU)) 
                                                     << 0x1fU)) 
                                                 | (0x7fffffffU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       (~ this->__PVT__abs_b))));
        this->__PVT__mult3__DOT__multiplicand = ((0x80000000U 
                                                  & ((~ 
                                                      (this->__PVT__abs_b 
                                                       >> 0x1fU)) 
                                                     << 0x1fU)) 
                                                 | (0x7fffffffU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       (~ this->__PVT__abs_b))));
        this->__PVT__mult4__DOT__multiplicand = ((0x80000000U 
                                                  & ((~ 
                                                      (this->__PVT__abs_b 
                                                       >> 0x1fU)) 
                                                     << 0x1fU)) 
                                                 | (0x7fffffffU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       (~ this->__PVT__abs_b))));
    } else {
        this->__PVT__mult1__DOT__multiplicand = this->__PVT__abs_b;
        this->__PVT__mult2__DOT__multiplicand = this->__PVT__abs_b;
        this->__PVT__mult3__DOT__multiplicand = this->__PVT__abs_b;
        this->__PVT__mult4__DOT__multiplicand = this->__PVT__abs_b;
    }
}

VL_INLINE_OPT void Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div2__275(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div2__275\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->out = ((0x80000000U & (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dyu 
                                 ^ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__du))
                  ? ((this->__PVT__abs_a > this->__PVT__b_2)
                      ? 0xffffd000U : ((this->__PVT__abs_a 
                                        > this->__PVT__b_15)
                                        ? 0xffffe400U
                                        : ((this->__PVT__abs_a 
                                            > this->__PVT__b_67)
                                            ? 0xfffff000U
                                            : ((this->__PVT__abs_a 
                                                > this->__PVT__b_05)
                                                ? 0xfffff6b8U
                                                : 0xfffffa8fU))))
                  : ((this->__PVT__abs_a > this->__PVT__b_2)
                      ? 0x3000U : ((this->__PVT__abs_a 
                                    > this->__PVT__b_15)
                                    ? 0x1c00U : ((this->__PVT__abs_a 
                                                  > this->__PVT__b_67)
                                                  ? 0x1000U
                                                  : 
                                                 ((this->__PVT__abs_a 
                                                   > this->__PVT__b_05)
                                                   ? 0x948U
                                                   : 0x571U)))));
    this->__PVT__mult1__DOT__mult = ((0x80000000U & this->__PVT__abs_b) 
                                     | (0x7fffffffU 
                                        & ((0x80000000U 
                                            & this->__PVT__mult1__DOT__mult)
                                            ? ((IData)(1U) 
                                               + (~ (IData)(
                                                            (0xffffffffffffeULL 
                                                             & ((QData)((IData)(
                                                                                (0x7fffffffU 
                                                                                & this->__PVT__mult1__DOT__multiplicand))) 
                                                                << 1U)))))
                                            : (IData)(
                                                      (0xffffffffffffeULL 
                                                       & ((QData)((IData)(
                                                                          (0x7fffffffU 
                                                                           & this->__PVT__mult1__DOT__multiplicand))) 
                                                          << 1U))))));
    this->__PVT__mult2__DOT__mult = ((0x80000000U & this->__PVT__abs_b) 
                                     | (0x7fffffffU 
                                        & ((0x80000000U 
                                            & this->__PVT__mult2__DOT__mult)
                                            ? ((IData)(1U) 
                                               + (~ (IData)(
                                                            ((0x1800ULL 
                                                              * (QData)((IData)(
                                                                                (0x7fffffffU 
                                                                                & this->__PVT__mult2__DOT__multiplicand)))) 
                                                             >> 0xcU))))
                                            : (IData)(
                                                      ((0x1800ULL 
                                                        * (QData)((IData)(
                                                                          (0x7fffffffU 
                                                                           & this->__PVT__mult2__DOT__multiplicand)))) 
                                                       >> 0xcU)))));
    this->__PVT__mult3__DOT__mult = ((0x80000000U & this->__PVT__abs_b) 
                                     | (0x7fffffffU 
                                        & ((0x80000000U 
                                            & this->__PVT__mult3__DOT__mult)
                                            ? ((IData)(1U) 
                                               + (~ (IData)(
                                                            ((0xab8ULL 
                                                              * (QData)((IData)(
                                                                                (0x7fffffffU 
                                                                                & this->__PVT__mult3__DOT__multiplicand)))) 
                                                             >> 0xcU))))
                                            : (IData)(
                                                      ((0xab8ULL 
                                                        * (QData)((IData)(
                                                                          (0x7fffffffU 
                                                                           & this->__PVT__mult3__DOT__multiplicand)))) 
                                                       >> 0xcU)))));
    this->__PVT__mult4__DOT__mult = ((0x80000000U & this->__PVT__abs_b) 
                                     | (0x7fffffffU 
                                        & ((0x80000000U 
                                            & this->__PVT__mult4__DOT__mult)
                                            ? ((IData)(1U) 
                                               + (~ (IData)(
                                                            (0xfffffffffffffULL 
                                                             & ((QData)((IData)(
                                                                                (0x7fffffffU 
                                                                                & this->__PVT__mult4__DOT__multiplicand))) 
                                                                >> 1U)))))
                                            : (IData)(
                                                      (0xfffffffffffffULL 
                                                       & ((QData)((IData)(
                                                                          (0x7fffffffU 
                                                                           & this->__PVT__mult4__DOT__multiplicand))) 
                                                          >> 1U))))));
}

VL_INLINE_OPT void Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div3__200(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div3__200\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__abs_a = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dxd)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dxd 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dxd))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dxd);
    this->__PVT__abs_b = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dd)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dd 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dd))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dd);
    if ((0x80000000U & this->__PVT__abs_b)) {
        this->__PVT__mult1__DOT__multiplicand = ((0x80000000U 
                                                  & ((~ 
                                                      (this->__PVT__abs_b 
                                                       >> 0x1fU)) 
                                                     << 0x1fU)) 
                                                 | (0x7fffffffU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       (~ this->__PVT__abs_b))));
        this->__PVT__mult2__DOT__multiplicand = ((0x80000000U 
                                                  & ((~ 
                                                      (this->__PVT__abs_b 
                                                       >> 0x1fU)) 
                                                     << 0x1fU)) 
                                                 | (0x7fffffffU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       (~ this->__PVT__abs_b))));
        this->__PVT__mult3__DOT__multiplicand = ((0x80000000U 
                                                  & ((~ 
                                                      (this->__PVT__abs_b 
                                                       >> 0x1fU)) 
                                                     << 0x1fU)) 
                                                 | (0x7fffffffU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       (~ this->__PVT__abs_b))));
        this->__PVT__mult4__DOT__multiplicand = ((0x80000000U 
                                                  & ((~ 
                                                      (this->__PVT__abs_b 
                                                       >> 0x1fU)) 
                                                     << 0x1fU)) 
                                                 | (0x7fffffffU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       (~ this->__PVT__abs_b))));
    } else {
        this->__PVT__mult1__DOT__multiplicand = this->__PVT__abs_b;
        this->__PVT__mult2__DOT__multiplicand = this->__PVT__abs_b;
        this->__PVT__mult3__DOT__multiplicand = this->__PVT__abs_b;
        this->__PVT__mult4__DOT__multiplicand = this->__PVT__abs_b;
    }
}

VL_INLINE_OPT void Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div3__314(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div3__314\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->out = ((0x80000000U & (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dxd 
                                 ^ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dd))
                  ? ((this->__PVT__abs_a > this->__PVT__b_2)
                      ? 0xffffd000U : ((this->__PVT__abs_a 
                                        > this->__PVT__b_15)
                                        ? 0xffffe400U
                                        : ((this->__PVT__abs_a 
                                            > this->__PVT__b_67)
                                            ? 0xfffff000U
                                            : ((this->__PVT__abs_a 
                                                > this->__PVT__b_05)
                                                ? 0xfffff6b8U
                                                : 0xfffffa8fU))))
                  : ((this->__PVT__abs_a > this->__PVT__b_2)
                      ? 0x3000U : ((this->__PVT__abs_a 
                                    > this->__PVT__b_15)
                                    ? 0x1c00U : ((this->__PVT__abs_a 
                                                  > this->__PVT__b_67)
                                                  ? 0x1000U
                                                  : 
                                                 ((this->__PVT__abs_a 
                                                   > this->__PVT__b_05)
                                                   ? 0x948U
                                                   : 0x571U)))));
    this->__PVT__mult1__DOT__mult = ((0x80000000U & this->__PVT__abs_b) 
                                     | (0x7fffffffU 
                                        & ((0x80000000U 
                                            & this->__PVT__mult1__DOT__mult)
                                            ? ((IData)(1U) 
                                               + (~ (IData)(
                                                            (0xffffffffffffeULL 
                                                             & ((QData)((IData)(
                                                                                (0x7fffffffU 
                                                                                & this->__PVT__mult1__DOT__multiplicand))) 
                                                                << 1U)))))
                                            : (IData)(
                                                      (0xffffffffffffeULL 
                                                       & ((QData)((IData)(
                                                                          (0x7fffffffU 
                                                                           & this->__PVT__mult1__DOT__multiplicand))) 
                                                          << 1U))))));
    this->__PVT__mult2__DOT__mult = ((0x80000000U & this->__PVT__abs_b) 
                                     | (0x7fffffffU 
                                        & ((0x80000000U 
                                            & this->__PVT__mult2__DOT__mult)
                                            ? ((IData)(1U) 
                                               + (~ (IData)(
                                                            ((0x1800ULL 
                                                              * (QData)((IData)(
                                                                                (0x7fffffffU 
                                                                                & this->__PVT__mult2__DOT__multiplicand)))) 
                                                             >> 0xcU))))
                                            : (IData)(
                                                      ((0x1800ULL 
                                                        * (QData)((IData)(
                                                                          (0x7fffffffU 
                                                                           & this->__PVT__mult2__DOT__multiplicand)))) 
                                                       >> 0xcU)))));
    this->__PVT__mult3__DOT__mult = ((0x80000000U & this->__PVT__abs_b) 
                                     | (0x7fffffffU 
                                        & ((0x80000000U 
                                            & this->__PVT__mult3__DOT__mult)
                                            ? ((IData)(1U) 
                                               + (~ (IData)(
                                                            ((0xab8ULL 
                                                              * (QData)((IData)(
                                                                                (0x7fffffffU 
                                                                                & this->__PVT__mult3__DOT__multiplicand)))) 
                                                             >> 0xcU))))
                                            : (IData)(
                                                      ((0xab8ULL 
                                                        * (QData)((IData)(
                                                                          (0x7fffffffU 
                                                                           & this->__PVT__mult3__DOT__multiplicand)))) 
                                                       >> 0xcU)))));
    this->__PVT__mult4__DOT__mult = ((0x80000000U & this->__PVT__abs_b) 
                                     | (0x7fffffffU 
                                        & ((0x80000000U 
                                            & this->__PVT__mult4__DOT__mult)
                                            ? ((IData)(1U) 
                                               + (~ (IData)(
                                                            (0xfffffffffffffULL 
                                                             & ((QData)((IData)(
                                                                                (0x7fffffffU 
                                                                                & this->__PVT__mult4__DOT__multiplicand))) 
                                                                >> 1U)))))
                                            : (IData)(
                                                      (0xfffffffffffffULL 
                                                       & ((QData)((IData)(
                                                                          (0x7fffffffU 
                                                                           & this->__PVT__mult4__DOT__multiplicand))) 
                                                          >> 1U))))));
}

VL_INLINE_OPT void Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div4__191(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div4__191\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__abs_a = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dyd)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dyd 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dyd))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dyd);
    this->__PVT__abs_b = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dd)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dd 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dd))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dd);
    if ((0x80000000U & this->__PVT__abs_b)) {
        this->__PVT__mult1__DOT__multiplicand = ((0x80000000U 
                                                  & ((~ 
                                                      (this->__PVT__abs_b 
                                                       >> 0x1fU)) 
                                                     << 0x1fU)) 
                                                 | (0x7fffffffU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       (~ this->__PVT__abs_b))));
        this->__PVT__mult2__DOT__multiplicand = ((0x80000000U 
                                                  & ((~ 
                                                      (this->__PVT__abs_b 
                                                       >> 0x1fU)) 
                                                     << 0x1fU)) 
                                                 | (0x7fffffffU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       (~ this->__PVT__abs_b))));
        this->__PVT__mult3__DOT__multiplicand = ((0x80000000U 
                                                  & ((~ 
                                                      (this->__PVT__abs_b 
                                                       >> 0x1fU)) 
                                                     << 0x1fU)) 
                                                 | (0x7fffffffU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       (~ this->__PVT__abs_b))));
        this->__PVT__mult4__DOT__multiplicand = ((0x80000000U 
                                                  & ((~ 
                                                      (this->__PVT__abs_b 
                                                       >> 0x1fU)) 
                                                     << 0x1fU)) 
                                                 | (0x7fffffffU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       (~ this->__PVT__abs_b))));
    } else {
        this->__PVT__mult1__DOT__multiplicand = this->__PVT__abs_b;
        this->__PVT__mult2__DOT__multiplicand = this->__PVT__abs_b;
        this->__PVT__mult3__DOT__multiplicand = this->__PVT__abs_b;
        this->__PVT__mult4__DOT__multiplicand = this->__PVT__abs_b;
    }
}

VL_INLINE_OPT void Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div4__305(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div4__305\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->out = ((0x80000000U & (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dyd 
                                 ^ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dd))
                  ? ((this->__PVT__abs_a > this->__PVT__b_2)
                      ? 0xffffd000U : ((this->__PVT__abs_a 
                                        > this->__PVT__b_15)
                                        ? 0xffffe400U
                                        : ((this->__PVT__abs_a 
                                            > this->__PVT__b_67)
                                            ? 0xfffff000U
                                            : ((this->__PVT__abs_a 
                                                > this->__PVT__b_05)
                                                ? 0xfffff6b8U
                                                : 0xfffffa8fU))))
                  : ((this->__PVT__abs_a > this->__PVT__b_2)
                      ? 0x3000U : ((this->__PVT__abs_a 
                                    > this->__PVT__b_15)
                                    ? 0x1c00U : ((this->__PVT__abs_a 
                                                  > this->__PVT__b_67)
                                                  ? 0x1000U
                                                  : 
                                                 ((this->__PVT__abs_a 
                                                   > this->__PVT__b_05)
                                                   ? 0x948U
                                                   : 0x571U)))));
    this->__PVT__mult1__DOT__mult = ((0x80000000U & this->__PVT__abs_b) 
                                     | (0x7fffffffU 
                                        & ((0x80000000U 
                                            & this->__PVT__mult1__DOT__mult)
                                            ? ((IData)(1U) 
                                               + (~ (IData)(
                                                            (0xffffffffffffeULL 
                                                             & ((QData)((IData)(
                                                                                (0x7fffffffU 
                                                                                & this->__PVT__mult1__DOT__multiplicand))) 
                                                                << 1U)))))
                                            : (IData)(
                                                      (0xffffffffffffeULL 
                                                       & ((QData)((IData)(
                                                                          (0x7fffffffU 
                                                                           & this->__PVT__mult1__DOT__multiplicand))) 
                                                          << 1U))))));
    this->__PVT__mult2__DOT__mult = ((0x80000000U & this->__PVT__abs_b) 
                                     | (0x7fffffffU 
                                        & ((0x80000000U 
                                            & this->__PVT__mult2__DOT__mult)
                                            ? ((IData)(1U) 
                                               + (~ (IData)(
                                                            ((0x1800ULL 
                                                              * (QData)((IData)(
                                                                                (0x7fffffffU 
                                                                                & this->__PVT__mult2__DOT__multiplicand)))) 
                                                             >> 0xcU))))
                                            : (IData)(
                                                      ((0x1800ULL 
                                                        * (QData)((IData)(
                                                                          (0x7fffffffU 
                                                                           & this->__PVT__mult2__DOT__multiplicand)))) 
                                                       >> 0xcU)))));
    this->__PVT__mult3__DOT__mult = ((0x80000000U & this->__PVT__abs_b) 
                                     | (0x7fffffffU 
                                        & ((0x80000000U 
                                            & this->__PVT__mult3__DOT__mult)
                                            ? ((IData)(1U) 
                                               + (~ (IData)(
                                                            ((0xab8ULL 
                                                              * (QData)((IData)(
                                                                                (0x7fffffffU 
                                                                                & this->__PVT__mult3__DOT__multiplicand)))) 
                                                             >> 0xcU))))
                                            : (IData)(
                                                      ((0xab8ULL 
                                                        * (QData)((IData)(
                                                                          (0x7fffffffU 
                                                                           & this->__PVT__mult3__DOT__multiplicand)))) 
                                                       >> 0xcU)))));
    this->__PVT__mult4__DOT__mult = ((0x80000000U & this->__PVT__abs_b) 
                                     | (0x7fffffffU 
                                        & ((0x80000000U 
                                            & this->__PVT__mult4__DOT__mult)
                                            ? ((IData)(1U) 
                                               + (~ (IData)(
                                                            (0xfffffffffffffULL 
                                                             & ((QData)((IData)(
                                                                                (0x7fffffffU 
                                                                                & this->__PVT__mult4__DOT__multiplicand))) 
                                                                >> 1U)))))
                                            : (IData)(
                                                      (0xfffffffffffffULL 
                                                       & ((QData)((IData)(
                                                                          (0x7fffffffU 
                                                                           & this->__PVT__mult4__DOT__multiplicand))) 
                                                          >> 1U))))));
}

VL_INLINE_OPT void Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div1__174(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div1__174\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__abs_a = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dxu)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dxu 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dxu))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dxu);
    this->__PVT__abs_b = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__du)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__du 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__du))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__du);
    if ((0x80000000U & this->__PVT__abs_b)) {
        this->__PVT__mult1__DOT__multiplicand = ((0x80000000U 
                                                  & ((~ 
                                                      (this->__PVT__abs_b 
                                                       >> 0x1fU)) 
                                                     << 0x1fU)) 
                                                 | (0x7fffffffU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       (~ this->__PVT__abs_b))));
        this->__PVT__mult2__DOT__multiplicand = ((0x80000000U 
                                                  & ((~ 
                                                      (this->__PVT__abs_b 
                                                       >> 0x1fU)) 
                                                     << 0x1fU)) 
                                                 | (0x7fffffffU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       (~ this->__PVT__abs_b))));
        this->__PVT__mult3__DOT__multiplicand = ((0x80000000U 
                                                  & ((~ 
                                                      (this->__PVT__abs_b 
                                                       >> 0x1fU)) 
                                                     << 0x1fU)) 
                                                 | (0x7fffffffU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       (~ this->__PVT__abs_b))));
        this->__PVT__mult4__DOT__multiplicand = ((0x80000000U 
                                                  & ((~ 
                                                      (this->__PVT__abs_b 
                                                       >> 0x1fU)) 
                                                     << 0x1fU)) 
                                                 | (0x7fffffffU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       (~ this->__PVT__abs_b))));
    } else {
        this->__PVT__mult1__DOT__multiplicand = this->__PVT__abs_b;
        this->__PVT__mult2__DOT__multiplicand = this->__PVT__abs_b;
        this->__PVT__mult3__DOT__multiplicand = this->__PVT__abs_b;
        this->__PVT__mult4__DOT__multiplicand = this->__PVT__abs_b;
    }
}

VL_INLINE_OPT void Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div1__288(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div1__288\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->out = ((0x80000000U & (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dxu 
                                 ^ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__du))
                  ? ((this->__PVT__abs_a > this->__PVT__b_2)
                      ? 0xffffd000U : ((this->__PVT__abs_a 
                                        > this->__PVT__b_15)
                                        ? 0xffffe400U
                                        : ((this->__PVT__abs_a 
                                            > this->__PVT__b_67)
                                            ? 0xfffff000U
                                            : ((this->__PVT__abs_a 
                                                > this->__PVT__b_05)
                                                ? 0xfffff6b8U
                                                : 0xfffffa8fU))))
                  : ((this->__PVT__abs_a > this->__PVT__b_2)
                      ? 0x3000U : ((this->__PVT__abs_a 
                                    > this->__PVT__b_15)
                                    ? 0x1c00U : ((this->__PVT__abs_a 
                                                  > this->__PVT__b_67)
                                                  ? 0x1000U
                                                  : 
                                                 ((this->__PVT__abs_a 
                                                   > this->__PVT__b_05)
                                                   ? 0x948U
                                                   : 0x571U)))));
    this->__PVT__mult1__DOT__mult = ((0x80000000U & this->__PVT__abs_b) 
                                     | (0x7fffffffU 
                                        & ((0x80000000U 
                                            & this->__PVT__mult1__DOT__mult)
                                            ? ((IData)(1U) 
                                               + (~ (IData)(
                                                            (0xffffffffffffeULL 
                                                             & ((QData)((IData)(
                                                                                (0x7fffffffU 
                                                                                & this->__PVT__mult1__DOT__multiplicand))) 
                                                                << 1U)))))
                                            : (IData)(
                                                      (0xffffffffffffeULL 
                                                       & ((QData)((IData)(
                                                                          (0x7fffffffU 
                                                                           & this->__PVT__mult1__DOT__multiplicand))) 
                                                          << 1U))))));
    this->__PVT__mult2__DOT__mult = ((0x80000000U & this->__PVT__abs_b) 
                                     | (0x7fffffffU 
                                        & ((0x80000000U 
                                            & this->__PVT__mult2__DOT__mult)
                                            ? ((IData)(1U) 
                                               + (~ (IData)(
                                                            ((0x1800ULL 
                                                              * (QData)((IData)(
                                                                                (0x7fffffffU 
                                                                                & this->__PVT__mult2__DOT__multiplicand)))) 
                                                             >> 0xcU))))
                                            : (IData)(
                                                      ((0x1800ULL 
                                                        * (QData)((IData)(
                                                                          (0x7fffffffU 
                                                                           & this->__PVT__mult2__DOT__multiplicand)))) 
                                                       >> 0xcU)))));
    this->__PVT__mult3__DOT__mult = ((0x80000000U & this->__PVT__abs_b) 
                                     | (0x7fffffffU 
                                        & ((0x80000000U 
                                            & this->__PVT__mult3__DOT__mult)
                                            ? ((IData)(1U) 
                                               + (~ (IData)(
                                                            ((0xab8ULL 
                                                              * (QData)((IData)(
                                                                                (0x7fffffffU 
                                                                                & this->__PVT__mult3__DOT__multiplicand)))) 
                                                             >> 0xcU))))
                                            : (IData)(
                                                      ((0xab8ULL 
                                                        * (QData)((IData)(
                                                                          (0x7fffffffU 
                                                                           & this->__PVT__mult3__DOT__multiplicand)))) 
                                                       >> 0xcU)))));
    this->__PVT__mult4__DOT__mult = ((0x80000000U & this->__PVT__abs_b) 
                                     | (0x7fffffffU 
                                        & ((0x80000000U 
                                            & this->__PVT__mult4__DOT__mult)
                                            ? ((IData)(1U) 
                                               + (~ (IData)(
                                                            (0xfffffffffffffULL 
                                                             & ((QData)((IData)(
                                                                                (0x7fffffffU 
                                                                                & this->__PVT__mult4__DOT__multiplicand))) 
                                                                >> 1U)))))
                                            : (IData)(
                                                      (0xfffffffffffffULL 
                                                       & ((QData)((IData)(
                                                                          (0x7fffffffU 
                                                                           & this->__PVT__mult4__DOT__multiplicand))) 
                                                          >> 1U))))));
}

VL_INLINE_OPT void Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div2__162(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div2__162\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__abs_a = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dyu)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dyu 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dyu))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dyu);
    this->__PVT__abs_b = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__du)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__du 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__du))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__du);
    if ((0x80000000U & this->__PVT__abs_b)) {
        this->__PVT__mult1__DOT__multiplicand = ((0x80000000U 
                                                  & ((~ 
                                                      (this->__PVT__abs_b 
                                                       >> 0x1fU)) 
                                                     << 0x1fU)) 
                                                 | (0x7fffffffU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       (~ this->__PVT__abs_b))));
        this->__PVT__mult2__DOT__multiplicand = ((0x80000000U 
                                                  & ((~ 
                                                      (this->__PVT__abs_b 
                                                       >> 0x1fU)) 
                                                     << 0x1fU)) 
                                                 | (0x7fffffffU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       (~ this->__PVT__abs_b))));
        this->__PVT__mult3__DOT__multiplicand = ((0x80000000U 
                                                  & ((~ 
                                                      (this->__PVT__abs_b 
                                                       >> 0x1fU)) 
                                                     << 0x1fU)) 
                                                 | (0x7fffffffU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       (~ this->__PVT__abs_b))));
        this->__PVT__mult4__DOT__multiplicand = ((0x80000000U 
                                                  & ((~ 
                                                      (this->__PVT__abs_b 
                                                       >> 0x1fU)) 
                                                     << 0x1fU)) 
                                                 | (0x7fffffffU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       (~ this->__PVT__abs_b))));
    } else {
        this->__PVT__mult1__DOT__multiplicand = this->__PVT__abs_b;
        this->__PVT__mult2__DOT__multiplicand = this->__PVT__abs_b;
        this->__PVT__mult3__DOT__multiplicand = this->__PVT__abs_b;
        this->__PVT__mult4__DOT__multiplicand = this->__PVT__abs_b;
    }
}

VL_INLINE_OPT void Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div2__276(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div2__276\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->out = ((0x80000000U & (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dyu 
                                 ^ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__du))
                  ? ((this->__PVT__abs_a > this->__PVT__b_2)
                      ? 0xffffd000U : ((this->__PVT__abs_a 
                                        > this->__PVT__b_15)
                                        ? 0xffffe400U
                                        : ((this->__PVT__abs_a 
                                            > this->__PVT__b_67)
                                            ? 0xfffff000U
                                            : ((this->__PVT__abs_a 
                                                > this->__PVT__b_05)
                                                ? 0xfffff6b8U
                                                : 0xfffffa8fU))))
                  : ((this->__PVT__abs_a > this->__PVT__b_2)
                      ? 0x3000U : ((this->__PVT__abs_a 
                                    > this->__PVT__b_15)
                                    ? 0x1c00U : ((this->__PVT__abs_a 
                                                  > this->__PVT__b_67)
                                                  ? 0x1000U
                                                  : 
                                                 ((this->__PVT__abs_a 
                                                   > this->__PVT__b_05)
                                                   ? 0x948U
                                                   : 0x571U)))));
    this->__PVT__mult1__DOT__mult = ((0x80000000U & this->__PVT__abs_b) 
                                     | (0x7fffffffU 
                                        & ((0x80000000U 
                                            & this->__PVT__mult1__DOT__mult)
                                            ? ((IData)(1U) 
                                               + (~ (IData)(
                                                            (0xffffffffffffeULL 
                                                             & ((QData)((IData)(
                                                                                (0x7fffffffU 
                                                                                & this->__PVT__mult1__DOT__multiplicand))) 
                                                                << 1U)))))
                                            : (IData)(
                                                      (0xffffffffffffeULL 
                                                       & ((QData)((IData)(
                                                                          (0x7fffffffU 
                                                                           & this->__PVT__mult1__DOT__multiplicand))) 
                                                          << 1U))))));
    this->__PVT__mult2__DOT__mult = ((0x80000000U & this->__PVT__abs_b) 
                                     | (0x7fffffffU 
                                        & ((0x80000000U 
                                            & this->__PVT__mult2__DOT__mult)
                                            ? ((IData)(1U) 
                                               + (~ (IData)(
                                                            ((0x1800ULL 
                                                              * (QData)((IData)(
                                                                                (0x7fffffffU 
                                                                                & this->__PVT__mult2__DOT__multiplicand)))) 
                                                             >> 0xcU))))
                                            : (IData)(
                                                      ((0x1800ULL 
                                                        * (QData)((IData)(
                                                                          (0x7fffffffU 
                                                                           & this->__PVT__mult2__DOT__multiplicand)))) 
                                                       >> 0xcU)))));
    this->__PVT__mult3__DOT__mult = ((0x80000000U & this->__PVT__abs_b) 
                                     | (0x7fffffffU 
                                        & ((0x80000000U 
                                            & this->__PVT__mult3__DOT__mult)
                                            ? ((IData)(1U) 
                                               + (~ (IData)(
                                                            ((0xab8ULL 
                                                              * (QData)((IData)(
                                                                                (0x7fffffffU 
                                                                                & this->__PVT__mult3__DOT__multiplicand)))) 
                                                             >> 0xcU))))
                                            : (IData)(
                                                      ((0xab8ULL 
                                                        * (QData)((IData)(
                                                                          (0x7fffffffU 
                                                                           & this->__PVT__mult3__DOT__multiplicand)))) 
                                                       >> 0xcU)))));
    this->__PVT__mult4__DOT__mult = ((0x80000000U & this->__PVT__abs_b) 
                                     | (0x7fffffffU 
                                        & ((0x80000000U 
                                            & this->__PVT__mult4__DOT__mult)
                                            ? ((IData)(1U) 
                                               + (~ (IData)(
                                                            (0xfffffffffffffULL 
                                                             & ((QData)((IData)(
                                                                                (0x7fffffffU 
                                                                                & this->__PVT__mult4__DOT__multiplicand))) 
                                                                >> 1U)))))
                                            : (IData)(
                                                      (0xfffffffffffffULL 
                                                       & ((QData)((IData)(
                                                                          (0x7fffffffU 
                                                                           & this->__PVT__mult4__DOT__multiplicand))) 
                                                          >> 1U))))));
}

VL_INLINE_OPT void Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div3__201(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div3__201\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__abs_a = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dxd)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dxd 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dxd))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dxd);
    this->__PVT__abs_b = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dd)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dd 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dd))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dd);
    if ((0x80000000U & this->__PVT__abs_b)) {
        this->__PVT__mult1__DOT__multiplicand = ((0x80000000U 
                                                  & ((~ 
                                                      (this->__PVT__abs_b 
                                                       >> 0x1fU)) 
                                                     << 0x1fU)) 
                                                 | (0x7fffffffU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       (~ this->__PVT__abs_b))));
        this->__PVT__mult2__DOT__multiplicand = ((0x80000000U 
                                                  & ((~ 
                                                      (this->__PVT__abs_b 
                                                       >> 0x1fU)) 
                                                     << 0x1fU)) 
                                                 | (0x7fffffffU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       (~ this->__PVT__abs_b))));
        this->__PVT__mult3__DOT__multiplicand = ((0x80000000U 
                                                  & ((~ 
                                                      (this->__PVT__abs_b 
                                                       >> 0x1fU)) 
                                                     << 0x1fU)) 
                                                 | (0x7fffffffU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       (~ this->__PVT__abs_b))));
        this->__PVT__mult4__DOT__multiplicand = ((0x80000000U 
                                                  & ((~ 
                                                      (this->__PVT__abs_b 
                                                       >> 0x1fU)) 
                                                     << 0x1fU)) 
                                                 | (0x7fffffffU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       (~ this->__PVT__abs_b))));
    } else {
        this->__PVT__mult1__DOT__multiplicand = this->__PVT__abs_b;
        this->__PVT__mult2__DOT__multiplicand = this->__PVT__abs_b;
        this->__PVT__mult3__DOT__multiplicand = this->__PVT__abs_b;
        this->__PVT__mult4__DOT__multiplicand = this->__PVT__abs_b;
    }
}

VL_INLINE_OPT void Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div3__315(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div3__315\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->out = ((0x80000000U & (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dxd 
                                 ^ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dd))
                  ? ((this->__PVT__abs_a > this->__PVT__b_2)
                      ? 0xffffd000U : ((this->__PVT__abs_a 
                                        > this->__PVT__b_15)
                                        ? 0xffffe400U
                                        : ((this->__PVT__abs_a 
                                            > this->__PVT__b_67)
                                            ? 0xfffff000U
                                            : ((this->__PVT__abs_a 
                                                > this->__PVT__b_05)
                                                ? 0xfffff6b8U
                                                : 0xfffffa8fU))))
                  : ((this->__PVT__abs_a > this->__PVT__b_2)
                      ? 0x3000U : ((this->__PVT__abs_a 
                                    > this->__PVT__b_15)
                                    ? 0x1c00U : ((this->__PVT__abs_a 
                                                  > this->__PVT__b_67)
                                                  ? 0x1000U
                                                  : 
                                                 ((this->__PVT__abs_a 
                                                   > this->__PVT__b_05)
                                                   ? 0x948U
                                                   : 0x571U)))));
    this->__PVT__mult1__DOT__mult = ((0x80000000U & this->__PVT__abs_b) 
                                     | (0x7fffffffU 
                                        & ((0x80000000U 
                                            & this->__PVT__mult1__DOT__mult)
                                            ? ((IData)(1U) 
                                               + (~ (IData)(
                                                            (0xffffffffffffeULL 
                                                             & ((QData)((IData)(
                                                                                (0x7fffffffU 
                                                                                & this->__PVT__mult1__DOT__multiplicand))) 
                                                                << 1U)))))
                                            : (IData)(
                                                      (0xffffffffffffeULL 
                                                       & ((QData)((IData)(
                                                                          (0x7fffffffU 
                                                                           & this->__PVT__mult1__DOT__multiplicand))) 
                                                          << 1U))))));
    this->__PVT__mult2__DOT__mult = ((0x80000000U & this->__PVT__abs_b) 
                                     | (0x7fffffffU 
                                        & ((0x80000000U 
                                            & this->__PVT__mult2__DOT__mult)
                                            ? ((IData)(1U) 
                                               + (~ (IData)(
                                                            ((0x1800ULL 
                                                              * (QData)((IData)(
                                                                                (0x7fffffffU 
                                                                                & this->__PVT__mult2__DOT__multiplicand)))) 
                                                             >> 0xcU))))
                                            : (IData)(
                                                      ((0x1800ULL 
                                                        * (QData)((IData)(
                                                                          (0x7fffffffU 
                                                                           & this->__PVT__mult2__DOT__multiplicand)))) 
                                                       >> 0xcU)))));
    this->__PVT__mult3__DOT__mult = ((0x80000000U & this->__PVT__abs_b) 
                                     | (0x7fffffffU 
                                        & ((0x80000000U 
                                            & this->__PVT__mult3__DOT__mult)
                                            ? ((IData)(1U) 
                                               + (~ (IData)(
                                                            ((0xab8ULL 
                                                              * (QData)((IData)(
                                                                                (0x7fffffffU 
                                                                                & this->__PVT__mult3__DOT__multiplicand)))) 
                                                             >> 0xcU))))
                                            : (IData)(
                                                      ((0xab8ULL 
                                                        * (QData)((IData)(
                                                                          (0x7fffffffU 
                                                                           & this->__PVT__mult3__DOT__multiplicand)))) 
                                                       >> 0xcU)))));
    this->__PVT__mult4__DOT__mult = ((0x80000000U & this->__PVT__abs_b) 
                                     | (0x7fffffffU 
                                        & ((0x80000000U 
                                            & this->__PVT__mult4__DOT__mult)
                                            ? ((IData)(1U) 
                                               + (~ (IData)(
                                                            (0xfffffffffffffULL 
                                                             & ((QData)((IData)(
                                                                                (0x7fffffffU 
                                                                                & this->__PVT__mult4__DOT__multiplicand))) 
                                                                >> 1U)))))
                                            : (IData)(
                                                      (0xfffffffffffffULL 
                                                       & ((QData)((IData)(
                                                                          (0x7fffffffU 
                                                                           & this->__PVT__mult4__DOT__multiplicand))) 
                                                          >> 1U))))));
}

VL_INLINE_OPT void Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div4__192(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div4__192\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__abs_a = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dyd)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dyd 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dyd))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dyd);
    this->__PVT__abs_b = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dd)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dd 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dd))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dd);
    if ((0x80000000U & this->__PVT__abs_b)) {
        this->__PVT__mult1__DOT__multiplicand = ((0x80000000U 
                                                  & ((~ 
                                                      (this->__PVT__abs_b 
                                                       >> 0x1fU)) 
                                                     << 0x1fU)) 
                                                 | (0x7fffffffU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       (~ this->__PVT__abs_b))));
        this->__PVT__mult2__DOT__multiplicand = ((0x80000000U 
                                                  & ((~ 
                                                      (this->__PVT__abs_b 
                                                       >> 0x1fU)) 
                                                     << 0x1fU)) 
                                                 | (0x7fffffffU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       (~ this->__PVT__abs_b))));
        this->__PVT__mult3__DOT__multiplicand = ((0x80000000U 
                                                  & ((~ 
                                                      (this->__PVT__abs_b 
                                                       >> 0x1fU)) 
                                                     << 0x1fU)) 
                                                 | (0x7fffffffU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       (~ this->__PVT__abs_b))));
        this->__PVT__mult4__DOT__multiplicand = ((0x80000000U 
                                                  & ((~ 
                                                      (this->__PVT__abs_b 
                                                       >> 0x1fU)) 
                                                     << 0x1fU)) 
                                                 | (0x7fffffffU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       (~ this->__PVT__abs_b))));
    } else {
        this->__PVT__mult1__DOT__multiplicand = this->__PVT__abs_b;
        this->__PVT__mult2__DOT__multiplicand = this->__PVT__abs_b;
        this->__PVT__mult3__DOT__multiplicand = this->__PVT__abs_b;
        this->__PVT__mult4__DOT__multiplicand = this->__PVT__abs_b;
    }
}

VL_INLINE_OPT void Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div4__306(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div4__306\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->out = ((0x80000000U & (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dyd 
                                 ^ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dd))
                  ? ((this->__PVT__abs_a > this->__PVT__b_2)
                      ? 0xffffd000U : ((this->__PVT__abs_a 
                                        > this->__PVT__b_15)
                                        ? 0xffffe400U
                                        : ((this->__PVT__abs_a 
                                            > this->__PVT__b_67)
                                            ? 0xfffff000U
                                            : ((this->__PVT__abs_a 
                                                > this->__PVT__b_05)
                                                ? 0xfffff6b8U
                                                : 0xfffffa8fU))))
                  : ((this->__PVT__abs_a > this->__PVT__b_2)
                      ? 0x3000U : ((this->__PVT__abs_a 
                                    > this->__PVT__b_15)
                                    ? 0x1c00U : ((this->__PVT__abs_a 
                                                  > this->__PVT__b_67)
                                                  ? 0x1000U
                                                  : 
                                                 ((this->__PVT__abs_a 
                                                   > this->__PVT__b_05)
                                                   ? 0x948U
                                                   : 0x571U)))));
    this->__PVT__mult1__DOT__mult = ((0x80000000U & this->__PVT__abs_b) 
                                     | (0x7fffffffU 
                                        & ((0x80000000U 
                                            & this->__PVT__mult1__DOT__mult)
                                            ? ((IData)(1U) 
                                               + (~ (IData)(
                                                            (0xffffffffffffeULL 
                                                             & ((QData)((IData)(
                                                                                (0x7fffffffU 
                                                                                & this->__PVT__mult1__DOT__multiplicand))) 
                                                                << 1U)))))
                                            : (IData)(
                                                      (0xffffffffffffeULL 
                                                       & ((QData)((IData)(
                                                                          (0x7fffffffU 
                                                                           & this->__PVT__mult1__DOT__multiplicand))) 
                                                          << 1U))))));
    this->__PVT__mult2__DOT__mult = ((0x80000000U & this->__PVT__abs_b) 
                                     | (0x7fffffffU 
                                        & ((0x80000000U 
                                            & this->__PVT__mult2__DOT__mult)
                                            ? ((IData)(1U) 
                                               + (~ (IData)(
                                                            ((0x1800ULL 
                                                              * (QData)((IData)(
                                                                                (0x7fffffffU 
                                                                                & this->__PVT__mult2__DOT__multiplicand)))) 
                                                             >> 0xcU))))
                                            : (IData)(
                                                      ((0x1800ULL 
                                                        * (QData)((IData)(
                                                                          (0x7fffffffU 
                                                                           & this->__PVT__mult2__DOT__multiplicand)))) 
                                                       >> 0xcU)))));
    this->__PVT__mult3__DOT__mult = ((0x80000000U & this->__PVT__abs_b) 
                                     | (0x7fffffffU 
                                        & ((0x80000000U 
                                            & this->__PVT__mult3__DOT__mult)
                                            ? ((IData)(1U) 
                                               + (~ (IData)(
                                                            ((0xab8ULL 
                                                              * (QData)((IData)(
                                                                                (0x7fffffffU 
                                                                                & this->__PVT__mult3__DOT__multiplicand)))) 
                                                             >> 0xcU))))
                                            : (IData)(
                                                      ((0xab8ULL 
                                                        * (QData)((IData)(
                                                                          (0x7fffffffU 
                                                                           & this->__PVT__mult3__DOT__multiplicand)))) 
                                                       >> 0xcU)))));
    this->__PVT__mult4__DOT__mult = ((0x80000000U & this->__PVT__abs_b) 
                                     | (0x7fffffffU 
                                        & ((0x80000000U 
                                            & this->__PVT__mult4__DOT__mult)
                                            ? ((IData)(1U) 
                                               + (~ (IData)(
                                                            (0xfffffffffffffULL 
                                                             & ((QData)((IData)(
                                                                                (0x7fffffffU 
                                                                                & this->__PVT__mult4__DOT__multiplicand))) 
                                                                >> 1U)))))
                                            : (IData)(
                                                      (0xfffffffffffffULL 
                                                       & ((QData)((IData)(
                                                                          (0x7fffffffU 
                                                                           & this->__PVT__mult4__DOT__multiplicand))) 
                                                          >> 1U))))));
}

VL_INLINE_OPT void Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div1__175(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div1__175\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__abs_a = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dxu)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dxu 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dxu))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dxu);
    this->__PVT__abs_b = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__du)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__du 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__du))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__du);
    if ((0x80000000U & this->__PVT__abs_b)) {
        this->__PVT__mult1__DOT__multiplicand = ((0x80000000U 
                                                  & ((~ 
                                                      (this->__PVT__abs_b 
                                                       >> 0x1fU)) 
                                                     << 0x1fU)) 
                                                 | (0x7fffffffU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       (~ this->__PVT__abs_b))));
        this->__PVT__mult2__DOT__multiplicand = ((0x80000000U 
                                                  & ((~ 
                                                      (this->__PVT__abs_b 
                                                       >> 0x1fU)) 
                                                     << 0x1fU)) 
                                                 | (0x7fffffffU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       (~ this->__PVT__abs_b))));
        this->__PVT__mult3__DOT__multiplicand = ((0x80000000U 
                                                  & ((~ 
                                                      (this->__PVT__abs_b 
                                                       >> 0x1fU)) 
                                                     << 0x1fU)) 
                                                 | (0x7fffffffU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       (~ this->__PVT__abs_b))));
        this->__PVT__mult4__DOT__multiplicand = ((0x80000000U 
                                                  & ((~ 
                                                      (this->__PVT__abs_b 
                                                       >> 0x1fU)) 
                                                     << 0x1fU)) 
                                                 | (0x7fffffffU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       (~ this->__PVT__abs_b))));
    } else {
        this->__PVT__mult1__DOT__multiplicand = this->__PVT__abs_b;
        this->__PVT__mult2__DOT__multiplicand = this->__PVT__abs_b;
        this->__PVT__mult3__DOT__multiplicand = this->__PVT__abs_b;
        this->__PVT__mult4__DOT__multiplicand = this->__PVT__abs_b;
    }
}

VL_INLINE_OPT void Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div1__289(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div1__289\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->out = ((0x80000000U & (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dxu 
                                 ^ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__du))
                  ? ((this->__PVT__abs_a > this->__PVT__b_2)
                      ? 0xffffd000U : ((this->__PVT__abs_a 
                                        > this->__PVT__b_15)
                                        ? 0xffffe400U
                                        : ((this->__PVT__abs_a 
                                            > this->__PVT__b_67)
                                            ? 0xfffff000U
                                            : ((this->__PVT__abs_a 
                                                > this->__PVT__b_05)
                                                ? 0xfffff6b8U
                                                : 0xfffffa8fU))))
                  : ((this->__PVT__abs_a > this->__PVT__b_2)
                      ? 0x3000U : ((this->__PVT__abs_a 
                                    > this->__PVT__b_15)
                                    ? 0x1c00U : ((this->__PVT__abs_a 
                                                  > this->__PVT__b_67)
                                                  ? 0x1000U
                                                  : 
                                                 ((this->__PVT__abs_a 
                                                   > this->__PVT__b_05)
                                                   ? 0x948U
                                                   : 0x571U)))));
    this->__PVT__mult1__DOT__mult = ((0x80000000U & this->__PVT__abs_b) 
                                     | (0x7fffffffU 
                                        & ((0x80000000U 
                                            & this->__PVT__mult1__DOT__mult)
                                            ? ((IData)(1U) 
                                               + (~ (IData)(
                                                            (0xffffffffffffeULL 
                                                             & ((QData)((IData)(
                                                                                (0x7fffffffU 
                                                                                & this->__PVT__mult1__DOT__multiplicand))) 
                                                                << 1U)))))
                                            : (IData)(
                                                      (0xffffffffffffeULL 
                                                       & ((QData)((IData)(
                                                                          (0x7fffffffU 
                                                                           & this->__PVT__mult1__DOT__multiplicand))) 
                                                          << 1U))))));
    this->__PVT__mult2__DOT__mult = ((0x80000000U & this->__PVT__abs_b) 
                                     | (0x7fffffffU 
                                        & ((0x80000000U 
                                            & this->__PVT__mult2__DOT__mult)
                                            ? ((IData)(1U) 
                                               + (~ (IData)(
                                                            ((0x1800ULL 
                                                              * (QData)((IData)(
                                                                                (0x7fffffffU 
                                                                                & this->__PVT__mult2__DOT__multiplicand)))) 
                                                             >> 0xcU))))
                                            : (IData)(
                                                      ((0x1800ULL 
                                                        * (QData)((IData)(
                                                                          (0x7fffffffU 
                                                                           & this->__PVT__mult2__DOT__multiplicand)))) 
                                                       >> 0xcU)))));
    this->__PVT__mult3__DOT__mult = ((0x80000000U & this->__PVT__abs_b) 
                                     | (0x7fffffffU 
                                        & ((0x80000000U 
                                            & this->__PVT__mult3__DOT__mult)
                                            ? ((IData)(1U) 
                                               + (~ (IData)(
                                                            ((0xab8ULL 
                                                              * (QData)((IData)(
                                                                                (0x7fffffffU 
                                                                                & this->__PVT__mult3__DOT__multiplicand)))) 
                                                             >> 0xcU))))
                                            : (IData)(
                                                      ((0xab8ULL 
                                                        * (QData)((IData)(
                                                                          (0x7fffffffU 
                                                                           & this->__PVT__mult3__DOT__multiplicand)))) 
                                                       >> 0xcU)))));
    this->__PVT__mult4__DOT__mult = ((0x80000000U & this->__PVT__abs_b) 
                                     | (0x7fffffffU 
                                        & ((0x80000000U 
                                            & this->__PVT__mult4__DOT__mult)
                                            ? ((IData)(1U) 
                                               + (~ (IData)(
                                                            (0xfffffffffffffULL 
                                                             & ((QData)((IData)(
                                                                                (0x7fffffffU 
                                                                                & this->__PVT__mult4__DOT__multiplicand))) 
                                                                >> 1U)))))
                                            : (IData)(
                                                      (0xfffffffffffffULL 
                                                       & ((QData)((IData)(
                                                                          (0x7fffffffU 
                                                                           & this->__PVT__mult4__DOT__multiplicand))) 
                                                          >> 1U))))));
}

VL_INLINE_OPT void Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div2__163(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div2__163\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__abs_a = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dyu)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dyu 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dyu))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dyu);
    this->__PVT__abs_b = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__du)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__du 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__du))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__du);
    if ((0x80000000U & this->__PVT__abs_b)) {
        this->__PVT__mult1__DOT__multiplicand = ((0x80000000U 
                                                  & ((~ 
                                                      (this->__PVT__abs_b 
                                                       >> 0x1fU)) 
                                                     << 0x1fU)) 
                                                 | (0x7fffffffU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       (~ this->__PVT__abs_b))));
        this->__PVT__mult2__DOT__multiplicand = ((0x80000000U 
                                                  & ((~ 
                                                      (this->__PVT__abs_b 
                                                       >> 0x1fU)) 
                                                     << 0x1fU)) 
                                                 | (0x7fffffffU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       (~ this->__PVT__abs_b))));
        this->__PVT__mult3__DOT__multiplicand = ((0x80000000U 
                                                  & ((~ 
                                                      (this->__PVT__abs_b 
                                                       >> 0x1fU)) 
                                                     << 0x1fU)) 
                                                 | (0x7fffffffU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       (~ this->__PVT__abs_b))));
        this->__PVT__mult4__DOT__multiplicand = ((0x80000000U 
                                                  & ((~ 
                                                      (this->__PVT__abs_b 
                                                       >> 0x1fU)) 
                                                     << 0x1fU)) 
                                                 | (0x7fffffffU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       (~ this->__PVT__abs_b))));
    } else {
        this->__PVT__mult1__DOT__multiplicand = this->__PVT__abs_b;
        this->__PVT__mult2__DOT__multiplicand = this->__PVT__abs_b;
        this->__PVT__mult3__DOT__multiplicand = this->__PVT__abs_b;
        this->__PVT__mult4__DOT__multiplicand = this->__PVT__abs_b;
    }
}

VL_INLINE_OPT void Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div2__277(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div2__277\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->out = ((0x80000000U & (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dyu 
                                 ^ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__du))
                  ? ((this->__PVT__abs_a > this->__PVT__b_2)
                      ? 0xffffd000U : ((this->__PVT__abs_a 
                                        > this->__PVT__b_15)
                                        ? 0xffffe400U
                                        : ((this->__PVT__abs_a 
                                            > this->__PVT__b_67)
                                            ? 0xfffff000U
                                            : ((this->__PVT__abs_a 
                                                > this->__PVT__b_05)
                                                ? 0xfffff6b8U
                                                : 0xfffffa8fU))))
                  : ((this->__PVT__abs_a > this->__PVT__b_2)
                      ? 0x3000U : ((this->__PVT__abs_a 
                                    > this->__PVT__b_15)
                                    ? 0x1c00U : ((this->__PVT__abs_a 
                                                  > this->__PVT__b_67)
                                                  ? 0x1000U
                                                  : 
                                                 ((this->__PVT__abs_a 
                                                   > this->__PVT__b_05)
                                                   ? 0x948U
                                                   : 0x571U)))));
    this->__PVT__mult1__DOT__mult = ((0x80000000U & this->__PVT__abs_b) 
                                     | (0x7fffffffU 
                                        & ((0x80000000U 
                                            & this->__PVT__mult1__DOT__mult)
                                            ? ((IData)(1U) 
                                               + (~ (IData)(
                                                            (0xffffffffffffeULL 
                                                             & ((QData)((IData)(
                                                                                (0x7fffffffU 
                                                                                & this->__PVT__mult1__DOT__multiplicand))) 
                                                                << 1U)))))
                                            : (IData)(
                                                      (0xffffffffffffeULL 
                                                       & ((QData)((IData)(
                                                                          (0x7fffffffU 
                                                                           & this->__PVT__mult1__DOT__multiplicand))) 
                                                          << 1U))))));
    this->__PVT__mult2__DOT__mult = ((0x80000000U & this->__PVT__abs_b) 
                                     | (0x7fffffffU 
                                        & ((0x80000000U 
                                            & this->__PVT__mult2__DOT__mult)
                                            ? ((IData)(1U) 
                                               + (~ (IData)(
                                                            ((0x1800ULL 
                                                              * (QData)((IData)(
                                                                                (0x7fffffffU 
                                                                                & this->__PVT__mult2__DOT__multiplicand)))) 
                                                             >> 0xcU))))
                                            : (IData)(
                                                      ((0x1800ULL 
                                                        * (QData)((IData)(
                                                                          (0x7fffffffU 
                                                                           & this->__PVT__mult2__DOT__multiplicand)))) 
                                                       >> 0xcU)))));
    this->__PVT__mult3__DOT__mult = ((0x80000000U & this->__PVT__abs_b) 
                                     | (0x7fffffffU 
                                        & ((0x80000000U 
                                            & this->__PVT__mult3__DOT__mult)
                                            ? ((IData)(1U) 
                                               + (~ (IData)(
                                                            ((0xab8ULL 
                                                              * (QData)((IData)(
                                                                                (0x7fffffffU 
                                                                                & this->__PVT__mult3__DOT__multiplicand)))) 
                                                             >> 0xcU))))
                                            : (IData)(
                                                      ((0xab8ULL 
                                                        * (QData)((IData)(
                                                                          (0x7fffffffU 
                                                                           & this->__PVT__mult3__DOT__multiplicand)))) 
                                                       >> 0xcU)))));
    this->__PVT__mult4__DOT__mult = ((0x80000000U & this->__PVT__abs_b) 
                                     | (0x7fffffffU 
                                        & ((0x80000000U 
                                            & this->__PVT__mult4__DOT__mult)
                                            ? ((IData)(1U) 
                                               + (~ (IData)(
                                                            (0xfffffffffffffULL 
                                                             & ((QData)((IData)(
                                                                                (0x7fffffffU 
                                                                                & this->__PVT__mult4__DOT__multiplicand))) 
                                                                >> 1U)))))
                                            : (IData)(
                                                      (0xfffffffffffffULL 
                                                       & ((QData)((IData)(
                                                                          (0x7fffffffU 
                                                                           & this->__PVT__mult4__DOT__multiplicand))) 
                                                          >> 1U))))));
}

VL_INLINE_OPT void Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div3__202(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div3__202\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__abs_a = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dxd)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dxd 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dxd))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dxd);
    this->__PVT__abs_b = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dd)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dd 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dd))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dd);
    if ((0x80000000U & this->__PVT__abs_b)) {
        this->__PVT__mult1__DOT__multiplicand = ((0x80000000U 
                                                  & ((~ 
                                                      (this->__PVT__abs_b 
                                                       >> 0x1fU)) 
                                                     << 0x1fU)) 
                                                 | (0x7fffffffU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       (~ this->__PVT__abs_b))));
        this->__PVT__mult2__DOT__multiplicand = ((0x80000000U 
                                                  & ((~ 
                                                      (this->__PVT__abs_b 
                                                       >> 0x1fU)) 
                                                     << 0x1fU)) 
                                                 | (0x7fffffffU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       (~ this->__PVT__abs_b))));
        this->__PVT__mult3__DOT__multiplicand = ((0x80000000U 
                                                  & ((~ 
                                                      (this->__PVT__abs_b 
                                                       >> 0x1fU)) 
                                                     << 0x1fU)) 
                                                 | (0x7fffffffU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       (~ this->__PVT__abs_b))));
        this->__PVT__mult4__DOT__multiplicand = ((0x80000000U 
                                                  & ((~ 
                                                      (this->__PVT__abs_b 
                                                       >> 0x1fU)) 
                                                     << 0x1fU)) 
                                                 | (0x7fffffffU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       (~ this->__PVT__abs_b))));
    } else {
        this->__PVT__mult1__DOT__multiplicand = this->__PVT__abs_b;
        this->__PVT__mult2__DOT__multiplicand = this->__PVT__abs_b;
        this->__PVT__mult3__DOT__multiplicand = this->__PVT__abs_b;
        this->__PVT__mult4__DOT__multiplicand = this->__PVT__abs_b;
    }
}

VL_INLINE_OPT void Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div3__316(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div3__316\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->out = ((0x80000000U & (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dxd 
                                 ^ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dd))
                  ? ((this->__PVT__abs_a > this->__PVT__b_2)
                      ? 0xffffd000U : ((this->__PVT__abs_a 
                                        > this->__PVT__b_15)
                                        ? 0xffffe400U
                                        : ((this->__PVT__abs_a 
                                            > this->__PVT__b_67)
                                            ? 0xfffff000U
                                            : ((this->__PVT__abs_a 
                                                > this->__PVT__b_05)
                                                ? 0xfffff6b8U
                                                : 0xfffffa8fU))))
                  : ((this->__PVT__abs_a > this->__PVT__b_2)
                      ? 0x3000U : ((this->__PVT__abs_a 
                                    > this->__PVT__b_15)
                                    ? 0x1c00U : ((this->__PVT__abs_a 
                                                  > this->__PVT__b_67)
                                                  ? 0x1000U
                                                  : 
                                                 ((this->__PVT__abs_a 
                                                   > this->__PVT__b_05)
                                                   ? 0x948U
                                                   : 0x571U)))));
    this->__PVT__mult1__DOT__mult = ((0x80000000U & this->__PVT__abs_b) 
                                     | (0x7fffffffU 
                                        & ((0x80000000U 
                                            & this->__PVT__mult1__DOT__mult)
                                            ? ((IData)(1U) 
                                               + (~ (IData)(
                                                            (0xffffffffffffeULL 
                                                             & ((QData)((IData)(
                                                                                (0x7fffffffU 
                                                                                & this->__PVT__mult1__DOT__multiplicand))) 
                                                                << 1U)))))
                                            : (IData)(
                                                      (0xffffffffffffeULL 
                                                       & ((QData)((IData)(
                                                                          (0x7fffffffU 
                                                                           & this->__PVT__mult1__DOT__multiplicand))) 
                                                          << 1U))))));
    this->__PVT__mult2__DOT__mult = ((0x80000000U & this->__PVT__abs_b) 
                                     | (0x7fffffffU 
                                        & ((0x80000000U 
                                            & this->__PVT__mult2__DOT__mult)
                                            ? ((IData)(1U) 
                                               + (~ (IData)(
                                                            ((0x1800ULL 
                                                              * (QData)((IData)(
                                                                                (0x7fffffffU 
                                                                                & this->__PVT__mult2__DOT__multiplicand)))) 
                                                             >> 0xcU))))
                                            : (IData)(
                                                      ((0x1800ULL 
                                                        * (QData)((IData)(
                                                                          (0x7fffffffU 
                                                                           & this->__PVT__mult2__DOT__multiplicand)))) 
                                                       >> 0xcU)))));
    this->__PVT__mult3__DOT__mult = ((0x80000000U & this->__PVT__abs_b) 
                                     | (0x7fffffffU 
                                        & ((0x80000000U 
                                            & this->__PVT__mult3__DOT__mult)
                                            ? ((IData)(1U) 
                                               + (~ (IData)(
                                                            ((0xab8ULL 
                                                              * (QData)((IData)(
                                                                                (0x7fffffffU 
                                                                                & this->__PVT__mult3__DOT__multiplicand)))) 
                                                             >> 0xcU))))
                                            : (IData)(
                                                      ((0xab8ULL 
                                                        * (QData)((IData)(
                                                                          (0x7fffffffU 
                                                                           & this->__PVT__mult3__DOT__multiplicand)))) 
                                                       >> 0xcU)))));
    this->__PVT__mult4__DOT__mult = ((0x80000000U & this->__PVT__abs_b) 
                                     | (0x7fffffffU 
                                        & ((0x80000000U 
                                            & this->__PVT__mult4__DOT__mult)
                                            ? ((IData)(1U) 
                                               + (~ (IData)(
                                                            (0xfffffffffffffULL 
                                                             & ((QData)((IData)(
                                                                                (0x7fffffffU 
                                                                                & this->__PVT__mult4__DOT__multiplicand))) 
                                                                >> 1U)))))
                                            : (IData)(
                                                      (0xfffffffffffffULL 
                                                       & ((QData)((IData)(
                                                                          (0x7fffffffU 
                                                                           & this->__PVT__mult4__DOT__multiplicand))) 
                                                          >> 1U))))));
}

VL_INLINE_OPT void Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div4__193(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div4__193\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__abs_a = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dyd)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dyd 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dyd))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dyd);
    this->__PVT__abs_b = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dd)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dd 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dd))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dd);
    if ((0x80000000U & this->__PVT__abs_b)) {
        this->__PVT__mult1__DOT__multiplicand = ((0x80000000U 
                                                  & ((~ 
                                                      (this->__PVT__abs_b 
                                                       >> 0x1fU)) 
                                                     << 0x1fU)) 
                                                 | (0x7fffffffU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       (~ this->__PVT__abs_b))));
        this->__PVT__mult2__DOT__multiplicand = ((0x80000000U 
                                                  & ((~ 
                                                      (this->__PVT__abs_b 
                                                       >> 0x1fU)) 
                                                     << 0x1fU)) 
                                                 | (0x7fffffffU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       (~ this->__PVT__abs_b))));
        this->__PVT__mult3__DOT__multiplicand = ((0x80000000U 
                                                  & ((~ 
                                                      (this->__PVT__abs_b 
                                                       >> 0x1fU)) 
                                                     << 0x1fU)) 
                                                 | (0x7fffffffU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       (~ this->__PVT__abs_b))));
        this->__PVT__mult4__DOT__multiplicand = ((0x80000000U 
                                                  & ((~ 
                                                      (this->__PVT__abs_b 
                                                       >> 0x1fU)) 
                                                     << 0x1fU)) 
                                                 | (0x7fffffffU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       (~ this->__PVT__abs_b))));
    } else {
        this->__PVT__mult1__DOT__multiplicand = this->__PVT__abs_b;
        this->__PVT__mult2__DOT__multiplicand = this->__PVT__abs_b;
        this->__PVT__mult3__DOT__multiplicand = this->__PVT__abs_b;
        this->__PVT__mult4__DOT__multiplicand = this->__PVT__abs_b;
    }
}

VL_INLINE_OPT void Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div4__307(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div4__307\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->out = ((0x80000000U & (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dyd 
                                 ^ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dd))
                  ? ((this->__PVT__abs_a > this->__PVT__b_2)
                      ? 0xffffd000U : ((this->__PVT__abs_a 
                                        > this->__PVT__b_15)
                                        ? 0xffffe400U
                                        : ((this->__PVT__abs_a 
                                            > this->__PVT__b_67)
                                            ? 0xfffff000U
                                            : ((this->__PVT__abs_a 
                                                > this->__PVT__b_05)
                                                ? 0xfffff6b8U
                                                : 0xfffffa8fU))))
                  : ((this->__PVT__abs_a > this->__PVT__b_2)
                      ? 0x3000U : ((this->__PVT__abs_a 
                                    > this->__PVT__b_15)
                                    ? 0x1c00U : ((this->__PVT__abs_a 
                                                  > this->__PVT__b_67)
                                                  ? 0x1000U
                                                  : 
                                                 ((this->__PVT__abs_a 
                                                   > this->__PVT__b_05)
                                                   ? 0x948U
                                                   : 0x571U)))));
    this->__PVT__mult1__DOT__mult = ((0x80000000U & this->__PVT__abs_b) 
                                     | (0x7fffffffU 
                                        & ((0x80000000U 
                                            & this->__PVT__mult1__DOT__mult)
                                            ? ((IData)(1U) 
                                               + (~ (IData)(
                                                            (0xffffffffffffeULL 
                                                             & ((QData)((IData)(
                                                                                (0x7fffffffU 
                                                                                & this->__PVT__mult1__DOT__multiplicand))) 
                                                                << 1U)))))
                                            : (IData)(
                                                      (0xffffffffffffeULL 
                                                       & ((QData)((IData)(
                                                                          (0x7fffffffU 
                                                                           & this->__PVT__mult1__DOT__multiplicand))) 
                                                          << 1U))))));
    this->__PVT__mult2__DOT__mult = ((0x80000000U & this->__PVT__abs_b) 
                                     | (0x7fffffffU 
                                        & ((0x80000000U 
                                            & this->__PVT__mult2__DOT__mult)
                                            ? ((IData)(1U) 
                                               + (~ (IData)(
                                                            ((0x1800ULL 
                                                              * (QData)((IData)(
                                                                                (0x7fffffffU 
                                                                                & this->__PVT__mult2__DOT__multiplicand)))) 
                                                             >> 0xcU))))
                                            : (IData)(
                                                      ((0x1800ULL 
                                                        * (QData)((IData)(
                                                                          (0x7fffffffU 
                                                                           & this->__PVT__mult2__DOT__multiplicand)))) 
                                                       >> 0xcU)))));
    this->__PVT__mult3__DOT__mult = ((0x80000000U & this->__PVT__abs_b) 
                                     | (0x7fffffffU 
                                        & ((0x80000000U 
                                            & this->__PVT__mult3__DOT__mult)
                                            ? ((IData)(1U) 
                                               + (~ (IData)(
                                                            ((0xab8ULL 
                                                              * (QData)((IData)(
                                                                                (0x7fffffffU 
                                                                                & this->__PVT__mult3__DOT__multiplicand)))) 
                                                             >> 0xcU))))
                                            : (IData)(
                                                      ((0xab8ULL 
                                                        * (QData)((IData)(
                                                                          (0x7fffffffU 
                                                                           & this->__PVT__mult3__DOT__multiplicand)))) 
                                                       >> 0xcU)))));
    this->__PVT__mult4__DOT__mult = ((0x80000000U & this->__PVT__abs_b) 
                                     | (0x7fffffffU 
                                        & ((0x80000000U 
                                            & this->__PVT__mult4__DOT__mult)
                                            ? ((IData)(1U) 
                                               + (~ (IData)(
                                                            (0xfffffffffffffULL 
                                                             & ((QData)((IData)(
                                                                                (0x7fffffffU 
                                                                                & this->__PVT__mult4__DOT__multiplicand))) 
                                                                >> 1U)))))
                                            : (IData)(
                                                      (0xfffffffffffffULL 
                                                       & ((QData)((IData)(
                                                                          (0x7fffffffU 
                                                                           & this->__PVT__mult4__DOT__multiplicand))) 
                                                          >> 1U))))));
}

VL_INLINE_OPT void Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__div1__176(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__div1__176\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__abs_a = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__dxu)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__dxu 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__dxu))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__dxu);
    this->__PVT__abs_b = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__du)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__du 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__du))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__du);
    if ((0x80000000U & this->__PVT__abs_b)) {
        this->__PVT__mult1__DOT__multiplicand = ((0x80000000U 
                                                  & ((~ 
                                                      (this->__PVT__abs_b 
                                                       >> 0x1fU)) 
                                                     << 0x1fU)) 
                                                 | (0x7fffffffU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       (~ this->__PVT__abs_b))));
        this->__PVT__mult2__DOT__multiplicand = ((0x80000000U 
                                                  & ((~ 
                                                      (this->__PVT__abs_b 
                                                       >> 0x1fU)) 
                                                     << 0x1fU)) 
                                                 | (0x7fffffffU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       (~ this->__PVT__abs_b))));
        this->__PVT__mult3__DOT__multiplicand = ((0x80000000U 
                                                  & ((~ 
                                                      (this->__PVT__abs_b 
                                                       >> 0x1fU)) 
                                                     << 0x1fU)) 
                                                 | (0x7fffffffU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       (~ this->__PVT__abs_b))));
        this->__PVT__mult4__DOT__multiplicand = ((0x80000000U 
                                                  & ((~ 
                                                      (this->__PVT__abs_b 
                                                       >> 0x1fU)) 
                                                     << 0x1fU)) 
                                                 | (0x7fffffffU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       (~ this->__PVT__abs_b))));
    } else {
        this->__PVT__mult1__DOT__multiplicand = this->__PVT__abs_b;
        this->__PVT__mult2__DOT__multiplicand = this->__PVT__abs_b;
        this->__PVT__mult3__DOT__multiplicand = this->__PVT__abs_b;
        this->__PVT__mult4__DOT__multiplicand = this->__PVT__abs_b;
    }
}

VL_INLINE_OPT void Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__div1__290(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__div1__290\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->out = ((0x80000000U & (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__dxu 
                                 ^ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__du))
                  ? ((this->__PVT__abs_a > this->__PVT__b_2)
                      ? 0xffffd000U : ((this->__PVT__abs_a 
                                        > this->__PVT__b_15)
                                        ? 0xffffe400U
                                        : ((this->__PVT__abs_a 
                                            > this->__PVT__b_67)
                                            ? 0xfffff000U
                                            : ((this->__PVT__abs_a 
                                                > this->__PVT__b_05)
                                                ? 0xfffff6b8U
                                                : 0xfffffa8fU))))
                  : ((this->__PVT__abs_a > this->__PVT__b_2)
                      ? 0x3000U : ((this->__PVT__abs_a 
                                    > this->__PVT__b_15)
                                    ? 0x1c00U : ((this->__PVT__abs_a 
                                                  > this->__PVT__b_67)
                                                  ? 0x1000U
                                                  : 
                                                 ((this->__PVT__abs_a 
                                                   > this->__PVT__b_05)
                                                   ? 0x948U
                                                   : 0x571U)))));
    this->__PVT__mult1__DOT__mult = ((0x80000000U & this->__PVT__abs_b) 
                                     | (0x7fffffffU 
                                        & ((0x80000000U 
                                            & this->__PVT__mult1__DOT__mult)
                                            ? ((IData)(1U) 
                                               + (~ (IData)(
                                                            (0xffffffffffffeULL 
                                                             & ((QData)((IData)(
                                                                                (0x7fffffffU 
                                                                                & this->__PVT__mult1__DOT__multiplicand))) 
                                                                << 1U)))))
                                            : (IData)(
                                                      (0xffffffffffffeULL 
                                                       & ((QData)((IData)(
                                                                          (0x7fffffffU 
                                                                           & this->__PVT__mult1__DOT__multiplicand))) 
                                                          << 1U))))));
    this->__PVT__mult2__DOT__mult = ((0x80000000U & this->__PVT__abs_b) 
                                     | (0x7fffffffU 
                                        & ((0x80000000U 
                                            & this->__PVT__mult2__DOT__mult)
                                            ? ((IData)(1U) 
                                               + (~ (IData)(
                                                            ((0x1800ULL 
                                                              * (QData)((IData)(
                                                                                (0x7fffffffU 
                                                                                & this->__PVT__mult2__DOT__multiplicand)))) 
                                                             >> 0xcU))))
                                            : (IData)(
                                                      ((0x1800ULL 
                                                        * (QData)((IData)(
                                                                          (0x7fffffffU 
                                                                           & this->__PVT__mult2__DOT__multiplicand)))) 
                                                       >> 0xcU)))));
    this->__PVT__mult3__DOT__mult = ((0x80000000U & this->__PVT__abs_b) 
                                     | (0x7fffffffU 
                                        & ((0x80000000U 
                                            & this->__PVT__mult3__DOT__mult)
                                            ? ((IData)(1U) 
                                               + (~ (IData)(
                                                            ((0xab8ULL 
                                                              * (QData)((IData)(
                                                                                (0x7fffffffU 
                                                                                & this->__PVT__mult3__DOT__multiplicand)))) 
                                                             >> 0xcU))))
                                            : (IData)(
                                                      ((0xab8ULL 
                                                        * (QData)((IData)(
                                                                          (0x7fffffffU 
                                                                           & this->__PVT__mult3__DOT__multiplicand)))) 
                                                       >> 0xcU)))));
    this->__PVT__mult4__DOT__mult = ((0x80000000U & this->__PVT__abs_b) 
                                     | (0x7fffffffU 
                                        & ((0x80000000U 
                                            & this->__PVT__mult4__DOT__mult)
                                            ? ((IData)(1U) 
                                               + (~ (IData)(
                                                            (0xfffffffffffffULL 
                                                             & ((QData)((IData)(
                                                                                (0x7fffffffU 
                                                                                & this->__PVT__mult4__DOT__multiplicand))) 
                                                                >> 1U)))))
                                            : (IData)(
                                                      (0xfffffffffffffULL 
                                                       & ((QData)((IData)(
                                                                          (0x7fffffffU 
                                                                           & this->__PVT__mult4__DOT__multiplicand))) 
                                                          >> 1U))))));
}

VL_INLINE_OPT void Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__div2__164(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__div2__164\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__abs_a = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__dyu)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__dyu 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__dyu))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__dyu);
    this->__PVT__abs_b = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__du)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__du 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__du))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__du);
    if ((0x80000000U & this->__PVT__abs_b)) {
        this->__PVT__mult1__DOT__multiplicand = ((0x80000000U 
                                                  & ((~ 
                                                      (this->__PVT__abs_b 
                                                       >> 0x1fU)) 
                                                     << 0x1fU)) 
                                                 | (0x7fffffffU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       (~ this->__PVT__abs_b))));
        this->__PVT__mult2__DOT__multiplicand = ((0x80000000U 
                                                  & ((~ 
                                                      (this->__PVT__abs_b 
                                                       >> 0x1fU)) 
                                                     << 0x1fU)) 
                                                 | (0x7fffffffU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       (~ this->__PVT__abs_b))));
        this->__PVT__mult3__DOT__multiplicand = ((0x80000000U 
                                                  & ((~ 
                                                      (this->__PVT__abs_b 
                                                       >> 0x1fU)) 
                                                     << 0x1fU)) 
                                                 | (0x7fffffffU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       (~ this->__PVT__abs_b))));
        this->__PVT__mult4__DOT__multiplicand = ((0x80000000U 
                                                  & ((~ 
                                                      (this->__PVT__abs_b 
                                                       >> 0x1fU)) 
                                                     << 0x1fU)) 
                                                 | (0x7fffffffU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       (~ this->__PVT__abs_b))));
    } else {
        this->__PVT__mult1__DOT__multiplicand = this->__PVT__abs_b;
        this->__PVT__mult2__DOT__multiplicand = this->__PVT__abs_b;
        this->__PVT__mult3__DOT__multiplicand = this->__PVT__abs_b;
        this->__PVT__mult4__DOT__multiplicand = this->__PVT__abs_b;
    }
}

VL_INLINE_OPT void Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__div2__278(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__div2__278\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->out = ((0x80000000U & (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__dyu 
                                 ^ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__du))
                  ? ((this->__PVT__abs_a > this->__PVT__b_2)
                      ? 0xffffd000U : ((this->__PVT__abs_a 
                                        > this->__PVT__b_15)
                                        ? 0xffffe400U
                                        : ((this->__PVT__abs_a 
                                            > this->__PVT__b_67)
                                            ? 0xfffff000U
                                            : ((this->__PVT__abs_a 
                                                > this->__PVT__b_05)
                                                ? 0xfffff6b8U
                                                : 0xfffffa8fU))))
                  : ((this->__PVT__abs_a > this->__PVT__b_2)
                      ? 0x3000U : ((this->__PVT__abs_a 
                                    > this->__PVT__b_15)
                                    ? 0x1c00U : ((this->__PVT__abs_a 
                                                  > this->__PVT__b_67)
                                                  ? 0x1000U
                                                  : 
                                                 ((this->__PVT__abs_a 
                                                   > this->__PVT__b_05)
                                                   ? 0x948U
                                                   : 0x571U)))));
    this->__PVT__mult1__DOT__mult = ((0x80000000U & this->__PVT__abs_b) 
                                     | (0x7fffffffU 
                                        & ((0x80000000U 
                                            & this->__PVT__mult1__DOT__mult)
                                            ? ((IData)(1U) 
                                               + (~ (IData)(
                                                            (0xffffffffffffeULL 
                                                             & ((QData)((IData)(
                                                                                (0x7fffffffU 
                                                                                & this->__PVT__mult1__DOT__multiplicand))) 
                                                                << 1U)))))
                                            : (IData)(
                                                      (0xffffffffffffeULL 
                                                       & ((QData)((IData)(
                                                                          (0x7fffffffU 
                                                                           & this->__PVT__mult1__DOT__multiplicand))) 
                                                          << 1U))))));
    this->__PVT__mult2__DOT__mult = ((0x80000000U & this->__PVT__abs_b) 
                                     | (0x7fffffffU 
                                        & ((0x80000000U 
                                            & this->__PVT__mult2__DOT__mult)
                                            ? ((IData)(1U) 
                                               + (~ (IData)(
                                                            ((0x1800ULL 
                                                              * (QData)((IData)(
                                                                                (0x7fffffffU 
                                                                                & this->__PVT__mult2__DOT__multiplicand)))) 
                                                             >> 0xcU))))
                                            : (IData)(
                                                      ((0x1800ULL 
                                                        * (QData)((IData)(
                                                                          (0x7fffffffU 
                                                                           & this->__PVT__mult2__DOT__multiplicand)))) 
                                                       >> 0xcU)))));
    this->__PVT__mult3__DOT__mult = ((0x80000000U & this->__PVT__abs_b) 
                                     | (0x7fffffffU 
                                        & ((0x80000000U 
                                            & this->__PVT__mult3__DOT__mult)
                                            ? ((IData)(1U) 
                                               + (~ (IData)(
                                                            ((0xab8ULL 
                                                              * (QData)((IData)(
                                                                                (0x7fffffffU 
                                                                                & this->__PVT__mult3__DOT__multiplicand)))) 
                                                             >> 0xcU))))
                                            : (IData)(
                                                      ((0xab8ULL 
                                                        * (QData)((IData)(
                                                                          (0x7fffffffU 
                                                                           & this->__PVT__mult3__DOT__multiplicand)))) 
                                                       >> 0xcU)))));
    this->__PVT__mult4__DOT__mult = ((0x80000000U & this->__PVT__abs_b) 
                                     | (0x7fffffffU 
                                        & ((0x80000000U 
                                            & this->__PVT__mult4__DOT__mult)
                                            ? ((IData)(1U) 
                                               + (~ (IData)(
                                                            (0xfffffffffffffULL 
                                                             & ((QData)((IData)(
                                                                                (0x7fffffffU 
                                                                                & this->__PVT__mult4__DOT__multiplicand))) 
                                                                >> 1U)))))
                                            : (IData)(
                                                      (0xfffffffffffffULL 
                                                       & ((QData)((IData)(
                                                                          (0x7fffffffU 
                                                                           & this->__PVT__mult4__DOT__multiplicand))) 
                                                          >> 1U))))));
}

VL_INLINE_OPT void Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__div3__225(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__div3__225\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__abs_a = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__dxd)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__dxd 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__dxd))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__dxd);
    this->__PVT__abs_b = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__dd)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__dd 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__dd))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__dd);
    if ((0x80000000U & this->__PVT__abs_b)) {
        this->__PVT__mult1__DOT__multiplicand = ((0x80000000U 
                                                  & ((~ 
                                                      (this->__PVT__abs_b 
                                                       >> 0x1fU)) 
                                                     << 0x1fU)) 
                                                 | (0x7fffffffU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       (~ this->__PVT__abs_b))));
        this->__PVT__mult2__DOT__multiplicand = ((0x80000000U 
                                                  & ((~ 
                                                      (this->__PVT__abs_b 
                                                       >> 0x1fU)) 
                                                     << 0x1fU)) 
                                                 | (0x7fffffffU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       (~ this->__PVT__abs_b))));
        this->__PVT__mult3__DOT__multiplicand = ((0x80000000U 
                                                  & ((~ 
                                                      (this->__PVT__abs_b 
                                                       >> 0x1fU)) 
                                                     << 0x1fU)) 
                                                 | (0x7fffffffU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       (~ this->__PVT__abs_b))));
        this->__PVT__mult4__DOT__multiplicand = ((0x80000000U 
                                                  & ((~ 
                                                      (this->__PVT__abs_b 
                                                       >> 0x1fU)) 
                                                     << 0x1fU)) 
                                                 | (0x7fffffffU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       (~ this->__PVT__abs_b))));
    } else {
        this->__PVT__mult1__DOT__multiplicand = this->__PVT__abs_b;
        this->__PVT__mult2__DOT__multiplicand = this->__PVT__abs_b;
        this->__PVT__mult3__DOT__multiplicand = this->__PVT__abs_b;
        this->__PVT__mult4__DOT__multiplicand = this->__PVT__abs_b;
    }
}

VL_INLINE_OPT void Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__div3__339(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__div3__339\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->out = ((0x80000000U & (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__dxd 
                                 ^ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__dd))
                  ? ((this->__PVT__abs_a > this->__PVT__b_2)
                      ? 0xffffd000U : ((this->__PVT__abs_a 
                                        > this->__PVT__b_15)
                                        ? 0xffffe400U
                                        : ((this->__PVT__abs_a 
                                            > this->__PVT__b_67)
                                            ? 0xfffff000U
                                            : ((this->__PVT__abs_a 
                                                > this->__PVT__b_05)
                                                ? 0xfffff6b8U
                                                : 0xfffffa8fU))))
                  : ((this->__PVT__abs_a > this->__PVT__b_2)
                      ? 0x3000U : ((this->__PVT__abs_a 
                                    > this->__PVT__b_15)
                                    ? 0x1c00U : ((this->__PVT__abs_a 
                                                  > this->__PVT__b_67)
                                                  ? 0x1000U
                                                  : 
                                                 ((this->__PVT__abs_a 
                                                   > this->__PVT__b_05)
                                                   ? 0x948U
                                                   : 0x571U)))));
    this->__PVT__mult1__DOT__mult = ((0x80000000U & this->__PVT__abs_b) 
                                     | (0x7fffffffU 
                                        & ((0x80000000U 
                                            & this->__PVT__mult1__DOT__mult)
                                            ? ((IData)(1U) 
                                               + (~ (IData)(
                                                            (0xffffffffffffeULL 
                                                             & ((QData)((IData)(
                                                                                (0x7fffffffU 
                                                                                & this->__PVT__mult1__DOT__multiplicand))) 
                                                                << 1U)))))
                                            : (IData)(
                                                      (0xffffffffffffeULL 
                                                       & ((QData)((IData)(
                                                                          (0x7fffffffU 
                                                                           & this->__PVT__mult1__DOT__multiplicand))) 
                                                          << 1U))))));
    this->__PVT__mult2__DOT__mult = ((0x80000000U & this->__PVT__abs_b) 
                                     | (0x7fffffffU 
                                        & ((0x80000000U 
                                            & this->__PVT__mult2__DOT__mult)
                                            ? ((IData)(1U) 
                                               + (~ (IData)(
                                                            ((0x1800ULL 
                                                              * (QData)((IData)(
                                                                                (0x7fffffffU 
                                                                                & this->__PVT__mult2__DOT__multiplicand)))) 
                                                             >> 0xcU))))
                                            : (IData)(
                                                      ((0x1800ULL 
                                                        * (QData)((IData)(
                                                                          (0x7fffffffU 
                                                                           & this->__PVT__mult2__DOT__multiplicand)))) 
                                                       >> 0xcU)))));
    this->__PVT__mult3__DOT__mult = ((0x80000000U & this->__PVT__abs_b) 
                                     | (0x7fffffffU 
                                        & ((0x80000000U 
                                            & this->__PVT__mult3__DOT__mult)
                                            ? ((IData)(1U) 
                                               + (~ (IData)(
                                                            ((0xab8ULL 
                                                              * (QData)((IData)(
                                                                                (0x7fffffffU 
                                                                                & this->__PVT__mult3__DOT__multiplicand)))) 
                                                             >> 0xcU))))
                                            : (IData)(
                                                      ((0xab8ULL 
                                                        * (QData)((IData)(
                                                                          (0x7fffffffU 
                                                                           & this->__PVT__mult3__DOT__multiplicand)))) 
                                                       >> 0xcU)))));
    this->__PVT__mult4__DOT__mult = ((0x80000000U & this->__PVT__abs_b) 
                                     | (0x7fffffffU 
                                        & ((0x80000000U 
                                            & this->__PVT__mult4__DOT__mult)
                                            ? ((IData)(1U) 
                                               + (~ (IData)(
                                                            (0xfffffffffffffULL 
                                                             & ((QData)((IData)(
                                                                                (0x7fffffffU 
                                                                                & this->__PVT__mult4__DOT__multiplicand))) 
                                                                >> 1U)))))
                                            : (IData)(
                                                      (0xfffffffffffffULL 
                                                       & ((QData)((IData)(
                                                                          (0x7fffffffU 
                                                                           & this->__PVT__mult4__DOT__multiplicand))) 
                                                          >> 1U))))));
}

VL_INLINE_OPT void Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__div4__218(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__div4__218\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__abs_a = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__dyd)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__dyd 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__dyd))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__dyd);
    this->__PVT__abs_b = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__dd)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__dd 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__dd))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__dd);
    if ((0x80000000U & this->__PVT__abs_b)) {
        this->__PVT__mult1__DOT__multiplicand = ((0x80000000U 
                                                  & ((~ 
                                                      (this->__PVT__abs_b 
                                                       >> 0x1fU)) 
                                                     << 0x1fU)) 
                                                 | (0x7fffffffU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       (~ this->__PVT__abs_b))));
        this->__PVT__mult2__DOT__multiplicand = ((0x80000000U 
                                                  & ((~ 
                                                      (this->__PVT__abs_b 
                                                       >> 0x1fU)) 
                                                     << 0x1fU)) 
                                                 | (0x7fffffffU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       (~ this->__PVT__abs_b))));
        this->__PVT__mult3__DOT__multiplicand = ((0x80000000U 
                                                  & ((~ 
                                                      (this->__PVT__abs_b 
                                                       >> 0x1fU)) 
                                                     << 0x1fU)) 
                                                 | (0x7fffffffU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       (~ this->__PVT__abs_b))));
        this->__PVT__mult4__DOT__multiplicand = ((0x80000000U 
                                                  & ((~ 
                                                      (this->__PVT__abs_b 
                                                       >> 0x1fU)) 
                                                     << 0x1fU)) 
                                                 | (0x7fffffffU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       (~ this->__PVT__abs_b))));
    } else {
        this->__PVT__mult1__DOT__multiplicand = this->__PVT__abs_b;
        this->__PVT__mult2__DOT__multiplicand = this->__PVT__abs_b;
        this->__PVT__mult3__DOT__multiplicand = this->__PVT__abs_b;
        this->__PVT__mult4__DOT__multiplicand = this->__PVT__abs_b;
    }
}

VL_INLINE_OPT void Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__div4__332(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__div4__332\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->out = ((0x80000000U & (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__dyd 
                                 ^ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__dd))
                  ? ((this->__PVT__abs_a > this->__PVT__b_2)
                      ? 0xffffd000U : ((this->__PVT__abs_a 
                                        > this->__PVT__b_15)
                                        ? 0xffffe400U
                                        : ((this->__PVT__abs_a 
                                            > this->__PVT__b_67)
                                            ? 0xfffff000U
                                            : ((this->__PVT__abs_a 
                                                > this->__PVT__b_05)
                                                ? 0xfffff6b8U
                                                : 0xfffffa8fU))))
                  : ((this->__PVT__abs_a > this->__PVT__b_2)
                      ? 0x3000U : ((this->__PVT__abs_a 
                                    > this->__PVT__b_15)
                                    ? 0x1c00U : ((this->__PVT__abs_a 
                                                  > this->__PVT__b_67)
                                                  ? 0x1000U
                                                  : 
                                                 ((this->__PVT__abs_a 
                                                   > this->__PVT__b_05)
                                                   ? 0x948U
                                                   : 0x571U)))));
    this->__PVT__mult1__DOT__mult = ((0x80000000U & this->__PVT__abs_b) 
                                     | (0x7fffffffU 
                                        & ((0x80000000U 
                                            & this->__PVT__mult1__DOT__mult)
                                            ? ((IData)(1U) 
                                               + (~ (IData)(
                                                            (0xffffffffffffeULL 
                                                             & ((QData)((IData)(
                                                                                (0x7fffffffU 
                                                                                & this->__PVT__mult1__DOT__multiplicand))) 
                                                                << 1U)))))
                                            : (IData)(
                                                      (0xffffffffffffeULL 
                                                       & ((QData)((IData)(
                                                                          (0x7fffffffU 
                                                                           & this->__PVT__mult1__DOT__multiplicand))) 
                                                          << 1U))))));
    this->__PVT__mult2__DOT__mult = ((0x80000000U & this->__PVT__abs_b) 
                                     | (0x7fffffffU 
                                        & ((0x80000000U 
                                            & this->__PVT__mult2__DOT__mult)
                                            ? ((IData)(1U) 
                                               + (~ (IData)(
                                                            ((0x1800ULL 
                                                              * (QData)((IData)(
                                                                                (0x7fffffffU 
                                                                                & this->__PVT__mult2__DOT__multiplicand)))) 
                                                             >> 0xcU))))
                                            : (IData)(
                                                      ((0x1800ULL 
                                                        * (QData)((IData)(
                                                                          (0x7fffffffU 
                                                                           & this->__PVT__mult2__DOT__multiplicand)))) 
                                                       >> 0xcU)))));
    this->__PVT__mult3__DOT__mult = ((0x80000000U & this->__PVT__abs_b) 
                                     | (0x7fffffffU 
                                        & ((0x80000000U 
                                            & this->__PVT__mult3__DOT__mult)
                                            ? ((IData)(1U) 
                                               + (~ (IData)(
                                                            ((0xab8ULL 
                                                              * (QData)((IData)(
                                                                                (0x7fffffffU 
                                                                                & this->__PVT__mult3__DOT__multiplicand)))) 
                                                             >> 0xcU))))
                                            : (IData)(
                                                      ((0xab8ULL 
                                                        * (QData)((IData)(
                                                                          (0x7fffffffU 
                                                                           & this->__PVT__mult3__DOT__multiplicand)))) 
                                                       >> 0xcU)))));
    this->__PVT__mult4__DOT__mult = ((0x80000000U & this->__PVT__abs_b) 
                                     | (0x7fffffffU 
                                        & ((0x80000000U 
                                            & this->__PVT__mult4__DOT__mult)
                                            ? ((IData)(1U) 
                                               + (~ (IData)(
                                                            (0xfffffffffffffULL 
                                                             & ((QData)((IData)(
                                                                                (0x7fffffffU 
                                                                                & this->__PVT__mult4__DOT__multiplicand))) 
                                                                >> 1U)))))
                                            : (IData)(
                                                      (0xfffffffffffffULL 
                                                       & ((QData)((IData)(
                                                                          (0x7fffffffU 
                                                                           & this->__PVT__mult4__DOT__multiplicand))) 
                                                          >> 1U))))));
}
