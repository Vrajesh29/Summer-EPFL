// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSystolicArray_HBFP_forTesting.h for the primary calling header

#include "VSystolicArray_HBFP_forTesting_HBFP_PE.h"
#include "VSystolicArray_HBFP_forTesting__Syms.h"

VL_INLINE_OPT void VSystolicArray_HBFP_forTesting_HBFP_PE::_combo__TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_1__201(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_combo__TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_1__201\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->io_in_flag) {
        this->__PVT__adder_io_in_b_man = this->__PVT__adder_io_in_b_r_man;
        this->__PVT__adder_io_in_b_exp = this->__PVT__adder_io_in_b_r_exp;
        this->__PVT__adder_io_in_b_sign = this->__PVT__adder_io_in_b_r_sign;
        this->__PVT__mac_io_out_result_man = (0x3fU 
                                              & (IData)(this->__PVT__mac__DOT__acc_hbfp));
    } else {
        this->__PVT__adder_io_in_b_man = this->__PVT__result_buffer_man;
        this->__PVT__adder_io_in_b_exp = this->__PVT__result_buffer_exp;
        this->__PVT__adder_io_in_b_sign = this->__PVT__result_buffer_sign;
        this->__PVT__mac_io_out_result_man = (0x3fU 
                                              & ((0xfU 
                                                  < 
                                                  (0x3fU 
                                                   & (IData)(this->__PVT__mac__DOT__acc_hbfp)))
                                                  ? 0xfU
                                                  : (IData)(this->__PVT__mac__DOT__acc_hbfp)));
    }
    this->__PVT__mac__DOT__multiplier_1_4_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_man_4))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_man_4))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_4) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_4))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_4))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_4))))));
    this->__PVT__mac__DOT__multiplier_2_4_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_man_4) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_4) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_4)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_7_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_man_7))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_man_7))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_7) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_7))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_7))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_7))))));
    this->__PVT__mac__DOT__multiplier_2_7_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_man_7) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_7) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_7)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_man_0))) 
                                                     * 
                                                     (0xfU 
                                                      & ((IData)(this->__PVT__mac__DOT__counter)
                                                          ? 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? 
                                                          (3U 
                                                           & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_0) 
                                                              >> 4U))
                                                           : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_0))
                                                          : 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? 
                                                          (0xfU 
                                                           & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_0))
                                                           : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_0))))));
    this->__PVT__mac__DOT__multiplier_2_io_out = (0xffU 
                                                  & (((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      (3U 
                                                       & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_man_0) 
                                                          >> 4U))
                                                       : 0U) 
                                                     * 
                                                     (0xfU 
                                                      & ((IData)(this->__PVT__mac__DOT__counter)
                                                          ? 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? 
                                                          (3U 
                                                           & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_0) 
                                                              >> 4U))
                                                           : 0U)
                                                          : 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_0)
                                                           : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_man_1))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_man_1))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_1) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_1))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_1))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_1))))));
    this->__PVT__mac__DOT__multiplier_2_1_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_man_1) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_1) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_1)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_man_2))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_man_2))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_2) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_2))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_2))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_2))))));
    this->__PVT__mac__DOT__multiplier_2_2_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_man_2) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_2) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_2)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_5_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_man_5))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_man_5))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_5) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_5))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_5))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_5))))));
    this->__PVT__mac__DOT__multiplier_2_5_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_man_5) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_5) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_5)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_man_3))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_man_3))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_3) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_3))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_3))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_3))))));
    this->__PVT__mac__DOT__multiplier_2_3_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_man_3) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_3) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_3)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_6_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_man_6))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_man_6))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_6) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_6))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_6))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_6))))));
    this->__PVT__mac__DOT__multiplier_2_6_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_man_6) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_6) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_6)
                                                    : 0U)))));
    this->__PVT__adder__DOT___exp_diff_T = ((0xffU 
                                             & (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)) 
                                            > (IData)(this->__PVT__adder_io_in_b_exp));
    this->__PVT__adder__DOT__exp_diff = (0xffU & ((
                                                   (0xffU 
                                                    & (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)) 
                                                   > (IData)(this->__PVT__adder_io_in_b_exp))
                                                   ? 
                                                  ((IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5) 
                                                   - (IData)(this->__PVT__adder_io_in_b_exp))
                                                   : 
                                                  ((IData)(this->__PVT__adder_io_in_b_exp) 
                                                   - (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5))));
    this->__PVT__mac__DOT___partial_result_T_41 = (0xffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_4_io_out) 
                                                      + 
                                                      ((IData)(this->__PVT__mac__DOT__multiplier_2_4_io_out) 
                                                       << 4U)));
    this->__PVT__mac__DOT___partial_result_T_71 = (0xffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out) 
                                                      + 
                                                      ((IData)(this->__PVT__mac__DOT__multiplier_2_7_io_out) 
                                                       << 4U)));
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
    this->__PVT__mac__DOT___partial_result_T_51 = (0xffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_5_io_out) 
                                                      + 
                                                      ((IData)(this->__PVT__mac__DOT__multiplier_2_5_io_out) 
                                                       << 4U)));
    this->__PVT__mac__DOT___partial_result_T_31 = (0xffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out) 
                                                      + 
                                                      ((IData)(this->__PVT__mac__DOT__multiplier_2_3_io_out) 
                                                       << 4U)));
    this->__PVT__mac__DOT___partial_result_T_61 = (0xffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out) 
                                                      + 
                                                      ((IData)(this->__PVT__mac__DOT__multiplier_2_6_io_out) 
                                                       << 4U)));
    if ((5U >= (IData)(this->__PVT__adder__DOT__exp_diff))) {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 
            = (0x3fU & ((IData)(this->__PVT__adder_io_in_b_man) 
                        >> (IData)(this->__PVT__adder__DOT__exp_diff)));
        this->__PVT__adder__DOT___io_out_result_sign_T_4 
            = (0x3fU & ((IData)(this->__PVT__mac_io_out_result_man) 
                        >> (IData)(this->__PVT__adder__DOT__exp_diff)));
    } else {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__adder__DOT___io_out_result_sign_T_4 = 0U;
    }
    if (vlTOPp->reset) {
        this->__PVT__mac__DOT___GEN_163 = 0U;
        this->__PVT__mac__DOT___GEN_166 = 0U;
        this->__PVT__mac__DOT___GEN_159 = 0U;
        this->__PVT__mac__DOT___GEN_160 = 0U;
        this->__PVT__mac__DOT___GEN_161 = 0U;
        this->__PVT__mac__DOT___GEN_164 = 0U;
        this->__PVT__mac__DOT___GEN_162 = 0U;
        this->__PVT__mac__DOT___GEN_165 = 0U;
    } else {
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
    }
    this->__PVT__adder__DOT__addition = (0x7fU & ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                                   ? 
                                                  (((1U 
                                                     & ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                        >> 6U)) 
                                                    == (IData)(this->__PVT__adder_io_in_b_sign))
                                                    ? 
                                                   ((IData)(this->__PVT__mac_io_out_result_man) 
                                                    + (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                    : 
                                                   (0x3fU 
                                                    & (((IData)(this->__PVT__mac_io_out_result_man) 
                                                        > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                        ? 
                                                       ((IData)(this->__PVT__mac_io_out_result_man) 
                                                        - (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                        : 
                                                       ((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1) 
                                                        - (IData)(this->__PVT__mac_io_out_result_man)))))
                                                   : 
                                                  (((1U 
                                                     & ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                        >> 6U)) 
                                                    == (IData)(this->__PVT__adder_io_in_b_sign))
                                                    ? 
                                                   ((IData)(this->__PVT__adder_io_in_b_man) 
                                                    + (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                    : 
                                                   (0x3fU 
                                                    & (((IData)(this->__PVT__adder_io_in_b_man) 
                                                        > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                        ? 
                                                       ((IData)(this->__PVT__adder_io_in_b_man) 
                                                        - (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                        : 
                                                       ((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4) 
                                                        - (IData)(this->__PVT__adder_io_in_b_man)))))));
}

VL_INLINE_OPT void VSystolicArray_HBFP_forTesting_HBFP_PE::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_2__10(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_2__10\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__mac__DOT__exp_addition = this->__PVT__mac__DOT__exp_addition_r_3;
    this->__PVT__adder_io_in_b_r_man = this->__PVT__result_buffer_man;
    this->__PVT__adder_io_in_b_r_exp = this->__PVT__result_buffer_exp;
    this->__PVT__adder_io_in_b_r_sign = this->__PVT__result_buffer_sign;
    this->__PVT__mac__DOT__counter = ((IData)(vlTOPp->reset) 
                                      | (IData)(this->__PVT__mac__DOT___GEN_61));
    if (vlTOPp->reset) {
        this->__PVT__mac__DOT__two_complement_buffer_7 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_3 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_2 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_0 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_6 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_4 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_5 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_1 = 0U;
    } else {
        this->__PVT__mac__DOT__two_complement_buffer_7 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_7)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_7)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_7)));
        this->__PVT__mac__DOT__two_complement_buffer_3 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_3)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_3)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_3)));
        this->__PVT__mac__DOT__two_complement_buffer_2 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_2)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_2)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_2)));
        this->__PVT__mac__DOT__two_complement_buffer_0 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_0)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_0)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_0)));
        this->__PVT__mac__DOT__two_complement_buffer_6 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_6)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_6)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_6)));
        this->__PVT__mac__DOT__two_complement_buffer_4 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_4)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_4)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_4)));
        this->__PVT__mac__DOT__two_complement_buffer_5 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_5)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_5)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_5)));
        this->__PVT__mac__DOT__two_complement_buffer_1 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_1)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_1)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_1)));
    }
    this->__PVT__mac__DOT__exp_addition_r_3 = this->__PVT__mac__DOT__exp_addition_r_2;
    this->__PVT__result_buffer_man = (0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                ? (
                                                   (0x3fU 
                                                    < (IData)(this->__PVT__adder__DOT__addition))
                                                    ? 0x3fU
                                                    : (IData)(this->__PVT__adder__DOT__addition))
                                                : (
                                                   (0xfU 
                                                    < (IData)(this->__PVT__adder__DOT__addition))
                                                    ? 0xfU
                                                    : (IData)(this->__PVT__adder__DOT__addition))));
    if (this->__PVT__adder__DOT___exp_diff_T) {
        this->__PVT__result_buffer_exp = (0xffU & (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5));
        this->__PVT__result_buffer_sign = (1U & (((IData)(this->__PVT__mac_io_out_result_man) 
                                                  > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                  ? 
                                                 ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                  >> 6U)
                                                  : (IData)(this->__PVT__adder_io_in_b_sign)));
    } else {
        this->__PVT__result_buffer_exp = (0xffU & (IData)(this->__PVT__adder_io_in_b_exp));
        this->__PVT__result_buffer_sign = (1U & (((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4) 
                                                  > (IData)(this->__PVT__adder_io_in_b_man))
                                                  ? 
                                                 ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                  >> 6U)
                                                  : (IData)(this->__PVT__adder_io_in_b_sign)));
    }
    this->__PVT__mac__DOT___GEN_61 = ((1U > (IData)(this->__PVT__mac__DOT__counter)) 
                                      & ((IData)(1U) 
                                         + (IData)(this->__PVT__mac__DOT__counter)));
    this->__PVT__mac__DOT__signs_7 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_7_r_1));
    this->__PVT__mac__DOT__dotProductRegs_7 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_7))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_7))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_7))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_7)))));
    this->__PVT__mac__DOT__signs_3 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_3_r_1));
    this->__PVT__mac__DOT__dotProductRegs_3 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_3))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_3))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_3))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_3)))));
    this->__PVT__mac__DOT__signs_2 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_2_r_1));
    this->__PVT__mac__DOT__dotProductRegs_2 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_2))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_2))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_2))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_2)))));
    this->__PVT__mac__DOT__signs_0 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_0_r_1));
    this->__PVT__mac__DOT__dotProductRegs_0 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result)))));
    this->__PVT__mac__DOT__signs_6 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_6_r_1));
    this->__PVT__mac__DOT__dotProductRegs_6 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_6))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_6))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_6))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_6)))));
    this->__PVT__mac__DOT__signs_4 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_4_r_1));
    this->__PVT__mac__DOT__dotProductRegs_4 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_4))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_4))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_4))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_4)))));
    this->__PVT__mac__DOT__signs_5 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_5_r_1));
    this->__PVT__mac__DOT__dotProductRegs_5 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_5))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_5))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_5))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_5)))));
    this->__PVT__mac__DOT__signs_1 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_1_r_1));
    this->__PVT__mac__DOT__dotProductRegs_1 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_1))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_1))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_1))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_1)))));
    this->__PVT__mac__DOT___io_out_result_exp_T_5 = 
        ((0xffU < (IData)(this->__PVT__mac__DOT__exp_addition))
          ? 0xffU : (IData)(this->__PVT__mac__DOT__exp_addition));
    this->__PVT__mac__DOT__exp_addition_r_2 = this->__PVT__mac__DOT__exp_addition_r_1;
    this->__PVT__mac__DOT__acc_hbfp = ((IData)(vlTOPp->reset)
                                        ? 0U : (0x7fU 
                                                & ((0x2000U 
                                                    & (IData)(this->__PVT__mac__DOT__sum))
                                                    ? 
                                                   ((0x3fU 
                                                     < 
                                                     (0x1fffU 
                                                      & ((IData)(1U) 
                                                         + 
                                                         (~ (IData)(this->__PVT__mac__DOT__sum)))))
                                                     ? 0x7fU
                                                     : 
                                                    (0x7fU 
                                                     & ((IData)(1U) 
                                                        + 
                                                        (~ 
                                                         (0x3fU 
                                                          & (IData)(this->__PVT__mac__DOT__sum))))))
                                                    : 
                                                   ((0x3fU 
                                                     < 
                                                     (0x1fffU 
                                                      & (IData)(this->__PVT__mac__DOT__sum)))
                                                     ? 0x3fU
                                                     : 
                                                    (0x3fU 
                                                     & (IData)(this->__PVT__mac__DOT__sum))))));
    this->__PVT__mac__DOT__signs_7_r_1 = this->__PVT__mac__DOT__signs_7_r;
    this->__PVT__mac__DOT__final_result_7 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_7));
    this->__PVT__mac__DOT__signs_3_r_1 = this->__PVT__mac__DOT__signs_3_r;
    this->__PVT__mac__DOT__final_result_3 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_3));
    this->__PVT__mac__DOT__signs_2_r_1 = this->__PVT__mac__DOT__signs_2_r;
    this->__PVT__mac__DOT__final_result_2 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_2));
    this->__PVT__mac__DOT__signs_0_r_1 = this->__PVT__mac__DOT__signs_0_r;
    this->__PVT__mac__DOT__final_result = ((IData)(vlTOPp->reset)
                                            ? 0U : (IData)(this->__PVT__mac__DOT__partial_result));
    this->__PVT__mac__DOT__signs_6_r_1 = this->__PVT__mac__DOT__signs_6_r;
    this->__PVT__mac__DOT__final_result_6 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_6));
    this->__PVT__mac__DOT__signs_4_r_1 = this->__PVT__mac__DOT__signs_4_r;
    this->__PVT__mac__DOT__final_result_4 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_4));
    this->__PVT__mac__DOT__signs_5_r_1 = this->__PVT__mac__DOT__signs_5_r;
    this->__PVT__mac__DOT__final_result_5 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_5));
    this->__PVT__mac__DOT__signs_1_r_1 = this->__PVT__mac__DOT__signs_1_r;
    this->__PVT__mac__DOT__final_result_1 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_1));
    this->__PVT__mac__DOT__sum = (0x3fffU & (VL_EXTENDS_II(14,13, 
                                                           (0x1fffU 
                                                            & (VL_EXTENDS_II(13,12, 
                                                                             (0xfffU 
                                                                              & (VL_EXTENDS_II(12,11, 
                                                                                (0x7ffU 
                                                                                & (VL_EXTENDS_II(11,10, 
                                                                                (0x3ffU 
                                                                                & (VL_EXTENDS_II(10,9, 
                                                                                (0x1ffU 
                                                                                & (VL_EXTENDS_II(9,8, 
                                                                                (0xffU 
                                                                                & (VL_EXTENDS_II(8,7, (IData)(this->__PVT__mac__DOT__two_complement_buffer_0)) 
                                                                                + 
                                                                                VL_EXTENDS_II(8,7, (IData)(this->__PVT__mac__DOT__two_complement_buffer_1))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(9,8, 
                                                                                ((0x80U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_2) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_2)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(10,9, 
                                                                                ((0x180U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_3) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_3)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(11,10, 
                                                                                ((0x380U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_4) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_4)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(12,11, 
                                                                                ((0x780U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_5) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_5)))))) 
                                                               + 
                                                               VL_EXTENDS_II(13,12, 
                                                                             ((0xf80U 
                                                                               & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_6) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                              | (IData)(this->__PVT__mac__DOT__two_complement_buffer_6)))))) 
                                             + VL_EXTENDS_II(14,13, 
                                                             ((0x1f80U 
                                                               & ((- (IData)(
                                                                             (1U 
                                                                              & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_7) 
                                                                                >> 6U)))) 
                                                                  << 7U)) 
                                                              | (IData)(this->__PVT__mac__DOT__two_complement_buffer_7)))));
    this->__PVT__mac__DOT__exp_addition_r_1 = this->__PVT__mac__DOT__exp_addition_r;
    this->__PVT__mac__DOT__signs_7_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_sign_7) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_sign_7));
    this->__PVT__mac__DOT__partial_result_7 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_166);
    this->__PVT__mac__DOT__signs_3_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_sign_3) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_sign_3));
    this->__PVT__mac__DOT__partial_result_3 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_162);
    this->__PVT__mac__DOT__signs_2_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_sign_2) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_sign_2));
    this->__PVT__mac__DOT__partial_result_2 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_161);
    this->__PVT__mac__DOT__signs_0_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_sign_0) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_sign_0));
    this->__PVT__mac__DOT__partial_result = (0xfffU 
                                             & this->__PVT__mac__DOT___GEN_159);
    this->__PVT__mac__DOT__signs_6_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_sign_6) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_sign_6));
    this->__PVT__mac__DOT__partial_result_6 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_165);
    this->__PVT__mac__DOT__signs_4_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_sign_4) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_sign_4));
    this->__PVT__mac__DOT__partial_result_4 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_163);
    this->__PVT__mac__DOT__signs_5_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_sign_5) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_sign_5));
    this->__PVT__mac__DOT__partial_result_5 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_164);
    this->__PVT__mac__DOT__signs_1_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_sign_1) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_sign_1));
    this->__PVT__mac__DOT__partial_result_1 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_160);
    this->__PVT__mac__DOT__exp_addition_r = (0x1ffU 
                                             & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_exp) 
                                                + (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_exp)));
}

VL_INLINE_OPT void VSystolicArray_HBFP_forTesting_HBFP_PE::_combo__TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_2__202(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_combo__TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_2__202\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->io_in_flag) {
        this->__PVT__adder_io_in_b_man = this->__PVT__adder_io_in_b_r_man;
        this->__PVT__adder_io_in_b_exp = this->__PVT__adder_io_in_b_r_exp;
        this->__PVT__adder_io_in_b_sign = this->__PVT__adder_io_in_b_r_sign;
        this->__PVT__mac_io_out_result_man = (0x3fU 
                                              & (IData)(this->__PVT__mac__DOT__acc_hbfp));
    } else {
        this->__PVT__adder_io_in_b_man = this->__PVT__result_buffer_man;
        this->__PVT__adder_io_in_b_exp = this->__PVT__result_buffer_exp;
        this->__PVT__adder_io_in_b_sign = this->__PVT__result_buffer_sign;
        this->__PVT__mac_io_out_result_man = (0x3fU 
                                              & ((0xfU 
                                                  < 
                                                  (0x3fU 
                                                   & (IData)(this->__PVT__mac__DOT__acc_hbfp)))
                                                  ? 0xfU
                                                  : (IData)(this->__PVT__mac__DOT__acc_hbfp)));
    }
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_man_1))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_man_1))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_1) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_1))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_1))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_1))))));
    this->__PVT__mac__DOT__multiplier_2_1_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_man_1) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_1) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_1)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_man_2))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_man_2))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_2) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_2))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_2))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_2))))));
    this->__PVT__mac__DOT__multiplier_2_2_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_man_2) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_2) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_2)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_man_0))) 
                                                     * 
                                                     (0xfU 
                                                      & ((IData)(this->__PVT__mac__DOT__counter)
                                                          ? 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? 
                                                          (3U 
                                                           & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_0) 
                                                              >> 4U))
                                                           : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_0))
                                                          : 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? 
                                                          (0xfU 
                                                           & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_0))
                                                           : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_0))))));
    this->__PVT__mac__DOT__multiplier_2_io_out = (0xffU 
                                                  & (((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      (3U 
                                                       & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_man_0) 
                                                          >> 4U))
                                                       : 0U) 
                                                     * 
                                                     (0xfU 
                                                      & ((IData)(this->__PVT__mac__DOT__counter)
                                                          ? 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? 
                                                          (3U 
                                                           & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_0) 
                                                              >> 4U))
                                                           : 0U)
                                                          : 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_0)
                                                           : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_4_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_man_4))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_man_4))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_4) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_4))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_4))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_4))))));
    this->__PVT__mac__DOT__multiplier_2_4_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_man_4) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_4) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_4)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_5_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_man_5))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_man_5))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_5) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_5))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_5))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_5))))));
    this->__PVT__mac__DOT__multiplier_2_5_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_man_5) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_5) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_5)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_7_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_man_7))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_man_7))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_7) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_7))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_7))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_7))))));
    this->__PVT__mac__DOT__multiplier_2_7_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_man_7) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_7) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_7)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_man_3))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_man_3))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_3) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_3))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_3))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_3))))));
    this->__PVT__mac__DOT__multiplier_2_3_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_man_3) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_3) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_3)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_6_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_man_6))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_man_6))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_6) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_6))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_6))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_6))))));
    this->__PVT__mac__DOT__multiplier_2_6_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_man_6) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_6) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_6)
                                                    : 0U)))));
    this->__PVT__adder__DOT___exp_diff_T = ((0xffU 
                                             & (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)) 
                                            > (IData)(this->__PVT__adder_io_in_b_exp));
    this->__PVT__adder__DOT__exp_diff = (0xffU & ((
                                                   (0xffU 
                                                    & (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)) 
                                                   > (IData)(this->__PVT__adder_io_in_b_exp))
                                                   ? 
                                                  ((IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5) 
                                                   - (IData)(this->__PVT__adder_io_in_b_exp))
                                                   : 
                                                  ((IData)(this->__PVT__adder_io_in_b_exp) 
                                                   - (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5))));
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
    this->__PVT__mac__DOT___partial_result_T_1 = (0xffffU 
                                                  & ((IData)(this->__PVT__mac__DOT__multiplier_1_io_out) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_2_io_out) 
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
    this->__PVT__mac__DOT___partial_result_T_71 = (0xffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out) 
                                                      + 
                                                      ((IData)(this->__PVT__mac__DOT__multiplier_2_7_io_out) 
                                                       << 4U)));
    this->__PVT__mac__DOT___partial_result_T_31 = (0xffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out) 
                                                      + 
                                                      ((IData)(this->__PVT__mac__DOT__multiplier_2_3_io_out) 
                                                       << 4U)));
    this->__PVT__mac__DOT___partial_result_T_61 = (0xffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out) 
                                                      + 
                                                      ((IData)(this->__PVT__mac__DOT__multiplier_2_6_io_out) 
                                                       << 4U)));
    if ((5U >= (IData)(this->__PVT__adder__DOT__exp_diff))) {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 
            = (0x3fU & ((IData)(this->__PVT__adder_io_in_b_man) 
                        >> (IData)(this->__PVT__adder__DOT__exp_diff)));
        this->__PVT__adder__DOT___io_out_result_sign_T_4 
            = (0x3fU & ((IData)(this->__PVT__mac_io_out_result_man) 
                        >> (IData)(this->__PVT__adder__DOT__exp_diff)));
    } else {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__adder__DOT___io_out_result_sign_T_4 = 0U;
    }
    if (vlTOPp->reset) {
        this->__PVT__mac__DOT___GEN_160 = 0U;
        this->__PVT__mac__DOT___GEN_161 = 0U;
        this->__PVT__mac__DOT___GEN_159 = 0U;
        this->__PVT__mac__DOT___GEN_163 = 0U;
        this->__PVT__mac__DOT___GEN_164 = 0U;
        this->__PVT__mac__DOT___GEN_166 = 0U;
        this->__PVT__mac__DOT___GEN_162 = 0U;
        this->__PVT__mac__DOT___GEN_165 = 0U;
    } else {
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
    }
    this->__PVT__adder__DOT__addition = (0x7fU & ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                                   ? 
                                                  (((1U 
                                                     & ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                        >> 6U)) 
                                                    == (IData)(this->__PVT__adder_io_in_b_sign))
                                                    ? 
                                                   ((IData)(this->__PVT__mac_io_out_result_man) 
                                                    + (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                    : 
                                                   (0x3fU 
                                                    & (((IData)(this->__PVT__mac_io_out_result_man) 
                                                        > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                        ? 
                                                       ((IData)(this->__PVT__mac_io_out_result_man) 
                                                        - (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                        : 
                                                       ((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1) 
                                                        - (IData)(this->__PVT__mac_io_out_result_man)))))
                                                   : 
                                                  (((1U 
                                                     & ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                        >> 6U)) 
                                                    == (IData)(this->__PVT__adder_io_in_b_sign))
                                                    ? 
                                                   ((IData)(this->__PVT__adder_io_in_b_man) 
                                                    + (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                    : 
                                                   (0x3fU 
                                                    & (((IData)(this->__PVT__adder_io_in_b_man) 
                                                        > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                        ? 
                                                       ((IData)(this->__PVT__adder_io_in_b_man) 
                                                        - (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                        : 
                                                       ((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4) 
                                                        - (IData)(this->__PVT__adder_io_in_b_man)))))));
}

VL_INLINE_OPT void VSystolicArray_HBFP_forTesting_HBFP_PE::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_3__11(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_3__11\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__mac__DOT__exp_addition = this->__PVT__mac__DOT__exp_addition_r_3;
    this->__PVT__adder_io_in_b_r_man = this->__PVT__result_buffer_man;
    this->__PVT__adder_io_in_b_r_exp = this->__PVT__result_buffer_exp;
    this->__PVT__adder_io_in_b_r_sign = this->__PVT__result_buffer_sign;
    this->__PVT__mac__DOT__counter = ((IData)(vlTOPp->reset) 
                                      | (IData)(this->__PVT__mac__DOT___GEN_61));
    if (vlTOPp->reset) {
        this->__PVT__mac__DOT__two_complement_buffer_7 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_3 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_2 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_0 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_6 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_4 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_5 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_1 = 0U;
    } else {
        this->__PVT__mac__DOT__two_complement_buffer_7 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_7)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_7)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_7)));
        this->__PVT__mac__DOT__two_complement_buffer_3 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_3)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_3)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_3)));
        this->__PVT__mac__DOT__two_complement_buffer_2 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_2)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_2)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_2)));
        this->__PVT__mac__DOT__two_complement_buffer_0 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_0)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_0)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_0)));
        this->__PVT__mac__DOT__two_complement_buffer_6 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_6)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_6)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_6)));
        this->__PVT__mac__DOT__two_complement_buffer_4 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_4)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_4)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_4)));
        this->__PVT__mac__DOT__two_complement_buffer_5 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_5)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_5)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_5)));
        this->__PVT__mac__DOT__two_complement_buffer_1 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_1)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_1)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_1)));
    }
    this->__PVT__mac__DOT__exp_addition_r_3 = this->__PVT__mac__DOT__exp_addition_r_2;
    this->__PVT__result_buffer_man = (0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                ? (
                                                   (0x3fU 
                                                    < (IData)(this->__PVT__adder__DOT__addition))
                                                    ? 0x3fU
                                                    : (IData)(this->__PVT__adder__DOT__addition))
                                                : (
                                                   (0xfU 
                                                    < (IData)(this->__PVT__adder__DOT__addition))
                                                    ? 0xfU
                                                    : (IData)(this->__PVT__adder__DOT__addition))));
    if (this->__PVT__adder__DOT___exp_diff_T) {
        this->__PVT__result_buffer_exp = (0xffU & (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5));
        this->__PVT__result_buffer_sign = (1U & (((IData)(this->__PVT__mac_io_out_result_man) 
                                                  > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                  ? 
                                                 ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                  >> 6U)
                                                  : (IData)(this->__PVT__adder_io_in_b_sign)));
    } else {
        this->__PVT__result_buffer_exp = (0xffU & (IData)(this->__PVT__adder_io_in_b_exp));
        this->__PVT__result_buffer_sign = (1U & (((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4) 
                                                  > (IData)(this->__PVT__adder_io_in_b_man))
                                                  ? 
                                                 ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                  >> 6U)
                                                  : (IData)(this->__PVT__adder_io_in_b_sign)));
    }
    this->__PVT__mac__DOT___GEN_61 = ((1U > (IData)(this->__PVT__mac__DOT__counter)) 
                                      & ((IData)(1U) 
                                         + (IData)(this->__PVT__mac__DOT__counter)));
    this->__PVT__mac__DOT__signs_7 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_7_r_1));
    this->__PVT__mac__DOT__dotProductRegs_7 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_7))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_7))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_7))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_7)))));
    this->__PVT__mac__DOT__signs_3 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_3_r_1));
    this->__PVT__mac__DOT__dotProductRegs_3 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_3))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_3))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_3))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_3)))));
    this->__PVT__mac__DOT__signs_2 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_2_r_1));
    this->__PVT__mac__DOT__dotProductRegs_2 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_2))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_2))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_2))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_2)))));
    this->__PVT__mac__DOT__signs_0 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_0_r_1));
    this->__PVT__mac__DOT__dotProductRegs_0 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result)))));
    this->__PVT__mac__DOT__signs_6 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_6_r_1));
    this->__PVT__mac__DOT__dotProductRegs_6 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_6))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_6))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_6))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_6)))));
    this->__PVT__mac__DOT__signs_4 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_4_r_1));
    this->__PVT__mac__DOT__dotProductRegs_4 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_4))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_4))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_4))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_4)))));
    this->__PVT__mac__DOT__signs_5 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_5_r_1));
    this->__PVT__mac__DOT__dotProductRegs_5 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_5))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_5))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_5))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_5)))));
    this->__PVT__mac__DOT__signs_1 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_1_r_1));
    this->__PVT__mac__DOT__dotProductRegs_1 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_1))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_1))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_1))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_1)))));
    this->__PVT__mac__DOT___io_out_result_exp_T_5 = 
        ((0xffU < (IData)(this->__PVT__mac__DOT__exp_addition))
          ? 0xffU : (IData)(this->__PVT__mac__DOT__exp_addition));
    this->__PVT__mac__DOT__exp_addition_r_2 = this->__PVT__mac__DOT__exp_addition_r_1;
    this->__PVT__mac__DOT__acc_hbfp = ((IData)(vlTOPp->reset)
                                        ? 0U : (0x7fU 
                                                & ((0x2000U 
                                                    & (IData)(this->__PVT__mac__DOT__sum))
                                                    ? 
                                                   ((0x3fU 
                                                     < 
                                                     (0x1fffU 
                                                      & ((IData)(1U) 
                                                         + 
                                                         (~ (IData)(this->__PVT__mac__DOT__sum)))))
                                                     ? 0x7fU
                                                     : 
                                                    (0x7fU 
                                                     & ((IData)(1U) 
                                                        + 
                                                        (~ 
                                                         (0x3fU 
                                                          & (IData)(this->__PVT__mac__DOT__sum))))))
                                                    : 
                                                   ((0x3fU 
                                                     < 
                                                     (0x1fffU 
                                                      & (IData)(this->__PVT__mac__DOT__sum)))
                                                     ? 0x3fU
                                                     : 
                                                    (0x3fU 
                                                     & (IData)(this->__PVT__mac__DOT__sum))))));
    this->__PVT__mac__DOT__signs_7_r_1 = this->__PVT__mac__DOT__signs_7_r;
    this->__PVT__mac__DOT__final_result_7 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_7));
    this->__PVT__mac__DOT__signs_3_r_1 = this->__PVT__mac__DOT__signs_3_r;
    this->__PVT__mac__DOT__final_result_3 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_3));
    this->__PVT__mac__DOT__signs_2_r_1 = this->__PVT__mac__DOT__signs_2_r;
    this->__PVT__mac__DOT__final_result_2 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_2));
    this->__PVT__mac__DOT__signs_0_r_1 = this->__PVT__mac__DOT__signs_0_r;
    this->__PVT__mac__DOT__final_result = ((IData)(vlTOPp->reset)
                                            ? 0U : (IData)(this->__PVT__mac__DOT__partial_result));
    this->__PVT__mac__DOT__signs_6_r_1 = this->__PVT__mac__DOT__signs_6_r;
    this->__PVT__mac__DOT__final_result_6 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_6));
    this->__PVT__mac__DOT__signs_4_r_1 = this->__PVT__mac__DOT__signs_4_r;
    this->__PVT__mac__DOT__final_result_4 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_4));
    this->__PVT__mac__DOT__signs_5_r_1 = this->__PVT__mac__DOT__signs_5_r;
    this->__PVT__mac__DOT__final_result_5 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_5));
    this->__PVT__mac__DOT__signs_1_r_1 = this->__PVT__mac__DOT__signs_1_r;
    this->__PVT__mac__DOT__final_result_1 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_1));
    this->__PVT__mac__DOT__sum = (0x3fffU & (VL_EXTENDS_II(14,13, 
                                                           (0x1fffU 
                                                            & (VL_EXTENDS_II(13,12, 
                                                                             (0xfffU 
                                                                              & (VL_EXTENDS_II(12,11, 
                                                                                (0x7ffU 
                                                                                & (VL_EXTENDS_II(11,10, 
                                                                                (0x3ffU 
                                                                                & (VL_EXTENDS_II(10,9, 
                                                                                (0x1ffU 
                                                                                & (VL_EXTENDS_II(9,8, 
                                                                                (0xffU 
                                                                                & (VL_EXTENDS_II(8,7, (IData)(this->__PVT__mac__DOT__two_complement_buffer_0)) 
                                                                                + 
                                                                                VL_EXTENDS_II(8,7, (IData)(this->__PVT__mac__DOT__two_complement_buffer_1))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(9,8, 
                                                                                ((0x80U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_2) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_2)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(10,9, 
                                                                                ((0x180U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_3) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_3)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(11,10, 
                                                                                ((0x380U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_4) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_4)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(12,11, 
                                                                                ((0x780U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_5) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_5)))))) 
                                                               + 
                                                               VL_EXTENDS_II(13,12, 
                                                                             ((0xf80U 
                                                                               & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_6) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                              | (IData)(this->__PVT__mac__DOT__two_complement_buffer_6)))))) 
                                             + VL_EXTENDS_II(14,13, 
                                                             ((0x1f80U 
                                                               & ((- (IData)(
                                                                             (1U 
                                                                              & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_7) 
                                                                                >> 6U)))) 
                                                                  << 7U)) 
                                                              | (IData)(this->__PVT__mac__DOT__two_complement_buffer_7)))));
    this->__PVT__mac__DOT__exp_addition_r_1 = this->__PVT__mac__DOT__exp_addition_r;
    this->__PVT__mac__DOT__signs_7_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_sign_7) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_sign_7));
    this->__PVT__mac__DOT__partial_result_7 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_166);
    this->__PVT__mac__DOT__signs_3_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_sign_3) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_sign_3));
    this->__PVT__mac__DOT__partial_result_3 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_162);
    this->__PVT__mac__DOT__signs_2_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_sign_2) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_sign_2));
    this->__PVT__mac__DOT__partial_result_2 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_161);
    this->__PVT__mac__DOT__signs_0_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_sign_0) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_sign_0));
    this->__PVT__mac__DOT__partial_result = (0xfffU 
                                             & this->__PVT__mac__DOT___GEN_159);
    this->__PVT__mac__DOT__signs_6_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_sign_6) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_sign_6));
    this->__PVT__mac__DOT__partial_result_6 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_165);
    this->__PVT__mac__DOT__signs_4_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_sign_4) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_sign_4));
    this->__PVT__mac__DOT__partial_result_4 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_163);
    this->__PVT__mac__DOT__signs_5_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_sign_5) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_sign_5));
    this->__PVT__mac__DOT__partial_result_5 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_164);
    this->__PVT__mac__DOT__signs_1_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_sign_1) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_sign_1));
    this->__PVT__mac__DOT__partial_result_1 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_160);
    this->__PVT__mac__DOT__exp_addition_r = (0x1ffU 
                                             & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_exp) 
                                                + (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_exp)));
}

VL_INLINE_OPT void VSystolicArray_HBFP_forTesting_HBFP_PE::_combo__TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_3__203(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_combo__TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_3__203\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->io_in_flag) {
        this->__PVT__adder_io_in_b_man = this->__PVT__adder_io_in_b_r_man;
        this->__PVT__adder_io_in_b_exp = this->__PVT__adder_io_in_b_r_exp;
        this->__PVT__adder_io_in_b_sign = this->__PVT__adder_io_in_b_r_sign;
        this->__PVT__mac_io_out_result_man = (0x3fU 
                                              & (IData)(this->__PVT__mac__DOT__acc_hbfp));
    } else {
        this->__PVT__adder_io_in_b_man = this->__PVT__result_buffer_man;
        this->__PVT__adder_io_in_b_exp = this->__PVT__result_buffer_exp;
        this->__PVT__adder_io_in_b_sign = this->__PVT__result_buffer_sign;
        this->__PVT__mac_io_out_result_man = (0x3fU 
                                              & ((0xfU 
                                                  < 
                                                  (0x3fU 
                                                   & (IData)(this->__PVT__mac__DOT__acc_hbfp)))
                                                  ? 0xfU
                                                  : (IData)(this->__PVT__mac__DOT__acc_hbfp)));
    }
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_man_0))) 
                                                     * 
                                                     (0xfU 
                                                      & ((IData)(this->__PVT__mac__DOT__counter)
                                                          ? 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? 
                                                          (3U 
                                                           & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_0) 
                                                              >> 4U))
                                                           : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_0))
                                                          : 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? 
                                                          (0xfU 
                                                           & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_0))
                                                           : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_0))))));
    this->__PVT__mac__DOT__multiplier_2_io_out = (0xffU 
                                                  & (((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      (3U 
                                                       & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_man_0) 
                                                          >> 4U))
                                                       : 0U) 
                                                     * 
                                                     (0xfU 
                                                      & ((IData)(this->__PVT__mac__DOT__counter)
                                                          ? 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? 
                                                          (3U 
                                                           & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_0) 
                                                              >> 4U))
                                                           : 0U)
                                                          : 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_0)
                                                           : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_man_1))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_man_1))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_1) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_1))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_1))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_1))))));
    this->__PVT__mac__DOT__multiplier_2_1_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_man_1) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_1) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_1)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_man_2))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_man_2))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_2) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_2))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_2))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_2))))));
    this->__PVT__mac__DOT__multiplier_2_2_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_man_2) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_2) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_2)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_4_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_man_4))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_man_4))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_4) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_4))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_4))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_4))))));
    this->__PVT__mac__DOT__multiplier_2_4_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_man_4) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_4) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_4)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_5_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_man_5))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_man_5))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_5) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_5))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_5))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_5))))));
    this->__PVT__mac__DOT__multiplier_2_5_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_man_5) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_5) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_5)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_7_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_man_7))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_man_7))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_7) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_7))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_7))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_7))))));
    this->__PVT__mac__DOT__multiplier_2_7_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_man_7) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_7) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_7)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_man_3))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_man_3))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_3) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_3))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_3))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_3))))));
    this->__PVT__mac__DOT__multiplier_2_3_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_man_3) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_3) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_3)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_6_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_man_6))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_man_6))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_6) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_6))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_6))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_6))))));
    this->__PVT__mac__DOT__multiplier_2_6_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_man_6) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_6) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_6)
                                                    : 0U)))));
    this->__PVT__adder__DOT___exp_diff_T = ((0xffU 
                                             & (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)) 
                                            > (IData)(this->__PVT__adder_io_in_b_exp));
    this->__PVT__adder__DOT__exp_diff = (0xffU & ((
                                                   (0xffU 
                                                    & (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)) 
                                                   > (IData)(this->__PVT__adder_io_in_b_exp))
                                                   ? 
                                                  ((IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5) 
                                                   - (IData)(this->__PVT__adder_io_in_b_exp))
                                                   : 
                                                  ((IData)(this->__PVT__adder_io_in_b_exp) 
                                                   - (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5))));
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
    this->__PVT__mac__DOT___partial_result_T_71 = (0xffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out) 
                                                      + 
                                                      ((IData)(this->__PVT__mac__DOT__multiplier_2_7_io_out) 
                                                       << 4U)));
    this->__PVT__mac__DOT___partial_result_T_31 = (0xffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out) 
                                                      + 
                                                      ((IData)(this->__PVT__mac__DOT__multiplier_2_3_io_out) 
                                                       << 4U)));
    this->__PVT__mac__DOT___partial_result_T_61 = (0xffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out) 
                                                      + 
                                                      ((IData)(this->__PVT__mac__DOT__multiplier_2_6_io_out) 
                                                       << 4U)));
    if ((5U >= (IData)(this->__PVT__adder__DOT__exp_diff))) {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 
            = (0x3fU & ((IData)(this->__PVT__adder_io_in_b_man) 
                        >> (IData)(this->__PVT__adder__DOT__exp_diff)));
        this->__PVT__adder__DOT___io_out_result_sign_T_4 
            = (0x3fU & ((IData)(this->__PVT__mac_io_out_result_man) 
                        >> (IData)(this->__PVT__adder__DOT__exp_diff)));
    } else {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__adder__DOT___io_out_result_sign_T_4 = 0U;
    }
    if (vlTOPp->reset) {
        this->__PVT__mac__DOT___GEN_159 = 0U;
        this->__PVT__mac__DOT___GEN_160 = 0U;
        this->__PVT__mac__DOT___GEN_161 = 0U;
        this->__PVT__mac__DOT___GEN_163 = 0U;
        this->__PVT__mac__DOT___GEN_164 = 0U;
        this->__PVT__mac__DOT___GEN_166 = 0U;
        this->__PVT__mac__DOT___GEN_162 = 0U;
        this->__PVT__mac__DOT___GEN_165 = 0U;
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
    }
    this->__PVT__adder__DOT__addition = (0x7fU & ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                                   ? 
                                                  (((1U 
                                                     & ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                        >> 6U)) 
                                                    == (IData)(this->__PVT__adder_io_in_b_sign))
                                                    ? 
                                                   ((IData)(this->__PVT__mac_io_out_result_man) 
                                                    + (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                    : 
                                                   (0x3fU 
                                                    & (((IData)(this->__PVT__mac_io_out_result_man) 
                                                        > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                        ? 
                                                       ((IData)(this->__PVT__mac_io_out_result_man) 
                                                        - (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                        : 
                                                       ((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1) 
                                                        - (IData)(this->__PVT__mac_io_out_result_man)))))
                                                   : 
                                                  (((1U 
                                                     & ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                        >> 6U)) 
                                                    == (IData)(this->__PVT__adder_io_in_b_sign))
                                                    ? 
                                                   ((IData)(this->__PVT__adder_io_in_b_man) 
                                                    + (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                    : 
                                                   (0x3fU 
                                                    & (((IData)(this->__PVT__adder_io_in_b_man) 
                                                        > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                        ? 
                                                       ((IData)(this->__PVT__adder_io_in_b_man) 
                                                        - (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                        : 
                                                       ((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4) 
                                                        - (IData)(this->__PVT__adder_io_in_b_man)))))));
}

VL_INLINE_OPT void VSystolicArray_HBFP_forTesting_HBFP_PE::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_4__12(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_4__12\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__mac__DOT__exp_addition = this->__PVT__mac__DOT__exp_addition_r_3;
    this->__PVT__adder_io_in_b_r_man = this->__PVT__result_buffer_man;
    this->__PVT__adder_io_in_b_r_exp = this->__PVT__result_buffer_exp;
    this->__PVT__adder_io_in_b_r_sign = this->__PVT__result_buffer_sign;
    this->__PVT__mac__DOT__counter = ((IData)(vlTOPp->reset) 
                                      | (IData)(this->__PVT__mac__DOT___GEN_61));
    if (vlTOPp->reset) {
        this->__PVT__mac__DOT__two_complement_buffer_7 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_3 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_2 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_0 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_6 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_4 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_5 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_1 = 0U;
    } else {
        this->__PVT__mac__DOT__two_complement_buffer_7 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_7)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_7)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_7)));
        this->__PVT__mac__DOT__two_complement_buffer_3 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_3)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_3)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_3)));
        this->__PVT__mac__DOT__two_complement_buffer_2 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_2)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_2)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_2)));
        this->__PVT__mac__DOT__two_complement_buffer_0 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_0)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_0)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_0)));
        this->__PVT__mac__DOT__two_complement_buffer_6 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_6)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_6)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_6)));
        this->__PVT__mac__DOT__two_complement_buffer_4 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_4)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_4)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_4)));
        this->__PVT__mac__DOT__two_complement_buffer_5 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_5)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_5)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_5)));
        this->__PVT__mac__DOT__two_complement_buffer_1 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_1)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_1)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_1)));
    }
    this->__PVT__mac__DOT__exp_addition_r_3 = this->__PVT__mac__DOT__exp_addition_r_2;
    this->__PVT__result_buffer_man = (0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                ? (
                                                   (0x3fU 
                                                    < (IData)(this->__PVT__adder__DOT__addition))
                                                    ? 0x3fU
                                                    : (IData)(this->__PVT__adder__DOT__addition))
                                                : (
                                                   (0xfU 
                                                    < (IData)(this->__PVT__adder__DOT__addition))
                                                    ? 0xfU
                                                    : (IData)(this->__PVT__adder__DOT__addition))));
    if (this->__PVT__adder__DOT___exp_diff_T) {
        this->__PVT__result_buffer_exp = (0xffU & (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5));
        this->__PVT__result_buffer_sign = (1U & (((IData)(this->__PVT__mac_io_out_result_man) 
                                                  > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                  ? 
                                                 ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                  >> 6U)
                                                  : (IData)(this->__PVT__adder_io_in_b_sign)));
    } else {
        this->__PVT__result_buffer_exp = (0xffU & (IData)(this->__PVT__adder_io_in_b_exp));
        this->__PVT__result_buffer_sign = (1U & (((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4) 
                                                  > (IData)(this->__PVT__adder_io_in_b_man))
                                                  ? 
                                                 ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                  >> 6U)
                                                  : (IData)(this->__PVT__adder_io_in_b_sign)));
    }
    this->__PVT__mac__DOT___GEN_61 = ((1U > (IData)(this->__PVT__mac__DOT__counter)) 
                                      & ((IData)(1U) 
                                         + (IData)(this->__PVT__mac__DOT__counter)));
    this->__PVT__mac__DOT__signs_7 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_7_r_1));
    this->__PVT__mac__DOT__dotProductRegs_7 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_7))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_7))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_7))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_7)))));
    this->__PVT__mac__DOT__signs_3 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_3_r_1));
    this->__PVT__mac__DOT__dotProductRegs_3 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_3))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_3))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_3))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_3)))));
    this->__PVT__mac__DOT__signs_2 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_2_r_1));
    this->__PVT__mac__DOT__dotProductRegs_2 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_2))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_2))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_2))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_2)))));
    this->__PVT__mac__DOT__signs_0 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_0_r_1));
    this->__PVT__mac__DOT__dotProductRegs_0 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result)))));
    this->__PVT__mac__DOT__signs_6 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_6_r_1));
    this->__PVT__mac__DOT__dotProductRegs_6 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_6))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_6))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_6))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_6)))));
    this->__PVT__mac__DOT__signs_4 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_4_r_1));
    this->__PVT__mac__DOT__dotProductRegs_4 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_4))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_4))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_4))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_4)))));
    this->__PVT__mac__DOT__signs_5 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_5_r_1));
    this->__PVT__mac__DOT__dotProductRegs_5 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_5))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_5))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_5))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_5)))));
    this->__PVT__mac__DOT__signs_1 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_1_r_1));
    this->__PVT__mac__DOT__dotProductRegs_1 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_1))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_1))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_1))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_1)))));
    this->__PVT__mac__DOT___io_out_result_exp_T_5 = 
        ((0xffU < (IData)(this->__PVT__mac__DOT__exp_addition))
          ? 0xffU : (IData)(this->__PVT__mac__DOT__exp_addition));
    this->__PVT__mac__DOT__exp_addition_r_2 = this->__PVT__mac__DOT__exp_addition_r_1;
    this->__PVT__mac__DOT__acc_hbfp = ((IData)(vlTOPp->reset)
                                        ? 0U : (0x7fU 
                                                & ((0x2000U 
                                                    & (IData)(this->__PVT__mac__DOT__sum))
                                                    ? 
                                                   ((0x3fU 
                                                     < 
                                                     (0x1fffU 
                                                      & ((IData)(1U) 
                                                         + 
                                                         (~ (IData)(this->__PVT__mac__DOT__sum)))))
                                                     ? 0x7fU
                                                     : 
                                                    (0x7fU 
                                                     & ((IData)(1U) 
                                                        + 
                                                        (~ 
                                                         (0x3fU 
                                                          & (IData)(this->__PVT__mac__DOT__sum))))))
                                                    : 
                                                   ((0x3fU 
                                                     < 
                                                     (0x1fffU 
                                                      & (IData)(this->__PVT__mac__DOT__sum)))
                                                     ? 0x3fU
                                                     : 
                                                    (0x3fU 
                                                     & (IData)(this->__PVT__mac__DOT__sum))))));
    this->__PVT__mac__DOT__signs_7_r_1 = this->__PVT__mac__DOT__signs_7_r;
    this->__PVT__mac__DOT__final_result_7 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_7));
    this->__PVT__mac__DOT__signs_3_r_1 = this->__PVT__mac__DOT__signs_3_r;
    this->__PVT__mac__DOT__final_result_3 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_3));
    this->__PVT__mac__DOT__signs_2_r_1 = this->__PVT__mac__DOT__signs_2_r;
    this->__PVT__mac__DOT__final_result_2 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_2));
    this->__PVT__mac__DOT__signs_0_r_1 = this->__PVT__mac__DOT__signs_0_r;
    this->__PVT__mac__DOT__final_result = ((IData)(vlTOPp->reset)
                                            ? 0U : (IData)(this->__PVT__mac__DOT__partial_result));
    this->__PVT__mac__DOT__signs_6_r_1 = this->__PVT__mac__DOT__signs_6_r;
    this->__PVT__mac__DOT__final_result_6 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_6));
    this->__PVT__mac__DOT__signs_4_r_1 = this->__PVT__mac__DOT__signs_4_r;
    this->__PVT__mac__DOT__final_result_4 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_4));
    this->__PVT__mac__DOT__signs_5_r_1 = this->__PVT__mac__DOT__signs_5_r;
    this->__PVT__mac__DOT__final_result_5 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_5));
    this->__PVT__mac__DOT__signs_1_r_1 = this->__PVT__mac__DOT__signs_1_r;
    this->__PVT__mac__DOT__final_result_1 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_1));
    this->__PVT__mac__DOT__sum = (0x3fffU & (VL_EXTENDS_II(14,13, 
                                                           (0x1fffU 
                                                            & (VL_EXTENDS_II(13,12, 
                                                                             (0xfffU 
                                                                              & (VL_EXTENDS_II(12,11, 
                                                                                (0x7ffU 
                                                                                & (VL_EXTENDS_II(11,10, 
                                                                                (0x3ffU 
                                                                                & (VL_EXTENDS_II(10,9, 
                                                                                (0x1ffU 
                                                                                & (VL_EXTENDS_II(9,8, 
                                                                                (0xffU 
                                                                                & (VL_EXTENDS_II(8,7, (IData)(this->__PVT__mac__DOT__two_complement_buffer_0)) 
                                                                                + 
                                                                                VL_EXTENDS_II(8,7, (IData)(this->__PVT__mac__DOT__two_complement_buffer_1))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(9,8, 
                                                                                ((0x80U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_2) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_2)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(10,9, 
                                                                                ((0x180U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_3) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_3)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(11,10, 
                                                                                ((0x380U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_4) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_4)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(12,11, 
                                                                                ((0x780U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_5) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_5)))))) 
                                                               + 
                                                               VL_EXTENDS_II(13,12, 
                                                                             ((0xf80U 
                                                                               & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_6) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                              | (IData)(this->__PVT__mac__DOT__two_complement_buffer_6)))))) 
                                             + VL_EXTENDS_II(14,13, 
                                                             ((0x1f80U 
                                                               & ((- (IData)(
                                                                             (1U 
                                                                              & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_7) 
                                                                                >> 6U)))) 
                                                                  << 7U)) 
                                                              | (IData)(this->__PVT__mac__DOT__two_complement_buffer_7)))));
    this->__PVT__mac__DOT__exp_addition_r_1 = this->__PVT__mac__DOT__exp_addition_r;
    this->__PVT__mac__DOT__signs_7_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_sign_7) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_sign_7));
    this->__PVT__mac__DOT__partial_result_7 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_166);
    this->__PVT__mac__DOT__signs_3_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_sign_3) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_sign_3));
    this->__PVT__mac__DOT__partial_result_3 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_162);
    this->__PVT__mac__DOT__signs_2_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_sign_2) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_sign_2));
    this->__PVT__mac__DOT__partial_result_2 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_161);
    this->__PVT__mac__DOT__signs_0_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_sign_0) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_sign_0));
    this->__PVT__mac__DOT__partial_result = (0xfffU 
                                             & this->__PVT__mac__DOT___GEN_159);
    this->__PVT__mac__DOT__signs_6_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_sign_6) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_sign_6));
    this->__PVT__mac__DOT__partial_result_6 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_165);
    this->__PVT__mac__DOT__signs_4_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_sign_4) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_sign_4));
    this->__PVT__mac__DOT__partial_result_4 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_163);
    this->__PVT__mac__DOT__signs_5_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_sign_5) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_sign_5));
    this->__PVT__mac__DOT__partial_result_5 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_164);
    this->__PVT__mac__DOT__signs_1_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_sign_1) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_sign_1));
    this->__PVT__mac__DOT__partial_result_1 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_160);
    this->__PVT__mac__DOT__exp_addition_r = (0x1ffU 
                                             & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_exp) 
                                                + (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_exp)));
}

VL_INLINE_OPT void VSystolicArray_HBFP_forTesting_HBFP_PE::_combo__TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_4__204(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_combo__TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_4__204\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->io_in_flag) {
        this->__PVT__adder_io_in_b_man = this->__PVT__adder_io_in_b_r_man;
        this->__PVT__adder_io_in_b_exp = this->__PVT__adder_io_in_b_r_exp;
        this->__PVT__adder_io_in_b_sign = this->__PVT__adder_io_in_b_r_sign;
        this->__PVT__mac_io_out_result_man = (0x3fU 
                                              & (IData)(this->__PVT__mac__DOT__acc_hbfp));
    } else {
        this->__PVT__adder_io_in_b_man = this->__PVT__result_buffer_man;
        this->__PVT__adder_io_in_b_exp = this->__PVT__result_buffer_exp;
        this->__PVT__adder_io_in_b_sign = this->__PVT__result_buffer_sign;
        this->__PVT__mac_io_out_result_man = (0x3fU 
                                              & ((0xfU 
                                                  < 
                                                  (0x3fU 
                                                   & (IData)(this->__PVT__mac__DOT__acc_hbfp)))
                                                  ? 0xfU
                                                  : (IData)(this->__PVT__mac__DOT__acc_hbfp)));
    }
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_man_1))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_man_1))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_1) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_1))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_1))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_1))))));
    this->__PVT__mac__DOT__multiplier_2_1_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_man_1) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_1) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_1)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_man_0))) 
                                                     * 
                                                     (0xfU 
                                                      & ((IData)(this->__PVT__mac__DOT__counter)
                                                          ? 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? 
                                                          (3U 
                                                           & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_0) 
                                                              >> 4U))
                                                           : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_0))
                                                          : 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? 
                                                          (0xfU 
                                                           & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_0))
                                                           : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_0))))));
    this->__PVT__mac__DOT__multiplier_2_io_out = (0xffU 
                                                  & (((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      (3U 
                                                       & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_man_0) 
                                                          >> 4U))
                                                       : 0U) 
                                                     * 
                                                     (0xfU 
                                                      & ((IData)(this->__PVT__mac__DOT__counter)
                                                          ? 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? 
                                                          (3U 
                                                           & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_0) 
                                                              >> 4U))
                                                           : 0U)
                                                          : 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_0)
                                                           : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_man_2))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_man_2))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_2) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_2))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_2))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_2))))));
    this->__PVT__mac__DOT__multiplier_2_2_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_man_2) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_2) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_2)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_4_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_man_4))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_man_4))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_4) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_4))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_4))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_4))))));
    this->__PVT__mac__DOT__multiplier_2_4_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_man_4) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_4) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_4)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_5_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_man_5))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_man_5))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_5) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_5))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_5))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_5))))));
    this->__PVT__mac__DOT__multiplier_2_5_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_man_5) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_5) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_5)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_7_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_man_7))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_man_7))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_7) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_7))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_7))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_7))))));
    this->__PVT__mac__DOT__multiplier_2_7_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_man_7) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_7) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_7)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_man_3))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_man_3))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_3) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_3))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_3))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_3))))));
    this->__PVT__mac__DOT__multiplier_2_3_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_man_3) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_3) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_3)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_6_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_man_6))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_man_6))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_6) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_6))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_6))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_6))))));
    this->__PVT__mac__DOT__multiplier_2_6_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_man_6) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_6) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_6)
                                                    : 0U)))));
    this->__PVT__adder__DOT___exp_diff_T = ((0xffU 
                                             & (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)) 
                                            > (IData)(this->__PVT__adder_io_in_b_exp));
    this->__PVT__adder__DOT__exp_diff = (0xffU & ((
                                                   (0xffU 
                                                    & (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)) 
                                                   > (IData)(this->__PVT__adder_io_in_b_exp))
                                                   ? 
                                                  ((IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5) 
                                                   - (IData)(this->__PVT__adder_io_in_b_exp))
                                                   : 
                                                  ((IData)(this->__PVT__adder_io_in_b_exp) 
                                                   - (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5))));
    this->__PVT__mac__DOT___partial_result_T_11 = (0xffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out) 
                                                      + 
                                                      ((IData)(this->__PVT__mac__DOT__multiplier_2_1_io_out) 
                                                       << 4U)));
    this->__PVT__mac__DOT___partial_result_T_1 = (0xffffU 
                                                  & ((IData)(this->__PVT__mac__DOT__multiplier_1_io_out) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_2_io_out) 
                                                      << 4U)));
    this->__PVT__mac__DOT___partial_result_T_21 = (0xffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out) 
                                                      + 
                                                      ((IData)(this->__PVT__mac__DOT__multiplier_2_2_io_out) 
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
    this->__PVT__mac__DOT___partial_result_T_71 = (0xffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out) 
                                                      + 
                                                      ((IData)(this->__PVT__mac__DOT__multiplier_2_7_io_out) 
                                                       << 4U)));
    this->__PVT__mac__DOT___partial_result_T_31 = (0xffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out) 
                                                      + 
                                                      ((IData)(this->__PVT__mac__DOT__multiplier_2_3_io_out) 
                                                       << 4U)));
    this->__PVT__mac__DOT___partial_result_T_61 = (0xffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out) 
                                                      + 
                                                      ((IData)(this->__PVT__mac__DOT__multiplier_2_6_io_out) 
                                                       << 4U)));
    if ((5U >= (IData)(this->__PVT__adder__DOT__exp_diff))) {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 
            = (0x3fU & ((IData)(this->__PVT__adder_io_in_b_man) 
                        >> (IData)(this->__PVT__adder__DOT__exp_diff)));
        this->__PVT__adder__DOT___io_out_result_sign_T_4 
            = (0x3fU & ((IData)(this->__PVT__mac_io_out_result_man) 
                        >> (IData)(this->__PVT__adder__DOT__exp_diff)));
    } else {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__adder__DOT___io_out_result_sign_T_4 = 0U;
    }
    if (vlTOPp->reset) {
        this->__PVT__mac__DOT___GEN_160 = 0U;
        this->__PVT__mac__DOT___GEN_159 = 0U;
        this->__PVT__mac__DOT___GEN_161 = 0U;
        this->__PVT__mac__DOT___GEN_163 = 0U;
        this->__PVT__mac__DOT___GEN_164 = 0U;
        this->__PVT__mac__DOT___GEN_166 = 0U;
        this->__PVT__mac__DOT___GEN_162 = 0U;
        this->__PVT__mac__DOT___GEN_165 = 0U;
    } else {
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
    }
    this->__PVT__adder__DOT__addition = (0x7fU & ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                                   ? 
                                                  (((1U 
                                                     & ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                        >> 6U)) 
                                                    == (IData)(this->__PVT__adder_io_in_b_sign))
                                                    ? 
                                                   ((IData)(this->__PVT__mac_io_out_result_man) 
                                                    + (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                    : 
                                                   (0x3fU 
                                                    & (((IData)(this->__PVT__mac_io_out_result_man) 
                                                        > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                        ? 
                                                       ((IData)(this->__PVT__mac_io_out_result_man) 
                                                        - (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                        : 
                                                       ((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1) 
                                                        - (IData)(this->__PVT__mac_io_out_result_man)))))
                                                   : 
                                                  (((1U 
                                                     & ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                        >> 6U)) 
                                                    == (IData)(this->__PVT__adder_io_in_b_sign))
                                                    ? 
                                                   ((IData)(this->__PVT__adder_io_in_b_man) 
                                                    + (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                    : 
                                                   (0x3fU 
                                                    & (((IData)(this->__PVT__adder_io_in_b_man) 
                                                        > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                        ? 
                                                       ((IData)(this->__PVT__adder_io_in_b_man) 
                                                        - (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                        : 
                                                       ((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4) 
                                                        - (IData)(this->__PVT__adder_io_in_b_man)))))));
}

VL_INLINE_OPT void VSystolicArray_HBFP_forTesting_HBFP_PE::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_5__13(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_5__13\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__mac__DOT__exp_addition = this->__PVT__mac__DOT__exp_addition_r_3;
    this->__PVT__adder_io_in_b_r_man = this->__PVT__result_buffer_man;
    this->__PVT__adder_io_in_b_r_exp = this->__PVT__result_buffer_exp;
    this->__PVT__adder_io_in_b_r_sign = this->__PVT__result_buffer_sign;
    this->__PVT__mac__DOT__counter = ((IData)(vlTOPp->reset) 
                                      | (IData)(this->__PVT__mac__DOT___GEN_61));
    if (vlTOPp->reset) {
        this->__PVT__mac__DOT__two_complement_buffer_7 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_3 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_2 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_0 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_6 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_4 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_5 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_1 = 0U;
    } else {
        this->__PVT__mac__DOT__two_complement_buffer_7 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_7)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_7)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_7)));
        this->__PVT__mac__DOT__two_complement_buffer_3 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_3)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_3)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_3)));
        this->__PVT__mac__DOT__two_complement_buffer_2 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_2)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_2)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_2)));
        this->__PVT__mac__DOT__two_complement_buffer_0 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_0)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_0)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_0)));
        this->__PVT__mac__DOT__two_complement_buffer_6 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_6)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_6)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_6)));
        this->__PVT__mac__DOT__two_complement_buffer_4 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_4)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_4)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_4)));
        this->__PVT__mac__DOT__two_complement_buffer_5 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_5)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_5)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_5)));
        this->__PVT__mac__DOT__two_complement_buffer_1 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_1)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_1)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_1)));
    }
    this->__PVT__mac__DOT__exp_addition_r_3 = this->__PVT__mac__DOT__exp_addition_r_2;
    this->__PVT__result_buffer_man = (0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                ? (
                                                   (0x3fU 
                                                    < (IData)(this->__PVT__adder__DOT__addition))
                                                    ? 0x3fU
                                                    : (IData)(this->__PVT__adder__DOT__addition))
                                                : (
                                                   (0xfU 
                                                    < (IData)(this->__PVT__adder__DOT__addition))
                                                    ? 0xfU
                                                    : (IData)(this->__PVT__adder__DOT__addition))));
    if (this->__PVT__adder__DOT___exp_diff_T) {
        this->__PVT__result_buffer_exp = (0xffU & (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5));
        this->__PVT__result_buffer_sign = (1U & (((IData)(this->__PVT__mac_io_out_result_man) 
                                                  > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                  ? 
                                                 ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                  >> 6U)
                                                  : (IData)(this->__PVT__adder_io_in_b_sign)));
    } else {
        this->__PVT__result_buffer_exp = (0xffU & (IData)(this->__PVT__adder_io_in_b_exp));
        this->__PVT__result_buffer_sign = (1U & (((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4) 
                                                  > (IData)(this->__PVT__adder_io_in_b_man))
                                                  ? 
                                                 ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                  >> 6U)
                                                  : (IData)(this->__PVT__adder_io_in_b_sign)));
    }
    this->__PVT__mac__DOT___GEN_61 = ((1U > (IData)(this->__PVT__mac__DOT__counter)) 
                                      & ((IData)(1U) 
                                         + (IData)(this->__PVT__mac__DOT__counter)));
    this->__PVT__mac__DOT__signs_7 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_7_r_1));
    this->__PVT__mac__DOT__dotProductRegs_7 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_7))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_7))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_7))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_7)))));
    this->__PVT__mac__DOT__signs_3 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_3_r_1));
    this->__PVT__mac__DOT__dotProductRegs_3 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_3))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_3))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_3))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_3)))));
    this->__PVT__mac__DOT__signs_2 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_2_r_1));
    this->__PVT__mac__DOT__dotProductRegs_2 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_2))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_2))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_2))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_2)))));
    this->__PVT__mac__DOT__signs_0 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_0_r_1));
    this->__PVT__mac__DOT__dotProductRegs_0 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result)))));
    this->__PVT__mac__DOT__signs_6 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_6_r_1));
    this->__PVT__mac__DOT__dotProductRegs_6 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_6))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_6))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_6))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_6)))));
    this->__PVT__mac__DOT__signs_4 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_4_r_1));
    this->__PVT__mac__DOT__dotProductRegs_4 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_4))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_4))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_4))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_4)))));
    this->__PVT__mac__DOT__signs_5 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_5_r_1));
    this->__PVT__mac__DOT__dotProductRegs_5 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_5))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_5))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_5))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_5)))));
    this->__PVT__mac__DOT__signs_1 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_1_r_1));
    this->__PVT__mac__DOT__dotProductRegs_1 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_1))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_1))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_1))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_1)))));
    this->__PVT__mac__DOT___io_out_result_exp_T_5 = 
        ((0xffU < (IData)(this->__PVT__mac__DOT__exp_addition))
          ? 0xffU : (IData)(this->__PVT__mac__DOT__exp_addition));
    this->__PVT__mac__DOT__exp_addition_r_2 = this->__PVT__mac__DOT__exp_addition_r_1;
    this->__PVT__mac__DOT__acc_hbfp = ((IData)(vlTOPp->reset)
                                        ? 0U : (0x7fU 
                                                & ((0x2000U 
                                                    & (IData)(this->__PVT__mac__DOT__sum))
                                                    ? 
                                                   ((0x3fU 
                                                     < 
                                                     (0x1fffU 
                                                      & ((IData)(1U) 
                                                         + 
                                                         (~ (IData)(this->__PVT__mac__DOT__sum)))))
                                                     ? 0x7fU
                                                     : 
                                                    (0x7fU 
                                                     & ((IData)(1U) 
                                                        + 
                                                        (~ 
                                                         (0x3fU 
                                                          & (IData)(this->__PVT__mac__DOT__sum))))))
                                                    : 
                                                   ((0x3fU 
                                                     < 
                                                     (0x1fffU 
                                                      & (IData)(this->__PVT__mac__DOT__sum)))
                                                     ? 0x3fU
                                                     : 
                                                    (0x3fU 
                                                     & (IData)(this->__PVT__mac__DOT__sum))))));
    this->__PVT__mac__DOT__signs_7_r_1 = this->__PVT__mac__DOT__signs_7_r;
    this->__PVT__mac__DOT__final_result_7 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_7));
    this->__PVT__mac__DOT__signs_3_r_1 = this->__PVT__mac__DOT__signs_3_r;
    this->__PVT__mac__DOT__final_result_3 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_3));
    this->__PVT__mac__DOT__signs_2_r_1 = this->__PVT__mac__DOT__signs_2_r;
    this->__PVT__mac__DOT__final_result_2 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_2));
    this->__PVT__mac__DOT__signs_0_r_1 = this->__PVT__mac__DOT__signs_0_r;
    this->__PVT__mac__DOT__final_result = ((IData)(vlTOPp->reset)
                                            ? 0U : (IData)(this->__PVT__mac__DOT__partial_result));
    this->__PVT__mac__DOT__signs_6_r_1 = this->__PVT__mac__DOT__signs_6_r;
    this->__PVT__mac__DOT__final_result_6 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_6));
    this->__PVT__mac__DOT__signs_4_r_1 = this->__PVT__mac__DOT__signs_4_r;
    this->__PVT__mac__DOT__final_result_4 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_4));
    this->__PVT__mac__DOT__signs_5_r_1 = this->__PVT__mac__DOT__signs_5_r;
    this->__PVT__mac__DOT__final_result_5 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_5));
    this->__PVT__mac__DOT__signs_1_r_1 = this->__PVT__mac__DOT__signs_1_r;
    this->__PVT__mac__DOT__final_result_1 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_1));
    this->__PVT__mac__DOT__sum = (0x3fffU & (VL_EXTENDS_II(14,13, 
                                                           (0x1fffU 
                                                            & (VL_EXTENDS_II(13,12, 
                                                                             (0xfffU 
                                                                              & (VL_EXTENDS_II(12,11, 
                                                                                (0x7ffU 
                                                                                & (VL_EXTENDS_II(11,10, 
                                                                                (0x3ffU 
                                                                                & (VL_EXTENDS_II(10,9, 
                                                                                (0x1ffU 
                                                                                & (VL_EXTENDS_II(9,8, 
                                                                                (0xffU 
                                                                                & (VL_EXTENDS_II(8,7, (IData)(this->__PVT__mac__DOT__two_complement_buffer_0)) 
                                                                                + 
                                                                                VL_EXTENDS_II(8,7, (IData)(this->__PVT__mac__DOT__two_complement_buffer_1))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(9,8, 
                                                                                ((0x80U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_2) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_2)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(10,9, 
                                                                                ((0x180U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_3) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_3)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(11,10, 
                                                                                ((0x380U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_4) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_4)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(12,11, 
                                                                                ((0x780U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_5) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_5)))))) 
                                                               + 
                                                               VL_EXTENDS_II(13,12, 
                                                                             ((0xf80U 
                                                                               & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_6) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                              | (IData)(this->__PVT__mac__DOT__two_complement_buffer_6)))))) 
                                             + VL_EXTENDS_II(14,13, 
                                                             ((0x1f80U 
                                                               & ((- (IData)(
                                                                             (1U 
                                                                              & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_7) 
                                                                                >> 6U)))) 
                                                                  << 7U)) 
                                                              | (IData)(this->__PVT__mac__DOT__two_complement_buffer_7)))));
    this->__PVT__mac__DOT__exp_addition_r_1 = this->__PVT__mac__DOT__exp_addition_r;
    this->__PVT__mac__DOT__signs_7_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_sign_7) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_sign_7));
    this->__PVT__mac__DOT__partial_result_7 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_166);
    this->__PVT__mac__DOT__signs_3_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_sign_3) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_sign_3));
    this->__PVT__mac__DOT__partial_result_3 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_162);
    this->__PVT__mac__DOT__signs_2_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_sign_2) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_sign_2));
    this->__PVT__mac__DOT__partial_result_2 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_161);
    this->__PVT__mac__DOT__signs_0_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_sign_0) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_sign_0));
    this->__PVT__mac__DOT__partial_result = (0xfffU 
                                             & this->__PVT__mac__DOT___GEN_159);
    this->__PVT__mac__DOT__signs_6_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_sign_6) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_sign_6));
    this->__PVT__mac__DOT__partial_result_6 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_165);
    this->__PVT__mac__DOT__signs_4_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_sign_4) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_sign_4));
    this->__PVT__mac__DOT__partial_result_4 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_163);
    this->__PVT__mac__DOT__signs_5_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_sign_5) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_sign_5));
    this->__PVT__mac__DOT__partial_result_5 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_164);
    this->__PVT__mac__DOT__signs_1_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_sign_1) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_sign_1));
    this->__PVT__mac__DOT__partial_result_1 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_160);
    this->__PVT__mac__DOT__exp_addition_r = (0x1ffU 
                                             & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_exp) 
                                                + (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_exp)));
}

VL_INLINE_OPT void VSystolicArray_HBFP_forTesting_HBFP_PE::_combo__TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_5__205(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_combo__TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_5__205\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->io_in_flag) {
        this->__PVT__adder_io_in_b_man = this->__PVT__adder_io_in_b_r_man;
        this->__PVT__adder_io_in_b_exp = this->__PVT__adder_io_in_b_r_exp;
        this->__PVT__adder_io_in_b_sign = this->__PVT__adder_io_in_b_r_sign;
        this->__PVT__mac_io_out_result_man = (0x3fU 
                                              & (IData)(this->__PVT__mac__DOT__acc_hbfp));
    } else {
        this->__PVT__adder_io_in_b_man = this->__PVT__result_buffer_man;
        this->__PVT__adder_io_in_b_exp = this->__PVT__result_buffer_exp;
        this->__PVT__adder_io_in_b_sign = this->__PVT__result_buffer_sign;
        this->__PVT__mac_io_out_result_man = (0x3fU 
                                              & ((0xfU 
                                                  < 
                                                  (0x3fU 
                                                   & (IData)(this->__PVT__mac__DOT__acc_hbfp)))
                                                  ? 0xfU
                                                  : (IData)(this->__PVT__mac__DOT__acc_hbfp)));
    }
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_man_0))) 
                                                     * 
                                                     (0xfU 
                                                      & ((IData)(this->__PVT__mac__DOT__counter)
                                                          ? 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? 
                                                          (3U 
                                                           & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_0) 
                                                              >> 4U))
                                                           : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_0))
                                                          : 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? 
                                                          (0xfU 
                                                           & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_0))
                                                           : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_0))))));
    this->__PVT__mac__DOT__multiplier_2_io_out = (0xffU 
                                                  & (((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      (3U 
                                                       & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_man_0) 
                                                          >> 4U))
                                                       : 0U) 
                                                     * 
                                                     (0xfU 
                                                      & ((IData)(this->__PVT__mac__DOT__counter)
                                                          ? 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? 
                                                          (3U 
                                                           & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_0) 
                                                              >> 4U))
                                                           : 0U)
                                                          : 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_0)
                                                           : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_man_1))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_man_1))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_1) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_1))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_1))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_1))))));
    this->__PVT__mac__DOT__multiplier_2_1_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_man_1) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_1) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_1)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_man_2))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_man_2))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_2) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_2))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_2))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_2))))));
    this->__PVT__mac__DOT__multiplier_2_2_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_man_2) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_2) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_2)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_4_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_man_4))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_man_4))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_4) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_4))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_4))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_4))))));
    this->__PVT__mac__DOT__multiplier_2_4_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_man_4) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_4) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_4)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_5_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_man_5))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_man_5))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_5) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_5))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_5))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_5))))));
    this->__PVT__mac__DOT__multiplier_2_5_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_man_5) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_5) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_5)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_7_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_man_7))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_man_7))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_7) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_7))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_7))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_7))))));
    this->__PVT__mac__DOT__multiplier_2_7_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_man_7) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_7) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_7)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_man_3))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_man_3))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_3) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_3))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_3))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_3))))));
    this->__PVT__mac__DOT__multiplier_2_3_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_man_3) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_3) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_3)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_6_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_man_6))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_man_6))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_6) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_6))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_6))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_6))))));
    this->__PVT__mac__DOT__multiplier_2_6_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_man_6) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_6) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_6)
                                                    : 0U)))));
    this->__PVT__adder__DOT___exp_diff_T = ((0xffU 
                                             & (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)) 
                                            > (IData)(this->__PVT__adder_io_in_b_exp));
    this->__PVT__adder__DOT__exp_diff = (0xffU & ((
                                                   (0xffU 
                                                    & (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)) 
                                                   > (IData)(this->__PVT__adder_io_in_b_exp))
                                                   ? 
                                                  ((IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5) 
                                                   - (IData)(this->__PVT__adder_io_in_b_exp))
                                                   : 
                                                  ((IData)(this->__PVT__adder_io_in_b_exp) 
                                                   - (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5))));
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
    this->__PVT__mac__DOT___partial_result_T_71 = (0xffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out) 
                                                      + 
                                                      ((IData)(this->__PVT__mac__DOT__multiplier_2_7_io_out) 
                                                       << 4U)));
    this->__PVT__mac__DOT___partial_result_T_31 = (0xffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out) 
                                                      + 
                                                      ((IData)(this->__PVT__mac__DOT__multiplier_2_3_io_out) 
                                                       << 4U)));
    this->__PVT__mac__DOT___partial_result_T_61 = (0xffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out) 
                                                      + 
                                                      ((IData)(this->__PVT__mac__DOT__multiplier_2_6_io_out) 
                                                       << 4U)));
    if ((5U >= (IData)(this->__PVT__adder__DOT__exp_diff))) {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 
            = (0x3fU & ((IData)(this->__PVT__adder_io_in_b_man) 
                        >> (IData)(this->__PVT__adder__DOT__exp_diff)));
        this->__PVT__adder__DOT___io_out_result_sign_T_4 
            = (0x3fU & ((IData)(this->__PVT__mac_io_out_result_man) 
                        >> (IData)(this->__PVT__adder__DOT__exp_diff)));
    } else {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__adder__DOT___io_out_result_sign_T_4 = 0U;
    }
    if (vlTOPp->reset) {
        this->__PVT__mac__DOT___GEN_159 = 0U;
        this->__PVT__mac__DOT___GEN_160 = 0U;
        this->__PVT__mac__DOT___GEN_161 = 0U;
        this->__PVT__mac__DOT___GEN_163 = 0U;
        this->__PVT__mac__DOT___GEN_164 = 0U;
        this->__PVT__mac__DOT___GEN_166 = 0U;
        this->__PVT__mac__DOT___GEN_162 = 0U;
        this->__PVT__mac__DOT___GEN_165 = 0U;
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
    }
    this->__PVT__adder__DOT__addition = (0x7fU & ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                                   ? 
                                                  (((1U 
                                                     & ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                        >> 6U)) 
                                                    == (IData)(this->__PVT__adder_io_in_b_sign))
                                                    ? 
                                                   ((IData)(this->__PVT__mac_io_out_result_man) 
                                                    + (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                    : 
                                                   (0x3fU 
                                                    & (((IData)(this->__PVT__mac_io_out_result_man) 
                                                        > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                        ? 
                                                       ((IData)(this->__PVT__mac_io_out_result_man) 
                                                        - (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                        : 
                                                       ((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1) 
                                                        - (IData)(this->__PVT__mac_io_out_result_man)))))
                                                   : 
                                                  (((1U 
                                                     & ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                        >> 6U)) 
                                                    == (IData)(this->__PVT__adder_io_in_b_sign))
                                                    ? 
                                                   ((IData)(this->__PVT__adder_io_in_b_man) 
                                                    + (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                    : 
                                                   (0x3fU 
                                                    & (((IData)(this->__PVT__adder_io_in_b_man) 
                                                        > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                        ? 
                                                       ((IData)(this->__PVT__adder_io_in_b_man) 
                                                        - (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                        : 
                                                       ((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4) 
                                                        - (IData)(this->__PVT__adder_io_in_b_man)))))));
}

VL_INLINE_OPT void VSystolicArray_HBFP_forTesting_HBFP_PE::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_6__14(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_6__14\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__mac__DOT__exp_addition = this->__PVT__mac__DOT__exp_addition_r_3;
    this->__PVT__adder_io_in_b_r_man = this->__PVT__result_buffer_man;
    this->__PVT__adder_io_in_b_r_exp = this->__PVT__result_buffer_exp;
    this->__PVT__adder_io_in_b_r_sign = this->__PVT__result_buffer_sign;
    this->__PVT__mac__DOT__counter = ((IData)(vlTOPp->reset) 
                                      | (IData)(this->__PVT__mac__DOT___GEN_61));
    if (vlTOPp->reset) {
        this->__PVT__mac__DOT__two_complement_buffer_7 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_3 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_2 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_0 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_6 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_4 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_5 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_1 = 0U;
    } else {
        this->__PVT__mac__DOT__two_complement_buffer_7 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_7)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_7)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_7)));
        this->__PVT__mac__DOT__two_complement_buffer_3 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_3)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_3)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_3)));
        this->__PVT__mac__DOT__two_complement_buffer_2 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_2)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_2)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_2)));
        this->__PVT__mac__DOT__two_complement_buffer_0 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_0)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_0)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_0)));
        this->__PVT__mac__DOT__two_complement_buffer_6 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_6)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_6)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_6)));
        this->__PVT__mac__DOT__two_complement_buffer_4 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_4)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_4)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_4)));
        this->__PVT__mac__DOT__two_complement_buffer_5 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_5)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_5)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_5)));
        this->__PVT__mac__DOT__two_complement_buffer_1 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_1)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_1)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_1)));
    }
    this->__PVT__mac__DOT__exp_addition_r_3 = this->__PVT__mac__DOT__exp_addition_r_2;
    this->__PVT__result_buffer_man = (0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                ? (
                                                   (0x3fU 
                                                    < (IData)(this->__PVT__adder__DOT__addition))
                                                    ? 0x3fU
                                                    : (IData)(this->__PVT__adder__DOT__addition))
                                                : (
                                                   (0xfU 
                                                    < (IData)(this->__PVT__adder__DOT__addition))
                                                    ? 0xfU
                                                    : (IData)(this->__PVT__adder__DOT__addition))));
    if (this->__PVT__adder__DOT___exp_diff_T) {
        this->__PVT__result_buffer_exp = (0xffU & (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5));
        this->__PVT__result_buffer_sign = (1U & (((IData)(this->__PVT__mac_io_out_result_man) 
                                                  > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                  ? 
                                                 ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                  >> 6U)
                                                  : (IData)(this->__PVT__adder_io_in_b_sign)));
    } else {
        this->__PVT__result_buffer_exp = (0xffU & (IData)(this->__PVT__adder_io_in_b_exp));
        this->__PVT__result_buffer_sign = (1U & (((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4) 
                                                  > (IData)(this->__PVT__adder_io_in_b_man))
                                                  ? 
                                                 ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                  >> 6U)
                                                  : (IData)(this->__PVT__adder_io_in_b_sign)));
    }
    this->__PVT__mac__DOT___GEN_61 = ((1U > (IData)(this->__PVT__mac__DOT__counter)) 
                                      & ((IData)(1U) 
                                         + (IData)(this->__PVT__mac__DOT__counter)));
    this->__PVT__mac__DOT__signs_7 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_7_r_1));
    this->__PVT__mac__DOT__dotProductRegs_7 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_7))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_7))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_7))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_7)))));
    this->__PVT__mac__DOT__signs_3 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_3_r_1));
    this->__PVT__mac__DOT__dotProductRegs_3 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_3))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_3))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_3))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_3)))));
    this->__PVT__mac__DOT__signs_2 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_2_r_1));
    this->__PVT__mac__DOT__dotProductRegs_2 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_2))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_2))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_2))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_2)))));
    this->__PVT__mac__DOT__signs_0 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_0_r_1));
    this->__PVT__mac__DOT__dotProductRegs_0 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result)))));
    this->__PVT__mac__DOT__signs_6 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_6_r_1));
    this->__PVT__mac__DOT__dotProductRegs_6 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_6))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_6))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_6))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_6)))));
    this->__PVT__mac__DOT__signs_4 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_4_r_1));
    this->__PVT__mac__DOT__dotProductRegs_4 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_4))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_4))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_4))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_4)))));
    this->__PVT__mac__DOT__signs_5 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_5_r_1));
    this->__PVT__mac__DOT__dotProductRegs_5 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_5))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_5))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_5))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_5)))));
    this->__PVT__mac__DOT__signs_1 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_1_r_1));
    this->__PVT__mac__DOT__dotProductRegs_1 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_1))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_1))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_1))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_1)))));
    this->__PVT__mac__DOT___io_out_result_exp_T_5 = 
        ((0xffU < (IData)(this->__PVT__mac__DOT__exp_addition))
          ? 0xffU : (IData)(this->__PVT__mac__DOT__exp_addition));
    this->__PVT__mac__DOT__exp_addition_r_2 = this->__PVT__mac__DOT__exp_addition_r_1;
    this->__PVT__mac__DOT__acc_hbfp = ((IData)(vlTOPp->reset)
                                        ? 0U : (0x7fU 
                                                & ((0x2000U 
                                                    & (IData)(this->__PVT__mac__DOT__sum))
                                                    ? 
                                                   ((0x3fU 
                                                     < 
                                                     (0x1fffU 
                                                      & ((IData)(1U) 
                                                         + 
                                                         (~ (IData)(this->__PVT__mac__DOT__sum)))))
                                                     ? 0x7fU
                                                     : 
                                                    (0x7fU 
                                                     & ((IData)(1U) 
                                                        + 
                                                        (~ 
                                                         (0x3fU 
                                                          & (IData)(this->__PVT__mac__DOT__sum))))))
                                                    : 
                                                   ((0x3fU 
                                                     < 
                                                     (0x1fffU 
                                                      & (IData)(this->__PVT__mac__DOT__sum)))
                                                     ? 0x3fU
                                                     : 
                                                    (0x3fU 
                                                     & (IData)(this->__PVT__mac__DOT__sum))))));
    this->__PVT__mac__DOT__signs_7_r_1 = this->__PVT__mac__DOT__signs_7_r;
    this->__PVT__mac__DOT__final_result_7 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_7));
    this->__PVT__mac__DOT__signs_3_r_1 = this->__PVT__mac__DOT__signs_3_r;
    this->__PVT__mac__DOT__final_result_3 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_3));
    this->__PVT__mac__DOT__signs_2_r_1 = this->__PVT__mac__DOT__signs_2_r;
    this->__PVT__mac__DOT__final_result_2 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_2));
    this->__PVT__mac__DOT__signs_0_r_1 = this->__PVT__mac__DOT__signs_0_r;
    this->__PVT__mac__DOT__final_result = ((IData)(vlTOPp->reset)
                                            ? 0U : (IData)(this->__PVT__mac__DOT__partial_result));
    this->__PVT__mac__DOT__signs_6_r_1 = this->__PVT__mac__DOT__signs_6_r;
    this->__PVT__mac__DOT__final_result_6 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_6));
    this->__PVT__mac__DOT__signs_4_r_1 = this->__PVT__mac__DOT__signs_4_r;
    this->__PVT__mac__DOT__final_result_4 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_4));
    this->__PVT__mac__DOT__signs_5_r_1 = this->__PVT__mac__DOT__signs_5_r;
    this->__PVT__mac__DOT__final_result_5 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_5));
    this->__PVT__mac__DOT__signs_1_r_1 = this->__PVT__mac__DOT__signs_1_r;
    this->__PVT__mac__DOT__final_result_1 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_1));
    this->__PVT__mac__DOT__sum = (0x3fffU & (VL_EXTENDS_II(14,13, 
                                                           (0x1fffU 
                                                            & (VL_EXTENDS_II(13,12, 
                                                                             (0xfffU 
                                                                              & (VL_EXTENDS_II(12,11, 
                                                                                (0x7ffU 
                                                                                & (VL_EXTENDS_II(11,10, 
                                                                                (0x3ffU 
                                                                                & (VL_EXTENDS_II(10,9, 
                                                                                (0x1ffU 
                                                                                & (VL_EXTENDS_II(9,8, 
                                                                                (0xffU 
                                                                                & (VL_EXTENDS_II(8,7, (IData)(this->__PVT__mac__DOT__two_complement_buffer_0)) 
                                                                                + 
                                                                                VL_EXTENDS_II(8,7, (IData)(this->__PVT__mac__DOT__two_complement_buffer_1))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(9,8, 
                                                                                ((0x80U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_2) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_2)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(10,9, 
                                                                                ((0x180U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_3) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_3)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(11,10, 
                                                                                ((0x380U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_4) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_4)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(12,11, 
                                                                                ((0x780U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_5) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_5)))))) 
                                                               + 
                                                               VL_EXTENDS_II(13,12, 
                                                                             ((0xf80U 
                                                                               & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_6) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                              | (IData)(this->__PVT__mac__DOT__two_complement_buffer_6)))))) 
                                             + VL_EXTENDS_II(14,13, 
                                                             ((0x1f80U 
                                                               & ((- (IData)(
                                                                             (1U 
                                                                              & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_7) 
                                                                                >> 6U)))) 
                                                                  << 7U)) 
                                                              | (IData)(this->__PVT__mac__DOT__two_complement_buffer_7)))));
    this->__PVT__mac__DOT__exp_addition_r_1 = this->__PVT__mac__DOT__exp_addition_r;
    this->__PVT__mac__DOT__signs_7_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_sign_7) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_sign_7));
    this->__PVT__mac__DOT__partial_result_7 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_166);
    this->__PVT__mac__DOT__signs_3_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_sign_3) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_sign_3));
    this->__PVT__mac__DOT__partial_result_3 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_162);
    this->__PVT__mac__DOT__signs_2_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_sign_2) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_sign_2));
    this->__PVT__mac__DOT__partial_result_2 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_161);
    this->__PVT__mac__DOT__signs_0_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_sign_0) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_sign_0));
    this->__PVT__mac__DOT__partial_result = (0xfffU 
                                             & this->__PVT__mac__DOT___GEN_159);
    this->__PVT__mac__DOT__signs_6_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_sign_6) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_sign_6));
    this->__PVT__mac__DOT__partial_result_6 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_165);
    this->__PVT__mac__DOT__signs_4_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_sign_4) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_sign_4));
    this->__PVT__mac__DOT__partial_result_4 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_163);
    this->__PVT__mac__DOT__signs_5_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_sign_5) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_sign_5));
    this->__PVT__mac__DOT__partial_result_5 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_164);
    this->__PVT__mac__DOT__signs_1_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_sign_1) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_sign_1));
    this->__PVT__mac__DOT__partial_result_1 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_160);
    this->__PVT__mac__DOT__exp_addition_r = (0x1ffU 
                                             & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_exp) 
                                                + (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_exp)));
}

VL_INLINE_OPT void VSystolicArray_HBFP_forTesting_HBFP_PE::_combo__TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_6__206(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_combo__TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_6__206\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->io_in_flag) {
        this->__PVT__adder_io_in_b_man = this->__PVT__adder_io_in_b_r_man;
        this->__PVT__adder_io_in_b_exp = this->__PVT__adder_io_in_b_r_exp;
        this->__PVT__adder_io_in_b_sign = this->__PVT__adder_io_in_b_r_sign;
        this->__PVT__mac_io_out_result_man = (0x3fU 
                                              & (IData)(this->__PVT__mac__DOT__acc_hbfp));
    } else {
        this->__PVT__adder_io_in_b_man = this->__PVT__result_buffer_man;
        this->__PVT__adder_io_in_b_exp = this->__PVT__result_buffer_exp;
        this->__PVT__adder_io_in_b_sign = this->__PVT__result_buffer_sign;
        this->__PVT__mac_io_out_result_man = (0x3fU 
                                              & ((0xfU 
                                                  < 
                                                  (0x3fU 
                                                   & (IData)(this->__PVT__mac__DOT__acc_hbfp)))
                                                  ? 0xfU
                                                  : (IData)(this->__PVT__mac__DOT__acc_hbfp)));
    }
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_man_1))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_man_1))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_1) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_1))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_1))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_1))))));
    this->__PVT__mac__DOT__multiplier_2_1_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_man_1) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_1) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_1)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_man_0))) 
                                                     * 
                                                     (0xfU 
                                                      & ((IData)(this->__PVT__mac__DOT__counter)
                                                          ? 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? 
                                                          (3U 
                                                           & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_0) 
                                                              >> 4U))
                                                           : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_0))
                                                          : 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? 
                                                          (0xfU 
                                                           & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_0))
                                                           : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_0))))));
    this->__PVT__mac__DOT__multiplier_2_io_out = (0xffU 
                                                  & (((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      (3U 
                                                       & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_man_0) 
                                                          >> 4U))
                                                       : 0U) 
                                                     * 
                                                     (0xfU 
                                                      & ((IData)(this->__PVT__mac__DOT__counter)
                                                          ? 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? 
                                                          (3U 
                                                           & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_0) 
                                                              >> 4U))
                                                           : 0U)
                                                          : 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_0)
                                                           : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_man_2))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_man_2))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_2) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_2))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_2))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_2))))));
    this->__PVT__mac__DOT__multiplier_2_2_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_man_2) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_2) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_2)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_4_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_man_4))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_man_4))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_4) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_4))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_4))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_4))))));
    this->__PVT__mac__DOT__multiplier_2_4_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_man_4) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_4) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_4)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_5_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_man_5))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_man_5))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_5) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_5))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_5))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_5))))));
    this->__PVT__mac__DOT__multiplier_2_5_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_man_5) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_5) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_5)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_7_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_man_7))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_man_7))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_7) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_7))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_7))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_7))))));
    this->__PVT__mac__DOT__multiplier_2_7_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_man_7) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_7) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_7)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_man_3))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_man_3))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_3) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_3))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_3))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_3))))));
    this->__PVT__mac__DOT__multiplier_2_3_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_man_3) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_3) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_3)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_6_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_man_6))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_man_6))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_6) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_6))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_6))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_6))))));
    this->__PVT__mac__DOT__multiplier_2_6_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_man_6) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_6) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_6)
                                                    : 0U)))));
    this->__PVT__adder__DOT___exp_diff_T = ((0xffU 
                                             & (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)) 
                                            > (IData)(this->__PVT__adder_io_in_b_exp));
    this->__PVT__adder__DOT__exp_diff = (0xffU & ((
                                                   (0xffU 
                                                    & (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)) 
                                                   > (IData)(this->__PVT__adder_io_in_b_exp))
                                                   ? 
                                                  ((IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5) 
                                                   - (IData)(this->__PVT__adder_io_in_b_exp))
                                                   : 
                                                  ((IData)(this->__PVT__adder_io_in_b_exp) 
                                                   - (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5))));
    this->__PVT__mac__DOT___partial_result_T_11 = (0xffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out) 
                                                      + 
                                                      ((IData)(this->__PVT__mac__DOT__multiplier_2_1_io_out) 
                                                       << 4U)));
    this->__PVT__mac__DOT___partial_result_T_1 = (0xffffU 
                                                  & ((IData)(this->__PVT__mac__DOT__multiplier_1_io_out) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_2_io_out) 
                                                      << 4U)));
    this->__PVT__mac__DOT___partial_result_T_21 = (0xffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out) 
                                                      + 
                                                      ((IData)(this->__PVT__mac__DOT__multiplier_2_2_io_out) 
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
    this->__PVT__mac__DOT___partial_result_T_71 = (0xffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out) 
                                                      + 
                                                      ((IData)(this->__PVT__mac__DOT__multiplier_2_7_io_out) 
                                                       << 4U)));
    this->__PVT__mac__DOT___partial_result_T_31 = (0xffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out) 
                                                      + 
                                                      ((IData)(this->__PVT__mac__DOT__multiplier_2_3_io_out) 
                                                       << 4U)));
    this->__PVT__mac__DOT___partial_result_T_61 = (0xffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out) 
                                                      + 
                                                      ((IData)(this->__PVT__mac__DOT__multiplier_2_6_io_out) 
                                                       << 4U)));
    if ((5U >= (IData)(this->__PVT__adder__DOT__exp_diff))) {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 
            = (0x3fU & ((IData)(this->__PVT__adder_io_in_b_man) 
                        >> (IData)(this->__PVT__adder__DOT__exp_diff)));
        this->__PVT__adder__DOT___io_out_result_sign_T_4 
            = (0x3fU & ((IData)(this->__PVT__mac_io_out_result_man) 
                        >> (IData)(this->__PVT__adder__DOT__exp_diff)));
    } else {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__adder__DOT___io_out_result_sign_T_4 = 0U;
    }
    if (vlTOPp->reset) {
        this->__PVT__mac__DOT___GEN_160 = 0U;
        this->__PVT__mac__DOT___GEN_159 = 0U;
        this->__PVT__mac__DOT___GEN_161 = 0U;
        this->__PVT__mac__DOT___GEN_163 = 0U;
        this->__PVT__mac__DOT___GEN_164 = 0U;
        this->__PVT__mac__DOT___GEN_166 = 0U;
        this->__PVT__mac__DOT___GEN_162 = 0U;
        this->__PVT__mac__DOT___GEN_165 = 0U;
    } else {
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
    }
    this->__PVT__adder__DOT__addition = (0x7fU & ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                                   ? 
                                                  (((1U 
                                                     & ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                        >> 6U)) 
                                                    == (IData)(this->__PVT__adder_io_in_b_sign))
                                                    ? 
                                                   ((IData)(this->__PVT__mac_io_out_result_man) 
                                                    + (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                    : 
                                                   (0x3fU 
                                                    & (((IData)(this->__PVT__mac_io_out_result_man) 
                                                        > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                        ? 
                                                       ((IData)(this->__PVT__mac_io_out_result_man) 
                                                        - (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                        : 
                                                       ((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1) 
                                                        - (IData)(this->__PVT__mac_io_out_result_man)))))
                                                   : 
                                                  (((1U 
                                                     & ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                        >> 6U)) 
                                                    == (IData)(this->__PVT__adder_io_in_b_sign))
                                                    ? 
                                                   ((IData)(this->__PVT__adder_io_in_b_man) 
                                                    + (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                    : 
                                                   (0x3fU 
                                                    & (((IData)(this->__PVT__adder_io_in_b_man) 
                                                        > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                        ? 
                                                       ((IData)(this->__PVT__adder_io_in_b_man) 
                                                        - (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                        : 
                                                       ((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4) 
                                                        - (IData)(this->__PVT__adder_io_in_b_man)))))));
}

VL_INLINE_OPT void VSystolicArray_HBFP_forTesting_HBFP_PE::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_7__51(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_7__51\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__adder_io_in_b_r_man = this->__PVT__result_buffer_man;
    this->__PVT__mac__DOT__exp_addition = this->__PVT__mac__DOT__exp_addition_r_3;
    this->__PVT__adder_io_in_b_r_exp = this->__PVT__result_buffer_exp;
    this->__PVT__adder_io_in_b_r_sign = this->__PVT__result_buffer_sign;
    this->__PVT__mac__DOT__counter = ((IData)(vlTOPp->reset) 
                                      | (IData)(this->__PVT__mac__DOT___GEN_61));
    if (vlTOPp->reset) {
        this->__PVT__mac__DOT__two_complement_buffer_7 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_3 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_2 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_0 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_6 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_4 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_5 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_1 = 0U;
    } else {
        this->__PVT__mac__DOT__two_complement_buffer_7 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_7)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_7)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_7)));
        this->__PVT__mac__DOT__two_complement_buffer_3 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_3)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_3)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_3)));
        this->__PVT__mac__DOT__two_complement_buffer_2 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_2)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_2)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_2)));
        this->__PVT__mac__DOT__two_complement_buffer_0 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_0)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_0)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_0)));
        this->__PVT__mac__DOT__two_complement_buffer_6 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_6)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_6)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_6)));
        this->__PVT__mac__DOT__two_complement_buffer_4 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_4)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_4)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_4)));
        this->__PVT__mac__DOT__two_complement_buffer_5 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_5)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_5)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_5)));
        this->__PVT__mac__DOT__two_complement_buffer_1 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_1)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_1)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_1)));
    }
    this->__PVT__result_buffer_man = (0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                ? (
                                                   (0x3fU 
                                                    < (IData)(this->__PVT__adder__DOT__addition))
                                                    ? 0x3fU
                                                    : (IData)(this->__PVT__adder__DOT__addition))
                                                : (
                                                   (0xfU 
                                                    < (IData)(this->__PVT__adder__DOT__addition))
                                                    ? 0xfU
                                                    : (IData)(this->__PVT__adder__DOT__addition))));
    this->__PVT__mac__DOT__exp_addition_r_3 = this->__PVT__mac__DOT__exp_addition_r_2;
    if (this->__PVT__adder__DOT___exp_diff_T) {
        this->__PVT__result_buffer_exp = (0xffU & (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5));
        this->__PVT__result_buffer_sign = (1U & (((IData)(this->__PVT__mac_io_out_result_man) 
                                                  > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                  ? 
                                                 ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                  >> 6U)
                                                  : (IData)(this->__PVT__adder_io_in_b_sign)));
    } else {
        this->__PVT__result_buffer_exp = (0xffU & (IData)(this->__PVT__adder_io_in_b_exp));
        this->__PVT__result_buffer_sign = (1U & (((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4) 
                                                  > (IData)(this->__PVT__adder_io_in_b_man))
                                                  ? 
                                                 ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                  >> 6U)
                                                  : (IData)(this->__PVT__adder_io_in_b_sign)));
    }
    this->__PVT__mac__DOT___GEN_61 = ((1U > (IData)(this->__PVT__mac__DOT__counter)) 
                                      & ((IData)(1U) 
                                         + (IData)(this->__PVT__mac__DOT__counter)));
    this->__PVT__mac__DOT__signs_7 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_7_r_1));
    this->__PVT__mac__DOT__dotProductRegs_7 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_7))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_7))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_7))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_7)))));
    this->__PVT__mac__DOT__signs_3 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_3_r_1));
    this->__PVT__mac__DOT__dotProductRegs_3 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_3))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_3))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_3))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_3)))));
    this->__PVT__mac__DOT__signs_2 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_2_r_1));
    this->__PVT__mac__DOT__dotProductRegs_2 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_2))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_2))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_2))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_2)))));
    this->__PVT__mac__DOT__signs_0 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_0_r_1));
    this->__PVT__mac__DOT__dotProductRegs_0 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result)))));
    this->__PVT__mac__DOT__signs_6 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_6_r_1));
    this->__PVT__mac__DOT__dotProductRegs_6 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_6))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_6))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_6))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_6)))));
    this->__PVT__mac__DOT__signs_4 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_4_r_1));
    this->__PVT__mac__DOT__dotProductRegs_4 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_4))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_4))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_4))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_4)))));
    this->__PVT__mac__DOT__signs_5 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_5_r_1));
    this->__PVT__mac__DOT__dotProductRegs_5 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_5))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_5))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_5))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_5)))));
    this->__PVT__mac__DOT__signs_1 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_1_r_1));
    this->__PVT__mac__DOT__dotProductRegs_1 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_1))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_1))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_1))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_1)))));
    this->__PVT__mac__DOT___io_out_result_exp_T_5 = 
        ((0xffU < (IData)(this->__PVT__mac__DOT__exp_addition))
          ? 0xffU : (IData)(this->__PVT__mac__DOT__exp_addition));
    this->__PVT__mac__DOT__exp_addition_r_2 = this->__PVT__mac__DOT__exp_addition_r_1;
    this->__PVT__mac__DOT__acc_hbfp = ((IData)(vlTOPp->reset)
                                        ? 0U : (0x7fU 
                                                & ((0x2000U 
                                                    & (IData)(this->__PVT__mac__DOT__sum))
                                                    ? 
                                                   ((0x3fU 
                                                     < 
                                                     (0x1fffU 
                                                      & ((IData)(1U) 
                                                         + 
                                                         (~ (IData)(this->__PVT__mac__DOT__sum)))))
                                                     ? 0x7fU
                                                     : 
                                                    (0x7fU 
                                                     & ((IData)(1U) 
                                                        + 
                                                        (~ 
                                                         (0x3fU 
                                                          & (IData)(this->__PVT__mac__DOT__sum))))))
                                                    : 
                                                   ((0x3fU 
                                                     < 
                                                     (0x1fffU 
                                                      & (IData)(this->__PVT__mac__DOT__sum)))
                                                     ? 0x3fU
                                                     : 
                                                    (0x3fU 
                                                     & (IData)(this->__PVT__mac__DOT__sum))))));
    this->__PVT__mac__DOT__signs_7_r_1 = this->__PVT__mac__DOT__signs_7_r;
    this->__PVT__mac__DOT__final_result_7 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_7));
    this->__PVT__mac__DOT__signs_3_r_1 = this->__PVT__mac__DOT__signs_3_r;
    this->__PVT__mac__DOT__final_result_3 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_3));
    this->__PVT__mac__DOT__signs_2_r_1 = this->__PVT__mac__DOT__signs_2_r;
    this->__PVT__mac__DOT__final_result_2 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_2));
    this->__PVT__mac__DOT__signs_0_r_1 = this->__PVT__mac__DOT__signs_0_r;
    this->__PVT__mac__DOT__final_result = ((IData)(vlTOPp->reset)
                                            ? 0U : (IData)(this->__PVT__mac__DOT__partial_result));
    this->__PVT__mac__DOT__signs_6_r_1 = this->__PVT__mac__DOT__signs_6_r;
    this->__PVT__mac__DOT__final_result_6 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_6));
    this->__PVT__mac__DOT__signs_4_r_1 = this->__PVT__mac__DOT__signs_4_r;
    this->__PVT__mac__DOT__final_result_4 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_4));
    this->__PVT__mac__DOT__signs_5_r_1 = this->__PVT__mac__DOT__signs_5_r;
    this->__PVT__mac__DOT__final_result_5 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_5));
    this->__PVT__mac__DOT__signs_1_r_1 = this->__PVT__mac__DOT__signs_1_r;
    this->__PVT__mac__DOT__final_result_1 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_1));
    this->__PVT__mac__DOT__sum = (0x3fffU & (VL_EXTENDS_II(14,13, 
                                                           (0x1fffU 
                                                            & (VL_EXTENDS_II(13,12, 
                                                                             (0xfffU 
                                                                              & (VL_EXTENDS_II(12,11, 
                                                                                (0x7ffU 
                                                                                & (VL_EXTENDS_II(11,10, 
                                                                                (0x3ffU 
                                                                                & (VL_EXTENDS_II(10,9, 
                                                                                (0x1ffU 
                                                                                & (VL_EXTENDS_II(9,8, 
                                                                                (0xffU 
                                                                                & (VL_EXTENDS_II(8,7, (IData)(this->__PVT__mac__DOT__two_complement_buffer_0)) 
                                                                                + 
                                                                                VL_EXTENDS_II(8,7, (IData)(this->__PVT__mac__DOT__two_complement_buffer_1))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(9,8, 
                                                                                ((0x80U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_2) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_2)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(10,9, 
                                                                                ((0x180U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_3) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_3)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(11,10, 
                                                                                ((0x380U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_4) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_4)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(12,11, 
                                                                                ((0x780U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_5) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_5)))))) 
                                                               + 
                                                               VL_EXTENDS_II(13,12, 
                                                                             ((0xf80U 
                                                                               & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_6) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                              | (IData)(this->__PVT__mac__DOT__two_complement_buffer_6)))))) 
                                             + VL_EXTENDS_II(14,13, 
                                                             ((0x1f80U 
                                                               & ((- (IData)(
                                                                             (1U 
                                                                              & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_7) 
                                                                                >> 6U)))) 
                                                                  << 7U)) 
                                                              | (IData)(this->__PVT__mac__DOT__two_complement_buffer_7)))));
    this->__PVT__mac__DOT__exp_addition_r_1 = this->__PVT__mac__DOT__exp_addition_r;
    this->__PVT__mac__DOT__signs_7_r = (((IData)(vlTOPp->io_in_flag)
                                          ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_1_sign_7)
                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_sign_7)) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_sign_7));
    this->__PVT__mac__DOT__partial_result_7 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_166);
    this->__PVT__mac__DOT__signs_3_r = (((IData)(vlTOPp->io_in_flag)
                                          ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_1_sign_3)
                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_sign_3)) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_sign_3));
    this->__PVT__mac__DOT__partial_result_3 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_162);
    this->__PVT__mac__DOT__signs_2_r = (((IData)(vlTOPp->io_in_flag)
                                          ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_1_sign_2)
                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_sign_2)) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_sign_2));
    this->__PVT__mac__DOT__partial_result_2 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_161);
    this->__PVT__mac__DOT__signs_0_r = (((IData)(vlTOPp->io_in_flag)
                                          ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_1_sign_0)
                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_sign_0)) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_sign_0));
    this->__PVT__mac__DOT__partial_result = (0xfffU 
                                             & this->__PVT__mac__DOT___GEN_159);
    this->__PVT__mac__DOT__signs_6_r = (((IData)(vlTOPp->io_in_flag)
                                          ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_1_sign_6)
                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_sign_6)) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_sign_6));
    this->__PVT__mac__DOT__partial_result_6 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_165);
    this->__PVT__mac__DOT__signs_4_r = (((IData)(vlTOPp->io_in_flag)
                                          ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_1_sign_4)
                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_sign_4)) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_sign_4));
    this->__PVT__mac__DOT__partial_result_4 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_163);
    this->__PVT__mac__DOT__signs_5_r = (((IData)(vlTOPp->io_in_flag)
                                          ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_1_sign_5)
                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_sign_5)) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_sign_5));
    this->__PVT__mac__DOT__partial_result_5 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_164);
    this->__PVT__mac__DOT__signs_1_r = (((IData)(vlTOPp->io_in_flag)
                                          ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_1_sign_1)
                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_sign_1)) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_sign_1));
    this->__PVT__mac__DOT__partial_result_1 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_160);
    this->__PVT__mac__DOT__exp_addition_r = (0x1ffU 
                                             & (((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_1_exp)
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_r_exp)) 
                                                + (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_exp)));
}

VL_INLINE_OPT void VSystolicArray_HBFP_forTesting_HBFP_PE::_combo__TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_7__243(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_combo__TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_7__243\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->io_in_flag) {
        this->__PVT__adder_io_in_b_man = this->__PVT__adder_io_in_b_r_man;
        this->__PVT__adder_io_in_b_exp = this->__PVT__adder_io_in_b_r_exp;
        this->__PVT__adder_io_in_b_sign = this->__PVT__adder_io_in_b_r_sign;
        this->__PVT__mac_io_out_result_man = (0x3fU 
                                              & (IData)(this->__PVT__mac__DOT__acc_hbfp));
    } else {
        this->__PVT__adder_io_in_b_man = this->__PVT__result_buffer_man;
        this->__PVT__adder_io_in_b_exp = this->__PVT__result_buffer_exp;
        this->__PVT__adder_io_in_b_sign = this->__PVT__result_buffer_sign;
        this->__PVT__mac_io_out_result_man = (0x3fU 
                                              & ((0xfU 
                                                  < 
                                                  (0x3fU 
                                                   & (IData)(this->__PVT__mac__DOT__acc_hbfp)))
                                                  ? 0xfU
                                                  : (IData)(this->__PVT__mac__DOT__acc_hbfp)));
    }
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_man_1))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_man_1))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_1) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_1))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_1))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_1))))));
    this->__PVT__mac__DOT__multiplier_2_1_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_man_1) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_1) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_1)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_man_0))) 
                                                     * 
                                                     (0xfU 
                                                      & ((IData)(this->__PVT__mac__DOT__counter)
                                                          ? 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? 
                                                          (3U 
                                                           & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_0) 
                                                              >> 4U))
                                                           : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_0))
                                                          : 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? 
                                                          (0xfU 
                                                           & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_0))
                                                           : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_0))))));
    this->__PVT__mac__DOT__multiplier_2_io_out = (0xffU 
                                                  & (((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      (3U 
                                                       & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_man_0) 
                                                          >> 4U))
                                                       : 0U) 
                                                     * 
                                                     (0xfU 
                                                      & ((IData)(this->__PVT__mac__DOT__counter)
                                                          ? 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? 
                                                          (3U 
                                                           & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_0) 
                                                              >> 4U))
                                                           : 0U)
                                                          : 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_0)
                                                           : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_man_2))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_man_2))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_2) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_2))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_2))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_2))))));
    this->__PVT__mac__DOT__multiplier_2_2_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_man_2) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_2) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_2)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_4_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_man_4))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_man_4))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_4) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_4))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_4))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_4))))));
    this->__PVT__mac__DOT__multiplier_2_4_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_man_4) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_4) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_4)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_5_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_man_5))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_man_5))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_5) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_5))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_5))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_5))))));
    this->__PVT__mac__DOT__multiplier_2_5_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_man_5) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_5) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_5)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_7_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_man_7))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_man_7))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_7) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_7))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_7))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_7))))));
    this->__PVT__mac__DOT__multiplier_2_7_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_man_7) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_7) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_7)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_man_3))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_man_3))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_3) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_3))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_3))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_3))))));
    this->__PVT__mac__DOT__multiplier_2_3_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_man_3) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_3) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_3)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_6_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_man_6))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_man_6))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_6) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_6))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_6))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_6))))));
    this->__PVT__mac__DOT__multiplier_2_6_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_man_6) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_6) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_6)
                                                    : 0U)))));
    this->__PVT__adder__DOT___exp_diff_T = ((0xffU 
                                             & (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)) 
                                            > (IData)(this->__PVT__adder_io_in_b_exp));
    this->__PVT__adder__DOT__exp_diff = (0xffU & ((
                                                   (0xffU 
                                                    & (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)) 
                                                   > (IData)(this->__PVT__adder_io_in_b_exp))
                                                   ? 
                                                  ((IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5) 
                                                   - (IData)(this->__PVT__adder_io_in_b_exp))
                                                   : 
                                                  ((IData)(this->__PVT__adder_io_in_b_exp) 
                                                   - (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5))));
    this->__PVT__mac__DOT___partial_result_T_11 = (0xffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_1_io_out) 
                                                      + 
                                                      ((IData)(this->__PVT__mac__DOT__multiplier_2_1_io_out) 
                                                       << 4U)));
    this->__PVT__mac__DOT___partial_result_T_1 = (0xffffU 
                                                  & ((IData)(this->__PVT__mac__DOT__multiplier_1_io_out) 
                                                     + 
                                                     ((IData)(this->__PVT__mac__DOT__multiplier_2_io_out) 
                                                      << 4U)));
    this->__PVT__mac__DOT___partial_result_T_21 = (0xffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_2_io_out) 
                                                      + 
                                                      ((IData)(this->__PVT__mac__DOT__multiplier_2_2_io_out) 
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
    this->__PVT__mac__DOT___partial_result_T_71 = (0xffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out) 
                                                      + 
                                                      ((IData)(this->__PVT__mac__DOT__multiplier_2_7_io_out) 
                                                       << 4U)));
    this->__PVT__mac__DOT___partial_result_T_31 = (0xffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out) 
                                                      + 
                                                      ((IData)(this->__PVT__mac__DOT__multiplier_2_3_io_out) 
                                                       << 4U)));
    this->__PVT__mac__DOT___partial_result_T_61 = (0xffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out) 
                                                      + 
                                                      ((IData)(this->__PVT__mac__DOT__multiplier_2_6_io_out) 
                                                       << 4U)));
    if ((5U >= (IData)(this->__PVT__adder__DOT__exp_diff))) {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 
            = (0x3fU & ((IData)(this->__PVT__adder_io_in_b_man) 
                        >> (IData)(this->__PVT__adder__DOT__exp_diff)));
        this->__PVT__adder__DOT___io_out_result_sign_T_4 
            = (0x3fU & ((IData)(this->__PVT__mac_io_out_result_man) 
                        >> (IData)(this->__PVT__adder__DOT__exp_diff)));
    } else {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__adder__DOT___io_out_result_sign_T_4 = 0U;
    }
    if (vlTOPp->reset) {
        this->__PVT__mac__DOT___GEN_160 = 0U;
        this->__PVT__mac__DOT___GEN_159 = 0U;
        this->__PVT__mac__DOT___GEN_161 = 0U;
        this->__PVT__mac__DOT___GEN_163 = 0U;
        this->__PVT__mac__DOT___GEN_164 = 0U;
        this->__PVT__mac__DOT___GEN_166 = 0U;
        this->__PVT__mac__DOT___GEN_162 = 0U;
        this->__PVT__mac__DOT___GEN_165 = 0U;
    } else {
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
    }
    this->__PVT__adder__DOT__addition = (0x7fU & ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                                   ? 
                                                  (((1U 
                                                     & ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                        >> 6U)) 
                                                    == (IData)(this->__PVT__adder_io_in_b_sign))
                                                    ? 
                                                   ((IData)(this->__PVT__mac_io_out_result_man) 
                                                    + (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                    : 
                                                   (0x3fU 
                                                    & (((IData)(this->__PVT__mac_io_out_result_man) 
                                                        > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                        ? 
                                                       ((IData)(this->__PVT__mac_io_out_result_man) 
                                                        - (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                        : 
                                                       ((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1) 
                                                        - (IData)(this->__PVT__mac_io_out_result_man)))))
                                                   : 
                                                  (((1U 
                                                     & ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                        >> 6U)) 
                                                    == (IData)(this->__PVT__adder_io_in_b_sign))
                                                    ? 
                                                   ((IData)(this->__PVT__adder_io_in_b_man) 
                                                    + (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                    : 
                                                   (0x3fU 
                                                    & (((IData)(this->__PVT__adder_io_in_b_man) 
                                                        > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                        ? 
                                                       ((IData)(this->__PVT__adder_io_in_b_man) 
                                                        - (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                        : 
                                                       ((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4) 
                                                        - (IData)(this->__PVT__adder_io_in_b_man)))))));
}

VL_INLINE_OPT void VSystolicArray_HBFP_forTesting_HBFP_PE::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_0__15(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_0__15\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__mac__DOT__exp_addition = this->__PVT__mac__DOT__exp_addition_r_3;
    this->__PVT__adder_io_in_b_r_man = this->__PVT__result_buffer_man;
    this->__PVT__adder_io_in_b_r_exp = this->__PVT__result_buffer_exp;
    this->__PVT__adder_io_in_b_r_sign = this->__PVT__result_buffer_sign;
    this->__PVT__mac__DOT__counter = ((IData)(vlTOPp->reset) 
                                      | (IData)(this->__PVT__mac__DOT___GEN_61));
    if (vlTOPp->reset) {
        this->__PVT__mac__DOT__two_complement_buffer_7 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_3 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_2 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_0 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_6 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_4 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_5 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_1 = 0U;
    } else {
        this->__PVT__mac__DOT__two_complement_buffer_7 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_7)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_7)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_7)));
        this->__PVT__mac__DOT__two_complement_buffer_3 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_3)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_3)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_3)));
        this->__PVT__mac__DOT__two_complement_buffer_2 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_2)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_2)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_2)));
        this->__PVT__mac__DOT__two_complement_buffer_0 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_0)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_0)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_0)));
        this->__PVT__mac__DOT__two_complement_buffer_6 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_6)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_6)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_6)));
        this->__PVT__mac__DOT__two_complement_buffer_4 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_4)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_4)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_4)));
        this->__PVT__mac__DOT__two_complement_buffer_5 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_5)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_5)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_5)));
        this->__PVT__mac__DOT__two_complement_buffer_1 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_1)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_1)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_1)));
    }
    this->__PVT__mac__DOT__exp_addition_r_3 = this->__PVT__mac__DOT__exp_addition_r_2;
    this->__PVT__result_buffer_man = (0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                ? (
                                                   (0x3fU 
                                                    < (IData)(this->__PVT__adder__DOT__addition))
                                                    ? 0x3fU
                                                    : (IData)(this->__PVT__adder__DOT__addition))
                                                : (
                                                   (0xfU 
                                                    < (IData)(this->__PVT__adder__DOT__addition))
                                                    ? 0xfU
                                                    : (IData)(this->__PVT__adder__DOT__addition))));
    if (this->__PVT__adder__DOT___exp_diff_T) {
        this->__PVT__result_buffer_exp = (0xffU & (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5));
        this->__PVT__result_buffer_sign = (1U & (((IData)(this->__PVT__mac_io_out_result_man) 
                                                  > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                  ? 
                                                 ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                  >> 6U)
                                                  : (IData)(this->__PVT__adder_io_in_b_sign)));
    } else {
        this->__PVT__result_buffer_exp = (0xffU & (IData)(this->__PVT__adder_io_in_b_exp));
        this->__PVT__result_buffer_sign = (1U & (((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4) 
                                                  > (IData)(this->__PVT__adder_io_in_b_man))
                                                  ? 
                                                 ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                  >> 6U)
                                                  : (IData)(this->__PVT__adder_io_in_b_sign)));
    }
    this->__PVT__mac__DOT___GEN_61 = ((1U > (IData)(this->__PVT__mac__DOT__counter)) 
                                      & ((IData)(1U) 
                                         + (IData)(this->__PVT__mac__DOT__counter)));
    this->__PVT__mac__DOT__signs_7 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_7_r_1));
    this->__PVT__mac__DOT__dotProductRegs_7 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_7))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_7))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_7))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_7)))));
    this->__PVT__mac__DOT__signs_3 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_3_r_1));
    this->__PVT__mac__DOT__dotProductRegs_3 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_3))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_3))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_3))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_3)))));
    this->__PVT__mac__DOT__signs_2 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_2_r_1));
    this->__PVT__mac__DOT__dotProductRegs_2 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_2))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_2))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_2))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_2)))));
    this->__PVT__mac__DOT__signs_0 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_0_r_1));
    this->__PVT__mac__DOT__dotProductRegs_0 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result)))));
    this->__PVT__mac__DOT__signs_6 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_6_r_1));
    this->__PVT__mac__DOT__dotProductRegs_6 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_6))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_6))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_6))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_6)))));
    this->__PVT__mac__DOT__signs_4 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_4_r_1));
    this->__PVT__mac__DOT__dotProductRegs_4 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_4))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_4))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_4))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_4)))));
    this->__PVT__mac__DOT__signs_5 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_5_r_1));
    this->__PVT__mac__DOT__dotProductRegs_5 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_5))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_5))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_5))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_5)))));
    this->__PVT__mac__DOT__signs_1 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_1_r_1));
    this->__PVT__mac__DOT__dotProductRegs_1 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_1))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_1))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_1))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_1)))));
    this->__PVT__mac__DOT___io_out_result_exp_T_5 = 
        ((0xffU < (IData)(this->__PVT__mac__DOT__exp_addition))
          ? 0xffU : (IData)(this->__PVT__mac__DOT__exp_addition));
    this->__PVT__mac__DOT__exp_addition_r_2 = this->__PVT__mac__DOT__exp_addition_r_1;
    this->__PVT__mac__DOT__acc_hbfp = ((IData)(vlTOPp->reset)
                                        ? 0U : (0x7fU 
                                                & ((0x2000U 
                                                    & (IData)(this->__PVT__mac__DOT__sum))
                                                    ? 
                                                   ((0x3fU 
                                                     < 
                                                     (0x1fffU 
                                                      & ((IData)(1U) 
                                                         + 
                                                         (~ (IData)(this->__PVT__mac__DOT__sum)))))
                                                     ? 0x7fU
                                                     : 
                                                    (0x7fU 
                                                     & ((IData)(1U) 
                                                        + 
                                                        (~ 
                                                         (0x3fU 
                                                          & (IData)(this->__PVT__mac__DOT__sum))))))
                                                    : 
                                                   ((0x3fU 
                                                     < 
                                                     (0x1fffU 
                                                      & (IData)(this->__PVT__mac__DOT__sum)))
                                                     ? 0x3fU
                                                     : 
                                                    (0x3fU 
                                                     & (IData)(this->__PVT__mac__DOT__sum))))));
    this->__PVT__mac__DOT__signs_7_r_1 = this->__PVT__mac__DOT__signs_7_r;
    this->__PVT__mac__DOT__final_result_7 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_7));
    this->__PVT__mac__DOT__signs_3_r_1 = this->__PVT__mac__DOT__signs_3_r;
    this->__PVT__mac__DOT__final_result_3 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_3));
    this->__PVT__mac__DOT__signs_2_r_1 = this->__PVT__mac__DOT__signs_2_r;
    this->__PVT__mac__DOT__final_result_2 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_2));
    this->__PVT__mac__DOT__signs_0_r_1 = this->__PVT__mac__DOT__signs_0_r;
    this->__PVT__mac__DOT__final_result = ((IData)(vlTOPp->reset)
                                            ? 0U : (IData)(this->__PVT__mac__DOT__partial_result));
    this->__PVT__mac__DOT__signs_6_r_1 = this->__PVT__mac__DOT__signs_6_r;
    this->__PVT__mac__DOT__final_result_6 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_6));
    this->__PVT__mac__DOT__signs_4_r_1 = this->__PVT__mac__DOT__signs_4_r;
    this->__PVT__mac__DOT__final_result_4 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_4));
    this->__PVT__mac__DOT__signs_5_r_1 = this->__PVT__mac__DOT__signs_5_r;
    this->__PVT__mac__DOT__final_result_5 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_5));
    this->__PVT__mac__DOT__signs_1_r_1 = this->__PVT__mac__DOT__signs_1_r;
    this->__PVT__mac__DOT__final_result_1 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_1));
    this->__PVT__mac__DOT__sum = (0x3fffU & (VL_EXTENDS_II(14,13, 
                                                           (0x1fffU 
                                                            & (VL_EXTENDS_II(13,12, 
                                                                             (0xfffU 
                                                                              & (VL_EXTENDS_II(12,11, 
                                                                                (0x7ffU 
                                                                                & (VL_EXTENDS_II(11,10, 
                                                                                (0x3ffU 
                                                                                & (VL_EXTENDS_II(10,9, 
                                                                                (0x1ffU 
                                                                                & (VL_EXTENDS_II(9,8, 
                                                                                (0xffU 
                                                                                & (VL_EXTENDS_II(8,7, (IData)(this->__PVT__mac__DOT__two_complement_buffer_0)) 
                                                                                + 
                                                                                VL_EXTENDS_II(8,7, (IData)(this->__PVT__mac__DOT__two_complement_buffer_1))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(9,8, 
                                                                                ((0x80U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_2) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_2)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(10,9, 
                                                                                ((0x180U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_3) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_3)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(11,10, 
                                                                                ((0x380U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_4) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_4)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(12,11, 
                                                                                ((0x780U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_5) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_5)))))) 
                                                               + 
                                                               VL_EXTENDS_II(13,12, 
                                                                             ((0xf80U 
                                                                               & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_6) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                              | (IData)(this->__PVT__mac__DOT__two_complement_buffer_6)))))) 
                                             + VL_EXTENDS_II(14,13, 
                                                             ((0x1f80U 
                                                               & ((- (IData)(
                                                                             (1U 
                                                                              & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_7) 
                                                                                >> 6U)))) 
                                                                  << 7U)) 
                                                              | (IData)(this->__PVT__mac__DOT__two_complement_buffer_7)))));
    this->__PVT__mac__DOT__exp_addition_r_1 = this->__PVT__mac__DOT__exp_addition_r;
    this->__PVT__mac__DOT__signs_7_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_sign_7) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_sign_7));
    this->__PVT__mac__DOT__partial_result_7 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_166);
    this->__PVT__mac__DOT__signs_3_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_sign_3) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_sign_3));
    this->__PVT__mac__DOT__partial_result_3 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_162);
    this->__PVT__mac__DOT__signs_2_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_sign_2) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_sign_2));
    this->__PVT__mac__DOT__partial_result_2 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_161);
    this->__PVT__mac__DOT__signs_0_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_sign_0) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_sign_0));
    this->__PVT__mac__DOT__partial_result = (0xfffU 
                                             & this->__PVT__mac__DOT___GEN_159);
    this->__PVT__mac__DOT__signs_6_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_sign_6) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_sign_6));
    this->__PVT__mac__DOT__partial_result_6 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_165);
    this->__PVT__mac__DOT__signs_4_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_sign_4) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_sign_4));
    this->__PVT__mac__DOT__partial_result_4 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_163);
    this->__PVT__mac__DOT__signs_5_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_sign_5) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_sign_5));
    this->__PVT__mac__DOT__partial_result_5 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_164);
    this->__PVT__mac__DOT__signs_1_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_sign_1) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_sign_1));
    this->__PVT__mac__DOT__partial_result_1 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_160);
    this->__PVT__mac__DOT__exp_addition_r = (0x1ffU 
                                             & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_exp) 
                                                + (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_exp)));
}

VL_INLINE_OPT void VSystolicArray_HBFP_forTesting_HBFP_PE::_combo__TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_0__207(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_combo__TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_0__207\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->io_in_flag) {
        this->__PVT__adder_io_in_b_man = this->__PVT__adder_io_in_b_r_man;
        this->__PVT__adder_io_in_b_exp = this->__PVT__adder_io_in_b_r_exp;
        this->__PVT__adder_io_in_b_sign = this->__PVT__adder_io_in_b_r_sign;
        this->__PVT__mac_io_out_result_man = (0x3fU 
                                              & (IData)(this->__PVT__mac__DOT__acc_hbfp));
    } else {
        this->__PVT__adder_io_in_b_man = this->__PVT__result_buffer_man;
        this->__PVT__adder_io_in_b_exp = this->__PVT__result_buffer_exp;
        this->__PVT__adder_io_in_b_sign = this->__PVT__result_buffer_sign;
        this->__PVT__mac_io_out_result_man = (0x3fU 
                                              & ((0xfU 
                                                  < 
                                                  (0x3fU 
                                                   & (IData)(this->__PVT__mac__DOT__acc_hbfp)))
                                                  ? 0xfU
                                                  : (IData)(this->__PVT__mac__DOT__acc_hbfp)));
    }
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_0))) 
                                                     * 
                                                     (0xfU 
                                                      & ((IData)(this->__PVT__mac__DOT__counter)
                                                          ? 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? 
                                                          (3U 
                                                           & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_0) 
                                                              >> 4U))
                                                           : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_0))
                                                          : 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? 
                                                          (0xfU 
                                                           & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_0))
                                                           : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_0))))));
    this->__PVT__mac__DOT__multiplier_2_io_out = (0xffU 
                                                  & (((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      (3U 
                                                       & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_0) 
                                                          >> 4U))
                                                       : 0U) 
                                                     * 
                                                     (0xfU 
                                                      & ((IData)(this->__PVT__mac__DOT__counter)
                                                          ? 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? 
                                                          (3U 
                                                           & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_0) 
                                                              >> 4U))
                                                           : 0U)
                                                          : 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_0)
                                                           : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_1))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_1))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_1) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_1))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_1))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_1))))));
    this->__PVT__mac__DOT__multiplier_2_1_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_1) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_1) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_1)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_2))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_2))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_2) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_2))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_2))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_2))))));
    this->__PVT__mac__DOT__multiplier_2_2_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_2) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_2) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_2)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_3))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_3))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_3) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_3))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_3))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_3))))));
    this->__PVT__mac__DOT__multiplier_2_3_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_3) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_3) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_3)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_4_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_4))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_4))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_4) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_4))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_4))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_4))))));
    this->__PVT__mac__DOT__multiplier_2_4_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_4) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_4) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_4)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_5_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_5))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_5))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_5) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_5))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_5))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_5))))));
    this->__PVT__mac__DOT__multiplier_2_5_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_5) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_5) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_5)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_6_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_6))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_6))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_6) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_6))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_6))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_6))))));
    this->__PVT__mac__DOT__multiplier_2_6_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_6) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_6) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_6)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_7_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_7))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_7))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_7) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_7))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_7))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_7))))));
    this->__PVT__mac__DOT__multiplier_2_7_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_7) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_7) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_7)
                                                    : 0U)))));
    this->__PVT__adder__DOT___exp_diff_T = ((0xffU 
                                             & (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)) 
                                            > (IData)(this->__PVT__adder_io_in_b_exp));
    this->__PVT__adder__DOT__exp_diff = (0xffU & ((
                                                   (0xffU 
                                                    & (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)) 
                                                   > (IData)(this->__PVT__adder_io_in_b_exp))
                                                   ? 
                                                  ((IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5) 
                                                   - (IData)(this->__PVT__adder_io_in_b_exp))
                                                   : 
                                                  ((IData)(this->__PVT__adder_io_in_b_exp) 
                                                   - (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5))));
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
    if ((5U >= (IData)(this->__PVT__adder__DOT__exp_diff))) {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 
            = (0x3fU & ((IData)(this->__PVT__adder_io_in_b_man) 
                        >> (IData)(this->__PVT__adder__DOT__exp_diff)));
        this->__PVT__adder__DOT___io_out_result_sign_T_4 
            = (0x3fU & ((IData)(this->__PVT__mac_io_out_result_man) 
                        >> (IData)(this->__PVT__adder__DOT__exp_diff)));
    } else {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__adder__DOT___io_out_result_sign_T_4 = 0U;
    }
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
    this->__PVT__adder__DOT__addition = (0x7fU & ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                                   ? 
                                                  (((1U 
                                                     & ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                        >> 6U)) 
                                                    == (IData)(this->__PVT__adder_io_in_b_sign))
                                                    ? 
                                                   ((IData)(this->__PVT__mac_io_out_result_man) 
                                                    + (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                    : 
                                                   (0x3fU 
                                                    & (((IData)(this->__PVT__mac_io_out_result_man) 
                                                        > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                        ? 
                                                       ((IData)(this->__PVT__mac_io_out_result_man) 
                                                        - (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                        : 
                                                       ((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1) 
                                                        - (IData)(this->__PVT__mac_io_out_result_man)))))
                                                   : 
                                                  (((1U 
                                                     & ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                        >> 6U)) 
                                                    == (IData)(this->__PVT__adder_io_in_b_sign))
                                                    ? 
                                                   ((IData)(this->__PVT__adder_io_in_b_man) 
                                                    + (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                    : 
                                                   (0x3fU 
                                                    & (((IData)(this->__PVT__adder_io_in_b_man) 
                                                        > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                        ? 
                                                       ((IData)(this->__PVT__adder_io_in_b_man) 
                                                        - (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                        : 
                                                       ((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4) 
                                                        - (IData)(this->__PVT__adder_io_in_b_man)))))));
}

VL_INLINE_OPT void VSystolicArray_HBFP_forTesting_HBFP_PE::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_1__16(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_1__16\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__mac__DOT__exp_addition = this->__PVT__mac__DOT__exp_addition_r_3;
    this->__PVT__adder_io_in_b_r_man = this->__PVT__result_buffer_man;
    this->__PVT__adder_io_in_b_r_exp = this->__PVT__result_buffer_exp;
    this->__PVT__adder_io_in_b_r_sign = this->__PVT__result_buffer_sign;
    this->__PVT__mac__DOT__counter = ((IData)(vlTOPp->reset) 
                                      | (IData)(this->__PVT__mac__DOT___GEN_61));
    if (vlTOPp->reset) {
        this->__PVT__mac__DOT__two_complement_buffer_7 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_3 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_2 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_0 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_6 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_4 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_5 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_1 = 0U;
    } else {
        this->__PVT__mac__DOT__two_complement_buffer_7 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_7)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_7)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_7)));
        this->__PVT__mac__DOT__two_complement_buffer_3 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_3)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_3)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_3)));
        this->__PVT__mac__DOT__two_complement_buffer_2 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_2)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_2)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_2)));
        this->__PVT__mac__DOT__two_complement_buffer_0 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_0)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_0)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_0)));
        this->__PVT__mac__DOT__two_complement_buffer_6 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_6)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_6)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_6)));
        this->__PVT__mac__DOT__two_complement_buffer_4 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_4)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_4)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_4)));
        this->__PVT__mac__DOT__two_complement_buffer_5 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_5)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_5)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_5)));
        this->__PVT__mac__DOT__two_complement_buffer_1 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_1)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_1)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_1)));
    }
    this->__PVT__mac__DOT__exp_addition_r_3 = this->__PVT__mac__DOT__exp_addition_r_2;
    this->__PVT__result_buffer_man = (0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                ? (
                                                   (0x3fU 
                                                    < (IData)(this->__PVT__adder__DOT__addition))
                                                    ? 0x3fU
                                                    : (IData)(this->__PVT__adder__DOT__addition))
                                                : (
                                                   (0xfU 
                                                    < (IData)(this->__PVT__adder__DOT__addition))
                                                    ? 0xfU
                                                    : (IData)(this->__PVT__adder__DOT__addition))));
    if (this->__PVT__adder__DOT___exp_diff_T) {
        this->__PVT__result_buffer_exp = (0xffU & (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5));
        this->__PVT__result_buffer_sign = (1U & (((IData)(this->__PVT__mac_io_out_result_man) 
                                                  > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                  ? 
                                                 ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                  >> 6U)
                                                  : (IData)(this->__PVT__adder_io_in_b_sign)));
    } else {
        this->__PVT__result_buffer_exp = (0xffU & (IData)(this->__PVT__adder_io_in_b_exp));
        this->__PVT__result_buffer_sign = (1U & (((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4) 
                                                  > (IData)(this->__PVT__adder_io_in_b_man))
                                                  ? 
                                                 ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                  >> 6U)
                                                  : (IData)(this->__PVT__adder_io_in_b_sign)));
    }
    this->__PVT__mac__DOT___GEN_61 = ((1U > (IData)(this->__PVT__mac__DOT__counter)) 
                                      & ((IData)(1U) 
                                         + (IData)(this->__PVT__mac__DOT__counter)));
    this->__PVT__mac__DOT__signs_7 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_7_r_1));
    this->__PVT__mac__DOT__dotProductRegs_7 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_7))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_7))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_7))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_7)))));
    this->__PVT__mac__DOT__signs_3 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_3_r_1));
    this->__PVT__mac__DOT__dotProductRegs_3 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_3))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_3))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_3))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_3)))));
    this->__PVT__mac__DOT__signs_2 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_2_r_1));
    this->__PVT__mac__DOT__dotProductRegs_2 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_2))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_2))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_2))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_2)))));
    this->__PVT__mac__DOT__signs_0 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_0_r_1));
    this->__PVT__mac__DOT__dotProductRegs_0 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result)))));
    this->__PVT__mac__DOT__signs_6 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_6_r_1));
    this->__PVT__mac__DOT__dotProductRegs_6 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_6))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_6))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_6))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_6)))));
    this->__PVT__mac__DOT__signs_4 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_4_r_1));
    this->__PVT__mac__DOT__dotProductRegs_4 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_4))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_4))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_4))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_4)))));
    this->__PVT__mac__DOT__signs_5 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_5_r_1));
    this->__PVT__mac__DOT__dotProductRegs_5 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_5))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_5))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_5))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_5)))));
    this->__PVT__mac__DOT__signs_1 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_1_r_1));
    this->__PVT__mac__DOT__dotProductRegs_1 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_1))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_1))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_1))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_1)))));
    this->__PVT__mac__DOT___io_out_result_exp_T_5 = 
        ((0xffU < (IData)(this->__PVT__mac__DOT__exp_addition))
          ? 0xffU : (IData)(this->__PVT__mac__DOT__exp_addition));
    this->__PVT__mac__DOT__exp_addition_r_2 = this->__PVT__mac__DOT__exp_addition_r_1;
    this->__PVT__mac__DOT__acc_hbfp = ((IData)(vlTOPp->reset)
                                        ? 0U : (0x7fU 
                                                & ((0x2000U 
                                                    & (IData)(this->__PVT__mac__DOT__sum))
                                                    ? 
                                                   ((0x3fU 
                                                     < 
                                                     (0x1fffU 
                                                      & ((IData)(1U) 
                                                         + 
                                                         (~ (IData)(this->__PVT__mac__DOT__sum)))))
                                                     ? 0x7fU
                                                     : 
                                                    (0x7fU 
                                                     & ((IData)(1U) 
                                                        + 
                                                        (~ 
                                                         (0x3fU 
                                                          & (IData)(this->__PVT__mac__DOT__sum))))))
                                                    : 
                                                   ((0x3fU 
                                                     < 
                                                     (0x1fffU 
                                                      & (IData)(this->__PVT__mac__DOT__sum)))
                                                     ? 0x3fU
                                                     : 
                                                    (0x3fU 
                                                     & (IData)(this->__PVT__mac__DOT__sum))))));
    this->__PVT__mac__DOT__signs_7_r_1 = this->__PVT__mac__DOT__signs_7_r;
    this->__PVT__mac__DOT__final_result_7 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_7));
    this->__PVT__mac__DOT__signs_3_r_1 = this->__PVT__mac__DOT__signs_3_r;
    this->__PVT__mac__DOT__final_result_3 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_3));
    this->__PVT__mac__DOT__signs_2_r_1 = this->__PVT__mac__DOT__signs_2_r;
    this->__PVT__mac__DOT__final_result_2 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_2));
    this->__PVT__mac__DOT__signs_0_r_1 = this->__PVT__mac__DOT__signs_0_r;
    this->__PVT__mac__DOT__final_result = ((IData)(vlTOPp->reset)
                                            ? 0U : (IData)(this->__PVT__mac__DOT__partial_result));
    this->__PVT__mac__DOT__signs_6_r_1 = this->__PVT__mac__DOT__signs_6_r;
    this->__PVT__mac__DOT__final_result_6 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_6));
    this->__PVT__mac__DOT__signs_4_r_1 = this->__PVT__mac__DOT__signs_4_r;
    this->__PVT__mac__DOT__final_result_4 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_4));
    this->__PVT__mac__DOT__signs_5_r_1 = this->__PVT__mac__DOT__signs_5_r;
    this->__PVT__mac__DOT__final_result_5 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_5));
    this->__PVT__mac__DOT__signs_1_r_1 = this->__PVT__mac__DOT__signs_1_r;
    this->__PVT__mac__DOT__final_result_1 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_1));
    this->__PVT__mac__DOT__sum = (0x3fffU & (VL_EXTENDS_II(14,13, 
                                                           (0x1fffU 
                                                            & (VL_EXTENDS_II(13,12, 
                                                                             (0xfffU 
                                                                              & (VL_EXTENDS_II(12,11, 
                                                                                (0x7ffU 
                                                                                & (VL_EXTENDS_II(11,10, 
                                                                                (0x3ffU 
                                                                                & (VL_EXTENDS_II(10,9, 
                                                                                (0x1ffU 
                                                                                & (VL_EXTENDS_II(9,8, 
                                                                                (0xffU 
                                                                                & (VL_EXTENDS_II(8,7, (IData)(this->__PVT__mac__DOT__two_complement_buffer_0)) 
                                                                                + 
                                                                                VL_EXTENDS_II(8,7, (IData)(this->__PVT__mac__DOT__two_complement_buffer_1))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(9,8, 
                                                                                ((0x80U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_2) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_2)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(10,9, 
                                                                                ((0x180U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_3) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_3)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(11,10, 
                                                                                ((0x380U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_4) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_4)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(12,11, 
                                                                                ((0x780U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_5) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_5)))))) 
                                                               + 
                                                               VL_EXTENDS_II(13,12, 
                                                                             ((0xf80U 
                                                                               & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_6) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                              | (IData)(this->__PVT__mac__DOT__two_complement_buffer_6)))))) 
                                             + VL_EXTENDS_II(14,13, 
                                                             ((0x1f80U 
                                                               & ((- (IData)(
                                                                             (1U 
                                                                              & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_7) 
                                                                                >> 6U)))) 
                                                                  << 7U)) 
                                                              | (IData)(this->__PVT__mac__DOT__two_complement_buffer_7)))));
    this->__PVT__mac__DOT__exp_addition_r_1 = this->__PVT__mac__DOT__exp_addition_r;
    this->__PVT__mac__DOT__signs_7_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_sign_7) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_sign_7));
    this->__PVT__mac__DOT__partial_result_7 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_166);
    this->__PVT__mac__DOT__signs_3_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_sign_3) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_sign_3));
    this->__PVT__mac__DOT__partial_result_3 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_162);
    this->__PVT__mac__DOT__signs_2_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_sign_2) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_sign_2));
    this->__PVT__mac__DOT__partial_result_2 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_161);
    this->__PVT__mac__DOT__signs_0_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_sign_0) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_sign_0));
    this->__PVT__mac__DOT__partial_result = (0xfffU 
                                             & this->__PVT__mac__DOT___GEN_159);
    this->__PVT__mac__DOT__signs_6_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_sign_6) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_sign_6));
    this->__PVT__mac__DOT__partial_result_6 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_165);
    this->__PVT__mac__DOT__signs_4_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_sign_4) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_sign_4));
    this->__PVT__mac__DOT__partial_result_4 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_163);
    this->__PVT__mac__DOT__signs_5_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_sign_5) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_sign_5));
    this->__PVT__mac__DOT__partial_result_5 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_164);
    this->__PVT__mac__DOT__signs_1_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_sign_1) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_sign_1));
    this->__PVT__mac__DOT__partial_result_1 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_160);
    this->__PVT__mac__DOT__exp_addition_r = (0x1ffU 
                                             & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_exp) 
                                                + (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_exp)));
}

VL_INLINE_OPT void VSystolicArray_HBFP_forTesting_HBFP_PE::_combo__TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_1__208(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_combo__TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_1__208\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->io_in_flag) {
        this->__PVT__adder_io_in_b_man = this->__PVT__adder_io_in_b_r_man;
        this->__PVT__adder_io_in_b_exp = this->__PVT__adder_io_in_b_r_exp;
        this->__PVT__adder_io_in_b_sign = this->__PVT__adder_io_in_b_r_sign;
        this->__PVT__mac_io_out_result_man = (0x3fU 
                                              & (IData)(this->__PVT__mac__DOT__acc_hbfp));
    } else {
        this->__PVT__adder_io_in_b_man = this->__PVT__result_buffer_man;
        this->__PVT__adder_io_in_b_exp = this->__PVT__result_buffer_exp;
        this->__PVT__adder_io_in_b_sign = this->__PVT__result_buffer_sign;
        this->__PVT__mac_io_out_result_man = (0x3fU 
                                              & ((0xfU 
                                                  < 
                                                  (0x3fU 
                                                   & (IData)(this->__PVT__mac__DOT__acc_hbfp)))
                                                  ? 0xfU
                                                  : (IData)(this->__PVT__mac__DOT__acc_hbfp)));
    }
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_man_0))) 
                                                     * 
                                                     (0xfU 
                                                      & ((IData)(this->__PVT__mac__DOT__counter)
                                                          ? 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? 
                                                          (3U 
                                                           & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_0) 
                                                              >> 4U))
                                                           : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_0))
                                                          : 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? 
                                                          (0xfU 
                                                           & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_0))
                                                           : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_0))))));
    this->__PVT__mac__DOT__multiplier_2_io_out = (0xffU 
                                                  & (((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      (3U 
                                                       & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_man_0) 
                                                          >> 4U))
                                                       : 0U) 
                                                     * 
                                                     (0xfU 
                                                      & ((IData)(this->__PVT__mac__DOT__counter)
                                                          ? 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? 
                                                          (3U 
                                                           & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_0) 
                                                              >> 4U))
                                                           : 0U)
                                                          : 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_0)
                                                           : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_man_1))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_man_1))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_1) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_1))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_1))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_1))))));
    this->__PVT__mac__DOT__multiplier_2_1_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_man_1) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_1) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_1)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_man_2))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_man_2))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_2) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_2))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_2))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_2))))));
    this->__PVT__mac__DOT__multiplier_2_2_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_man_2) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_2) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_2)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_4_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_man_4))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_man_4))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_4) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_4))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_4))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_4))))));
    this->__PVT__mac__DOT__multiplier_2_4_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_man_4) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_4) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_4)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_5_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_man_5))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_man_5))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_5) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_5))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_5))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_5))))));
    this->__PVT__mac__DOT__multiplier_2_5_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_man_5) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_5) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_5)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_7_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_man_7))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_man_7))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_7) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_7))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_7))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_7))))));
    this->__PVT__mac__DOT__multiplier_2_7_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_man_7) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_7) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_7)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_man_3))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_man_3))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_3) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_3))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_3))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_3))))));
    this->__PVT__mac__DOT__multiplier_2_3_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_man_3) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_3) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_3)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_6_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_man_6))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_man_6))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_6) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_6))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_6))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_6))))));
    this->__PVT__mac__DOT__multiplier_2_6_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_man_6) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_6) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_6)
                                                    : 0U)))));
    this->__PVT__adder__DOT___exp_diff_T = ((0xffU 
                                             & (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)) 
                                            > (IData)(this->__PVT__adder_io_in_b_exp));
    this->__PVT__adder__DOT__exp_diff = (0xffU & ((
                                                   (0xffU 
                                                    & (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)) 
                                                   > (IData)(this->__PVT__adder_io_in_b_exp))
                                                   ? 
                                                  ((IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5) 
                                                   - (IData)(this->__PVT__adder_io_in_b_exp))
                                                   : 
                                                  ((IData)(this->__PVT__adder_io_in_b_exp) 
                                                   - (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5))));
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
    this->__PVT__mac__DOT___partial_result_T_71 = (0xffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out) 
                                                      + 
                                                      ((IData)(this->__PVT__mac__DOT__multiplier_2_7_io_out) 
                                                       << 4U)));
    this->__PVT__mac__DOT___partial_result_T_31 = (0xffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out) 
                                                      + 
                                                      ((IData)(this->__PVT__mac__DOT__multiplier_2_3_io_out) 
                                                       << 4U)));
    this->__PVT__mac__DOT___partial_result_T_61 = (0xffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out) 
                                                      + 
                                                      ((IData)(this->__PVT__mac__DOT__multiplier_2_6_io_out) 
                                                       << 4U)));
    if ((5U >= (IData)(this->__PVT__adder__DOT__exp_diff))) {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 
            = (0x3fU & ((IData)(this->__PVT__adder_io_in_b_man) 
                        >> (IData)(this->__PVT__adder__DOT__exp_diff)));
        this->__PVT__adder__DOT___io_out_result_sign_T_4 
            = (0x3fU & ((IData)(this->__PVT__mac_io_out_result_man) 
                        >> (IData)(this->__PVT__adder__DOT__exp_diff)));
    } else {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__adder__DOT___io_out_result_sign_T_4 = 0U;
    }
    if (vlTOPp->reset) {
        this->__PVT__mac__DOT___GEN_159 = 0U;
        this->__PVT__mac__DOT___GEN_160 = 0U;
        this->__PVT__mac__DOT___GEN_161 = 0U;
        this->__PVT__mac__DOT___GEN_163 = 0U;
        this->__PVT__mac__DOT___GEN_164 = 0U;
        this->__PVT__mac__DOT___GEN_166 = 0U;
        this->__PVT__mac__DOT___GEN_162 = 0U;
        this->__PVT__mac__DOT___GEN_165 = 0U;
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
    }
    this->__PVT__adder__DOT__addition = (0x7fU & ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                                   ? 
                                                  (((1U 
                                                     & ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                        >> 6U)) 
                                                    == (IData)(this->__PVT__adder_io_in_b_sign))
                                                    ? 
                                                   ((IData)(this->__PVT__mac_io_out_result_man) 
                                                    + (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                    : 
                                                   (0x3fU 
                                                    & (((IData)(this->__PVT__mac_io_out_result_man) 
                                                        > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                        ? 
                                                       ((IData)(this->__PVT__mac_io_out_result_man) 
                                                        - (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                        : 
                                                       ((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1) 
                                                        - (IData)(this->__PVT__mac_io_out_result_man)))))
                                                   : 
                                                  (((1U 
                                                     & ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                        >> 6U)) 
                                                    == (IData)(this->__PVT__adder_io_in_b_sign))
                                                    ? 
                                                   ((IData)(this->__PVT__adder_io_in_b_man) 
                                                    + (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                    : 
                                                   (0x3fU 
                                                    & (((IData)(this->__PVT__adder_io_in_b_man) 
                                                        > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                        ? 
                                                       ((IData)(this->__PVT__adder_io_in_b_man) 
                                                        - (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                        : 
                                                       ((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4) 
                                                        - (IData)(this->__PVT__adder_io_in_b_man)))))));
}

VL_INLINE_OPT void VSystolicArray_HBFP_forTesting_HBFP_PE::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_2__17(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_2__17\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__mac__DOT__exp_addition = this->__PVT__mac__DOT__exp_addition_r_3;
    this->__PVT__adder_io_in_b_r_man = this->__PVT__result_buffer_man;
    this->__PVT__adder_io_in_b_r_exp = this->__PVT__result_buffer_exp;
    this->__PVT__adder_io_in_b_r_sign = this->__PVT__result_buffer_sign;
    this->__PVT__mac__DOT__counter = ((IData)(vlTOPp->reset) 
                                      | (IData)(this->__PVT__mac__DOT___GEN_61));
    if (vlTOPp->reset) {
        this->__PVT__mac__DOT__two_complement_buffer_7 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_3 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_2 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_0 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_6 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_4 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_5 = 0U;
        this->__PVT__mac__DOT__two_complement_buffer_1 = 0U;
    } else {
        this->__PVT__mac__DOT__two_complement_buffer_7 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_7)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_7)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_7)));
        this->__PVT__mac__DOT__two_complement_buffer_3 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_3)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_3)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_3)));
        this->__PVT__mac__DOT__two_complement_buffer_2 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_2)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_2)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_2)));
        this->__PVT__mac__DOT__two_complement_buffer_0 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_0)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_0)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_0)));
        this->__PVT__mac__DOT__two_complement_buffer_6 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_6)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_6)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_6)));
        this->__PVT__mac__DOT__two_complement_buffer_4 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_4)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_4)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_4)));
        this->__PVT__mac__DOT__two_complement_buffer_5 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_5)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_5)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_5)));
        this->__PVT__mac__DOT__two_complement_buffer_1 
            = (0x7fU & ((IData)(this->__PVT__mac__DOT__signs_1)
                         ? ((IData)(1U) + (~ (IData)(this->__PVT__mac__DOT__dotProductRegs_1)))
                         : (IData)(this->__PVT__mac__DOT__dotProductRegs_1)));
    }
    this->__PVT__mac__DOT__exp_addition_r_3 = this->__PVT__mac__DOT__exp_addition_r_2;
    this->__PVT__result_buffer_man = (0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                ? (
                                                   (0x3fU 
                                                    < (IData)(this->__PVT__adder__DOT__addition))
                                                    ? 0x3fU
                                                    : (IData)(this->__PVT__adder__DOT__addition))
                                                : (
                                                   (0xfU 
                                                    < (IData)(this->__PVT__adder__DOT__addition))
                                                    ? 0xfU
                                                    : (IData)(this->__PVT__adder__DOT__addition))));
    if (this->__PVT__adder__DOT___exp_diff_T) {
        this->__PVT__result_buffer_exp = (0xffU & (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5));
        this->__PVT__result_buffer_sign = (1U & (((IData)(this->__PVT__mac_io_out_result_man) 
                                                  > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                  ? 
                                                 ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                  >> 6U)
                                                  : (IData)(this->__PVT__adder_io_in_b_sign)));
    } else {
        this->__PVT__result_buffer_exp = (0xffU & (IData)(this->__PVT__adder_io_in_b_exp));
        this->__PVT__result_buffer_sign = (1U & (((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4) 
                                                  > (IData)(this->__PVT__adder_io_in_b_man))
                                                  ? 
                                                 ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                  >> 6U)
                                                  : (IData)(this->__PVT__adder_io_in_b_sign)));
    }
    this->__PVT__mac__DOT___GEN_61 = ((1U > (IData)(this->__PVT__mac__DOT__counter)) 
                                      & ((IData)(1U) 
                                         + (IData)(this->__PVT__mac__DOT__counter)));
    this->__PVT__mac__DOT__signs_7 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_7_r_1));
    this->__PVT__mac__DOT__dotProductRegs_7 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_7))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_7))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_7))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_7)))));
    this->__PVT__mac__DOT__signs_3 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_3_r_1));
    this->__PVT__mac__DOT__dotProductRegs_3 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_3))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_3))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_3))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_3)))));
    this->__PVT__mac__DOT__signs_2 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_2_r_1));
    this->__PVT__mac__DOT__dotProductRegs_2 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_2))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_2))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_2))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_2)))));
    this->__PVT__mac__DOT__signs_0 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_0_r_1));
    this->__PVT__mac__DOT__dotProductRegs_0 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result)))));
    this->__PVT__mac__DOT__signs_6 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_6_r_1));
    this->__PVT__mac__DOT__dotProductRegs_6 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_6))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_6))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_6))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_6)))));
    this->__PVT__mac__DOT__signs_4 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_4_r_1));
    this->__PVT__mac__DOT__dotProductRegs_4 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_4))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_4))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_4))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_4)))));
    this->__PVT__mac__DOT__signs_5 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_5_r_1));
    this->__PVT__mac__DOT__dotProductRegs_5 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_5))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_5))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_5))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_5)))));
    this->__PVT__mac__DOT__signs_1 = ((~ (IData)(vlTOPp->reset)) 
                                      & (IData)(this->__PVT__mac__DOT__signs_1_r_1));
    this->__PVT__mac__DOT__dotProductRegs_1 = ((IData)(vlTOPp->reset)
                                                ? 0U
                                                : (0x3fU 
                                                   & ((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      ((0x3fU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_1))
                                                        ? 0x3fU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_1))
                                                       : 
                                                      ((0xfU 
                                                        < (IData)(this->__PVT__mac__DOT__final_result_1))
                                                        ? 0xfU
                                                        : (IData)(this->__PVT__mac__DOT__final_result_1)))));
    this->__PVT__mac__DOT___io_out_result_exp_T_5 = 
        ((0xffU < (IData)(this->__PVT__mac__DOT__exp_addition))
          ? 0xffU : (IData)(this->__PVT__mac__DOT__exp_addition));
    this->__PVT__mac__DOT__exp_addition_r_2 = this->__PVT__mac__DOT__exp_addition_r_1;
    this->__PVT__mac__DOT__acc_hbfp = ((IData)(vlTOPp->reset)
                                        ? 0U : (0x7fU 
                                                & ((0x2000U 
                                                    & (IData)(this->__PVT__mac__DOT__sum))
                                                    ? 
                                                   ((0x3fU 
                                                     < 
                                                     (0x1fffU 
                                                      & ((IData)(1U) 
                                                         + 
                                                         (~ (IData)(this->__PVT__mac__DOT__sum)))))
                                                     ? 0x7fU
                                                     : 
                                                    (0x7fU 
                                                     & ((IData)(1U) 
                                                        + 
                                                        (~ 
                                                         (0x3fU 
                                                          & (IData)(this->__PVT__mac__DOT__sum))))))
                                                    : 
                                                   ((0x3fU 
                                                     < 
                                                     (0x1fffU 
                                                      & (IData)(this->__PVT__mac__DOT__sum)))
                                                     ? 0x3fU
                                                     : 
                                                    (0x3fU 
                                                     & (IData)(this->__PVT__mac__DOT__sum))))));
    this->__PVT__mac__DOT__signs_7_r_1 = this->__PVT__mac__DOT__signs_7_r;
    this->__PVT__mac__DOT__final_result_7 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_7));
    this->__PVT__mac__DOT__signs_3_r_1 = this->__PVT__mac__DOT__signs_3_r;
    this->__PVT__mac__DOT__final_result_3 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_3));
    this->__PVT__mac__DOT__signs_2_r_1 = this->__PVT__mac__DOT__signs_2_r;
    this->__PVT__mac__DOT__final_result_2 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_2));
    this->__PVT__mac__DOT__signs_0_r_1 = this->__PVT__mac__DOT__signs_0_r;
    this->__PVT__mac__DOT__final_result = ((IData)(vlTOPp->reset)
                                            ? 0U : (IData)(this->__PVT__mac__DOT__partial_result));
    this->__PVT__mac__DOT__signs_6_r_1 = this->__PVT__mac__DOT__signs_6_r;
    this->__PVT__mac__DOT__final_result_6 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_6));
    this->__PVT__mac__DOT__signs_4_r_1 = this->__PVT__mac__DOT__signs_4_r;
    this->__PVT__mac__DOT__final_result_4 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_4));
    this->__PVT__mac__DOT__signs_5_r_1 = this->__PVT__mac__DOT__signs_5_r;
    this->__PVT__mac__DOT__final_result_5 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_5));
    this->__PVT__mac__DOT__signs_1_r_1 = this->__PVT__mac__DOT__signs_1_r;
    this->__PVT__mac__DOT__final_result_1 = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(this->__PVT__mac__DOT__partial_result_1));
    this->__PVT__mac__DOT__sum = (0x3fffU & (VL_EXTENDS_II(14,13, 
                                                           (0x1fffU 
                                                            & (VL_EXTENDS_II(13,12, 
                                                                             (0xfffU 
                                                                              & (VL_EXTENDS_II(12,11, 
                                                                                (0x7ffU 
                                                                                & (VL_EXTENDS_II(11,10, 
                                                                                (0x3ffU 
                                                                                & (VL_EXTENDS_II(10,9, 
                                                                                (0x1ffU 
                                                                                & (VL_EXTENDS_II(9,8, 
                                                                                (0xffU 
                                                                                & (VL_EXTENDS_II(8,7, (IData)(this->__PVT__mac__DOT__two_complement_buffer_0)) 
                                                                                + 
                                                                                VL_EXTENDS_II(8,7, (IData)(this->__PVT__mac__DOT__two_complement_buffer_1))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(9,8, 
                                                                                ((0x80U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_2) 
                                                                                << 1U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_2)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(10,9, 
                                                                                ((0x180U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_3) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_3)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(11,10, 
                                                                                ((0x380U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_4) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_4)))))) 
                                                                                + 
                                                                                VL_EXTENDS_II(12,11, 
                                                                                ((0x780U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_5) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                                | (IData)(this->__PVT__mac__DOT__two_complement_buffer_5)))))) 
                                                               + 
                                                               VL_EXTENDS_II(13,12, 
                                                                             ((0xf80U 
                                                                               & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_6) 
                                                                                >> 6U)))) 
                                                                                << 7U)) 
                                                                              | (IData)(this->__PVT__mac__DOT__two_complement_buffer_6)))))) 
                                             + VL_EXTENDS_II(14,13, 
                                                             ((0x1f80U 
                                                               & ((- (IData)(
                                                                             (1U 
                                                                              & ((IData)(this->__PVT__mac__DOT__two_complement_buffer_7) 
                                                                                >> 6U)))) 
                                                                  << 7U)) 
                                                              | (IData)(this->__PVT__mac__DOT__two_complement_buffer_7)))));
    this->__PVT__mac__DOT__exp_addition_r_1 = this->__PVT__mac__DOT__exp_addition_r;
    this->__PVT__mac__DOT__signs_7_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_sign_7) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_sign_7));
    this->__PVT__mac__DOT__partial_result_7 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_166);
    this->__PVT__mac__DOT__signs_3_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_sign_3) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_sign_3));
    this->__PVT__mac__DOT__partial_result_3 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_162);
    this->__PVT__mac__DOT__signs_2_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_sign_2) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_sign_2));
    this->__PVT__mac__DOT__partial_result_2 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_161);
    this->__PVT__mac__DOT__signs_0_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_sign_0) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_sign_0));
    this->__PVT__mac__DOT__partial_result = (0xfffU 
                                             & this->__PVT__mac__DOT___GEN_159);
    this->__PVT__mac__DOT__signs_6_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_sign_6) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_sign_6));
    this->__PVT__mac__DOT__partial_result_6 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_165);
    this->__PVT__mac__DOT__signs_4_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_sign_4) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_sign_4));
    this->__PVT__mac__DOT__partial_result_4 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_163);
    this->__PVT__mac__DOT__signs_5_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_sign_5) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_sign_5));
    this->__PVT__mac__DOT__partial_result_5 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_164);
    this->__PVT__mac__DOT__signs_1_r = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_sign_1) 
                                        ^ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_sign_1));
    this->__PVT__mac__DOT__partial_result_1 = (0xfffU 
                                               & this->__PVT__mac__DOT___GEN_160);
    this->__PVT__mac__DOT__exp_addition_r = (0x1ffU 
                                             & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_exp) 
                                                + (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_exp)));
}

VL_INLINE_OPT void VSystolicArray_HBFP_forTesting_HBFP_PE::_combo__TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_2__209(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_HBFP_PE::_combo__TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_2__209\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->io_in_flag) {
        this->__PVT__adder_io_in_b_man = this->__PVT__adder_io_in_b_r_man;
        this->__PVT__adder_io_in_b_exp = this->__PVT__adder_io_in_b_r_exp;
        this->__PVT__adder_io_in_b_sign = this->__PVT__adder_io_in_b_r_sign;
        this->__PVT__mac_io_out_result_man = (0x3fU 
                                              & (IData)(this->__PVT__mac__DOT__acc_hbfp));
    } else {
        this->__PVT__adder_io_in_b_man = this->__PVT__result_buffer_man;
        this->__PVT__adder_io_in_b_exp = this->__PVT__result_buffer_exp;
        this->__PVT__adder_io_in_b_sign = this->__PVT__result_buffer_sign;
        this->__PVT__mac_io_out_result_man = (0x3fU 
                                              & ((0xfU 
                                                  < 
                                                  (0x3fU 
                                                   & (IData)(this->__PVT__mac__DOT__acc_hbfp)))
                                                  ? 0xfU
                                                  : (IData)(this->__PVT__mac__DOT__acc_hbfp)));
    }
    this->__PVT__mac__DOT__multiplier_1_io_out = (0xffU 
                                                  & ((0xfU 
                                                      & ((IData)(vlTOPp->io_in_flag)
                                                          ? 
                                                         (0xfU 
                                                          & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_man_0))
                                                          : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_man_0))) 
                                                     * 
                                                     (0xfU 
                                                      & ((IData)(this->__PVT__mac__DOT__counter)
                                                          ? 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? 
                                                          (3U 
                                                           & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_0) 
                                                              >> 4U))
                                                           : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_0))
                                                          : 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? 
                                                          (0xfU 
                                                           & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_0))
                                                           : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_0))))));
    this->__PVT__mac__DOT__multiplier_2_io_out = (0xffU 
                                                  & (((IData)(vlTOPp->io_in_flag)
                                                       ? 
                                                      (3U 
                                                       & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_man_0) 
                                                          >> 4U))
                                                       : 0U) 
                                                     * 
                                                     (0xfU 
                                                      & ((IData)(this->__PVT__mac__DOT__counter)
                                                          ? 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? 
                                                          (3U 
                                                           & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_0) 
                                                              >> 4U))
                                                           : 0U)
                                                          : 
                                                         ((IData)(vlTOPp->io_in_flag)
                                                           ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_0)
                                                           : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_1_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_man_1))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_man_1))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_1) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_1))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_1))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_1))))));
    this->__PVT__mac__DOT__multiplier_2_1_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_man_1) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_1) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_1)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_2_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_man_2))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_man_2))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_2) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_2))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_2))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_2))))));
    this->__PVT__mac__DOT__multiplier_2_2_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_man_2) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_2) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_2)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_4_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_man_4))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_man_4))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_4) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_4))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_4))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_4))))));
    this->__PVT__mac__DOT__multiplier_2_4_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_man_4) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_4) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_4)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_5_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_man_5))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_man_5))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_5) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_5))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_5))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_5))))));
    this->__PVT__mac__DOT__multiplier_2_5_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_man_5) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_5) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_5)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_7_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_man_7))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_man_7))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_7) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_7))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_7))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_7))))));
    this->__PVT__mac__DOT__multiplier_2_7_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_man_7) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_7) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_7)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_3_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_man_3))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_man_3))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_3) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_3))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_3))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_3))))));
    this->__PVT__mac__DOT__multiplier_2_3_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_man_3) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_3) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_3)
                                                    : 0U)))));
    this->__PVT__mac__DOT__multiplier_1_6_io_out = 
        (0xffU & ((0xfU & ((IData)(vlTOPp->io_in_flag)
                            ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_man_6))
                            : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_man_6))) 
                  * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                              ? ((IData)(vlTOPp->io_in_flag)
                                  ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_6) 
                                           >> 4U)) : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_6))
                              : ((IData)(vlTOPp->io_in_flag)
                                  ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_6))
                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_6))))));
    this->__PVT__mac__DOT__multiplier_2_6_io_out = 
        (0xffU & (((IData)(vlTOPp->io_in_flag) ? (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_man_6) 
                                                     >> 4U))
                    : 0U) * (0xfU & ((IData)(this->__PVT__mac__DOT__counter)
                                      ? ((IData)(vlTOPp->io_in_flag)
                                          ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_6) 
                                                   >> 4U))
                                          : 0U) : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_6)
                                                    : 0U)))));
    this->__PVT__adder__DOT___exp_diff_T = ((0xffU 
                                             & (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)) 
                                            > (IData)(this->__PVT__adder_io_in_b_exp));
    this->__PVT__adder__DOT__exp_diff = (0xffU & ((
                                                   (0xffU 
                                                    & (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5)) 
                                                   > (IData)(this->__PVT__adder_io_in_b_exp))
                                                   ? 
                                                  ((IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5) 
                                                   - (IData)(this->__PVT__adder_io_in_b_exp))
                                                   : 
                                                  ((IData)(this->__PVT__adder_io_in_b_exp) 
                                                   - (IData)(this->__PVT__mac__DOT___io_out_result_exp_T_5))));
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
    this->__PVT__mac__DOT___partial_result_T_71 = (0xffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_7_io_out) 
                                                      + 
                                                      ((IData)(this->__PVT__mac__DOT__multiplier_2_7_io_out) 
                                                       << 4U)));
    this->__PVT__mac__DOT___partial_result_T_31 = (0xffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_3_io_out) 
                                                      + 
                                                      ((IData)(this->__PVT__mac__DOT__multiplier_2_3_io_out) 
                                                       << 4U)));
    this->__PVT__mac__DOT___partial_result_T_61 = (0xffffU 
                                                   & ((IData)(this->__PVT__mac__DOT__multiplier_1_6_io_out) 
                                                      + 
                                                      ((IData)(this->__PVT__mac__DOT__multiplier_2_6_io_out) 
                                                       << 4U)));
    if ((5U >= (IData)(this->__PVT__adder__DOT__exp_diff))) {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 
            = (0x3fU & ((IData)(this->__PVT__adder_io_in_b_man) 
                        >> (IData)(this->__PVT__adder__DOT__exp_diff)));
        this->__PVT__adder__DOT___io_out_result_sign_T_4 
            = (0x3fU & ((IData)(this->__PVT__mac_io_out_result_man) 
                        >> (IData)(this->__PVT__adder__DOT__exp_diff)));
    } else {
        this->__PVT__adder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__adder__DOT___io_out_result_sign_T_4 = 0U;
    }
    if (vlTOPp->reset) {
        this->__PVT__mac__DOT___GEN_159 = 0U;
        this->__PVT__mac__DOT___GEN_160 = 0U;
        this->__PVT__mac__DOT___GEN_161 = 0U;
        this->__PVT__mac__DOT___GEN_163 = 0U;
        this->__PVT__mac__DOT___GEN_164 = 0U;
        this->__PVT__mac__DOT___GEN_166 = 0U;
        this->__PVT__mac__DOT___GEN_162 = 0U;
        this->__PVT__mac__DOT___GEN_165 = 0U;
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
    }
    this->__PVT__adder__DOT__addition = (0x7fU & ((IData)(this->__PVT__adder__DOT___exp_diff_T)
                                                   ? 
                                                  (((1U 
                                                     & ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                        >> 6U)) 
                                                    == (IData)(this->__PVT__adder_io_in_b_sign))
                                                    ? 
                                                   ((IData)(this->__PVT__mac_io_out_result_man) 
                                                    + (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                    : 
                                                   (0x3fU 
                                                    & (((IData)(this->__PVT__mac_io_out_result_man) 
                                                        > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                        ? 
                                                       ((IData)(this->__PVT__mac_io_out_result_man) 
                                                        - (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1))
                                                        : 
                                                       ((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_1) 
                                                        - (IData)(this->__PVT__mac_io_out_result_man)))))
                                                   : 
                                                  (((1U 
                                                     & ((IData)(this->__PVT__mac__DOT__acc_hbfp) 
                                                        >> 6U)) 
                                                    == (IData)(this->__PVT__adder_io_in_b_sign))
                                                    ? 
                                                   ((IData)(this->__PVT__adder_io_in_b_man) 
                                                    + (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                    : 
                                                   (0x3fU 
                                                    & (((IData)(this->__PVT__adder_io_in_b_man) 
                                                        > (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                        ? 
                                                       ((IData)(this->__PVT__adder_io_in_b_man) 
                                                        - (IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4))
                                                        : 
                                                       ((IData)(this->__PVT__adder__DOT___io_out_result_sign_T_4) 
                                                        - (IData)(this->__PVT__adder_io_in_b_man)))))));
}
