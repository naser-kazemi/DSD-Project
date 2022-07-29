// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdisplay.h for the primary calling header

#include "Vdisplay_div.h"
#include "Vdisplay__Syms.h"

void Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__div3__255(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__div3__255\n"); );
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

void Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__div4__256(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__2__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__div4__256\n"); );
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

void Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__div1__133(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__div1__133\n"); );
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

void Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__div2__134(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__div2__134\n"); );
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

void Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__div3__263(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__div3__263\n"); );
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

void Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__div4__264(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__0__KET____DOT__genblk2__DOT__genblk1__DOT__e__DOT__div4__264\n"); );
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

void Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div1__137(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div1__137\n"); );
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

void Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div2__138(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div2__138\n"); );
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

void Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div3__257(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div3__257\n"); );
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

void Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div4__258(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__1__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div4__258\n"); );
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

void Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div1__141(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div1__141\n"); );
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

void Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div2__142(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div2__142\n"); );
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

void Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div3__259(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div3__259\n"); );
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

void Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div4__260(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__2__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div4__260\n"); );
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

void Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div1__145(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div1__145\n"); );
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

void Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div2__146(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div2__146\n"); );
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

void Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div3__261(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div3__261\n"); );
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

void Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div4__262(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__3__KET____DOT__genblk2__DOT__genblk2__DOT__e__DOT__div4__262\n"); );
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

void Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__div1__149(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__div1__149\n"); );
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

void Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__div2__150(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__div2__150\n"); );
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

void Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__div3__265(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__div3__265\n"); );
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

void Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__div4__266(Vdisplay__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_settle__TOP__display__DOT__graphics_unit__DOT__rp__DOT__genblk3__BRA__3__KET____DOT__c__DOT__genblk1__BRA__4__KET____DOT__genblk3__DOT__e__DOT__div4__266\n"); );
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

void Vdisplay_div::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vdisplay_div::_ctor_var_reset\n"); );
    // Body
    a = VL_RAND_RESET_I(32);
    b = VL_RAND_RESET_I(32);
    out = VL_RAND_RESET_I(32);
    __PVT__abs_a = VL_RAND_RESET_I(32);
    __PVT__abs_b = VL_RAND_RESET_I(32);
    __PVT__b_2 = VL_RAND_RESET_I(32);
    __PVT__b_15 = VL_RAND_RESET_I(32);
    __PVT__b_67 = VL_RAND_RESET_I(32);
    __PVT__b_05 = VL_RAND_RESET_I(32);
    __PVT__mult1__DOT__mult = VL_RAND_RESET_I(32);
    __PVT__mult1__DOT__multiplicand = VL_RAND_RESET_I(32);
    __PVT__mult2__DOT__mult = VL_RAND_RESET_I(32);
    __PVT__mult2__DOT__multiplicand = VL_RAND_RESET_I(32);
    __PVT__mult3__DOT__mult = VL_RAND_RESET_I(32);
    __PVT__mult3__DOT__multiplicand = VL_RAND_RESET_I(32);
    __PVT__mult4__DOT__mult = VL_RAND_RESET_I(32);
    __PVT__mult4__DOT__multiplicand = VL_RAND_RESET_I(32);
}
