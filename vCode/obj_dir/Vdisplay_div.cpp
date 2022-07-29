// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdisplay.h for the primary calling header

#include "Vdisplay_div.h"
#include "Vdisplay__Syms.h"

//==========

VL_INLINE_OPT void Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__div1__1(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__div1__1\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__b_2 = ((0x80000000U == this->__PVT__mult1__DOT__mult)
                         ? 0U : this->__PVT__mult1__DOT__mult);
    this->__PVT__b_15 = ((0x80000000U == this->__PVT__mult2__DOT__mult)
                          ? 0U : this->__PVT__mult2__DOT__mult);
    this->__PVT__b_67 = ((0x80000000U == this->__PVT__mult3__DOT__mult)
                          ? 0U : this->__PVT__mult3__DOT__mult);
    this->__PVT__b_05 = ((0x80000000U == this->__PVT__mult4__DOT__mult)
                          ? 0U : this->__PVT__mult4__DOT__mult);
}

VL_INLINE_OPT void Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__div1__157(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__div1__157\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__abs_a = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__dxu)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__dxu 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__dxu))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__dxu);
    this->__PVT__abs_b = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__du)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__du 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__du))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__du);
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

VL_INLINE_OPT void Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__div1__271(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__div1__271\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->out = ((0x80000000U & (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__dxu 
                                 ^ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__du))
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

VL_INLINE_OPT void Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__div2__153(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__div2__153\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__abs_a = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__dyu)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__dyu 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__dyu))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__dyu);
    this->__PVT__abs_b = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__du)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__du 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__du))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__du);
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

VL_INLINE_OPT void Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__div2__267(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__div2__267\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->out = ((0x80000000U & (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__dyu 
                                 ^ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__du))
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

VL_INLINE_OPT void Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__div3__188(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__div3__188\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__abs_a = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__dxd)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__dxd 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__dxd))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__dxd);
    this->__PVT__abs_b = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__dd)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__dd 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__dd))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__dd);
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

VL_INLINE_OPT void Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__div3__302(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__div3__302\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->out = ((0x80000000U & (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__dxd 
                                 ^ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__dd))
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

VL_INLINE_OPT void Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__div4__185(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__div4__185\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__abs_a = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__dyd)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__dyd 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__dyd))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__dyd);
    this->__PVT__abs_b = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__dd)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__dd 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__dd))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__dd);
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

VL_INLINE_OPT void Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__div4__299(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__div4__299\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->out = ((0x80000000U & (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__dyd 
                                 ^ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__dd))
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

VL_INLINE_OPT void Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__div1__158(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__div1__158\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__abs_a = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__dxu)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__dxu 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__dxu))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__dxu);
    this->__PVT__abs_b = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__du)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__du 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__du))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__du);
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

VL_INLINE_OPT void Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__div1__272(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__div1__272\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->out = ((0x80000000U & (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__dxu 
                                 ^ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__du))
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

VL_INLINE_OPT void Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__div2__154(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__div2__154\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__abs_a = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__dyu)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__dyu 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__dyu))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__dyu);
    this->__PVT__abs_b = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__du)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__du 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__du))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__du);
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

VL_INLINE_OPT void Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__div2__268(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__div2__268\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->out = ((0x80000000U & (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__dyu 
                                 ^ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__du))
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

VL_INLINE_OPT void Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__div3__189(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__div3__189\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__abs_a = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__dxd)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__dxd 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__dxd))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__dxd);
    this->__PVT__abs_b = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__dd)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__dd 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__dd))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__dd);
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

VL_INLINE_OPT void Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__div3__303(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__div3__303\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->out = ((0x80000000U & (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__dxd 
                                 ^ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__dd))
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

VL_INLINE_OPT void Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__div4__186(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__div4__186\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__abs_a = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__dyd)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__dyd 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__dyd))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__dyd);
    this->__PVT__abs_b = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__dd)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__dd 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__dd))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__dd);
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

VL_INLINE_OPT void Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__div4__300(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__div4__300\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->out = ((0x80000000U & (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__dyd 
                                 ^ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__dd))
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

VL_INLINE_OPT void Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__div1__159(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__div1__159\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__abs_a = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__dxu)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__dxu 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__dxu))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__dxu);
    this->__PVT__abs_b = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__du)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__du 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__du))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__du);
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

VL_INLINE_OPT void Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__div1__273(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__div1__273\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->out = ((0x80000000U & (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__dxu 
                                 ^ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__du))
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

VL_INLINE_OPT void Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__div2__155(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__div2__155\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__abs_a = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__dyu)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__dyu 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__dyu))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__dyu);
    this->__PVT__abs_b = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__du)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__du 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__du))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__du);
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

VL_INLINE_OPT void Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__div2__269(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__div2__269\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->out = ((0x80000000U & (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__dyu 
                                 ^ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__du))
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

VL_INLINE_OPT void Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__div3__190(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__div3__190\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__abs_a = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__dxd)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__dxd 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__dxd))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__dxd);
    this->__PVT__abs_b = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__dd)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__dd 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__dd))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__dd);
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

VL_INLINE_OPT void Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__div3__304(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__div3__304\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->out = ((0x80000000U & (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__dxd 
                                 ^ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__dd))
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

VL_INLINE_OPT void Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__div4__187(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__div4__187\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__abs_a = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__dyd)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__dyd 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__dyd))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__dyd);
    this->__PVT__abs_b = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__dd)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__dd 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__dd))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__dd);
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

VL_INLINE_OPT void Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__div4__301(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__div4__301\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->out = ((0x80000000U & (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__dyd 
                                 ^ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__dd))
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

VL_INLINE_OPT void Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__div1__160(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__div1__160\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__abs_a = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__dxu)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__dxu 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__dxu))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__dxu);
    this->__PVT__abs_b = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__du)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__du 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__du))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__du);
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

VL_INLINE_OPT void Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__div1__274(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__div1__274\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->out = ((0x80000000U & (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__dxu 
                                 ^ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__du))
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

VL_INLINE_OPT void Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__div2__156(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__div2__156\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__abs_a = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__dyu)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__dyu 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__dyu))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__dyu);
    this->__PVT__abs_b = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__du)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__du 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__du))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__du);
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

VL_INLINE_OPT void Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__div2__270(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__div2__270\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->out = ((0x80000000U & (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__dyu 
                                 ^ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__du))
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

VL_INLINE_OPT void Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__div3__222(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__div3__222\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__abs_a = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__dxd)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__dxd 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__dxd))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__dxd);
    this->__PVT__abs_b = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__dd)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__dd 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__dd))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__dd);
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

VL_INLINE_OPT void Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__div3__336(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__div3__336\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->out = ((0x80000000U & (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__dxd 
                                 ^ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__dd))
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

VL_INLINE_OPT void Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__div4__215(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__div4__215\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__abs_a = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__dyd)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__dyd 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__dyd))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__dyd);
    this->__PVT__abs_b = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__dd)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__dd 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__dd))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__dd);
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

VL_INLINE_OPT void Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__div4__329(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__div4__329\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->out = ((0x80000000U & (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__dyd 
                                 ^ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__dd))
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

VL_INLINE_OPT void Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__div1__212(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__div1__212\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__abs_a = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__dxu)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__dxu 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__dxu))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__dxu);
    this->__PVT__abs_b = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__du)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__du 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__du))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__du);
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

VL_INLINE_OPT void Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__div1__326(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__div1__326\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->out = ((0x80000000U & (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__dxu 
                                 ^ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__du))
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

VL_INLINE_OPT void Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__div2__209(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__div2__209\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__abs_a = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__dyu)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__dyu 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__dyu))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__dyu);
    this->__PVT__abs_b = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__du)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__du 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__du))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__du);
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

VL_INLINE_OPT void Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__div2__323(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__div2__323\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->out = ((0x80000000U & (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__dyu 
                                 ^ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__du))
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

VL_INLINE_OPT void Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__div3__226(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__div3__226\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__abs_a = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__dxd)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__dxd 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__dxd))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__dxd);
    this->__PVT__abs_b = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__dd)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__dd 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__dd))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__dd);
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

VL_INLINE_OPT void Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__div3__340(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__div3__340\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->out = ((0x80000000U & (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__dxd 
                                 ^ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__dd))
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

VL_INLINE_OPT void Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__div4__219(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__div4__219\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__abs_a = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__dyd)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__dyd 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__dyd))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__dyd);
    this->__PVT__abs_b = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__dd)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__dd 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__dd))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__dd);
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

VL_INLINE_OPT void Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__div4__333(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__div4__333\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->out = ((0x80000000U & (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__dyd 
                                 ^ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__dd))
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

VL_INLINE_OPT void Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div1__181(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div1__181\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__abs_a = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dxu)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dxu 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dxu))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dxu);
    this->__PVT__abs_b = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__du)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__du 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__du))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__du);
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

VL_INLINE_OPT void Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div1__295(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div1__295\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->out = ((0x80000000U & (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dxu 
                                 ^ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__du))
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

VL_INLINE_OPT void Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div2__169(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div2__169\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__abs_a = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dyu)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dyu 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dyu))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dyu);
    this->__PVT__abs_b = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__du)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__du 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__du))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__du);
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

VL_INLINE_OPT void Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div2__283(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div2__283\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->out = ((0x80000000U & (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dyu 
                                 ^ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__du))
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

VL_INLINE_OPT void Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div3__206(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div3__206\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__abs_a = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dxd)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dxd 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dxd))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dxd);
    this->__PVT__abs_b = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dd)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dd 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dd))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dd);
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

VL_INLINE_OPT void Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div3__320(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div3__320\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->out = ((0x80000000U & (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dxd 
                                 ^ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dd))
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

VL_INLINE_OPT void Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div4__197(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div4__197\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__abs_a = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dyd)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dyd 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dyd))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dyd);
    this->__PVT__abs_b = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dd)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dd 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dd))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dd);
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

VL_INLINE_OPT void Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div4__311(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div4__311\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->out = ((0x80000000U & (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dyd 
                                 ^ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dd))
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

VL_INLINE_OPT void Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div1__182(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div1__182\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__abs_a = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dxu)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dxu 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dxu))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dxu);
    this->__PVT__abs_b = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__du)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__du 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__du))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__du);
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

VL_INLINE_OPT void Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div1__296(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div1__296\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->out = ((0x80000000U & (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dxu 
                                 ^ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__du))
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

VL_INLINE_OPT void Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div2__170(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div2__170\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__abs_a = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dyu)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dyu 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dyu))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dyu);
    this->__PVT__abs_b = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__du)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__du 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__du))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__du);
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

VL_INLINE_OPT void Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div2__284(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div2__284\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->out = ((0x80000000U & (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dyu 
                                 ^ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__du))
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

VL_INLINE_OPT void Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div3__207(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div3__207\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__abs_a = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dxd)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dxd 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dxd))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dxd);
    this->__PVT__abs_b = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dd)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dd 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dd))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dd);
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

VL_INLINE_OPT void Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div3__321(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div3__321\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->out = ((0x80000000U & (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dxd 
                                 ^ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dd))
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

VL_INLINE_OPT void Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div4__198(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div4__198\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__abs_a = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dyd)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dyd 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dyd))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dyd);
    this->__PVT__abs_b = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dd)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dd 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dd))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dd);
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

VL_INLINE_OPT void Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div4__312(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div4__312\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->out = ((0x80000000U & (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dyd 
                                 ^ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dd))
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

VL_INLINE_OPT void Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div1__183(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div1__183\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__abs_a = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dxu)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dxu 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dxu))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dxu);
    this->__PVT__abs_b = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__du)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__du 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__du))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__du);
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

VL_INLINE_OPT void Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div1__297(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div1__297\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->out = ((0x80000000U & (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dxu 
                                 ^ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__du))
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

VL_INLINE_OPT void Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div2__171(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div2__171\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__abs_a = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dyu)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dyu 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dyu))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dyu);
    this->__PVT__abs_b = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__du)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__du 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__du))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__du);
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

VL_INLINE_OPT void Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div2__285(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div2__285\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->out = ((0x80000000U & (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dyu 
                                 ^ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__du))
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

VL_INLINE_OPT void Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div3__208(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div3__208\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__abs_a = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dxd)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dxd 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dxd))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dxd);
    this->__PVT__abs_b = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dd)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dd 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dd))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dd);
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

VL_INLINE_OPT void Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div3__322(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div3__322\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->out = ((0x80000000U & (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dxd 
                                 ^ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dd))
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

VL_INLINE_OPT void Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div4__199(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div4__199\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__abs_a = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dyd)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dyd 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dyd))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dyd);
    this->__PVT__abs_b = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dd)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dd 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dd))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dd);
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

VL_INLINE_OPT void Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div4__313(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div4__313\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->out = ((0x80000000U & (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dyd 
                                 ^ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dd))
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

VL_INLINE_OPT void Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__div1__184(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__div1__184\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__abs_a = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__dxu)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__dxu 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__dxu))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__dxu);
    this->__PVT__abs_b = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__du)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__du 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__du))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__du);
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

VL_INLINE_OPT void Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__div1__298(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__div1__298\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->out = ((0x80000000U & (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__dxu 
                                 ^ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__du))
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

VL_INLINE_OPT void Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__div2__172(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__div2__172\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__abs_a = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__dyu)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__dyu 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__dyu))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__dyu);
    this->__PVT__abs_b = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__du)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__du 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__du))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__du);
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

VL_INLINE_OPT void Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__div2__286(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__div2__286\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->out = ((0x80000000U & (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__dyu 
                                 ^ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__du))
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

VL_INLINE_OPT void Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__div3__223(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__div3__223\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__abs_a = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__dxd)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__dxd 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__dxd))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__dxd);
    this->__PVT__abs_b = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__dd)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__dd 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__dd))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__dd);
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

VL_INLINE_OPT void Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__div3__337(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__div3__337\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->out = ((0x80000000U & (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__dxd 
                                 ^ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__dd))
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

VL_INLINE_OPT void Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__div4__216(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__div4__216\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__abs_a = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__dyd)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__dyd 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__dyd))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__dyd);
    this->__PVT__abs_b = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__dd)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__dd 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__dd))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__dd);
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

VL_INLINE_OPT void Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__div4__330(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__div4__330\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->out = ((0x80000000U & (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__dyd 
                                 ^ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__dd))
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

VL_INLINE_OPT void Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__div1__213(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__div1__213\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__abs_a = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__dxu)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__dxu 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__dxu))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__dxu);
    this->__PVT__abs_b = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__du)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__du 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__du))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__du);
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

VL_INLINE_OPT void Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__div1__327(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__div1__327\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->out = ((0x80000000U & (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__dxu 
                                 ^ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__du))
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

VL_INLINE_OPT void Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__div2__210(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__div2__210\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__abs_a = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__dyu)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__dyu 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__dyu))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__dyu);
    this->__PVT__abs_b = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__du)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__du 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__du))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__du);
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

VL_INLINE_OPT void Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__div2__324(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__div2__324\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->out = ((0x80000000U & (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__dyu 
                                 ^ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__du))
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

VL_INLINE_OPT void Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__div3__227(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__div3__227\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__abs_a = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__dxd)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__dxd 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__dxd))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__dxd);
    this->__PVT__abs_b = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__dd)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__dd 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__dd))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__dd);
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

VL_INLINE_OPT void Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__div3__341(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__div3__341\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->out = ((0x80000000U & (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__dxd 
                                 ^ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__dd))
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

VL_INLINE_OPT void Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__div4__220(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__div4__220\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__abs_a = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__dyd)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__dyd 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__dyd))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__dyd);
    this->__PVT__abs_b = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__dd)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__dd 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__dd))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__dd);
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

VL_INLINE_OPT void Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__div4__334(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__div4__334\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->out = ((0x80000000U & (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__dyd 
                                 ^ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__dd))
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

VL_INLINE_OPT void Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div1__177(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div1__177\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__abs_a = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dxu)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dxu 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dxu))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dxu);
    this->__PVT__abs_b = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__du)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__du 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__du))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__du);
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

VL_INLINE_OPT void Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div1__291(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div1__291\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->out = ((0x80000000U & (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dxu 
                                 ^ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__du))
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

VL_INLINE_OPT void Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div2__165(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div2__165\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__abs_a = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dyu)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dyu 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dyu))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dyu);
    this->__PVT__abs_b = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__du)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__du 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__du))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__du);
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

VL_INLINE_OPT void Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div2__279(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div2__279\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->out = ((0x80000000U & (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dyu 
                                 ^ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__du))
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

VL_INLINE_OPT void Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div3__203(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div3__203\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__abs_a = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dxd)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dxd 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dxd))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dxd);
    this->__PVT__abs_b = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dd)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dd 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dd))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dd);
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

VL_INLINE_OPT void Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div3__317(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div3__317\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->out = ((0x80000000U & (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dxd 
                                 ^ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dd))
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

VL_INLINE_OPT void Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div4__194(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div4__194\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__abs_a = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dyd)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dyd 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dyd))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dyd);
    this->__PVT__abs_b = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dd)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dd 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dd))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dd);
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

VL_INLINE_OPT void Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div4__308(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div4__308\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->out = ((0x80000000U & (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dyd 
                                 ^ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dd))
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

VL_INLINE_OPT void Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div1__178(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div1__178\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__abs_a = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dxu)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dxu 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dxu))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dxu);
    this->__PVT__abs_b = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__du)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__du 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__du))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__du);
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

VL_INLINE_OPT void Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div1__292(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div1__292\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->out = ((0x80000000U & (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dxu 
                                 ^ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__du))
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

VL_INLINE_OPT void Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div2__166(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div2__166\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__abs_a = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dyu)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dyu 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dyu))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dyu);
    this->__PVT__abs_b = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__du)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__du 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__du))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__du);
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

VL_INLINE_OPT void Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div2__280(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div2__280\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->out = ((0x80000000U & (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dyu 
                                 ^ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__du))
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

VL_INLINE_OPT void Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div3__204(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div3__204\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__abs_a = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dxd)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dxd 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dxd))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dxd);
    this->__PVT__abs_b = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dd)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dd 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dd))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dd);
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

VL_INLINE_OPT void Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div3__318(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div3__318\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->out = ((0x80000000U & (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dxd 
                                 ^ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dd))
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

VL_INLINE_OPT void Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div4__195(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div4__195\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__abs_a = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dyd)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dyd 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dyd))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dyd);
    this->__PVT__abs_b = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dd)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dd 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dd))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dd);
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

VL_INLINE_OPT void Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div4__309(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div4__309\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->out = ((0x80000000U & (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dyd 
                                 ^ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dd))
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

VL_INLINE_OPT void Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div1__179(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div1__179\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__abs_a = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dxu)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dxu 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dxu))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dxu);
    this->__PVT__abs_b = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__du)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__du 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__du))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__du);
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

VL_INLINE_OPT void Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div1__293(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div1__293\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->out = ((0x80000000U & (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dxu 
                                 ^ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__du))
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

VL_INLINE_OPT void Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div2__167(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div2__167\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__abs_a = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dyu)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dyu 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dyu))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dyu);
    this->__PVT__abs_b = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__du)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__du 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__du))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__du);
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

VL_INLINE_OPT void Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div2__281(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div2__281\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->out = ((0x80000000U & (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dyu 
                                 ^ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__du))
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

VL_INLINE_OPT void Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div3__205(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div3__205\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__abs_a = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dxd)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dxd 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dxd))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dxd);
    this->__PVT__abs_b = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dd)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dd 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dd))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dd);
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

VL_INLINE_OPT void Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div3__319(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div3__319\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->out = ((0x80000000U & (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dxd 
                                 ^ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dd))
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

VL_INLINE_OPT void Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div4__196(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div4__196\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__abs_a = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dyd)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dyd 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dyd))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dyd);
    this->__PVT__abs_b = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dd)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dd 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dd))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dd);
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

VL_INLINE_OPT void Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div4__310(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div4__310\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->out = ((0x80000000U & (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dyd 
                                 ^ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__dd))
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

VL_INLINE_OPT void Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__div1__180(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__div1__180\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__abs_a = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__dxu)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__dxu 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__dxu))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__dxu);
    this->__PVT__abs_b = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__du)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__du 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__du))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__du);
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

VL_INLINE_OPT void Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__div1__294(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__div1__294\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->out = ((0x80000000U & (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__dxu 
                                 ^ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__du))
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

VL_INLINE_OPT void Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__div2__168(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__div2__168\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__abs_a = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__dyu)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__dyu 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__dyu))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__dyu);
    this->__PVT__abs_b = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__du)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__du 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__du))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__du);
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

VL_INLINE_OPT void Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__div2__282(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__div2__282\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->out = ((0x80000000U & (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__dyu 
                                 ^ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__du))
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

VL_INLINE_OPT void Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__div3__224(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__div3__224\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__abs_a = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__dxd)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__dxd 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__dxd))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__dxd);
    this->__PVT__abs_b = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__dd)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__dd 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__dd))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__dd);
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

VL_INLINE_OPT void Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__div3__338(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__div3__338\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->out = ((0x80000000U & (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__dxd 
                                 ^ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__dd))
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

VL_INLINE_OPT void Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__div4__217(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_sequent__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__div4__217\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__abs_a = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__dyd)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__dyd 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__dyd))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__dyd);
    this->__PVT__abs_b = ((0x80000000U & vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__dd)
                           ? ((0x80000000U & ((~ (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__dd 
                                                  >> 0x1fU)) 
                                              << 0x1fU)) 
                              | (0x7fffffffU & ((IData)(1U) 
                                                + (~ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__dd))))
                           : vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__dd);
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

VL_INLINE_OPT void Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__div4__331(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_combo__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__div4__331\n"); );
    Vdisplay* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->out = ((0x80000000U & (vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__dyd 
                                 ^ vlTOPp->display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__dd))
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
