// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdisplay.h for the primary calling header

#include "Vdisplay_div.h"
#include "Vdisplay__Syms.h"

//==========

VL_CTOR_IMP(Vdisplay_div) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vdisplay_div::__Vconfigure(Vdisplay__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Vdisplay_div::~Vdisplay_div() {
}

void Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__div1__77(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__div1__77\n"); );
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

void Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__div2__78(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__div2__78\n"); );
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

void Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__div3__229(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__div3__229\n"); );
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

void Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__div4__230(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__div4__230\n"); );
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

void Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__div1__81(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__div1__81\n"); );
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

void Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__div2__82(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__div2__82\n"); );
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

void Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__div3__231(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__div3__231\n"); );
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

void Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__div4__232(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__div4__232\n"); );
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

void Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__div1__85(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__div1__85\n"); );
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

void Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__div2__86(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__div2__86\n"); );
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

void Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__div3__233(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__div3__233\n"); );
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

void Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__div4__234(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk1__DOT__genblk2__DOT__e__DOT__div4__234\n"); );
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

void Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__div1__89(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__div1__89\n"); );
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

void Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__div2__90(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__div2__90\n"); );
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

void Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__div3__235(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__div3__235\n"); );
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

void Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__div4__236(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__0__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__div4__236\n"); );
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

void Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__div1__93(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__div1__93\n"); );
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

void Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__div2__94(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__div2__94\n"); );
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

void Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__div3__243(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__div3__243\n"); );
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

void Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__div4__244(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__div4__244\n"); );
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

void Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div1__97(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div1__97\n"); );
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

void Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div2__98(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div2__98\n"); );
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

void Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div3__237(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div3__237\n"); );
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

void Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div4__238(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div4__238\n"); );
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

void Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div1__101(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div1__101\n"); );
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

void Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div2__102(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div2__102\n"); );
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

void Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div3__239(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div3__239\n"); );
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

void Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div4__240(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div4__240\n"); );
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

void Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div1__105(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div1__105\n"); );
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

void Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div2__106(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div2__106\n"); );
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

void Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div3__241(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div3__241\n"); );
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

void Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div4__242(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div4__242\n"); );
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

void Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__div1__109(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__div1__109\n"); );
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

void Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__div2__110(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__div2__110\n"); );
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

void Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__div3__245(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__div3__245\n"); );
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

void Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__div4__246(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__1__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__div4__246\n"); );
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

void Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__div1__113(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__div1__113\n"); );
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

void Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__div2__114(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__div2__114\n"); );
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

void Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__div3__253(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__div3__253\n"); );
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

void Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__div4__254(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__div4__254\n"); );
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

void Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div1__117(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div1__117\n"); );
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

void Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div2__118(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div2__118\n"); );
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

void Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div3__247(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div3__247\n"); );
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

void Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div4__248(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div4__248\n"); );
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

void Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div1__121(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div1__121\n"); );
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

void Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div2__122(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div2__122\n"); );
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

void Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div3__249(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div3__249\n"); );
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

void Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div4__250(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div4__250\n"); );
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

void Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div1__125(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div1__125\n"); );
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

void Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div2__126(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div2__126\n"); );
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

void Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div3__251(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div3__251\n"); );
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

void Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div4__252(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div4__252\n"); );
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

void Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__div1__129(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__div1__129\n"); );
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

void Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__div2__130(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__div2__130\n"); );
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
