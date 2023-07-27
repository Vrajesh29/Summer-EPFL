// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSystolicArray_HBFP_forTesting.h for the primary calling header

#include "VSystolicArray_HBFP_forTesting_HBFP_PE.h"
#include "VSystolicArray_HBFP_forTesting__Syms.h"

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_15_13__735(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_15_13__735\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_man_0))) 
                                                     * 
                                                     (0xfU 
                                                      & ((IData)(this->__PVT__mac__DOT__counter)
                                                          ? 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? 
                                                          (3U 
                                                           & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_0) 
                                                              >> 4U))
                                                           : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_0))
                                                          : 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? 
                                                          (0xfU 
                                                           & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_0))
                                                           : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_0))))));
    this->__PVT__mac__DOT__multiplier_2_io_out = (0xffU 
                                                  & (((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      (3U 
                                                       & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_man_0) 
                                                          >> 4U))
                                                       : 0U) 
                                                     * 
                                                     (0xfU 
                                                      & ((IData)(this->__PVT__mac__DOT__counter)
                                                          ? 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? 
                                                          (3U 
                                                           & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_0) 
                                                              >> 4U))
                                                           : 0U)
                                                          : 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_0)
                                                           : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_man_1))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_man_1))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_1) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_1))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_1))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_1))))));
    this->__PVT__mac__DOT__multiplier_2_1_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_man_1) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_1) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_1)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_man_2))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_man_2))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_2) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_2))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_2))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_2))))));
    this->__PVT__mac__DOT__multiplier_2_2_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_man_2) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_2) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_2)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_man_3))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_man_3))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_3) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_3))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_3))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_3))))));
    this->__PVT__mac__DOT__multiplier_2_3_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_man_3) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_3) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_3)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_4_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_man_4))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_man_4))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_4) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_4))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_4))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_4))))));
    this->__PVT__mac__DOT__multiplier_2_4_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_man_4) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_4) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_4)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_5_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_man_5))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_man_5))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_5) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_5))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_5))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_5))))));
    this->__PVT__mac__DOT__multiplier_2_5_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_man_5) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_5) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_5)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_6_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_man_6))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_man_6))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_6) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_6))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_6))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_6))))));
    this->__PVT__mac__DOT__multiplier_2_6_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_man_6) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_6) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_6)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_7_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_man_7))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_man_7))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_7) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_7))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_7))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_7))))));
    this->__PVT__mac__DOT__multiplier_2_7_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_man_7) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_7) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_7)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_8_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_man_8))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_man_8))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_8) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_8))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_8))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_8))))));
    this->__PVT__mac__DOT__multiplier_2_8_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_man_8) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_8) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_8)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_9_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_man_9))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_man_9))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_9) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_9))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_9))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_9))))));
    this->__PVT__mac__DOT__multiplier_2_9_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_man_9) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_9) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_9)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_10_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_man_10))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_man_10))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_10) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_10))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_10))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_10))))));
    this->__PVT__mac__DOT__multiplier_2_10_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_man_10) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_10) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_10)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_11_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_man_11))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_man_11))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_11) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_11))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_11))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_11))))));
    this->__PVT__mac__DOT__multiplier_2_11_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_man_11) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_11) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_11)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_12_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_man_12))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_man_12))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_12) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_12))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_12))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_12))))));
    this->__PVT__mac__DOT__multiplier_2_12_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_man_12) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_12) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_12)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_13_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_man_13))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_man_13))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_13) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_13))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_13))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_13))))));
    this->__PVT__mac__DOT__multiplier_2_13_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_man_13) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_13) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_13)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_14_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_man_14))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_man_14))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_14) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_14))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_14))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_14))))));
    this->__PVT__mac__DOT__multiplier_2_14_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_man_14) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_14) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_14)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_15_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_man_15))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_man_15))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_15) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_15))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_15))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_15))))));
    this->__PVT__mac__DOT__multiplier_2_15_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_man_15) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_15) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_man_15)
                                                    : 0U)))));
    this->__PVT__mac__DOT___partial_result_T_1 = (0xffffU 
                                                  & ((IData)(this->__PVT__mac__DOT__multiplier_1_io_out) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_2_io_out) 
                                                      << 4U)));
    this->__PVT__mac__DOT___partial_result_T_11 = (0xffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out) 
                                                      + 
                                                      ((IData)(this->__PVT__mac__DOT__multiplier_2_1_io_out) 
                                                       << 4U)));
    this->__PVT__mac__DOT___partial_result_T_21 = (0xffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out) 
                                                      + 
                                                      ((IData)(this->__PVT__mac__DOT__multiplier_2_2_io_out) 
                                                       << 4U)));
    this->__PVT__mac__DOT___partial_result_T_31 = (0xffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out) 
                                                      + 
                                                      ((IData)(this->__PVT__mac__DOT__multiplier_2_3_io_out) 
                                                       << 4U)));
    this->__PVT__mac__DOT___partial_result_T_41 = (0xffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out) 
                                                      + 
                                                      ((IData)(this->__PVT__mac__DOT__multiplier_2_4_io_out) 
                                                       << 4U)));
    this->__PVT__mac__DOT___partial_result_T_51 = (0xffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out) 
                                                      + 
                                                      ((IData)(this->__PVT__mac__DOT__multiplier_2_5_io_out) 
                                                       << 4U)));
    this->__PVT__mac__DOT___partial_result_T_61 = (0xffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out) 
                                                      + 
                                                      ((IData)(this->__PVT__mac__DOT__multiplier_2_6_io_out) 
                                                       << 4U)));
    this->__PVT__mac__DOT___partial_result_T_71 = (0xffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out) 
                                                      + 
                                                      ((IData)(this->__PVT__mac__DOT__multiplier_2_7_io_out) 
                                                       << 4U)));
    this->__PVT__mac__DOT___partial_result_T_81 = (0xffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_8_io_out) 
                                                      + 
                                                      ((IData)(this->__PVT__mac__DOT__multiplier_2_8_io_out) 
                                                       << 4U)));
    this->__PVT__mac__DOT___partial_result_T_91 = (0xffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_9_io_out) 
                                                      + 
                                                      ((IData)(this->__PVT__mac__DOT__multiplier_2_9_io_out) 
                                                       << 4U)));
    this->__PVT__mac__DOT___partial_result_T_101 = 
        (0xffffU & ((IData)(this->__PVT__mac__DOT__multiplier_1_10_io_out) 
                    + ((IData)(this->__PVT__mac__DOT__multiplier_2_10_io_out) 
                       << 4U)));
    this->__PVT__mac__DOT___partial_result_T_111 = 
        (0xffffU & ((IData)(this->__PVT__mac__DOT__multiplier_1_11_io_out) 
                    + ((IData)(this->__PVT__mac__DOT__multiplier_2_11_io_out) 
                       << 4U)));
    this->__PVT__mac__DOT___partial_result_T_121 = 
        (0xffffU & ((IData)(this->__PVT__mac__DOT__multiplier_1_12_io_out) 
                    + ((IData)(this->__PVT__mac__DOT__multiplier_2_12_io_out) 
                       << 4U)));
    this->__PVT__mac__DOT___partial_result_T_131 = 
        (0xffffU & ((IData)(this->__PVT__mac__DOT__multiplier_1_13_io_out) 
                    + ((IData)(this->__PVT__mac__DOT__multiplier_2_13_io_out) 
                       << 4U)));
    this->__PVT__mac__DOT___partial_result_T_141 = 
        (0xffffU & ((IData)(this->__PVT__mac__DOT__multiplier_1_14_io_out) 
                    + ((IData)(this->__PVT__mac__DOT__multiplier_2_14_io_out) 
                       << 4U)));
    this->__PVT__mac__DOT___partial_result_T_151 = 
        (0xffffU & ((IData)(this->__PVT__mac__DOT__multiplier_1_15_io_out) 
                    + ((IData)(this->__PVT__mac__DOT__multiplier_2_15_io_out) 
                       << 4U)));
    if (vlTOPp->reset) {
        this->__PVT__mac__DOT___GEN_311 = 0U;
        this->__PVT__mac__DOT___GEN_312 = 0U;
        this->__PVT__mac__DOT___GEN_313 = 0U;
        this->__PVT__mac__DOT___GEN_314 = 0U;
        this->__PVT__mac__DOT___GEN_315 = 0U;
        this->__PVT__mac__DOT___GEN_316 = 0U;
        this->__PVT__mac__DOT___GEN_317 = 0U;
        this->__PVT__mac__DOT___GEN_318 = 0U;
        this->__PVT__mac__DOT___GEN_319 = 0U;
        this->__PVT__mac__DOT___GEN_320 = 0U;
        this->__PVT__mac__DOT___GEN_321 = 0U;
        this->__PVT__mac__DOT___GEN_322 = 0U;
        this->__PVT__mac__DOT___GEN_323 = 0U;
        this->__PVT__mac__DOT___GEN_324 = 0U;
        this->__PVT__mac__DOT___GEN_325 = 0U;
        this->__PVT__mac__DOT___GEN_326 = 0U;
    } else {
        this->__PVT__mac__DOT___GEN_311 = (0xffffffU 
                                           & ((IData)(this->__PVT__mac__DOT__counter)
                                               ? ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  ((0xffffU 
                                                    & ((IData)(this->__PVT__mac__DOT__partial_result) 
                                                       + 
                                                       ((IData)(this->__PVT__mac__DOT__multiplier_1_io_out) 
                                                        << 4U))) 
                                                   + 
                                                   ((IData)(this->__PVT__mac__DOT__multiplier_2_io_out) 
                                                    << 8U))
                                                   : (IData)(this->__PVT__mac__DOT___partial_result_T_1))
                                               : (IData)(this->__PVT__mac__DOT___partial_result_T_1)));
        this->__PVT__mac__DOT___GEN_312 = (0xffffffU 
                                           & ((IData)(this->__PVT__mac__DOT__counter)
                                               ? ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  ((0xffffU 
                                                    & ((IData)(this->__PVT__mac__DOT__partial_result_1) 
                                                       + 
                                                       ((IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out) 
                                                        << 4U))) 
                                                   + 
                                                   ((IData)(this->__PVT__mac__DOT__multiplier_2_1_io_out) 
                                                    << 8U))
                                                   : (IData)(this->__PVT__mac__DOT___partial_result_T_11))
                                               : (IData)(this->__PVT__mac__DOT___partial_result_T_11)));
        this->__PVT__mac__DOT___GEN_313 = (0xffffffU 
                                           & ((IData)(this->__PVT__mac__DOT__counter)
                                               ? ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  ((0xffffU 
                                                    & ((IData)(this->__PVT__mac__DOT__partial_result_2) 
                                                       + 
                                                       ((IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out) 
                                                        << 4U))) 
                                                   + 
                                                   ((IData)(this->__PVT__mac__DOT__multiplier_2_2_io_out) 
                                                    << 8U))
                                                   : (IData)(this->__PVT__mac__DOT___partial_result_T_21))
                                               : (IData)(this->__PVT__mac__DOT___partial_result_T_21)));
        this->__PVT__mac__DOT___GEN_314 = (0xffffffU 
                                           & ((IData)(this->__PVT__mac__DOT__counter)
                                               ? ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  ((0xffffU 
                                                    & ((IData)(this->__PVT__mac__DOT__partial_result_3) 
                                                       + 
                                                       ((IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out) 
                                                        << 4U))) 
                                                   + 
                                                   ((IData)(this->__PVT__mac__DOT__multiplier_2_3_io_out) 
                                                    << 8U))
                                                   : (IData)(this->__PVT__mac__DOT___partial_result_T_31))
                                               : (IData)(this->__PVT__mac__DOT___partial_result_T_31)));
        this->__PVT__mac__DOT___GEN_315 = (0xffffffU 
                                           & ((IData)(this->__PVT__mac__DOT__counter)
                                               ? ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  ((0xffffU 
                                                    & ((IData)(this->__PVT__mac__DOT__partial_result_4) 
                                                       + 
                                                       ((IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out) 
                                                        << 4U))) 
                                                   + 
                                                   ((IData)(this->__PVT__mac__DOT__multiplier_2_4_io_out) 
                                                    << 8U))
                                                   : (IData)(this->__PVT__mac__DOT___partial_result_T_41))
                                               : (IData)(this->__PVT__mac__DOT___partial_result_T_41)));
        this->__PVT__mac__DOT___GEN_316 = (0xffffffU 
                                           & ((IData)(this->__PVT__mac__DOT__counter)
                                               ? ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  ((0xffffU 
                                                    & ((IData)(this->__PVT__mac__DOT__partial_result_5) 
                                                       + 
                                                       ((IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out) 
                                                        << 4U))) 
                                                   + 
                                                   ((IData)(this->__PVT__mac__DOT__multiplier_2_5_io_out) 
                                                    << 8U))
                                                   : (IData)(this->__PVT__mac__DOT___partial_result_T_51))
                                               : (IData)(this->__PVT__mac__DOT___partial_result_T_51)));
        this->__PVT__mac__DOT___GEN_317 = (0xffffffU 
                                           & ((IData)(this->__PVT__mac__DOT__counter)
                                               ? ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  ((0xffffU 
                                                    & ((IData)(this->__PVT__mac__DOT__partial_result_6) 
                                                       + 
                                                       ((IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out) 
                                                        << 4U))) 
                                                   + 
                                                   ((IData)(this->__PVT__mac__DOT__multiplier_2_6_io_out) 
                                                    << 8U))
                                                   : (IData)(this->__PVT__mac__DOT___partial_result_T_61))
                                               : (IData)(this->__PVT__mac__DOT___partial_result_T_61)));
        this->__PVT__mac__DOT___GEN_318 = (0xffffffU 
                                           & ((IData)(this->__PVT__mac__DOT__counter)
                                               ? ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  ((0xffffU 
                                                    & ((IData)(this->__PVT__mac__DOT__partial_result_7) 
                                                       + 
                                                       ((IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out) 
                                                        << 4U))) 
                                                   + 
                                                   ((IData)(this->__PVT__mac__DOT__multiplier_2_7_io_out) 
                                                    << 8U))
                                                   : (IData)(this->__PVT__mac__DOT___partial_result_T_71))
                                               : (IData)(this->__PVT__mac__DOT___partial_result_T_71)));
        this->__PVT__mac__DOT___GEN_319 = (0xffffffU 
                                           & ((IData)(this->__PVT__mac__DOT__counter)
                                               ? ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  ((0xffffU 
                                                    & ((IData)(this->__PVT__mac__DOT__partial_result_8) 
                                                       + 
                                                       ((IData)(this->__PVT__mac__DOT__multiplier_1_8_io_out) 
                                                        << 4U))) 
                                                   + 
                                                   ((IData)(this->__PVT__mac__DOT__multiplier_2_8_io_out) 
                                                    << 8U))
                                                   : (IData)(this->__PVT__mac__DOT___partial_result_T_81))
                                               : (IData)(this->__PVT__mac__DOT___partial_result_T_81)));
        this->__PVT__mac__DOT___GEN_320 = (0xffffffU 
                                           & ((IData)(this->__PVT__mac__DOT__counter)
                                               ? ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  ((0xffffU 
                                                    & ((IData)(this->__PVT__mac__DOT__partial_result_9) 
                                                       + 
                                                       ((IData)(this->__PVT__mac__DOT__multiplier_1_9_io_out) 
                                                        << 4U))) 
                                                   + 
                                                   ((IData)(this->__PVT__mac__DOT__multiplier_2_9_io_out) 
                                                    << 8U))
                                                   : (IData)(this->__PVT__mac__DOT___partial_result_T_91))
                                               : (IData)(this->__PVT__mac__DOT___partial_result_T_91)));
        this->__PVT__mac__DOT___GEN_321 = (0xffffffU 
                                           & ((IData)(this->__PVT__mac__DOT__counter)
                                               ? ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  ((0xffffU 
                                                    & ((IData)(this->__PVT__mac__DOT__partial_result_10) 
                                                       + 
                                                       ((IData)(this->__PVT__mac__DOT__multiplier_1_10_io_out) 
                                                        << 4U))) 
                                                   + 
                                                   ((IData)(this->__PVT__mac__DOT__multiplier_2_10_io_out) 
                                                    << 8U))
                                                   : (IData)(this->__PVT__mac__DOT___partial_result_T_101))
                                               : (IData)(this->__PVT__mac__DOT___partial_result_T_101)));
        this->__PVT__mac__DOT___GEN_322 = (0xffffffU 
                                           & ((IData)(this->__PVT__mac__DOT__counter)
                                               ? ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  ((0xffffU 
                                                    & ((IData)(this->__PVT__mac__DOT__partial_result_11) 
                                                       + 
                                                       ((IData)(this->__PVT__mac__DOT__multiplier_1_11_io_out) 
                                                        << 4U))) 
                                                   + 
                                                   ((IData)(this->__PVT__mac__DOT__multiplier_2_11_io_out) 
                                                    << 8U))
                                                   : (IData)(this->__PVT__mac__DOT___partial_result_T_111))
                                               : (IData)(this->__PVT__mac__DOT___partial_result_T_111)));
        this->__PVT__mac__DOT___GEN_323 = (0xffffffU 
                                           & ((IData)(this->__PVT__mac__DOT__counter)
                                               ? ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  ((0xffffU 
                                                    & ((IData)(this->__PVT__mac__DOT__partial_result_12) 
                                                       + 
                                                       ((IData)(this->__PVT__mac__DOT__multiplier_1_12_io_out) 
                                                        << 4U))) 
                                                   + 
                                                   ((IData)(this->__PVT__mac__DOT__multiplier_2_12_io_out) 
                                                    << 8U))
                                                   : (IData)(this->__PVT__mac__DOT___partial_result_T_121))
                                               : (IData)(this->__PVT__mac__DOT___partial_result_T_121)));
        this->__PVT__mac__DOT___GEN_324 = (0xffffffU 
                                           & ((IData)(this->__PVT__mac__DOT__counter)
                                               ? ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  ((0xffffU 
                                                    & ((IData)(this->__PVT__mac__DOT__partial_result_13) 
                                                       + 
                                                       ((IData)(this->__PVT__mac__DOT__multiplier_1_13_io_out) 
                                                        << 4U))) 
                                                   + 
                                                   ((IData)(this->__PVT__mac__DOT__multiplier_2_13_io_out) 
                                                    << 8U))
                                                   : (IData)(this->__PVT__mac__DOT___partial_result_T_131))
                                               : (IData)(this->__PVT__mac__DOT___partial_result_T_131)));
        this->__PVT__mac__DOT___GEN_325 = (0xffffffU 
                                           & ((IData)(this->__PVT__mac__DOT__counter)
                                               ? ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  ((0xffffU 
                                                    & ((IData)(this->__PVT__mac__DOT__partial_result_14) 
                                                       + 
                                                       ((IData)(this->__PVT__mac__DOT__multiplier_1_14_io_out) 
                                                        << 4U))) 
                                                   + 
                                                   ((IData)(this->__PVT__mac__DOT__multiplier_2_14_io_out) 
                                                    << 8U))
                                                   : (IData)(this->__PVT__mac__DOT___partial_result_T_141))
                                               : (IData)(this->__PVT__mac__DOT___partial_result_T_141)));
        this->__PVT__mac__DOT___GEN_326 = (0xffffffU 
                                           & ((IData)(this->__PVT__mac__DOT__counter)
                                               ? ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  ((0xffffU 
                                                    & ((IData)(this->__PVT__mac__DOT__partial_result_15) 
                                                       + 
                                                       ((IData)(this->__PVT__mac__DOT__multiplier_1_15_io_out) 
                                                        << 4U))) 
                                                   + 
                                                   ((IData)(this->__PVT__mac__DOT__multiplier_2_15_io_out) 
                                                    << 8U))
                                                   : (IData)(this->__PVT__mac__DOT___partial_result_T_151))
                                               : (IData)(this->__PVT__mac__DOT___partial_result_T_151)));
    }
}

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_15_14__736(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_15_14__736\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_man_0))) 
                                                     * 
                                                     (0xfU 
                                                      & ((IData)(this->__PVT__mac__DOT__counter)
                                                          ? 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? 
                                                          (3U 
                                                           & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_0) 
                                                              >> 4U))
                                                           : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_0))
                                                          : 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? 
                                                          (0xfU 
                                                           & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_0))
                                                           : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_0))))));
    this->__PVT__mac__DOT__multiplier_2_io_out = (0xffU 
                                                  & (((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      (3U 
                                                       & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_man_0) 
                                                          >> 4U))
                                                       : 0U) 
                                                     * 
                                                     (0xfU 
                                                      & ((IData)(this->__PVT__mac__DOT__counter)
                                                          ? 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? 
                                                          (3U 
                                                           & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_0) 
                                                              >> 4U))
                                                           : 0U)
                                                          : 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_0)
                                                           : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_man_1))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_man_1))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_1) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_1))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_1))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_1))))));
    this->__PVT__mac__DOT__multiplier_2_1_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_man_1) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_1) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_1)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_man_2))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_man_2))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_2) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_2))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_2))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_2))))));
    this->__PVT__mac__DOT__multiplier_2_2_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_man_2) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_2) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_2)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_man_3))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_man_3))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_3) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_3))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_3))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_3))))));
    this->__PVT__mac__DOT__multiplier_2_3_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_man_3) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_3) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_3)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_4_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_man_4))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_man_4))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_4) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_4))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_4))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_4))))));
    this->__PVT__mac__DOT__multiplier_2_4_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_man_4) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_4) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_4)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_5_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_man_5))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_man_5))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_5) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_5))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_5))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_5))))));
    this->__PVT__mac__DOT__multiplier_2_5_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_man_5) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_5) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_5)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_6_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_man_6))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_man_6))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_6) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_6))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_6))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_6))))));
    this->__PVT__mac__DOT__multiplier_2_6_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_man_6) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_6) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_6)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_7_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_man_7))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_man_7))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_7) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_7))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_7))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_7))))));
    this->__PVT__mac__DOT__multiplier_2_7_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_man_7) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_7) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_7)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_8_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_man_8))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_man_8))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_8) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_8))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_8))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_8))))));
    this->__PVT__mac__DOT__multiplier_2_8_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_man_8) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_8) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_8)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_9_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_man_9))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_man_9))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_9) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_9))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_9))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_9))))));
    this->__PVT__mac__DOT__multiplier_2_9_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_man_9) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_9) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_9)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_10_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_man_10))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_man_10))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_10) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_10))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_10))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_10))))));
    this->__PVT__mac__DOT__multiplier_2_10_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_man_10) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_10) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_10)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_11_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_man_11))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_man_11))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_11) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_11))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_11))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_11))))));
    this->__PVT__mac__DOT__multiplier_2_11_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_man_11) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_11) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_11)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_12_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_man_12))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_man_12))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_12) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_12))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_12))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_12))))));
    this->__PVT__mac__DOT__multiplier_2_12_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_man_12) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_12) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_12)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_13_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_man_13))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_man_13))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_13) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_13))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_13))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_13))))));
    this->__PVT__mac__DOT__multiplier_2_13_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_man_13) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_13) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_13)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_14_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_man_14))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_man_14))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_14) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_14))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_14))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_14))))));
    this->__PVT__mac__DOT__multiplier_2_14_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_man_14) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_14) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_14)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_15_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_man_15))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_man_15))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_15) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_15))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_15))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_15))))));
    this->__PVT__mac__DOT__multiplier_2_15_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_man_15) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_15) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_man_15)
                                                    : 0U)))));
    this->__PVT__mac__DOT___partial_result_T_1 = (0xffffU 
                                                  & ((IData)(this->__PVT__mac__DOT__multiplier_1_io_out) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_2_io_out) 
                                                      << 4U)));
    this->__PVT__mac__DOT___partial_result_T_11 = (0xffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out) 
                                                      + 
                                                      ((IData)(this->__PVT__mac__DOT__multiplier_2_1_io_out) 
                                                       << 4U)));
    this->__PVT__mac__DOT___partial_result_T_21 = (0xffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out) 
                                                      + 
                                                      ((IData)(this->__PVT__mac__DOT__multiplier_2_2_io_out) 
                                                       << 4U)));
    this->__PVT__mac__DOT___partial_result_T_31 = (0xffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out) 
                                                      + 
                                                      ((IData)(this->__PVT__mac__DOT__multiplier_2_3_io_out) 
                                                       << 4U)));
    this->__PVT__mac__DOT___partial_result_T_41 = (0xffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out) 
                                                      + 
                                                      ((IData)(this->__PVT__mac__DOT__multiplier_2_4_io_out) 
                                                       << 4U)));
    this->__PVT__mac__DOT___partial_result_T_51 = (0xffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out) 
                                                      + 
                                                      ((IData)(this->__PVT__mac__DOT__multiplier_2_5_io_out) 
                                                       << 4U)));
    this->__PVT__mac__DOT___partial_result_T_61 = (0xffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out) 
                                                      + 
                                                      ((IData)(this->__PVT__mac__DOT__multiplier_2_6_io_out) 
                                                       << 4U)));
    this->__PVT__mac__DOT___partial_result_T_71 = (0xffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out) 
                                                      + 
                                                      ((IData)(this->__PVT__mac__DOT__multiplier_2_7_io_out) 
                                                       << 4U)));
    this->__PVT__mac__DOT___partial_result_T_81 = (0xffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_8_io_out) 
                                                      + 
                                                      ((IData)(this->__PVT__mac__DOT__multiplier_2_8_io_out) 
                                                       << 4U)));
    this->__PVT__mac__DOT___partial_result_T_91 = (0xffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_9_io_out) 
                                                      + 
                                                      ((IData)(this->__PVT__mac__DOT__multiplier_2_9_io_out) 
                                                       << 4U)));
    this->__PVT__mac__DOT___partial_result_T_101 = 
        (0xffffU & ((IData)(this->__PVT__mac__DOT__multiplier_1_10_io_out) 
                    + ((IData)(this->__PVT__mac__DOT__multiplier_2_10_io_out) 
                       << 4U)));
    this->__PVT__mac__DOT___partial_result_T_111 = 
        (0xffffU & ((IData)(this->__PVT__mac__DOT__multiplier_1_11_io_out) 
                    + ((IData)(this->__PVT__mac__DOT__multiplier_2_11_io_out) 
                       << 4U)));
    this->__PVT__mac__DOT___partial_result_T_121 = 
        (0xffffU & ((IData)(this->__PVT__mac__DOT__multiplier_1_12_io_out) 
                    + ((IData)(this->__PVT__mac__DOT__multiplier_2_12_io_out) 
                       << 4U)));
    this->__PVT__mac__DOT___partial_result_T_131 = 
        (0xffffU & ((IData)(this->__PVT__mac__DOT__multiplier_1_13_io_out) 
                    + ((IData)(this->__PVT__mac__DOT__multiplier_2_13_io_out) 
                       << 4U)));
    this->__PVT__mac__DOT___partial_result_T_141 = 
        (0xffffU & ((IData)(this->__PVT__mac__DOT__multiplier_1_14_io_out) 
                    + ((IData)(this->__PVT__mac__DOT__multiplier_2_14_io_out) 
                       << 4U)));
    this->__PVT__mac__DOT___partial_result_T_151 = 
        (0xffffU & ((IData)(this->__PVT__mac__DOT__multiplier_1_15_io_out) 
                    + ((IData)(this->__PVT__mac__DOT__multiplier_2_15_io_out) 
                       << 4U)));
    if (vlTOPp->reset) {
        this->__PVT__mac__DOT___GEN_311 = 0U;
        this->__PVT__mac__DOT___GEN_312 = 0U;
        this->__PVT__mac__DOT___GEN_313 = 0U;
        this->__PVT__mac__DOT___GEN_314 = 0U;
        this->__PVT__mac__DOT___GEN_315 = 0U;
        this->__PVT__mac__DOT___GEN_316 = 0U;
        this->__PVT__mac__DOT___GEN_317 = 0U;
        this->__PVT__mac__DOT___GEN_318 = 0U;
        this->__PVT__mac__DOT___GEN_319 = 0U;
        this->__PVT__mac__DOT___GEN_320 = 0U;
        this->__PVT__mac__DOT___GEN_321 = 0U;
        this->__PVT__mac__DOT___GEN_322 = 0U;
        this->__PVT__mac__DOT___GEN_323 = 0U;
        this->__PVT__mac__DOT___GEN_324 = 0U;
        this->__PVT__mac__DOT___GEN_325 = 0U;
        this->__PVT__mac__DOT___GEN_326 = 0U;
    } else {
        this->__PVT__mac__DOT___GEN_311 = (0xffffffU 
                                           & ((IData)(this->__PVT__mac__DOT__counter)
                                               ? ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  ((0xffffU 
                                                    & ((IData)(this->__PVT__mac__DOT__partial_result) 
                                                       + 
                                                       ((IData)(this->__PVT__mac__DOT__multiplier_1_io_out) 
                                                        << 4U))) 
                                                   + 
                                                   ((IData)(this->__PVT__mac__DOT__multiplier_2_io_out) 
                                                    << 8U))
                                                   : (IData)(this->__PVT__mac__DOT___partial_result_T_1))
                                               : (IData)(this->__PVT__mac__DOT___partial_result_T_1)));
        this->__PVT__mac__DOT___GEN_312 = (0xffffffU 
                                           & ((IData)(this->__PVT__mac__DOT__counter)
                                               ? ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  ((0xffffU 
                                                    & ((IData)(this->__PVT__mac__DOT__partial_result_1) 
                                                       + 
                                                       ((IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out) 
                                                        << 4U))) 
                                                   + 
                                                   ((IData)(this->__PVT__mac__DOT__multiplier_2_1_io_out) 
                                                    << 8U))
                                                   : (IData)(this->__PVT__mac__DOT___partial_result_T_11))
                                               : (IData)(this->__PVT__mac__DOT___partial_result_T_11)));
        this->__PVT__mac__DOT___GEN_313 = (0xffffffU 
                                           & ((IData)(this->__PVT__mac__DOT__counter)
                                               ? ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  ((0xffffU 
                                                    & ((IData)(this->__PVT__mac__DOT__partial_result_2) 
                                                       + 
                                                       ((IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out) 
                                                        << 4U))) 
                                                   + 
                                                   ((IData)(this->__PVT__mac__DOT__multiplier_2_2_io_out) 
                                                    << 8U))
                                                   : (IData)(this->__PVT__mac__DOT___partial_result_T_21))
                                               : (IData)(this->__PVT__mac__DOT___partial_result_T_21)));
        this->__PVT__mac__DOT___GEN_314 = (0xffffffU 
                                           & ((IData)(this->__PVT__mac__DOT__counter)
                                               ? ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  ((0xffffU 
                                                    & ((IData)(this->__PVT__mac__DOT__partial_result_3) 
                                                       + 
                                                       ((IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out) 
                                                        << 4U))) 
                                                   + 
                                                   ((IData)(this->__PVT__mac__DOT__multiplier_2_3_io_out) 
                                                    << 8U))
                                                   : (IData)(this->__PVT__mac__DOT___partial_result_T_31))
                                               : (IData)(this->__PVT__mac__DOT___partial_result_T_31)));
        this->__PVT__mac__DOT___GEN_315 = (0xffffffU 
                                           & ((IData)(this->__PVT__mac__DOT__counter)
                                               ? ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  ((0xffffU 
                                                    & ((IData)(this->__PVT__mac__DOT__partial_result_4) 
                                                       + 
                                                       ((IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out) 
                                                        << 4U))) 
                                                   + 
                                                   ((IData)(this->__PVT__mac__DOT__multiplier_2_4_io_out) 
                                                    << 8U))
                                                   : (IData)(this->__PVT__mac__DOT___partial_result_T_41))
                                               : (IData)(this->__PVT__mac__DOT___partial_result_T_41)));
        this->__PVT__mac__DOT___GEN_316 = (0xffffffU 
                                           & ((IData)(this->__PVT__mac__DOT__counter)
                                               ? ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  ((0xffffU 
                                                    & ((IData)(this->__PVT__mac__DOT__partial_result_5) 
                                                       + 
                                                       ((IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out) 
                                                        << 4U))) 
                                                   + 
                                                   ((IData)(this->__PVT__mac__DOT__multiplier_2_5_io_out) 
                                                    << 8U))
                                                   : (IData)(this->__PVT__mac__DOT___partial_result_T_51))
                                               : (IData)(this->__PVT__mac__DOT___partial_result_T_51)));
        this->__PVT__mac__DOT___GEN_317 = (0xffffffU 
                                           & ((IData)(this->__PVT__mac__DOT__counter)
                                               ? ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  ((0xffffU 
                                                    & ((IData)(this->__PVT__mac__DOT__partial_result_6) 
                                                       + 
                                                       ((IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out) 
                                                        << 4U))) 
                                                   + 
                                                   ((IData)(this->__PVT__mac__DOT__multiplier_2_6_io_out) 
                                                    << 8U))
                                                   : (IData)(this->__PVT__mac__DOT___partial_result_T_61))
                                               : (IData)(this->__PVT__mac__DOT___partial_result_T_61)));
        this->__PVT__mac__DOT___GEN_318 = (0xffffffU 
                                           & ((IData)(this->__PVT__mac__DOT__counter)
                                               ? ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  ((0xffffU 
                                                    & ((IData)(this->__PVT__mac__DOT__partial_result_7) 
                                                       + 
                                                       ((IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out) 
                                                        << 4U))) 
                                                   + 
                                                   ((IData)(this->__PVT__mac__DOT__multiplier_2_7_io_out) 
                                                    << 8U))
                                                   : (IData)(this->__PVT__mac__DOT___partial_result_T_71))
                                               : (IData)(this->__PVT__mac__DOT___partial_result_T_71)));
        this->__PVT__mac__DOT___GEN_319 = (0xffffffU 
                                           & ((IData)(this->__PVT__mac__DOT__counter)
                                               ? ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  ((0xffffU 
                                                    & ((IData)(this->__PVT__mac__DOT__partial_result_8) 
                                                       + 
                                                       ((IData)(this->__PVT__mac__DOT__multiplier_1_8_io_out) 
                                                        << 4U))) 
                                                   + 
                                                   ((IData)(this->__PVT__mac__DOT__multiplier_2_8_io_out) 
                                                    << 8U))
                                                   : (IData)(this->__PVT__mac__DOT___partial_result_T_81))
                                               : (IData)(this->__PVT__mac__DOT___partial_result_T_81)));
        this->__PVT__mac__DOT___GEN_320 = (0xffffffU 
                                           & ((IData)(this->__PVT__mac__DOT__counter)
                                               ? ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  ((0xffffU 
                                                    & ((IData)(this->__PVT__mac__DOT__partial_result_9) 
                                                       + 
                                                       ((IData)(this->__PVT__mac__DOT__multiplier_1_9_io_out) 
                                                        << 4U))) 
                                                   + 
                                                   ((IData)(this->__PVT__mac__DOT__multiplier_2_9_io_out) 
                                                    << 8U))
                                                   : (IData)(this->__PVT__mac__DOT___partial_result_T_91))
                                               : (IData)(this->__PVT__mac__DOT___partial_result_T_91)));
        this->__PVT__mac__DOT___GEN_321 = (0xffffffU 
                                           & ((IData)(this->__PVT__mac__DOT__counter)
                                               ? ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  ((0xffffU 
                                                    & ((IData)(this->__PVT__mac__DOT__partial_result_10) 
                                                       + 
                                                       ((IData)(this->__PVT__mac__DOT__multiplier_1_10_io_out) 
                                                        << 4U))) 
                                                   + 
                                                   ((IData)(this->__PVT__mac__DOT__multiplier_2_10_io_out) 
                                                    << 8U))
                                                   : (IData)(this->__PVT__mac__DOT___partial_result_T_101))
                                               : (IData)(this->__PVT__mac__DOT___partial_result_T_101)));
        this->__PVT__mac__DOT___GEN_322 = (0xffffffU 
                                           & ((IData)(this->__PVT__mac__DOT__counter)
                                               ? ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  ((0xffffU 
                                                    & ((IData)(this->__PVT__mac__DOT__partial_result_11) 
                                                       + 
                                                       ((IData)(this->__PVT__mac__DOT__multiplier_1_11_io_out) 
                                                        << 4U))) 
                                                   + 
                                                   ((IData)(this->__PVT__mac__DOT__multiplier_2_11_io_out) 
                                                    << 8U))
                                                   : (IData)(this->__PVT__mac__DOT___partial_result_T_111))
                                               : (IData)(this->__PVT__mac__DOT___partial_result_T_111)));
        this->__PVT__mac__DOT___GEN_323 = (0xffffffU 
                                           & ((IData)(this->__PVT__mac__DOT__counter)
                                               ? ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  ((0xffffU 
                                                    & ((IData)(this->__PVT__mac__DOT__partial_result_12) 
                                                       + 
                                                       ((IData)(this->__PVT__mac__DOT__multiplier_1_12_io_out) 
                                                        << 4U))) 
                                                   + 
                                                   ((IData)(this->__PVT__mac__DOT__multiplier_2_12_io_out) 
                                                    << 8U))
                                                   : (IData)(this->__PVT__mac__DOT___partial_result_T_121))
                                               : (IData)(this->__PVT__mac__DOT___partial_result_T_121)));
        this->__PVT__mac__DOT___GEN_324 = (0xffffffU 
                                           & ((IData)(this->__PVT__mac__DOT__counter)
                                               ? ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  ((0xffffU 
                                                    & ((IData)(this->__PVT__mac__DOT__partial_result_13) 
                                                       + 
                                                       ((IData)(this->__PVT__mac__DOT__multiplier_1_13_io_out) 
                                                        << 4U))) 
                                                   + 
                                                   ((IData)(this->__PVT__mac__DOT__multiplier_2_13_io_out) 
                                                    << 8U))
                                                   : (IData)(this->__PVT__mac__DOT___partial_result_T_131))
                                               : (IData)(this->__PVT__mac__DOT___partial_result_T_131)));
        this->__PVT__mac__DOT___GEN_325 = (0xffffffU 
                                           & ((IData)(this->__PVT__mac__DOT__counter)
                                               ? ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  ((0xffffU 
                                                    & ((IData)(this->__PVT__mac__DOT__partial_result_14) 
                                                       + 
                                                       ((IData)(this->__PVT__mac__DOT__multiplier_1_14_io_out) 
                                                        << 4U))) 
                                                   + 
                                                   ((IData)(this->__PVT__mac__DOT__multiplier_2_14_io_out) 
                                                    << 8U))
                                                   : (IData)(this->__PVT__mac__DOT___partial_result_T_141))
                                               : (IData)(this->__PVT__mac__DOT___partial_result_T_141)));
        this->__PVT__mac__DOT___GEN_326 = (0xffffffU 
                                           & ((IData)(this->__PVT__mac__DOT__counter)
                                               ? ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  ((0xffffU 
                                                    & ((IData)(this->__PVT__mac__DOT__partial_result_15) 
                                                       + 
                                                       ((IData)(this->__PVT__mac__DOT__multiplier_1_15_io_out) 
                                                        << 4U))) 
                                                   + 
                                                   ((IData)(this->__PVT__mac__DOT__multiplier_2_15_io_out) 
                                                    << 8U))
                                                   : (IData)(this->__PVT__mac__DOT___partial_result_T_151))
                                               : (IData)(this->__PVT__mac__DOT___partial_result_T_151)));
    }
}

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_15_15__737(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_15_15__737\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_man_0))) 
                                                     * 
                                                     (0xfU 
                                                      & ((IData)(this->__PVT__mac__DOT__counter)
                                                          ? 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? 
                                                          (3U 
                                                           & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_0) 
                                                              >> 4U))
                                                           : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_0))
                                                          : 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? 
                                                          (0xfU 
                                                           & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_0))
                                                           : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_0))))));
    this->__PVT__mac__DOT__multiplier_2_io_out = (0xffU 
                                                  & (((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      (3U 
                                                       & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_man_0) 
                                                          >> 4U))
                                                       : 0U) 
                                                     * 
                                                     (0xfU 
                                                      & ((IData)(this->__PVT__mac__DOT__counter)
                                                          ? 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? 
                                                          (3U 
                                                           & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_0) 
                                                              >> 4U))
                                                           : 0U)
                                                          : 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_0)
                                                           : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_man_1))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_man_1))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_1) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_1))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_1))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_1))))));
    this->__PVT__mac__DOT__multiplier_2_1_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_man_1) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_1) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_1)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_man_2))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_man_2))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_2) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_2))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_2))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_2))))));
    this->__PVT__mac__DOT__multiplier_2_2_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_man_2) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_2) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_2)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_man_3))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_man_3))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_3) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_3))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_3))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_3))))));
    this->__PVT__mac__DOT__multiplier_2_3_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_man_3) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_3) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_3)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_4_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_man_4))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_man_4))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_4) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_4))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_4))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_4))))));
    this->__PVT__mac__DOT__multiplier_2_4_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_man_4) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_4) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_4)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_5_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_man_5))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_man_5))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_5) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_5))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_5))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_5))))));
    this->__PVT__mac__DOT__multiplier_2_5_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_man_5) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_5) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_5)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_6_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_man_6))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_man_6))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_6) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_6))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_6))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_6))))));
    this->__PVT__mac__DOT__multiplier_2_6_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_man_6) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_6) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_6)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_7_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_man_7))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_man_7))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_7) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_7))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_7))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_7))))));
    this->__PVT__mac__DOT__multiplier_2_7_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_man_7) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_7) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_7)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_8_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_man_8))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_man_8))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_8) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_8))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_8))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_8))))));
    this->__PVT__mac__DOT__multiplier_2_8_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_man_8) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_8) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_8)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_9_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_man_9))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_man_9))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_9) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_9))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_9))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_9))))));
    this->__PVT__mac__DOT__multiplier_2_9_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_man_9) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_9) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_9)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_10_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_man_10))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_man_10))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_10) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_10))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_10))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_10))))));
    this->__PVT__mac__DOT__multiplier_2_10_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_man_10) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_10) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_10)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_11_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_man_11))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_man_11))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_11) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_11))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_11))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_11))))));
    this->__PVT__mac__DOT__multiplier_2_11_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_man_11) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_11) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_11)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_12_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_man_12))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_man_12))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_12) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_12))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_12))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_12))))));
    this->__PVT__mac__DOT__multiplier_2_12_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_man_12) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_12) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_12)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_13_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_man_13))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_man_13))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_13) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_13))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_13))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_13))))));
    this->__PVT__mac__DOT__multiplier_2_13_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_man_13) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_13) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_13)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_14_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_man_14))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_man_14))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_14) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_14))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_14))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_14))))));
    this->__PVT__mac__DOT__multiplier_2_14_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_man_14) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_14) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_14)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_15_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_man_15))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_man_15))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_15) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_15))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_15))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_15))))));
    this->__PVT__mac__DOT__multiplier_2_15_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_man_15) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_15) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_man_15)
                                                    : 0U)))));
    this->__PVT__mac__DOT___partial_result_T_1 = (0xffffU 
                                                  & ((IData)(this->__PVT__mac__DOT__multiplier_1_io_out) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_2_io_out) 
                                                      << 4U)));
    this->__PVT__mac__DOT___partial_result_T_11 = (0xffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out) 
                                                      + 
                                                      ((IData)(this->__PVT__mac__DOT__multiplier_2_1_io_out) 
                                                       << 4U)));
    this->__PVT__mac__DOT___partial_result_T_21 = (0xffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out) 
                                                      + 
                                                      ((IData)(this->__PVT__mac__DOT__multiplier_2_2_io_out) 
                                                       << 4U)));
    this->__PVT__mac__DOT___partial_result_T_31 = (0xffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out) 
                                                      + 
                                                      ((IData)(this->__PVT__mac__DOT__multiplier_2_3_io_out) 
                                                       << 4U)));
    this->__PVT__mac__DOT___partial_result_T_41 = (0xffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out) 
                                                      + 
                                                      ((IData)(this->__PVT__mac__DOT__multiplier_2_4_io_out) 
                                                       << 4U)));
    this->__PVT__mac__DOT___partial_result_T_51 = (0xffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out) 
                                                      + 
                                                      ((IData)(this->__PVT__mac__DOT__multiplier_2_5_io_out) 
                                                       << 4U)));
    this->__PVT__mac__DOT___partial_result_T_61 = (0xffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out) 
                                                      + 
                                                      ((IData)(this->__PVT__mac__DOT__multiplier_2_6_io_out) 
                                                       << 4U)));
    this->__PVT__mac__DOT___partial_result_T_71 = (0xffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out) 
                                                      + 
                                                      ((IData)(this->__PVT__mac__DOT__multiplier_2_7_io_out) 
                                                       << 4U)));
    this->__PVT__mac__DOT___partial_result_T_81 = (0xffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_8_io_out) 
                                                      + 
                                                      ((IData)(this->__PVT__mac__DOT__multiplier_2_8_io_out) 
                                                       << 4U)));
    this->__PVT__mac__DOT___partial_result_T_91 = (0xffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_9_io_out) 
                                                      + 
                                                      ((IData)(this->__PVT__mac__DOT__multiplier_2_9_io_out) 
                                                       << 4U)));
    this->__PVT__mac__DOT___partial_result_T_101 = 
        (0xffffU & ((IData)(this->__PVT__mac__DOT__multiplier_1_10_io_out) 
                    + ((IData)(this->__PVT__mac__DOT__multiplier_2_10_io_out) 
                       << 4U)));
    this->__PVT__mac__DOT___partial_result_T_111 = 
        (0xffffU & ((IData)(this->__PVT__mac__DOT__multiplier_1_11_io_out) 
                    + ((IData)(this->__PVT__mac__DOT__multiplier_2_11_io_out) 
                       << 4U)));
    this->__PVT__mac__DOT___partial_result_T_121 = 
        (0xffffU & ((IData)(this->__PVT__mac__DOT__multiplier_1_12_io_out) 
                    + ((IData)(this->__PVT__mac__DOT__multiplier_2_12_io_out) 
                       << 4U)));
    this->__PVT__mac__DOT___partial_result_T_131 = 
        (0xffffU & ((IData)(this->__PVT__mac__DOT__multiplier_1_13_io_out) 
                    + ((IData)(this->__PVT__mac__DOT__multiplier_2_13_io_out) 
                       << 4U)));
    this->__PVT__mac__DOT___partial_result_T_141 = 
        (0xffffU & ((IData)(this->__PVT__mac__DOT__multiplier_1_14_io_out) 
                    + ((IData)(this->__PVT__mac__DOT__multiplier_2_14_io_out) 
                       << 4U)));
    this->__PVT__mac__DOT___partial_result_T_151 = 
        (0xffffU & ((IData)(this->__PVT__mac__DOT__multiplier_1_15_io_out) 
                    + ((IData)(this->__PVT__mac__DOT__multiplier_2_15_io_out) 
                       << 4U)));
    if (vlTOPp->reset) {
        this->__PVT__mac__DOT___GEN_311 = 0U;
        this->__PVT__mac__DOT___GEN_312 = 0U;
        this->__PVT__mac__DOT___GEN_313 = 0U;
        this->__PVT__mac__DOT___GEN_314 = 0U;
        this->__PVT__mac__DOT___GEN_315 = 0U;
        this->__PVT__mac__DOT___GEN_316 = 0U;
        this->__PVT__mac__DOT___GEN_317 = 0U;
        this->__PVT__mac__DOT___GEN_318 = 0U;
        this->__PVT__mac__DOT___GEN_319 = 0U;
        this->__PVT__mac__DOT___GEN_320 = 0U;
        this->__PVT__mac__DOT___GEN_321 = 0U;
        this->__PVT__mac__DOT___GEN_322 = 0U;
        this->__PVT__mac__DOT___GEN_323 = 0U;
        this->__PVT__mac__DOT___GEN_324 = 0U;
        this->__PVT__mac__DOT___GEN_325 = 0U;
        this->__PVT__mac__DOT___GEN_326 = 0U;
    } else {
        this->__PVT__mac__DOT___GEN_311 = (0xffffffU 
                                           & ((IData)(this->__PVT__mac__DOT__counter)
                                               ? ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  ((0xffffU 
                                                    & ((IData)(this->__PVT__mac__DOT__partial_result) 
                                                       + 
                                                       ((IData)(this->__PVT__mac__DOT__multiplier_1_io_out) 
                                                        << 4U))) 
                                                   + 
                                                   ((IData)(this->__PVT__mac__DOT__multiplier_2_io_out) 
                                                    << 8U))
                                                   : (IData)(this->__PVT__mac__DOT___partial_result_T_1))
                                               : (IData)(this->__PVT__mac__DOT___partial_result_T_1)));
        this->__PVT__mac__DOT___GEN_312 = (0xffffffU 
                                           & ((IData)(this->__PVT__mac__DOT__counter)
                                               ? ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  ((0xffffU 
                                                    & ((IData)(this->__PVT__mac__DOT__partial_result_1) 
                                                       + 
                                                       ((IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out) 
                                                        << 4U))) 
                                                   + 
                                                   ((IData)(this->__PVT__mac__DOT__multiplier_2_1_io_out) 
                                                    << 8U))
                                                   : (IData)(this->__PVT__mac__DOT___partial_result_T_11))
                                               : (IData)(this->__PVT__mac__DOT___partial_result_T_11)));
        this->__PVT__mac__DOT___GEN_313 = (0xffffffU 
                                           & ((IData)(this->__PVT__mac__DOT__counter)
                                               ? ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  ((0xffffU 
                                                    & ((IData)(this->__PVT__mac__DOT__partial_result_2) 
                                                       + 
                                                       ((IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out) 
                                                        << 4U))) 
                                                   + 
                                                   ((IData)(this->__PVT__mac__DOT__multiplier_2_2_io_out) 
                                                    << 8U))
                                                   : (IData)(this->__PVT__mac__DOT___partial_result_T_21))
                                               : (IData)(this->__PVT__mac__DOT___partial_result_T_21)));
        this->__PVT__mac__DOT___GEN_314 = (0xffffffU 
                                           & ((IData)(this->__PVT__mac__DOT__counter)
                                               ? ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  ((0xffffU 
                                                    & ((IData)(this->__PVT__mac__DOT__partial_result_3) 
                                                       + 
                                                       ((IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out) 
                                                        << 4U))) 
                                                   + 
                                                   ((IData)(this->__PVT__mac__DOT__multiplier_2_3_io_out) 
                                                    << 8U))
                                                   : (IData)(this->__PVT__mac__DOT___partial_result_T_31))
                                               : (IData)(this->__PVT__mac__DOT___partial_result_T_31)));
        this->__PVT__mac__DOT___GEN_315 = (0xffffffU 
                                           & ((IData)(this->__PVT__mac__DOT__counter)
                                               ? ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  ((0xffffU 
                                                    & ((IData)(this->__PVT__mac__DOT__partial_result_4) 
                                                       + 
                                                       ((IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out) 
                                                        << 4U))) 
                                                   + 
                                                   ((IData)(this->__PVT__mac__DOT__multiplier_2_4_io_out) 
                                                    << 8U))
                                                   : (IData)(this->__PVT__mac__DOT___partial_result_T_41))
                                               : (IData)(this->__PVT__mac__DOT___partial_result_T_41)));
        this->__PVT__mac__DOT___GEN_316 = (0xffffffU 
                                           & ((IData)(this->__PVT__mac__DOT__counter)
                                               ? ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  ((0xffffU 
                                                    & ((IData)(this->__PVT__mac__DOT__partial_result_5) 
                                                       + 
                                                       ((IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out) 
                                                        << 4U))) 
                                                   + 
                                                   ((IData)(this->__PVT__mac__DOT__multiplier_2_5_io_out) 
                                                    << 8U))
                                                   : (IData)(this->__PVT__mac__DOT___partial_result_T_51))
                                               : (IData)(this->__PVT__mac__DOT___partial_result_T_51)));
        this->__PVT__mac__DOT___GEN_317 = (0xffffffU 
                                           & ((IData)(this->__PVT__mac__DOT__counter)
                                               ? ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  ((0xffffU 
                                                    & ((IData)(this->__PVT__mac__DOT__partial_result_6) 
                                                       + 
                                                       ((IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out) 
                                                        << 4U))) 
                                                   + 
                                                   ((IData)(this->__PVT__mac__DOT__multiplier_2_6_io_out) 
                                                    << 8U))
                                                   : (IData)(this->__PVT__mac__DOT___partial_result_T_61))
                                               : (IData)(this->__PVT__mac__DOT___partial_result_T_61)));
        this->__PVT__mac__DOT___GEN_318 = (0xffffffU 
                                           & ((IData)(this->__PVT__mac__DOT__counter)
                                               ? ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  ((0xffffU 
                                                    & ((IData)(this->__PVT__mac__DOT__partial_result_7) 
                                                       + 
                                                       ((IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out) 
                                                        << 4U))) 
                                                   + 
                                                   ((IData)(this->__PVT__mac__DOT__multiplier_2_7_io_out) 
                                                    << 8U))
                                                   : (IData)(this->__PVT__mac__DOT___partial_result_T_71))
                                               : (IData)(this->__PVT__mac__DOT___partial_result_T_71)));
        this->__PVT__mac__DOT___GEN_319 = (0xffffffU 
                                           & ((IData)(this->__PVT__mac__DOT__counter)
                                               ? ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  ((0xffffU 
                                                    & ((IData)(this->__PVT__mac__DOT__partial_result_8) 
                                                       + 
                                                       ((IData)(this->__PVT__mac__DOT__multiplier_1_8_io_out) 
                                                        << 4U))) 
                                                   + 
                                                   ((IData)(this->__PVT__mac__DOT__multiplier_2_8_io_out) 
                                                    << 8U))
                                                   : (IData)(this->__PVT__mac__DOT___partial_result_T_81))
                                               : (IData)(this->__PVT__mac__DOT___partial_result_T_81)));
        this->__PVT__mac__DOT___GEN_320 = (0xffffffU 
                                           & ((IData)(this->__PVT__mac__DOT__counter)
                                               ? ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  ((0xffffU 
                                                    & ((IData)(this->__PVT__mac__DOT__partial_result_9) 
                                                       + 
                                                       ((IData)(this->__PVT__mac__DOT__multiplier_1_9_io_out) 
                                                        << 4U))) 
                                                   + 
                                                   ((IData)(this->__PVT__mac__DOT__multiplier_2_9_io_out) 
                                                    << 8U))
                                                   : (IData)(this->__PVT__mac__DOT___partial_result_T_91))
                                               : (IData)(this->__PVT__mac__DOT___partial_result_T_91)));
        this->__PVT__mac__DOT___GEN_321 = (0xffffffU 
                                           & ((IData)(this->__PVT__mac__DOT__counter)
                                               ? ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  ((0xffffU 
                                                    & ((IData)(this->__PVT__mac__DOT__partial_result_10) 
                                                       + 
                                                       ((IData)(this->__PVT__mac__DOT__multiplier_1_10_io_out) 
                                                        << 4U))) 
                                                   + 
                                                   ((IData)(this->__PVT__mac__DOT__multiplier_2_10_io_out) 
                                                    << 8U))
                                                   : (IData)(this->__PVT__mac__DOT___partial_result_T_101))
                                               : (IData)(this->__PVT__mac__DOT___partial_result_T_101)));
        this->__PVT__mac__DOT___GEN_322 = (0xffffffU 
                                           & ((IData)(this->__PVT__mac__DOT__counter)
                                               ? ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  ((0xffffU 
                                                    & ((IData)(this->__PVT__mac__DOT__partial_result_11) 
                                                       + 
                                                       ((IData)(this->__PVT__mac__DOT__multiplier_1_11_io_out) 
                                                        << 4U))) 
                                                   + 
                                                   ((IData)(this->__PVT__mac__DOT__multiplier_2_11_io_out) 
                                                    << 8U))
                                                   : (IData)(this->__PVT__mac__DOT___partial_result_T_111))
                                               : (IData)(this->__PVT__mac__DOT___partial_result_T_111)));
        this->__PVT__mac__DOT___GEN_323 = (0xffffffU 
                                           & ((IData)(this->__PVT__mac__DOT__counter)
                                               ? ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  ((0xffffU 
                                                    & ((IData)(this->__PVT__mac__DOT__partial_result_12) 
                                                       + 
                                                       ((IData)(this->__PVT__mac__DOT__multiplier_1_12_io_out) 
                                                        << 4U))) 
                                                   + 
                                                   ((IData)(this->__PVT__mac__DOT__multiplier_2_12_io_out) 
                                                    << 8U))
                                                   : (IData)(this->__PVT__mac__DOT___partial_result_T_121))
                                               : (IData)(this->__PVT__mac__DOT___partial_result_T_121)));
        this->__PVT__mac__DOT___GEN_324 = (0xffffffU 
                                           & ((IData)(this->__PVT__mac__DOT__counter)
                                               ? ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  ((0xffffU 
                                                    & ((IData)(this->__PVT__mac__DOT__partial_result_13) 
                                                       + 
                                                       ((IData)(this->__PVT__mac__DOT__multiplier_1_13_io_out) 
                                                        << 4U))) 
                                                   + 
                                                   ((IData)(this->__PVT__mac__DOT__multiplier_2_13_io_out) 
                                                    << 8U))
                                                   : (IData)(this->__PVT__mac__DOT___partial_result_T_131))
                                               : (IData)(this->__PVT__mac__DOT___partial_result_T_131)));
        this->__PVT__mac__DOT___GEN_325 = (0xffffffU 
                                           & ((IData)(this->__PVT__mac__DOT__counter)
                                               ? ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  ((0xffffU 
                                                    & ((IData)(this->__PVT__mac__DOT__partial_result_14) 
                                                       + 
                                                       ((IData)(this->__PVT__mac__DOT__multiplier_1_14_io_out) 
                                                        << 4U))) 
                                                   + 
                                                   ((IData)(this->__PVT__mac__DOT__multiplier_2_14_io_out) 
                                                    << 8U))
                                                   : (IData)(this->__PVT__mac__DOT___partial_result_T_141))
                                               : (IData)(this->__PVT__mac__DOT___partial_result_T_141)));
        this->__PVT__mac__DOT___GEN_326 = (0xffffffU 
                                           & ((IData)(this->__PVT__mac__DOT__counter)
                                               ? ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  ((0xffffU 
                                                    & ((IData)(this->__PVT__mac__DOT__partial_result_15) 
                                                       + 
                                                       ((IData)(this->__PVT__mac__DOT__multiplier_1_15_io_out) 
                                                        << 4U))) 
                                                   + 
                                                   ((IData)(this->__PVT__mac__DOT__multiplier_2_15_io_out) 
                                                    << 8U))
                                                   : (IData)(this->__PVT__mac__DOT___partial_result_T_151))
                                               : (IData)(this->__PVT__mac__DOT___partial_result_T_151)));
    }
}

void VSystolicArray_HBFP_forTesting_HBFP_PE::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_ctor_var_reset\n"); );
    // Body
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    io_in_hor_sign_0 = VL_RAND_RESET_I(1);
    io_in_hor_sign_1 = VL_RAND_RESET_I(1);
    io_in_hor_sign_2 = VL_RAND_RESET_I(1);
    io_in_hor_sign_3 = VL_RAND_RESET_I(1);
    io_in_hor_sign_4 = VL_RAND_RESET_I(1);
    io_in_hor_sign_5 = VL_RAND_RESET_I(1);
    io_in_hor_sign_6 = VL_RAND_RESET_I(1);
    io_in_hor_sign_7 = VL_RAND_RESET_I(1);
    io_in_hor_sign_8 = VL_RAND_RESET_I(1);
    io_in_hor_sign_9 = VL_RAND_RESET_I(1);
    io_in_hor_sign_10 = VL_RAND_RESET_I(1);
    io_in_hor_sign_11 = VL_RAND_RESET_I(1);
    io_in_hor_sign_12 = VL_RAND_RESET_I(1);
    io_in_hor_sign_13 = VL_RAND_RESET_I(1);
    io_in_hor_sign_14 = VL_RAND_RESET_I(1);
    io_in_hor_sign_15 = VL_RAND_RESET_I(1);
    io_in_hor_man_0 = VL_RAND_RESET_I(6);
    io_in_hor_man_1 = VL_RAND_RESET_I(6);
    io_in_hor_man_2 = VL_RAND_RESET_I(6);
    io_in_hor_man_3 = VL_RAND_RESET_I(6);
    io_in_hor_man_4 = VL_RAND_RESET_I(6);
    io_in_hor_man_5 = VL_RAND_RESET_I(6);
    io_in_hor_man_6 = VL_RAND_RESET_I(6);
    io_in_hor_man_7 = VL_RAND_RESET_I(6);
    io_in_hor_man_8 = VL_RAND_RESET_I(6);
    io_in_hor_man_9 = VL_RAND_RESET_I(6);
    io_in_hor_man_10 = VL_RAND_RESET_I(6);
    io_in_hor_man_11 = VL_RAND_RESET_I(6);
    io_in_hor_man_12 = VL_RAND_RESET_I(6);
    io_in_hor_man_13 = VL_RAND_RESET_I(6);
    io_in_hor_man_14 = VL_RAND_RESET_I(6);
    io_in_hor_man_15 = VL_RAND_RESET_I(6);
    io_in_hor_exp = VL_RAND_RESET_I(8);
    io_in_ver_sign_0 = VL_RAND_RESET_I(1);
    io_in_ver_sign_1 = VL_RAND_RESET_I(1);
    io_in_ver_sign_2 = VL_RAND_RESET_I(1);
    io_in_ver_sign_3 = VL_RAND_RESET_I(1);
    io_in_ver_sign_4 = VL_RAND_RESET_I(1);
    io_in_ver_sign_5 = VL_RAND_RESET_I(1);
    io_in_ver_sign_6 = VL_RAND_RESET_I(1);
    io_in_ver_sign_7 = VL_RAND_RESET_I(1);
    io_in_ver_sign_8 = VL_RAND_RESET_I(1);
    io_in_ver_sign_9 = VL_RAND_RESET_I(1);
    io_in_ver_sign_10 = VL_RAND_RESET_I(1);
    io_in_ver_sign_11 = VL_RAND_RESET_I(1);
    io_in_ver_sign_12 = VL_RAND_RESET_I(1);
    io_in_ver_sign_13 = VL_RAND_RESET_I(1);
    io_in_ver_sign_14 = VL_RAND_RESET_I(1);
    io_in_ver_sign_15 = VL_RAND_RESET_I(1);
    io_in_ver_man_0 = VL_RAND_RESET_I(6);
    io_in_ver_man_1 = VL_RAND_RESET_I(6);
    io_in_ver_man_2 = VL_RAND_RESET_I(6);
    io_in_ver_man_3 = VL_RAND_RESET_I(6);
    io_in_ver_man_4 = VL_RAND_RESET_I(6);
    io_in_ver_man_5 = VL_RAND_RESET_I(6);
    io_in_ver_man_6 = VL_RAND_RESET_I(6);
    io_in_ver_man_7 = VL_RAND_RESET_I(6);
    io_in_ver_man_8 = VL_RAND_RESET_I(6);
    io_in_ver_man_9 = VL_RAND_RESET_I(6);
    io_in_ver_man_10 = VL_RAND_RESET_I(6);
    io_in_ver_man_11 = VL_RAND_RESET_I(6);
    io_in_ver_man_12 = VL_RAND_RESET_I(6);
    io_in_ver_man_13 = VL_RAND_RESET_I(6);
    io_in_ver_man_14 = VL_RAND_RESET_I(6);
    io_in_ver_man_15 = VL_RAND_RESET_I(6);
    io_in_ver_exp = VL_RAND_RESET_I(8);
    io_in_flag = VL_RAND_RESET_I(1);
    io_out_hor_sign_0 = VL_RAND_RESET_I(1);
    io_out_hor_sign_1 = VL_RAND_RESET_I(1);
    io_out_hor_sign_2 = VL_RAND_RESET_I(1);
    io_out_hor_sign_3 = VL_RAND_RESET_I(1);
    io_out_hor_sign_4 = VL_RAND_RESET_I(1);
    io_out_hor_sign_5 = VL_RAND_RESET_I(1);
    io_out_hor_sign_6 = VL_RAND_RESET_I(1);
    io_out_hor_sign_7 = VL_RAND_RESET_I(1);
    io_out_hor_sign_8 = VL_RAND_RESET_I(1);
    io_out_hor_sign_9 = VL_RAND_RESET_I(1);
    io_out_hor_sign_10 = VL_RAND_RESET_I(1);
    io_out_hor_sign_11 = VL_RAND_RESET_I(1);
    io_out_hor_sign_12 = VL_RAND_RESET_I(1);
    io_out_hor_sign_13 = VL_RAND_RESET_I(1);
    io_out_hor_sign_14 = VL_RAND_RESET_I(1);
    io_out_hor_sign_15 = VL_RAND_RESET_I(1);
    io_out_hor_man_0 = VL_RAND_RESET_I(6);
    io_out_hor_man_1 = VL_RAND_RESET_I(6);
    io_out_hor_man_2 = VL_RAND_RESET_I(6);
    io_out_hor_man_3 = VL_RAND_RESET_I(6);
    io_out_hor_man_4 = VL_RAND_RESET_I(6);
    io_out_hor_man_5 = VL_RAND_RESET_I(6);
    io_out_hor_man_6 = VL_RAND_RESET_I(6);
    io_out_hor_man_7 = VL_RAND_RESET_I(6);
    io_out_hor_man_8 = VL_RAND_RESET_I(6);
    io_out_hor_man_9 = VL_RAND_RESET_I(6);
    io_out_hor_man_10 = VL_RAND_RESET_I(6);
    io_out_hor_man_11 = VL_RAND_RESET_I(6);
    io_out_hor_man_12 = VL_RAND_RESET_I(6);
    io_out_hor_man_13 = VL_RAND_RESET_I(6);
    io_out_hor_man_14 = VL_RAND_RESET_I(6);
    io_out_hor_man_15 = VL_RAND_RESET_I(6);
    io_out_hor_exp = VL_RAND_RESET_I(8);
    io_out_ver_sign_0 = VL_RAND_RESET_I(1);
    io_out_ver_sign_1 = VL_RAND_RESET_I(1);
    io_out_ver_sign_2 = VL_RAND_RESET_I(1);
    io_out_ver_sign_3 = VL_RAND_RESET_I(1);
    io_out_ver_sign_4 = VL_RAND_RESET_I(1);
    io_out_ver_sign_5 = VL_RAND_RESET_I(1);
    io_out_ver_sign_6 = VL_RAND_RESET_I(1);
    io_out_ver_sign_7 = VL_RAND_RESET_I(1);
    io_out_ver_sign_8 = VL_RAND_RESET_I(1);
    io_out_ver_sign_9 = VL_RAND_RESET_I(1);
    io_out_ver_sign_10 = VL_RAND_RESET_I(1);
    io_out_ver_sign_11 = VL_RAND_RESET_I(1);
    io_out_ver_sign_12 = VL_RAND_RESET_I(1);
    io_out_ver_sign_13 = VL_RAND_RESET_I(1);
    io_out_ver_sign_14 = VL_RAND_RESET_I(1);
    io_out_ver_sign_15 = VL_RAND_RESET_I(1);
    io_out_ver_man_0 = VL_RAND_RESET_I(6);
    io_out_ver_man_1 = VL_RAND_RESET_I(6);
    io_out_ver_man_2 = VL_RAND_RESET_I(6);
    io_out_ver_man_3 = VL_RAND_RESET_I(6);
    io_out_ver_man_4 = VL_RAND_RESET_I(6);
    io_out_ver_man_5 = VL_RAND_RESET_I(6);
    io_out_ver_man_6 = VL_RAND_RESET_I(6);
    io_out_ver_man_7 = VL_RAND_RESET_I(6);
    io_out_ver_man_8 = VL_RAND_RESET_I(6);
    io_out_ver_man_9 = VL_RAND_RESET_I(6);
    io_out_ver_man_10 = VL_RAND_RESET_I(6);
    io_out_ver_man_11 = VL_RAND_RESET_I(6);
    io_out_ver_man_12 = VL_RAND_RESET_I(6);
    io_out_ver_man_13 = VL_RAND_RESET_I(6);
    io_out_ver_man_14 = VL_RAND_RESET_I(6);
    io_out_ver_man_15 = VL_RAND_RESET_I(6);
    io_out_ver_exp = VL_RAND_RESET_I(8);
    io_out_result_sign = VL_RAND_RESET_I(1);
    io_out_result_man = VL_RAND_RESET_I(6);
    io_out_result_exp = VL_RAND_RESET_I(8);
    __PVT__mac_io_out_result_man = VL_RAND_RESET_I(6);
    __PVT__adder_io_in_b_sign = VL_RAND_RESET_I(1);
    __PVT__adder_io_in_b_man = VL_RAND_RESET_I(6);
    __PVT__adder_io_in_b_exp = VL_RAND_RESET_I(8);
    __PVT__result_buffer_sign = VL_RAND_RESET_I(1);
    __PVT__result_buffer_man = VL_RAND_RESET_I(6);
    __PVT__result_buffer_exp = VL_RAND_RESET_I(8);
    __PVT__adder_io_in_b_r_sign = VL_RAND_RESET_I(1);
    __PVT__adder_io_in_b_r_man = VL_RAND_RESET_I(6);
    __PVT__adder_io_in_b_r_exp = VL_RAND_RESET_I(8);
    __PVT__mac__DOT__multiplier_1_io_out = VL_RAND_RESET_I(8);
    __PVT__mac__DOT__multiplier_2_io_out = VL_RAND_RESET_I(8);
    __PVT__mac__DOT__multiplier_1_1_io_out = VL_RAND_RESET_I(8);
    __PVT__mac__DOT__multiplier_2_1_io_out = VL_RAND_RESET_I(8);
    __PVT__mac__DOT__multiplier_1_2_io_out = VL_RAND_RESET_I(8);
    __PVT__mac__DOT__multiplier_2_2_io_out = VL_RAND_RESET_I(8);
    __PVT__mac__DOT__multiplier_1_3_io_out = VL_RAND_RESET_I(8);
    __PVT__mac__DOT__multiplier_2_3_io_out = VL_RAND_RESET_I(8);
    __PVT__mac__DOT__multiplier_1_4_io_out = VL_RAND_RESET_I(8);
    __PVT__mac__DOT__multiplier_2_4_io_out = VL_RAND_RESET_I(8);
    __PVT__mac__DOT__multiplier_1_5_io_out = VL_RAND_RESET_I(8);
    __PVT__mac__DOT__multiplier_2_5_io_out = VL_RAND_RESET_I(8);
    __PVT__mac__DOT__multiplier_1_6_io_out = VL_RAND_RESET_I(8);
    __PVT__mac__DOT__multiplier_2_6_io_out = VL_RAND_RESET_I(8);
    __PVT__mac__DOT__multiplier_1_7_io_out = VL_RAND_RESET_I(8);
    __PVT__mac__DOT__multiplier_2_7_io_out = VL_RAND_RESET_I(8);
    __PVT__mac__DOT__multiplier_1_8_io_out = VL_RAND_RESET_I(8);
    __PVT__mac__DOT__multiplier_2_8_io_out = VL_RAND_RESET_I(8);
    __PVT__mac__DOT__multiplier_1_9_io_out = VL_RAND_RESET_I(8);
    __PVT__mac__DOT__multiplier_2_9_io_out = VL_RAND_RESET_I(8);
    __PVT__mac__DOT__multiplier_1_10_io_out = VL_RAND_RESET_I(8);
    __PVT__mac__DOT__multiplier_2_10_io_out = VL_RAND_RESET_I(8);
    __PVT__mac__DOT__multiplier_1_11_io_out = VL_RAND_RESET_I(8);
    __PVT__mac__DOT__multiplier_2_11_io_out = VL_RAND_RESET_I(8);
    __PVT__mac__DOT__multiplier_1_12_io_out = VL_RAND_RESET_I(8);
    __PVT__mac__DOT__multiplier_2_12_io_out = VL_RAND_RESET_I(8);
    __PVT__mac__DOT__multiplier_1_13_io_out = VL_RAND_RESET_I(8);
    __PVT__mac__DOT__multiplier_2_13_io_out = VL_RAND_RESET_I(8);
    __PVT__mac__DOT__multiplier_1_14_io_out = VL_RAND_RESET_I(8);
    __PVT__mac__DOT__multiplier_2_14_io_out = VL_RAND_RESET_I(8);
    __PVT__mac__DOT__multiplier_1_15_io_out = VL_RAND_RESET_I(8);
    __PVT__mac__DOT__multiplier_2_15_io_out = VL_RAND_RESET_I(8);
    __PVT__mac__DOT__exp_addition_r = VL_RAND_RESET_I(9);
    __PVT__mac__DOT__exp_addition_r_1 = VL_RAND_RESET_I(9);
    __PVT__mac__DOT__exp_addition_r_2 = VL_RAND_RESET_I(9);
    __PVT__mac__DOT__exp_addition_r_3 = VL_RAND_RESET_I(9);
    __PVT__mac__DOT__exp_addition = VL_RAND_RESET_I(9);
    __PVT__mac__DOT___io_out_result_exp_T_5 = VL_RAND_RESET_I(9);
    __PVT__mac__DOT__dotProductRegs_0 = VL_RAND_RESET_I(6);
    __PVT__mac__DOT__dotProductRegs_1 = VL_RAND_RESET_I(6);
    __PVT__mac__DOT__dotProductRegs_2 = VL_RAND_RESET_I(6);
    __PVT__mac__DOT__dotProductRegs_3 = VL_RAND_RESET_I(6);
    __PVT__mac__DOT__dotProductRegs_4 = VL_RAND_RESET_I(6);
    __PVT__mac__DOT__dotProductRegs_5 = VL_RAND_RESET_I(6);
    __PVT__mac__DOT__dotProductRegs_6 = VL_RAND_RESET_I(6);
    __PVT__mac__DOT__dotProductRegs_7 = VL_RAND_RESET_I(6);
    __PVT__mac__DOT__dotProductRegs_8 = VL_RAND_RESET_I(6);
    __PVT__mac__DOT__dotProductRegs_9 = VL_RAND_RESET_I(6);
    __PVT__mac__DOT__dotProductRegs_10 = VL_RAND_RESET_I(6);
    __PVT__mac__DOT__dotProductRegs_11 = VL_RAND_RESET_I(6);
    __PVT__mac__DOT__dotProductRegs_12 = VL_RAND_RESET_I(6);
    __PVT__mac__DOT__dotProductRegs_13 = VL_RAND_RESET_I(6);
    __PVT__mac__DOT__dotProductRegs_14 = VL_RAND_RESET_I(6);
    __PVT__mac__DOT__dotProductRegs_15 = VL_RAND_RESET_I(6);
    __PVT__mac__DOT__two_complement_buffer_0 = VL_RAND_RESET_I(7);
    __PVT__mac__DOT__two_complement_buffer_1 = VL_RAND_RESET_I(7);
    __PVT__mac__DOT__two_complement_buffer_2 = VL_RAND_RESET_I(7);
    __PVT__mac__DOT__two_complement_buffer_3 = VL_RAND_RESET_I(7);
    __PVT__mac__DOT__two_complement_buffer_4 = VL_RAND_RESET_I(7);
    __PVT__mac__DOT__two_complement_buffer_5 = VL_RAND_RESET_I(7);
    __PVT__mac__DOT__two_complement_buffer_6 = VL_RAND_RESET_I(7);
    __PVT__mac__DOT__two_complement_buffer_7 = VL_RAND_RESET_I(7);
    __PVT__mac__DOT__two_complement_buffer_8 = VL_RAND_RESET_I(7);
    __PVT__mac__DOT__two_complement_buffer_9 = VL_RAND_RESET_I(7);
    __PVT__mac__DOT__two_complement_buffer_10 = VL_RAND_RESET_I(7);
    __PVT__mac__DOT__two_complement_buffer_11 = VL_RAND_RESET_I(7);
    __PVT__mac__DOT__two_complement_buffer_12 = VL_RAND_RESET_I(7);
    __PVT__mac__DOT__two_complement_buffer_13 = VL_RAND_RESET_I(7);
    __PVT__mac__DOT__two_complement_buffer_14 = VL_RAND_RESET_I(7);
    __PVT__mac__DOT__two_complement_buffer_15 = VL_RAND_RESET_I(7);
    __PVT__mac__DOT__signs_0 = VL_RAND_RESET_I(1);
    __PVT__mac__DOT__signs_1 = VL_RAND_RESET_I(1);
    __PVT__mac__DOT__signs_2 = VL_RAND_RESET_I(1);
    __PVT__mac__DOT__signs_3 = VL_RAND_RESET_I(1);
    __PVT__mac__DOT__signs_4 = VL_RAND_RESET_I(1);
    __PVT__mac__DOT__signs_5 = VL_RAND_RESET_I(1);
    __PVT__mac__DOT__signs_6 = VL_RAND_RESET_I(1);
    __PVT__mac__DOT__signs_7 = VL_RAND_RESET_I(1);
    __PVT__mac__DOT__signs_8 = VL_RAND_RESET_I(1);
    __PVT__mac__DOT__signs_9 = VL_RAND_RESET_I(1);
    __PVT__mac__DOT__signs_10 = VL_RAND_RESET_I(1);
    __PVT__mac__DOT__signs_11 = VL_RAND_RESET_I(1);
    __PVT__mac__DOT__signs_12 = VL_RAND_RESET_I(1);
    __PVT__mac__DOT__signs_13 = VL_RAND_RESET_I(1);
    __PVT__mac__DOT__signs_14 = VL_RAND_RESET_I(1);
    __PVT__mac__DOT__signs_15 = VL_RAND_RESET_I(1);
    __PVT__mac__DOT__counter = VL_RAND_RESET_I(1);
    __PVT__mac__DOT__partial_result = VL_RAND_RESET_I(12);
    __PVT__mac__DOT__final_result = VL_RAND_RESET_I(12);
    __PVT__mac__DOT___partial_result_T_1 = VL_RAND_RESET_I(16);
    __PVT__mac__DOT__signs_0_r = VL_RAND_RESET_I(1);
    __PVT__mac__DOT__signs_0_r_1 = VL_RAND_RESET_I(1);
    __PVT__mac__DOT__partial_result_1 = VL_RAND_RESET_I(12);
    __PVT__mac__DOT__final_result_1 = VL_RAND_RESET_I(12);
    __PVT__mac__DOT___partial_result_T_11 = VL_RAND_RESET_I(16);
    __PVT__mac__DOT__signs_1_r = VL_RAND_RESET_I(1);
    __PVT__mac__DOT__signs_1_r_1 = VL_RAND_RESET_I(1);
    __PVT__mac__DOT__partial_result_2 = VL_RAND_RESET_I(12);
    __PVT__mac__DOT__final_result_2 = VL_RAND_RESET_I(12);
    __PVT__mac__DOT___partial_result_T_21 = VL_RAND_RESET_I(16);
    __PVT__mac__DOT__signs_2_r = VL_RAND_RESET_I(1);
    __PVT__mac__DOT__signs_2_r_1 = VL_RAND_RESET_I(1);
    __PVT__mac__DOT__partial_result_3 = VL_RAND_RESET_I(12);
    __PVT__mac__DOT__final_result_3 = VL_RAND_RESET_I(12);
    __PVT__mac__DOT___partial_result_T_31 = VL_RAND_RESET_I(16);
    __PVT__mac__DOT__signs_3_r = VL_RAND_RESET_I(1);
    __PVT__mac__DOT__signs_3_r_1 = VL_RAND_RESET_I(1);
    __PVT__mac__DOT__partial_result_4 = VL_RAND_RESET_I(12);
    __PVT__mac__DOT__final_result_4 = VL_RAND_RESET_I(12);
    __PVT__mac__DOT___partial_result_T_41 = VL_RAND_RESET_I(16);
    __PVT__mac__DOT__signs_4_r = VL_RAND_RESET_I(1);
    __PVT__mac__DOT__signs_4_r_1 = VL_RAND_RESET_I(1);
    __PVT__mac__DOT__partial_result_5 = VL_RAND_RESET_I(12);
    __PVT__mac__DOT__final_result_5 = VL_RAND_RESET_I(12);
    __PVT__mac__DOT___partial_result_T_51 = VL_RAND_RESET_I(16);
    __PVT__mac__DOT__signs_5_r = VL_RAND_RESET_I(1);
    __PVT__mac__DOT__signs_5_r_1 = VL_RAND_RESET_I(1);
    __PVT__mac__DOT__partial_result_6 = VL_RAND_RESET_I(12);
    __PVT__mac__DOT__final_result_6 = VL_RAND_RESET_I(12);
    __PVT__mac__DOT___partial_result_T_61 = VL_RAND_RESET_I(16);
    __PVT__mac__DOT__signs_6_r = VL_RAND_RESET_I(1);
    __PVT__mac__DOT__signs_6_r_1 = VL_RAND_RESET_I(1);
    __PVT__mac__DOT__partial_result_7 = VL_RAND_RESET_I(12);
    __PVT__mac__DOT__final_result_7 = VL_RAND_RESET_I(12);
    __PVT__mac__DOT___partial_result_T_71 = VL_RAND_RESET_I(16);
    __PVT__mac__DOT__signs_7_r = VL_RAND_RESET_I(1);
    __PVT__mac__DOT__signs_7_r_1 = VL_RAND_RESET_I(1);
    __PVT__mac__DOT__partial_result_8 = VL_RAND_RESET_I(12);
    __PVT__mac__DOT__final_result_8 = VL_RAND_RESET_I(12);
    __PVT__mac__DOT___partial_result_T_81 = VL_RAND_RESET_I(16);
    __PVT__mac__DOT__signs_8_r = VL_RAND_RESET_I(1);
    __PVT__mac__DOT__signs_8_r_1 = VL_RAND_RESET_I(1);
    __PVT__mac__DOT__partial_result_9 = VL_RAND_RESET_I(12);
    __PVT__mac__DOT__final_result_9 = VL_RAND_RESET_I(12);
    __PVT__mac__DOT___partial_result_T_91 = VL_RAND_RESET_I(16);
    __PVT__mac__DOT__signs_9_r = VL_RAND_RESET_I(1);
    __PVT__mac__DOT__signs_9_r_1 = VL_RAND_RESET_I(1);
    __PVT__mac__DOT__partial_result_10 = VL_RAND_RESET_I(12);
    __PVT__mac__DOT__final_result_10 = VL_RAND_RESET_I(12);
    __PVT__mac__DOT___partial_result_T_101 = VL_RAND_RESET_I(16);
    __PVT__mac__DOT__signs_10_r = VL_RAND_RESET_I(1);
    __PVT__mac__DOT__signs_10_r_1 = VL_RAND_RESET_I(1);
    __PVT__mac__DOT__partial_result_11 = VL_RAND_RESET_I(12);
    __PVT__mac__DOT__final_result_11 = VL_RAND_RESET_I(12);
    __PVT__mac__DOT___partial_result_T_111 = VL_RAND_RESET_I(16);
    __PVT__mac__DOT__signs_11_r = VL_RAND_RESET_I(1);
    __PVT__mac__DOT__signs_11_r_1 = VL_RAND_RESET_I(1);
    __PVT__mac__DOT__partial_result_12 = VL_RAND_RESET_I(12);
    __PVT__mac__DOT__final_result_12 = VL_RAND_RESET_I(12);
    __PVT__mac__DOT___partial_result_T_121 = VL_RAND_RESET_I(16);
    __PVT__mac__DOT__signs_12_r = VL_RAND_RESET_I(1);
    __PVT__mac__DOT__signs_12_r_1 = VL_RAND_RESET_I(1);
    __PVT__mac__DOT__partial_result_13 = VL_RAND_RESET_I(12);
    __PVT__mac__DOT__final_result_13 = VL_RAND_RESET_I(12);
    __PVT__mac__DOT___partial_result_T_131 = VL_RAND_RESET_I(16);
    __PVT__mac__DOT__signs_13_r = VL_RAND_RESET_I(1);
    __PVT__mac__DOT__signs_13_r_1 = VL_RAND_RESET_I(1);
    __PVT__mac__DOT__partial_result_14 = VL_RAND_RESET_I(12);
    __PVT__mac__DOT__final_result_14 = VL_RAND_RESET_I(12);
    __PVT__mac__DOT___partial_result_T_141 = VL_RAND_RESET_I(16);
    __PVT__mac__DOT__signs_14_r = VL_RAND_RESET_I(1);
    __PVT__mac__DOT__signs_14_r_1 = VL_RAND_RESET_I(1);
    __PVT__mac__DOT__partial_result_15 = VL_RAND_RESET_I(12);
    __PVT__mac__DOT__final_result_15 = VL_RAND_RESET_I(12);
    __PVT__mac__DOT___partial_result_T_151 = VL_RAND_RESET_I(16);
    __PVT__mac__DOT__signs_15_r = VL_RAND_RESET_I(1);
    __PVT__mac__DOT__signs_15_r_1 = VL_RAND_RESET_I(1);
    __PVT__mac__DOT___GEN_117 = VL_RAND_RESET_I(1);
    __PVT__mac__DOT___sum_T_9 = VL_RAND_RESET_I(17);
    __PVT__mac__DOT__sum = VL_RAND_RESET_I(22);
    __PVT__mac__DOT__acc_hbfp = VL_RAND_RESET_I(7);
    __PVT__mac__DOT___GEN_311 = VL_RAND_RESET_I(24);
    __PVT__mac__DOT___GEN_312 = VL_RAND_RESET_I(24);
    __PVT__mac__DOT___GEN_313 = VL_RAND_RESET_I(24);
    __PVT__mac__DOT___GEN_314 = VL_RAND_RESET_I(24);
    __PVT__mac__DOT___GEN_315 = VL_RAND_RESET_I(24);
    __PVT__mac__DOT___GEN_316 = VL_RAND_RESET_I(24);
    __PVT__mac__DOT___GEN_317 = VL_RAND_RESET_I(24);
    __PVT__mac__DOT___GEN_318 = VL_RAND_RESET_I(24);
    __PVT__mac__DOT___GEN_319 = VL_RAND_RESET_I(24);
    __PVT__mac__DOT___GEN_320 = VL_RAND_RESET_I(24);
    __PVT__mac__DOT___GEN_321 = VL_RAND_RESET_I(24);
    __PVT__mac__DOT___GEN_322 = VL_RAND_RESET_I(24);
    __PVT__mac__DOT___GEN_323 = VL_RAND_RESET_I(24);
    __PVT__mac__DOT___GEN_324 = VL_RAND_RESET_I(24);
    __PVT__mac__DOT___GEN_325 = VL_RAND_RESET_I(24);
    __PVT__mac__DOT___GEN_326 = VL_RAND_RESET_I(24);
    __PVT__adder__DOT___exp_diff_T = VL_RAND_RESET_I(1);
    __PVT__adder__DOT__exp_diff = VL_RAND_RESET_I(8);
    __PVT__adder__DOT___io_out_result_sign_T_1 = VL_RAND_RESET_I(6);
    __PVT__adder__DOT___io_out_result_sign_T_4 = VL_RAND_RESET_I(6);
    __PVT__adder__DOT__addition = VL_RAND_RESET_I(7);
}

void VSystolicArray_HBFP_forTesting_HBFP_PE::_configure_coverage(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_configure_coverage\n"); );
    // Body
    if (false && vlSymsp && first) {}  // Prevent unused
}
