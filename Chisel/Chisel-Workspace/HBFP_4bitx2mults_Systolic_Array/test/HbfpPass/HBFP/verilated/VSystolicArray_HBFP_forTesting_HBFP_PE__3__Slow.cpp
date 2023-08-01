// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSystolicArray_HBFP_forTesting.h for the primary calling header

#include "VSystolicArray_HBFP_forTesting_HBFP_PE.h"
#include "VSystolicArray_HBFP_forTesting__Syms.h"

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_6__176(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_6__176\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_hor_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_hor_man_0))) 
                                                     * 
                                                     (0xfU 
                                                      & ((IData)(this->__PVT__mac__DOT__counter)
                                                          ? 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? 
                                                          (3U 
                                                           & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_0) 
                                                              >> 4U))
                                                           : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_0))
                                                          : 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? 
                                                          (0xfU 
                                                           & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_0))
                                                           : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_0))))));
    this->__PVT__mac__DOT__multiplier_2_io_out = (0xffU 
                                                  & (((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      (3U 
                                                       & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_hor_man_0) 
                                                          >> 4U))
                                                       : 0U) 
                                                     * 
                                                     (0xfU 
                                                      & ((IData)(this->__PVT__mac__DOT__counter)
                                                          ? 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? 
                                                          (3U 
                                                           & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_0) 
                                                              >> 4U))
                                                           : 0U)
                                                          : 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_0)
                                                           : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_hor_man_1))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_hor_man_1))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_1) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_1))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_1))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_1))))));
    this->__PVT__mac__DOT__multiplier_2_1_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_hor_man_1) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_1) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_1)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_hor_man_2))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_hor_man_2))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_2) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_2))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_2))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_2))))));
    this->__PVT__mac__DOT__multiplier_2_2_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_hor_man_2) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_2) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_2)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_hor_man_3))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_hor_man_3))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_3) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_3))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_3))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_3))))));
    this->__PVT__mac__DOT__multiplier_2_3_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_hor_man_3) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_3) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_3)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_4_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_hor_man_4))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_hor_man_4))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_4) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_4))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_4))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_4))))));
    this->__PVT__mac__DOT__multiplier_2_4_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_hor_man_4) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_4) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_4)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_5_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_hor_man_5))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_hor_man_5))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_5) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_5))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_5))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_5))))));
    this->__PVT__mac__DOT__multiplier_2_5_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_hor_man_5) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_5) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_5)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_6_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_hor_man_6))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_hor_man_6))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_6) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_6))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_6))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_6))))));
    this->__PVT__mac__DOT__multiplier_2_6_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_hor_man_6) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_6) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_6)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_7_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_hor_man_7))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_hor_man_7))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_7) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_7))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_7))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_7))))));
    this->__PVT__mac__DOT__multiplier_2_7_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_hor_man_7) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_7) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_6_io_in_ver_man_7)
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
    if (vlTOPp->reset) {
        this->__PVT__mac__DOT___GEN_159 = 0U;
        this->__PVT__mac__DOT___GEN_160 = 0U;
        this->__PVT__mac__DOT___GEN_161 = 0U;
        this->__PVT__mac__DOT___GEN_162 = 0U;
        this->__PVT__mac__DOT___GEN_163 = 0U;
        this->__PVT__mac__DOT___GEN_164 = 0U;
        this->__PVT__mac__DOT___GEN_165 = 0U;
        this->__PVT__mac__DOT___GEN_166 = 0U;
    } else {
        this->__PVT__mac__DOT___GEN_159 = (0xffffffU 
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
        this->__PVT__mac__DOT___GEN_160 = (0xffffffU 
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
        this->__PVT__mac__DOT___GEN_161 = (0xffffffU 
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
        this->__PVT__mac__DOT___GEN_162 = (0xffffffU 
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
        this->__PVT__mac__DOT___GEN_163 = (0xffffffU 
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
        this->__PVT__mac__DOT___GEN_164 = (0xffffffU 
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
        this->__PVT__mac__DOT___GEN_165 = (0xffffffU 
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
        this->__PVT__mac__DOT___GEN_166 = (0xffffffU 
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
    }
}

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_7__177(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_7__177\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_hor_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_hor_man_0))) 
                                                     * 
                                                     (0xfU 
                                                      & ((IData)(this->__PVT__mac__DOT__counter)
                                                          ? 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? 
                                                          (3U 
                                                           & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_0) 
                                                              >> 4U))
                                                           : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_0))
                                                          : 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? 
                                                          (0xfU 
                                                           & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_0))
                                                           : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_0))))));
    this->__PVT__mac__DOT__multiplier_2_io_out = (0xffU 
                                                  & (((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      (3U 
                                                       & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_hor_man_0) 
                                                          >> 4U))
                                                       : 0U) 
                                                     * 
                                                     (0xfU 
                                                      & ((IData)(this->__PVT__mac__DOT__counter)
                                                          ? 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? 
                                                          (3U 
                                                           & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_0) 
                                                              >> 4U))
                                                           : 0U)
                                                          : 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_0)
                                                           : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_hor_man_1))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_hor_man_1))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_1) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_1))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_1))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_1))))));
    this->__PVT__mac__DOT__multiplier_2_1_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_hor_man_1) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_1) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_1)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_hor_man_2))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_hor_man_2))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_2) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_2))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_2))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_2))))));
    this->__PVT__mac__DOT__multiplier_2_2_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_hor_man_2) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_2) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_2)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_hor_man_3))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_hor_man_3))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_3) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_3))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_3))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_3))))));
    this->__PVT__mac__DOT__multiplier_2_3_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_hor_man_3) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_3) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_3)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_4_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_hor_man_4))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_hor_man_4))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_4) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_4))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_4))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_4))))));
    this->__PVT__mac__DOT__multiplier_2_4_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_hor_man_4) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_4) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_4)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_5_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_hor_man_5))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_hor_man_5))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_5) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_5))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_5))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_5))))));
    this->__PVT__mac__DOT__multiplier_2_5_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_hor_man_5) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_5) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_5)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_6_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_hor_man_6))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_hor_man_6))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_6) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_6))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_6))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_6))))));
    this->__PVT__mac__DOT__multiplier_2_6_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_hor_man_6) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_6) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_6)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_7_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_hor_man_7))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_hor_man_7))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_7) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_7))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_7))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_7))))));
    this->__PVT__mac__DOT__multiplier_2_7_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_hor_man_7) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_7) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_7_io_in_ver_man_7)
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
    if (vlTOPp->reset) {
        this->__PVT__mac__DOT___GEN_159 = 0U;
        this->__PVT__mac__DOT___GEN_160 = 0U;
        this->__PVT__mac__DOT___GEN_161 = 0U;
        this->__PVT__mac__DOT___GEN_162 = 0U;
        this->__PVT__mac__DOT___GEN_163 = 0U;
        this->__PVT__mac__DOT___GEN_164 = 0U;
        this->__PVT__mac__DOT___GEN_165 = 0U;
        this->__PVT__mac__DOT___GEN_166 = 0U;
    } else {
        this->__PVT__mac__DOT___GEN_159 = (0xffffffU 
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
        this->__PVT__mac__DOT___GEN_160 = (0xffffffU 
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
        this->__PVT__mac__DOT___GEN_161 = (0xffffffU 
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
        this->__PVT__mac__DOT___GEN_162 = (0xffffffU 
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
        this->__PVT__mac__DOT___GEN_163 = (0xffffffU 
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
        this->__PVT__mac__DOT___GEN_164 = (0xffffffU 
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
        this->__PVT__mac__DOT___GEN_165 = (0xffffffU 
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
        this->__PVT__mac__DOT___GEN_166 = (0xffffffU 
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
    io_in_hor_man_0 = VL_RAND_RESET_I(6);
    io_in_hor_man_1 = VL_RAND_RESET_I(6);
    io_in_hor_man_2 = VL_RAND_RESET_I(6);
    io_in_hor_man_3 = VL_RAND_RESET_I(6);
    io_in_hor_man_4 = VL_RAND_RESET_I(6);
    io_in_hor_man_5 = VL_RAND_RESET_I(6);
    io_in_hor_man_6 = VL_RAND_RESET_I(6);
    io_in_hor_man_7 = VL_RAND_RESET_I(6);
    io_in_hor_exp = VL_RAND_RESET_I(8);
    io_in_ver_sign_0 = VL_RAND_RESET_I(1);
    io_in_ver_sign_1 = VL_RAND_RESET_I(1);
    io_in_ver_sign_2 = VL_RAND_RESET_I(1);
    io_in_ver_sign_3 = VL_RAND_RESET_I(1);
    io_in_ver_sign_4 = VL_RAND_RESET_I(1);
    io_in_ver_sign_5 = VL_RAND_RESET_I(1);
    io_in_ver_sign_6 = VL_RAND_RESET_I(1);
    io_in_ver_sign_7 = VL_RAND_RESET_I(1);
    io_in_ver_man_0 = VL_RAND_RESET_I(6);
    io_in_ver_man_1 = VL_RAND_RESET_I(6);
    io_in_ver_man_2 = VL_RAND_RESET_I(6);
    io_in_ver_man_3 = VL_RAND_RESET_I(6);
    io_in_ver_man_4 = VL_RAND_RESET_I(6);
    io_in_ver_man_5 = VL_RAND_RESET_I(6);
    io_in_ver_man_6 = VL_RAND_RESET_I(6);
    io_in_ver_man_7 = VL_RAND_RESET_I(6);
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
    io_out_hor_man_0 = VL_RAND_RESET_I(6);
    io_out_hor_man_1 = VL_RAND_RESET_I(6);
    io_out_hor_man_2 = VL_RAND_RESET_I(6);
    io_out_hor_man_3 = VL_RAND_RESET_I(6);
    io_out_hor_man_4 = VL_RAND_RESET_I(6);
    io_out_hor_man_5 = VL_RAND_RESET_I(6);
    io_out_hor_man_6 = VL_RAND_RESET_I(6);
    io_out_hor_man_7 = VL_RAND_RESET_I(6);
    io_out_hor_exp = VL_RAND_RESET_I(8);
    io_out_ver_sign_0 = VL_RAND_RESET_I(1);
    io_out_ver_sign_1 = VL_RAND_RESET_I(1);
    io_out_ver_sign_2 = VL_RAND_RESET_I(1);
    io_out_ver_sign_3 = VL_RAND_RESET_I(1);
    io_out_ver_sign_4 = VL_RAND_RESET_I(1);
    io_out_ver_sign_5 = VL_RAND_RESET_I(1);
    io_out_ver_sign_6 = VL_RAND_RESET_I(1);
    io_out_ver_sign_7 = VL_RAND_RESET_I(1);
    io_out_ver_man_0 = VL_RAND_RESET_I(6);
    io_out_ver_man_1 = VL_RAND_RESET_I(6);
    io_out_ver_man_2 = VL_RAND_RESET_I(6);
    io_out_ver_man_3 = VL_RAND_RESET_I(6);
    io_out_ver_man_4 = VL_RAND_RESET_I(6);
    io_out_ver_man_5 = VL_RAND_RESET_I(6);
    io_out_ver_man_6 = VL_RAND_RESET_I(6);
    io_out_ver_man_7 = VL_RAND_RESET_I(6);
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
    __PVT__mac__DOT__two_complement_buffer_0 = VL_RAND_RESET_I(7);
    __PVT__mac__DOT__two_complement_buffer_1 = VL_RAND_RESET_I(7);
    __PVT__mac__DOT__two_complement_buffer_2 = VL_RAND_RESET_I(7);
    __PVT__mac__DOT__two_complement_buffer_3 = VL_RAND_RESET_I(7);
    __PVT__mac__DOT__two_complement_buffer_4 = VL_RAND_RESET_I(7);
    __PVT__mac__DOT__two_complement_buffer_5 = VL_RAND_RESET_I(7);
    __PVT__mac__DOT__two_complement_buffer_6 = VL_RAND_RESET_I(7);
    __PVT__mac__DOT__two_complement_buffer_7 = VL_RAND_RESET_I(7);
    __PVT__mac__DOT__signs_0 = VL_RAND_RESET_I(1);
    __PVT__mac__DOT__signs_1 = VL_RAND_RESET_I(1);
    __PVT__mac__DOT__signs_2 = VL_RAND_RESET_I(1);
    __PVT__mac__DOT__signs_3 = VL_RAND_RESET_I(1);
    __PVT__mac__DOT__signs_4 = VL_RAND_RESET_I(1);
    __PVT__mac__DOT__signs_5 = VL_RAND_RESET_I(1);
    __PVT__mac__DOT__signs_6 = VL_RAND_RESET_I(1);
    __PVT__mac__DOT__signs_7 = VL_RAND_RESET_I(1);
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
    __PVT__mac__DOT___GEN_61 = VL_RAND_RESET_I(1);
    __PVT__mac__DOT__sum = VL_RAND_RESET_I(14);
    __PVT__mac__DOT__acc_hbfp = VL_RAND_RESET_I(7);
    __PVT__mac__DOT___GEN_159 = VL_RAND_RESET_I(24);
    __PVT__mac__DOT___GEN_160 = VL_RAND_RESET_I(24);
    __PVT__mac__DOT___GEN_161 = VL_RAND_RESET_I(24);
    __PVT__mac__DOT___GEN_162 = VL_RAND_RESET_I(24);
    __PVT__mac__DOT___GEN_163 = VL_RAND_RESET_I(24);
    __PVT__mac__DOT___GEN_164 = VL_RAND_RESET_I(24);
    __PVT__mac__DOT___GEN_165 = VL_RAND_RESET_I(24);
    __PVT__mac__DOT___GEN_166 = VL_RAND_RESET_I(24);
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
