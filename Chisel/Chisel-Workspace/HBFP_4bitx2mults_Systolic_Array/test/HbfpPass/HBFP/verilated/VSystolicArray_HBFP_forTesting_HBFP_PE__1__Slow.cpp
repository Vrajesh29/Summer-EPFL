// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSystolicArray_HBFP_forTesting.h for the primary calling header

#include "VSystolicArray_HBFP_forTesting_HBFP_PE.h"
#include "VSystolicArray_HBFP_forTesting__Syms.h"

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_4__139(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_4__139\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_hor_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_hor_man_0))) 
                                                     * 
                                                     (0xfU 
                                                      & ((IData)(this->__PVT__mac__DOT__counter)
                                                          ? 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? 
                                                          (3U 
                                                           & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_0) 
                                                              >> 4U))
                                                           : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_0))
                                                          : 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? 
                                                          (0xfU 
                                                           & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_0))
                                                           : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_0))))));
    this->__PVT__mac__DOT__multiplier_2_io_out = (0xffU 
                                                  & (((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      (3U 
                                                       & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_hor_man_0) 
                                                          >> 4U))
                                                       : 0U) 
                                                     * 
                                                     (0xfU 
                                                      & ((IData)(this->__PVT__mac__DOT__counter)
                                                          ? 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? 
                                                          (3U 
                                                           & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_0) 
                                                              >> 4U))
                                                           : 0U)
                                                          : 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_0)
                                                           : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_hor_man_1))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_hor_man_1))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_1) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_1))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_1))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_1))))));
    this->__PVT__mac__DOT__multiplier_2_1_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_hor_man_1) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_1) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_1)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_hor_man_2))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_hor_man_2))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_2) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_2))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_2))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_2))))));
    this->__PVT__mac__DOT__multiplier_2_2_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_hor_man_2) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_2) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_2)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_hor_man_3))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_hor_man_3))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_3) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_3))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_3))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_3))))));
    this->__PVT__mac__DOT__multiplier_2_3_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_hor_man_3) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_3) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_3)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_4_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_hor_man_4))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_hor_man_4))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_4) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_4))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_4))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_4))))));
    this->__PVT__mac__DOT__multiplier_2_4_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_hor_man_4) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_4) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_4)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_5_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_hor_man_5))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_hor_man_5))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_5) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_5))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_5))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_5))))));
    this->__PVT__mac__DOT__multiplier_2_5_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_hor_man_5) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_5) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_5)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_6_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_hor_man_6))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_hor_man_6))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_6) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_6))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_6))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_6))))));
    this->__PVT__mac__DOT__multiplier_2_6_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_hor_man_6) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_6) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_6)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_7_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_hor_man_7))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_hor_man_7))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_7) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_7))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_7))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_7))))));
    this->__PVT__mac__DOT__multiplier_2_7_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_hor_man_7) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_7) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_7)
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

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_5__140(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_5__140\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_0))) 
                                                     * 
                                                     (0xfU 
                                                      & ((IData)(this->__PVT__mac__DOT__counter)
                                                          ? 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? 
                                                          (3U 
                                                           & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_0) 
                                                              >> 4U))
                                                           : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_0))
                                                          : 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? 
                                                          (0xfU 
                                                           & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_0))
                                                           : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_0))))));
    this->__PVT__mac__DOT__multiplier_2_io_out = (0xffU 
                                                  & (((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      (3U 
                                                       & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_0) 
                                                          >> 4U))
                                                       : 0U) 
                                                     * 
                                                     (0xfU 
                                                      & ((IData)(this->__PVT__mac__DOT__counter)
                                                          ? 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? 
                                                          (3U 
                                                           & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_0) 
                                                              >> 4U))
                                                           : 0U)
                                                          : 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_0)
                                                           : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_1))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_1))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_1) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_1))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_1))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_1))))));
    this->__PVT__mac__DOT__multiplier_2_1_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_1) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_1) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_1)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_2))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_2))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_2) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_2))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_2))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_2))))));
    this->__PVT__mac__DOT__multiplier_2_2_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_2) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_2) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_2)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_3))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_3))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_3) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_3))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_3))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_3))))));
    this->__PVT__mac__DOT__multiplier_2_3_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_3) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_3) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_3)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_4_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_4))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_4))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_4) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_4))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_4))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_4))))));
    this->__PVT__mac__DOT__multiplier_2_4_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_4) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_4) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_4)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_5_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_5))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_5))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_5) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_5))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_5))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_5))))));
    this->__PVT__mac__DOT__multiplier_2_5_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_5) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_5) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_5)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_6_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_6))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_6))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_6) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_6))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_6))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_6))))));
    this->__PVT__mac__DOT__multiplier_2_6_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_6) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_6) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_6)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_7_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_7))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_7))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_7) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_7))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_7))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_7))))));
    this->__PVT__mac__DOT__multiplier_2_7_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_7) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_7) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_7)
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

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_6__141(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_6__141\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_0))) 
                                                     * 
                                                     (0xfU 
                                                      & ((IData)(this->__PVT__mac__DOT__counter)
                                                          ? 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? 
                                                          (3U 
                                                           & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_0) 
                                                              >> 4U))
                                                           : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_0))
                                                          : 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? 
                                                          (0xfU 
                                                           & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_0))
                                                           : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_0))))));
    this->__PVT__mac__DOT__multiplier_2_io_out = (0xffU 
                                                  & (((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      (3U 
                                                       & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_0) 
                                                          >> 4U))
                                                       : 0U) 
                                                     * 
                                                     (0xfU 
                                                      & ((IData)(this->__PVT__mac__DOT__counter)
                                                          ? 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? 
                                                          (3U 
                                                           & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_0) 
                                                              >> 4U))
                                                           : 0U)
                                                          : 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_0)
                                                           : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_1))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_1))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_1) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_1))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_1))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_1))))));
    this->__PVT__mac__DOT__multiplier_2_1_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_1) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_1) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_1)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_2))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_2))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_2) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_2))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_2))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_2))))));
    this->__PVT__mac__DOT__multiplier_2_2_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_2) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_2) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_2)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_3))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_3))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_3) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_3))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_3))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_3))))));
    this->__PVT__mac__DOT__multiplier_2_3_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_3) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_3) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_3)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_4_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_4))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_4))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_4) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_4))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_4))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_4))))));
    this->__PVT__mac__DOT__multiplier_2_4_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_4) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_4) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_4)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_5_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_5))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_5))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_5) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_5))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_5))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_5))))));
    this->__PVT__mac__DOT__multiplier_2_5_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_5) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_5) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_5)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_6_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_6))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_6))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_6) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_6))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_6))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_6))))));
    this->__PVT__mac__DOT__multiplier_2_6_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_6) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_6) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_6)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_7_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_7))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_7))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_7) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_7))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_7))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_7))))));
    this->__PVT__mac__DOT__multiplier_2_7_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_7) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_7) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_7)
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

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_7__142(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_7__142\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_0))) 
                                                     * 
                                                     (0xfU 
                                                      & ((IData)(this->__PVT__mac__DOT__counter)
                                                          ? 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? 
                                                          (3U 
                                                           & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_0) 
                                                              >> 4U))
                                                           : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_0))
                                                          : 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? 
                                                          (0xfU 
                                                           & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_0))
                                                           : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_0))))));
    this->__PVT__mac__DOT__multiplier_2_io_out = (0xffU 
                                                  & (((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      (3U 
                                                       & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_0) 
                                                          >> 4U))
                                                       : 0U) 
                                                     * 
                                                     (0xfU 
                                                      & ((IData)(this->__PVT__mac__DOT__counter)
                                                          ? 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? 
                                                          (3U 
                                                           & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_0) 
                                                              >> 4U))
                                                           : 0U)
                                                          : 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_0)
                                                           : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_1))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_1))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_1) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_1))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_1))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_1))))));
    this->__PVT__mac__DOT__multiplier_2_1_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_1) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_1) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_1)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_2))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_2))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_2) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_2))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_2))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_2))))));
    this->__PVT__mac__DOT__multiplier_2_2_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_2) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_2) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_2)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_3))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_3))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_3) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_3))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_3))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_3))))));
    this->__PVT__mac__DOT__multiplier_2_3_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_3) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_3) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_3)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_4_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_4))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_4))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_4) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_4))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_4))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_4))))));
    this->__PVT__mac__DOT__multiplier_2_4_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_4) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_4) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_4)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_5_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_5))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_5))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_5) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_5))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_5))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_5))))));
    this->__PVT__mac__DOT__multiplier_2_5_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_5) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_5) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_5)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_6_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_6))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_6))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_6) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_6))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_6))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_6))))));
    this->__PVT__mac__DOT__multiplier_2_6_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_6) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_6) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_6)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_7_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_7))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_7))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_7) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_7))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_7))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_7))))));
    this->__PVT__mac__DOT__multiplier_2_7_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_7) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_7) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_7)
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

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0__185(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0__185\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_0))) 
                                                     * 
                                                     (0xfU 
                                                      & ((IData)(this->__PVT__mac__DOT__counter)
                                                          ? 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? 
                                                          (3U 
                                                           & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_0) 
                                                              >> 4U))
                                                           : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_0))
                                                          : 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? 
                                                          (0xfU 
                                                           & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_0))
                                                           : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_0))))));
    this->__PVT__mac__DOT__multiplier_2_io_out = (0xffU 
                                                  & (((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      (3U 
                                                       & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_0) 
                                                          >> 4U))
                                                       : 0U) 
                                                     * 
                                                     (0xfU 
                                                      & ((IData)(this->__PVT__mac__DOT__counter)
                                                          ? 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? 
                                                          (3U 
                                                           & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_0) 
                                                              >> 4U))
                                                           : 0U)
                                                          : 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_0)
                                                           : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_1))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_1))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_1) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_1))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_1))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_1))))));
    this->__PVT__mac__DOT__multiplier_2_1_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_1) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_1) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_1)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_2))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_2))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_2) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_2))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_2))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_2))))));
    this->__PVT__mac__DOT__multiplier_2_2_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_2) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_2) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_2)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_3))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_3))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_3) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_3))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_3))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_3))))));
    this->__PVT__mac__DOT__multiplier_2_3_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_3) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_3) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_3)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_4_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_4))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_4))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_4) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_4))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_4))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_4))))));
    this->__PVT__mac__DOT__multiplier_2_4_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_4) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_4) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_4)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_5_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_5))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_5))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_5) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_5))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_5))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_5))))));
    this->__PVT__mac__DOT__multiplier_2_5_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_5) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_5) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_5)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_6_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_6))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_6))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_6) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_6))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_6))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_6))))));
    this->__PVT__mac__DOT__multiplier_2_6_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_6) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_6) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_6)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_7_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_7))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_7))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_7) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_7))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_7))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_7))))));
    this->__PVT__mac__DOT__multiplier_2_7_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_7) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_7) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_7)
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

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1__143(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1__143\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_0))) 
                                                     * 
                                                     (0xfU 
                                                      & ((IData)(this->__PVT__mac__DOT__counter)
                                                          ? 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? 
                                                          (3U 
                                                           & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_0) 
                                                              >> 4U))
                                                           : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_0))
                                                          : 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? 
                                                          (0xfU 
                                                           & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_0))
                                                           : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_0))))));
    this->__PVT__mac__DOT__multiplier_2_io_out = (0xffU 
                                                  & (((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      (3U 
                                                       & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_0) 
                                                          >> 4U))
                                                       : 0U) 
                                                     * 
                                                     (0xfU 
                                                      & ((IData)(this->__PVT__mac__DOT__counter)
                                                          ? 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? 
                                                          (3U 
                                                           & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_0) 
                                                              >> 4U))
                                                           : 0U)
                                                          : 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_0)
                                                           : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_1))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_1))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_1) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_1))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_1))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_1))))));
    this->__PVT__mac__DOT__multiplier_2_1_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_1) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_1) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_1)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_2))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_2))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_2) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_2))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_2))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_2))))));
    this->__PVT__mac__DOT__multiplier_2_2_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_2) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_2) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_2)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_3))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_3))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_3) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_3))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_3))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_3))))));
    this->__PVT__mac__DOT__multiplier_2_3_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_3) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_3) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_3)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_4_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_4))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_4))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_4) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_4))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_4))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_4))))));
    this->__PVT__mac__DOT__multiplier_2_4_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_4) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_4) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_4)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_5_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_5))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_5))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_5) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_5))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_5))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_5))))));
    this->__PVT__mac__DOT__multiplier_2_5_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_5) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_5) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_5)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_6_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_6))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_6))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_6) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_6))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_6))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_6))))));
    this->__PVT__mac__DOT__multiplier_2_6_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_6) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_6) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_6)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_7_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_7))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_7))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_7) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_7))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_7))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_7))))));
    this->__PVT__mac__DOT__multiplier_2_7_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_7) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_7) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_7)
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

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2__144(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2__144\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_0))) 
                                                     * 
                                                     (0xfU 
                                                      & ((IData)(this->__PVT__mac__DOT__counter)
                                                          ? 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? 
                                                          (3U 
                                                           & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_0) 
                                                              >> 4U))
                                                           : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_0))
                                                          : 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? 
                                                          (0xfU 
                                                           & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_0))
                                                           : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_0))))));
    this->__PVT__mac__DOT__multiplier_2_io_out = (0xffU 
                                                  & (((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      (3U 
                                                       & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_0) 
                                                          >> 4U))
                                                       : 0U) 
                                                     * 
                                                     (0xfU 
                                                      & ((IData)(this->__PVT__mac__DOT__counter)
                                                          ? 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? 
                                                          (3U 
                                                           & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_0) 
                                                              >> 4U))
                                                           : 0U)
                                                          : 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_0)
                                                           : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_1))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_1))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_1) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_1))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_1))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_1))))));
    this->__PVT__mac__DOT__multiplier_2_1_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_1) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_1) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_1)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_2))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_2))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_2) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_2))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_2))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_2))))));
    this->__PVT__mac__DOT__multiplier_2_2_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_2) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_2) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_2)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_3))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_3))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_3) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_3))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_3))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_3))))));
    this->__PVT__mac__DOT__multiplier_2_3_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_3) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_3) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_3)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_4_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_4))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_4))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_4) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_4))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_4))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_4))))));
    this->__PVT__mac__DOT__multiplier_2_4_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_4) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_4) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_4)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_5_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_5))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_5))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_5) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_5))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_5))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_5))))));
    this->__PVT__mac__DOT__multiplier_2_5_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_5) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_5) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_5)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_6_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_6))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_6))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_6) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_6))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_6))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_6))))));
    this->__PVT__mac__DOT__multiplier_2_6_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_6) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_6) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_6)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_7_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_7))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_7))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_7) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_7))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_7))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_7))))));
    this->__PVT__mac__DOT__multiplier_2_7_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_7) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_7) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_7)
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

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3__145(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3__145\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_0))) 
                                                     * 
                                                     (0xfU 
                                                      & ((IData)(this->__PVT__mac__DOT__counter)
                                                          ? 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? 
                                                          (3U 
                                                           & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_0) 
                                                              >> 4U))
                                                           : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_0))
                                                          : 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? 
                                                          (0xfU 
                                                           & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_0))
                                                           : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_0))))));
    this->__PVT__mac__DOT__multiplier_2_io_out = (0xffU 
                                                  & (((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      (3U 
                                                       & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_0) 
                                                          >> 4U))
                                                       : 0U) 
                                                     * 
                                                     (0xfU 
                                                      & ((IData)(this->__PVT__mac__DOT__counter)
                                                          ? 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? 
                                                          (3U 
                                                           & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_0) 
                                                              >> 4U))
                                                           : 0U)
                                                          : 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_0)
                                                           : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_1))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_1))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_1) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_1))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_1))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_1))))));
    this->__PVT__mac__DOT__multiplier_2_1_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_1) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_1) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_1)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_2))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_2))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_2) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_2))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_2))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_2))))));
    this->__PVT__mac__DOT__multiplier_2_2_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_2) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_2) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_2)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_3))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_3))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_3) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_3))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_3))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_3))))));
    this->__PVT__mac__DOT__multiplier_2_3_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_3) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_3) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_3)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_4_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_4))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_4))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_4) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_4))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_4))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_4))))));
    this->__PVT__mac__DOT__multiplier_2_4_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_4) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_4) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_4)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_5_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_5))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_5))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_5) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_5))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_5))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_5))))));
    this->__PVT__mac__DOT__multiplier_2_5_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_5) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_5) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_5)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_6_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_6))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_6))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_6) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_6))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_6))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_6))))));
    this->__PVT__mac__DOT__multiplier_2_6_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_6) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_6) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_6)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_7_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_7))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_7))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_7) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_7))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_7))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_7))))));
    this->__PVT__mac__DOT__multiplier_2_7_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_7) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_7) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_7)
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

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_4__146(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_4__146\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_0))) 
                                                     * 
                                                     (0xfU 
                                                      & ((IData)(this->__PVT__mac__DOT__counter)
                                                          ? 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? 
                                                          (3U 
                                                           & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_0) 
                                                              >> 4U))
                                                           : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_0))
                                                          : 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? 
                                                          (0xfU 
                                                           & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_0))
                                                           : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_0))))));
    this->__PVT__mac__DOT__multiplier_2_io_out = (0xffU 
                                                  & (((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      (3U 
                                                       & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_0) 
                                                          >> 4U))
                                                       : 0U) 
                                                     * 
                                                     (0xfU 
                                                      & ((IData)(this->__PVT__mac__DOT__counter)
                                                          ? 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? 
                                                          (3U 
                                                           & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_0) 
                                                              >> 4U))
                                                           : 0U)
                                                          : 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_0)
                                                           : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_1))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_1))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_1) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_1))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_1))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_1))))));
    this->__PVT__mac__DOT__multiplier_2_1_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_1) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_1) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_1)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_2))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_2))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_2) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_2))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_2))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_2))))));
    this->__PVT__mac__DOT__multiplier_2_2_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_2) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_2) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_2)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_3))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_3))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_3) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_3))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_3))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_3))))));
    this->__PVT__mac__DOT__multiplier_2_3_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_3) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_3) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_3)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_4_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_4))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_4))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_4) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_4))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_4))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_4))))));
    this->__PVT__mac__DOT__multiplier_2_4_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_4) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_4) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_4)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_5_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_5))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_5))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_5) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_5))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_5))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_5))))));
    this->__PVT__mac__DOT__multiplier_2_5_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_5) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_5) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_5)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_6_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_6))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_6))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_6) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_6))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_6))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_6))))));
    this->__PVT__mac__DOT__multiplier_2_6_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_6) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_6) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_6)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_7_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_7))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_7))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_7) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_7))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_7))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_7))))));
    this->__PVT__mac__DOT__multiplier_2_7_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_7) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_7) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_7)
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

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_5__147(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_5__147\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_0))) 
                                                     * 
                                                     (0xfU 
                                                      & ((IData)(this->__PVT__mac__DOT__counter)
                                                          ? 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? 
                                                          (3U 
                                                           & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_0) 
                                                              >> 4U))
                                                           : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_0))
                                                          : 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? 
                                                          (0xfU 
                                                           & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_0))
                                                           : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_0))))));
    this->__PVT__mac__DOT__multiplier_2_io_out = (0xffU 
                                                  & (((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      (3U 
                                                       & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_0) 
                                                          >> 4U))
                                                       : 0U) 
                                                     * 
                                                     (0xfU 
                                                      & ((IData)(this->__PVT__mac__DOT__counter)
                                                          ? 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? 
                                                          (3U 
                                                           & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_0) 
                                                              >> 4U))
                                                           : 0U)
                                                          : 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_0)
                                                           : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_1))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_1))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_1) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_1))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_1))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_1))))));
    this->__PVT__mac__DOT__multiplier_2_1_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_1) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_1) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_1)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_2))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_2))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_2) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_2))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_2))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_2))))));
    this->__PVT__mac__DOT__multiplier_2_2_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_2) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_2) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_2)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_3))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_3))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_3) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_3))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_3))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_3))))));
    this->__PVT__mac__DOT__multiplier_2_3_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_3) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_3) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_3)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_4_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_4))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_4))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_4) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_4))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_4))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_4))))));
    this->__PVT__mac__DOT__multiplier_2_4_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_4) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_4) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_4)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_5_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_5))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_5))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_5) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_5))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_5))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_5))))));
    this->__PVT__mac__DOT__multiplier_2_5_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_5) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_5) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_5)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_6_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_6))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_6))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_6) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_6))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_6))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_6))))));
    this->__PVT__mac__DOT__multiplier_2_6_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_6) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_6) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_6)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_7_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_7))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_7))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_7) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_7))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_7))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_7))))));
    this->__PVT__mac__DOT__multiplier_2_7_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_7) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_7) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_7)
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

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_6__148(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_6__148\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_0))) 
                                                     * 
                                                     (0xfU 
                                                      & ((IData)(this->__PVT__mac__DOT__counter)
                                                          ? 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? 
                                                          (3U 
                                                           & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_0) 
                                                              >> 4U))
                                                           : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_0))
                                                          : 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? 
                                                          (0xfU 
                                                           & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_0))
                                                           : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_0))))));
    this->__PVT__mac__DOT__multiplier_2_io_out = (0xffU 
                                                  & (((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      (3U 
                                                       & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_0) 
                                                          >> 4U))
                                                       : 0U) 
                                                     * 
                                                     (0xfU 
                                                      & ((IData)(this->__PVT__mac__DOT__counter)
                                                          ? 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? 
                                                          (3U 
                                                           & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_0) 
                                                              >> 4U))
                                                           : 0U)
                                                          : 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_0)
                                                           : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_1))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_1))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_1) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_1))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_1))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_1))))));
    this->__PVT__mac__DOT__multiplier_2_1_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_1) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_1) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_1)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_2))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_2))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_2) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_2))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_2))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_2))))));
    this->__PVT__mac__DOT__multiplier_2_2_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_2) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_2) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_2)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_3))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_3))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_3) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_3))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_3))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_3))))));
    this->__PVT__mac__DOT__multiplier_2_3_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_3) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_3) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_3)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_4_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_4))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_4))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_4) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_4))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_4))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_4))))));
    this->__PVT__mac__DOT__multiplier_2_4_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_4) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_4) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_4)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_5_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_5))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_5))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_5) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_5))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_5))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_5))))));
    this->__PVT__mac__DOT__multiplier_2_5_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_5) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_5) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_5)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_6_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_6))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_6))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_6) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_6))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_6))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_6))))));
    this->__PVT__mac__DOT__multiplier_2_6_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_6) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_6) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_6)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_7_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_7))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_7))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_7) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_7))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_7))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_7))))));
    this->__PVT__mac__DOT__multiplier_2_7_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_7) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_7) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_7)
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

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_7__149(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_7__149\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_0))) 
                                                     * 
                                                     (0xfU 
                                                      & ((IData)(this->__PVT__mac__DOT__counter)
                                                          ? 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? 
                                                          (3U 
                                                           & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_0) 
                                                              >> 4U))
                                                           : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_0))
                                                          : 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? 
                                                          (0xfU 
                                                           & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_0))
                                                           : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_0))))));
    this->__PVT__mac__DOT__multiplier_2_io_out = (0xffU 
                                                  & (((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      (3U 
                                                       & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_0) 
                                                          >> 4U))
                                                       : 0U) 
                                                     * 
                                                     (0xfU 
                                                      & ((IData)(this->__PVT__mac__DOT__counter)
                                                          ? 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? 
                                                          (3U 
                                                           & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_0) 
                                                              >> 4U))
                                                           : 0U)
                                                          : 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_0)
                                                           : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_1))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_1))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_1) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_1))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_1))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_1))))));
    this->__PVT__mac__DOT__multiplier_2_1_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_1) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_1) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_1)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_2))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_2))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_2) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_2))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_2))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_2))))));
    this->__PVT__mac__DOT__multiplier_2_2_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_2) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_2) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_2)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_3))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_3))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_3) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_3))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_3))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_3))))));
    this->__PVT__mac__DOT__multiplier_2_3_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_3) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_3) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_3)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_4_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_4))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_4))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_4) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_4))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_4))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_4))))));
    this->__PVT__mac__DOT__multiplier_2_4_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_4) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_4) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_4)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_5_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_5))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_5))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_5) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_5))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_5))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_5))))));
    this->__PVT__mac__DOT__multiplier_2_5_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_5) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_5) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_5)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_6_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_6))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_6))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_6) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_6))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_6))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_6))))));
    this->__PVT__mac__DOT__multiplier_2_6_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_6) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_6) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_6)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_7_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_7))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_7))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_7) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_7))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_7))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_7))))));
    this->__PVT__mac__DOT__multiplier_2_7_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_7) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_7) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_7)
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

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_0__183(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_0__183\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_0))) 
                                                     * 
                                                     (0xfU 
                                                      & ((IData)(this->__PVT__mac__DOT__counter)
                                                          ? 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? 
                                                          (3U 
                                                           & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_0) 
                                                              >> 4U))
                                                           : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_0))
                                                          : 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? 
                                                          (0xfU 
                                                           & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_0))
                                                           : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_0))))));
    this->__PVT__mac__DOT__multiplier_2_io_out = (0xffU 
                                                  & (((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      (3U 
                                                       & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_0) 
                                                          >> 4U))
                                                       : 0U) 
                                                     * 
                                                     (0xfU 
                                                      & ((IData)(this->__PVT__mac__DOT__counter)
                                                          ? 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? 
                                                          (3U 
                                                           & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_0) 
                                                              >> 4U))
                                                           : 0U)
                                                          : 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_0)
                                                           : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_1))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_1))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_1) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_1))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_1))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_1))))));
    this->__PVT__mac__DOT__multiplier_2_1_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_1) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_1) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_1)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_2))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_2))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_2) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_2))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_2))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_2))))));
    this->__PVT__mac__DOT__multiplier_2_2_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_2) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_2) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_2)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_3))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_3))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_3) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_3))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_3))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_3))))));
    this->__PVT__mac__DOT__multiplier_2_3_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_3) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_3) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_3)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_4_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_4))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_4))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_4) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_4))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_4))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_4))))));
    this->__PVT__mac__DOT__multiplier_2_4_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_4) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_4) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_4)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_5_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_5))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_5))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_5) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_5))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_5))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_5))))));
    this->__PVT__mac__DOT__multiplier_2_5_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_5) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_5) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_5)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_6_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_6))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_6))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_6) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_6))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_6))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_6))))));
    this->__PVT__mac__DOT__multiplier_2_6_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_6) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_6) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_6)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_7_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_7))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_7))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_7) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_7))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_7))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_7))))));
    this->__PVT__mac__DOT__multiplier_2_7_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_7) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_7) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_7)
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

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_1__150(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_1__150\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_0))) 
                                                     * 
                                                     (0xfU 
                                                      & ((IData)(this->__PVT__mac__DOT__counter)
                                                          ? 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? 
                                                          (3U 
                                                           & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_0) 
                                                              >> 4U))
                                                           : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_0))
                                                          : 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? 
                                                          (0xfU 
                                                           & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_0))
                                                           : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_0))))));
    this->__PVT__mac__DOT__multiplier_2_io_out = (0xffU 
                                                  & (((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      (3U 
                                                       & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_0) 
                                                          >> 4U))
                                                       : 0U) 
                                                     * 
                                                     (0xfU 
                                                      & ((IData)(this->__PVT__mac__DOT__counter)
                                                          ? 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? 
                                                          (3U 
                                                           & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_0) 
                                                              >> 4U))
                                                           : 0U)
                                                          : 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_0)
                                                           : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_1))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_1))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_1) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_1))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_1))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_1))))));
    this->__PVT__mac__DOT__multiplier_2_1_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_1) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_1) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_1)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_2))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_2))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_2) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_2))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_2))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_2))))));
    this->__PVT__mac__DOT__multiplier_2_2_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_2) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_2) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_2)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_3))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_3))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_3) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_3))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_3))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_3))))));
    this->__PVT__mac__DOT__multiplier_2_3_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_3) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_3) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_3)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_4_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_4))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_4))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_4) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_4))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_4))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_4))))));
    this->__PVT__mac__DOT__multiplier_2_4_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_4) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_4) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_4)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_5_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_5))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_5))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_5) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_5))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_5))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_5))))));
    this->__PVT__mac__DOT__multiplier_2_5_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_5) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_5) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_5)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_6_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_6))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_6))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_6) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_6))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_6))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_6))))));
    this->__PVT__mac__DOT__multiplier_2_6_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_6) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_6) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_6)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_7_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_7))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_7))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_7) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_7))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_7))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_7))))));
    this->__PVT__mac__DOT__multiplier_2_7_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_7) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_7) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_7)
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

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_2__151(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_2__151\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_0))) 
                                                     * 
                                                     (0xfU 
                                                      & ((IData)(this->__PVT__mac__DOT__counter)
                                                          ? 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? 
                                                          (3U 
                                                           & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_0) 
                                                              >> 4U))
                                                           : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_0))
                                                          : 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? 
                                                          (0xfU 
                                                           & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_0))
                                                           : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_0))))));
    this->__PVT__mac__DOT__multiplier_2_io_out = (0xffU 
                                                  & (((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      (3U 
                                                       & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_0) 
                                                          >> 4U))
                                                       : 0U) 
                                                     * 
                                                     (0xfU 
                                                      & ((IData)(this->__PVT__mac__DOT__counter)
                                                          ? 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? 
                                                          (3U 
                                                           & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_0) 
                                                              >> 4U))
                                                           : 0U)
                                                          : 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_0)
                                                           : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_1))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_1))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_1) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_1))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_1))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_1))))));
    this->__PVT__mac__DOT__multiplier_2_1_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_1) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_1) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_1)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_2))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_2))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_2) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_2))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_2))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_2))))));
    this->__PVT__mac__DOT__multiplier_2_2_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_2) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_2) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_2)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_3))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_3))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_3) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_3))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_3))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_3))))));
    this->__PVT__mac__DOT__multiplier_2_3_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_3) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_3) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_3)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_4_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_4))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_4))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_4) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_4))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_4))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_4))))));
    this->__PVT__mac__DOT__multiplier_2_4_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_4) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_4) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_4)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_5_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_5))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_5))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_5) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_5))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_5))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_5))))));
    this->__PVT__mac__DOT__multiplier_2_5_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_5) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_5) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_5)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_6_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_6))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_6))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_6) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_6))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_6))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_6))))));
    this->__PVT__mac__DOT__multiplier_2_6_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_6) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_6) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_6)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_7_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_7))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_7))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_7) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_7))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_7))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_7))))));
    this->__PVT__mac__DOT__multiplier_2_7_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_7) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_7) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_7)
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

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_3__152(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_3__152\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_0))) 
                                                     * 
                                                     (0xfU 
                                                      & ((IData)(this->__PVT__mac__DOT__counter)
                                                          ? 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? 
                                                          (3U 
                                                           & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_0) 
                                                              >> 4U))
                                                           : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_0))
                                                          : 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? 
                                                          (0xfU 
                                                           & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_0))
                                                           : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_0))))));
    this->__PVT__mac__DOT__multiplier_2_io_out = (0xffU 
                                                  & (((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      (3U 
                                                       & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_0) 
                                                          >> 4U))
                                                       : 0U) 
                                                     * 
                                                     (0xfU 
                                                      & ((IData)(this->__PVT__mac__DOT__counter)
                                                          ? 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? 
                                                          (3U 
                                                           & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_0) 
                                                              >> 4U))
                                                           : 0U)
                                                          : 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_0)
                                                           : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_1))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_1))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_1) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_1))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_1))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_1))))));
    this->__PVT__mac__DOT__multiplier_2_1_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_1) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_1) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_1)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_2))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_2))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_2) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_2))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_2))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_2))))));
    this->__PVT__mac__DOT__multiplier_2_2_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_2) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_2) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_2)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_3))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_3))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_3) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_3))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_3))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_3))))));
    this->__PVT__mac__DOT__multiplier_2_3_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_3) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_3) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_3)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_4_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_4))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_4))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_4) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_4))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_4))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_4))))));
    this->__PVT__mac__DOT__multiplier_2_4_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_4) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_4) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_4)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_5_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_5))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_5))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_5) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_5))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_5))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_5))))));
    this->__PVT__mac__DOT__multiplier_2_5_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_5) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_5) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_5)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_6_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_6))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_6))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_6) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_6))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_6))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_6))))));
    this->__PVT__mac__DOT__multiplier_2_6_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_6) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_6) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_6)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_7_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_7))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_7))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_7) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_7))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_7))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_7))))));
    this->__PVT__mac__DOT__multiplier_2_7_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_7) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_7) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_7)
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

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_4__153(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_4__153\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_0))) 
                                                     * 
                                                     (0xfU 
                                                      & ((IData)(this->__PVT__mac__DOT__counter)
                                                          ? 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? 
                                                          (3U 
                                                           & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_0) 
                                                              >> 4U))
                                                           : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_0))
                                                          : 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? 
                                                          (0xfU 
                                                           & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_0))
                                                           : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_0))))));
    this->__PVT__mac__DOT__multiplier_2_io_out = (0xffU 
                                                  & (((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      (3U 
                                                       & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_0) 
                                                          >> 4U))
                                                       : 0U) 
                                                     * 
                                                     (0xfU 
                                                      & ((IData)(this->__PVT__mac__DOT__counter)
                                                          ? 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? 
                                                          (3U 
                                                           & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_0) 
                                                              >> 4U))
                                                           : 0U)
                                                          : 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_0)
                                                           : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_1))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_1))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_1) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_1))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_1))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_1))))));
    this->__PVT__mac__DOT__multiplier_2_1_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_1) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_1) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_1)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_2))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_2))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_2) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_2))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_2))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_2))))));
    this->__PVT__mac__DOT__multiplier_2_2_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_2) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_2) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_2)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_3))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_3))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_3) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_3))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_3))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_3))))));
    this->__PVT__mac__DOT__multiplier_2_3_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_3) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_3) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_3)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_4_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_4))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_4))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_4) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_4))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_4))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_4))))));
    this->__PVT__mac__DOT__multiplier_2_4_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_4) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_4) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_4)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_5_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_5))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_5))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_5) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_5))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_5))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_5))))));
    this->__PVT__mac__DOT__multiplier_2_5_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_5) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_5) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_5)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_6_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_6))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_6))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_6) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_6))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_6))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_6))))));
    this->__PVT__mac__DOT__multiplier_2_6_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_6) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_6) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_6)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_7_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_7))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_7))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_7) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_7))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_7))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_7))))));
    this->__PVT__mac__DOT__multiplier_2_7_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_7) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_7) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_7)
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

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_5__154(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_5__154\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_0))) 
                                                     * 
                                                     (0xfU 
                                                      & ((IData)(this->__PVT__mac__DOT__counter)
                                                          ? 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? 
                                                          (3U 
                                                           & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_0) 
                                                              >> 4U))
                                                           : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_0))
                                                          : 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? 
                                                          (0xfU 
                                                           & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_0))
                                                           : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_0))))));
    this->__PVT__mac__DOT__multiplier_2_io_out = (0xffU 
                                                  & (((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      (3U 
                                                       & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_0) 
                                                          >> 4U))
                                                       : 0U) 
                                                     * 
                                                     (0xfU 
                                                      & ((IData)(this->__PVT__mac__DOT__counter)
                                                          ? 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? 
                                                          (3U 
                                                           & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_0) 
                                                              >> 4U))
                                                           : 0U)
                                                          : 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_0)
                                                           : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_1))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_1))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_1) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_1))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_1))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_1))))));
    this->__PVT__mac__DOT__multiplier_2_1_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_1) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_1) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_1)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_2))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_2))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_2) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_2))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_2))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_2))))));
    this->__PVT__mac__DOT__multiplier_2_2_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_2) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_2) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_2)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_3))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_3))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_3) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_3))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_3))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_3))))));
    this->__PVT__mac__DOT__multiplier_2_3_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_3) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_3) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_3)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_4_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_4))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_4))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_4) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_4))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_4))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_4))))));
    this->__PVT__mac__DOT__multiplier_2_4_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_4) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_4) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_4)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_5_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_5))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_5))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_5) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_5))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_5))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_5))))));
    this->__PVT__mac__DOT__multiplier_2_5_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_5) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_5) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_5)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_6_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_6))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_6))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_6) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_6))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_6))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_6))))));
    this->__PVT__mac__DOT__multiplier_2_6_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_6) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_6) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_6)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_7_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_7))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_7))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_7) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_7))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_7))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_7))))));
    this->__PVT__mac__DOT__multiplier_2_7_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_7) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_7) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_7)
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

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_6__155(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_6__155\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_0))) 
                                                     * 
                                                     (0xfU 
                                                      & ((IData)(this->__PVT__mac__DOT__counter)
                                                          ? 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? 
                                                          (3U 
                                                           & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_0) 
                                                              >> 4U))
                                                           : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_0))
                                                          : 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? 
                                                          (0xfU 
                                                           & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_0))
                                                           : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_0))))));
    this->__PVT__mac__DOT__multiplier_2_io_out = (0xffU 
                                                  & (((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      (3U 
                                                       & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_0) 
                                                          >> 4U))
                                                       : 0U) 
                                                     * 
                                                     (0xfU 
                                                      & ((IData)(this->__PVT__mac__DOT__counter)
                                                          ? 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? 
                                                          (3U 
                                                           & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_0) 
                                                              >> 4U))
                                                           : 0U)
                                                          : 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_0)
                                                           : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_1))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_1))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_1) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_1))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_1))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_1))))));
    this->__PVT__mac__DOT__multiplier_2_1_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_1) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_1) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_1)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_2))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_2))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_2) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_2))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_2))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_2))))));
    this->__PVT__mac__DOT__multiplier_2_2_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_2) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_2) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_2)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_3))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_3))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_3) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_3))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_3))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_3))))));
    this->__PVT__mac__DOT__multiplier_2_3_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_3) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_3) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_3)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_4_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_4))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_4))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_4) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_4))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_4))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_4))))));
    this->__PVT__mac__DOT__multiplier_2_4_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_4) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_4) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_4)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_5_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_5))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_5))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_5) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_5))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_5))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_5))))));
    this->__PVT__mac__DOT__multiplier_2_5_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_5) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_5) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_5)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_6_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_6))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_6))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_6) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_6))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_6))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_6))))));
    this->__PVT__mac__DOT__multiplier_2_6_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_6) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_6) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_6)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_7_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_7))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_7))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_7) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_7))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_7))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_7))))));
    this->__PVT__mac__DOT__multiplier_2_7_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_7) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_7) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_7)
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

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_7__156(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_7__156\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_0))) 
                                                     * 
                                                     (0xfU 
                                                      & ((IData)(this->__PVT__mac__DOT__counter)
                                                          ? 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? 
                                                          (3U 
                                                           & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_0) 
                                                              >> 4U))
                                                           : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_0))
                                                          : 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? 
                                                          (0xfU 
                                                           & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_0))
                                                           : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_0))))));
    this->__PVT__mac__DOT__multiplier_2_io_out = (0xffU 
                                                  & (((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      (3U 
                                                       & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_0) 
                                                          >> 4U))
                                                       : 0U) 
                                                     * 
                                                     (0xfU 
                                                      & ((IData)(this->__PVT__mac__DOT__counter)
                                                          ? 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? 
                                                          (3U 
                                                           & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_0) 
                                                              >> 4U))
                                                           : 0U)
                                                          : 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_0)
                                                           : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_1))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_1))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_1) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_1))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_1))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_1))))));
    this->__PVT__mac__DOT__multiplier_2_1_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_1) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_1) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_1)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_2))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_2))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_2) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_2))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_2))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_2))))));
    this->__PVT__mac__DOT__multiplier_2_2_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_2) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_2) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_2)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_3))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_3))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_3) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_3))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_3))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_3))))));
    this->__PVT__mac__DOT__multiplier_2_3_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_3) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_3) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_3)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_4_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_4))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_4))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_4) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_4))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_4))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_4))))));
    this->__PVT__mac__DOT__multiplier_2_4_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_4) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_4) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_4)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_5_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_5))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_5))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_5) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_5))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_5))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_5))))));
    this->__PVT__mac__DOT__multiplier_2_5_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_5) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_5) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_5)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_6_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_6))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_6))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_6) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_6))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_6))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_6))))));
    this->__PVT__mac__DOT__multiplier_2_6_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_6) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_6) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_6)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_7_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_7))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_7))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_7) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_7))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_7))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_7))))));
    this->__PVT__mac__DOT__multiplier_2_7_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_7) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_7) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_7)
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

void VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_0__178(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_0__178\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_hor_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_hor_man_0))) 
                                                     * 
                                                     (0xfU 
                                                      & ((IData)(this->__PVT__mac__DOT__counter)
                                                          ? 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? 
                                                          (3U 
                                                           & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_0) 
                                                              >> 4U))
                                                           : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_0))
                                                          : 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? 
                                                          (0xfU 
                                                           & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_0))
                                                           : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_0))))));
    this->__PVT__mac__DOT__multiplier_2_io_out = (0xffU 
                                                  & (((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      (3U 
                                                       & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_hor_man_0) 
                                                          >> 4U))
                                                       : 0U) 
                                                     * 
                                                     (0xfU 
                                                      & ((IData)(this->__PVT__mac__DOT__counter)
                                                          ? 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? 
                                                          (3U 
                                                           & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_0) 
                                                              >> 4U))
                                                           : 0U)
                                                          : 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_0)
                                                           : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_hor_man_1))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_hor_man_1))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_1) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_1))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_1))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_1))))));
    this->__PVT__mac__DOT__multiplier_2_1_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_hor_man_1) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_1) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_1)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_hor_man_2))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_hor_man_2))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_2) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_2))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_2))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_2))))));
    this->__PVT__mac__DOT__multiplier_2_2_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_hor_man_2) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_2) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_2)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_hor_man_3))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_hor_man_3))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_3) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_3))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_3))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_3))))));
    this->__PVT__mac__DOT__multiplier_2_3_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_hor_man_3) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_3) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_3)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_4_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_hor_man_4))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_hor_man_4))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_4) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_4))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_4))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_4))))));
    this->__PVT__mac__DOT__multiplier_2_4_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_hor_man_4) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_4) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_4)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_5_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_hor_man_5))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_hor_man_5))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_5) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_5))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_5))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_5))))));
    this->__PVT__mac__DOT__multiplier_2_5_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_hor_man_5) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_5) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_5)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_6_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_hor_man_6))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_hor_man_6))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_6) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_6))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_6))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_6))))));
    this->__PVT__mac__DOT__multiplier_2_6_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_hor_man_6) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_6) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_6)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_7_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_hor_man_7))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_hor_man_7))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_7) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_7))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_7))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_7))))));
    this->__PVT__mac__DOT__multiplier_2_7_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_hor_man_7) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_7) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_7)
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
