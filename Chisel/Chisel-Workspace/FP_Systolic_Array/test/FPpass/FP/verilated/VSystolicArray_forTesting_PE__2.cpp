// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSystolicArray_forTesting.h for the primary calling header

#include "VSystolicArray_forTesting_PE.h"
#include "VSystolicArray_forTesting__Syms.h"

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_11_4__399(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_11_4__399\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_11_4_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_11_4_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_11_4_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_11_4_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_11_4_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_11_4_io_in_ver_r_exp)));
    this->__PVT__fpmult__DOT___io_out_result_man_T_7 
        = ((0x1fU < (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T))
            ? 0x1fU : (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T));
    this->__PVT__fpmult__DOT___io_out_result_exp_T_5 
        = ((0xffU < (IData)(this->__PVT__fpmult__DOT__exp_addition))
            ? 0xffU : (IData)(this->__PVT__fpmult__DOT__exp_addition));
    this->__PVT__fpadder__DOT___exp_diff_T = ((0xffU 
                                               & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                              > (IData)(this->__PVT__result_buffer_exp));
    this->__PVT__fpadder__DOT__exp_diff = (0xffU & 
                                           (((0xffU 
                                              & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                             > (IData)(this->__PVT__result_buffer_exp))
                                             ? ((IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5) 
                                                - (IData)(this->__PVT__result_buffer_exp))
                                             : ((IData)(this->__PVT__result_buffer_exp) 
                                                - (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5))));
    this->__PVT__fpadder_io_out_result_exp = (0xffU 
                                              & ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                                  ? (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)
                                                  : (IData)(this->__PVT__result_buffer_exp)));
    if ((4U >= (IData)(this->__PVT__fpadder__DOT__exp_diff))) {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 
            = (0x1fU & ((IData)(this->__PVT__result_buffer_man) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 
            = (0x1fU & ((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
    } else {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__fpadder__DOT___io_out_result_sign_T_3 
        = (((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
            > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT___io_out_result_sign_T_6 
        = (((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
            > (IData)(this->__PVT__result_buffer_man))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT__addition = (0x3fU & 
                                           ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                             ? (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((0x1fU 
                                                  & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                 : 
                                                (0x1fU 
                                                 & (((0x1fU 
                                                      & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     ? 
                                                    ((IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1) 
                                                     - (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)))))
                                             : (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((IData)(this->__PVT__result_buffer_man) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                 : 
                                                (0x1fU 
                                                 & (((IData)(this->__PVT__result_buffer_man) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     ? 
                                                    ((IData)(this->__PVT__result_buffer_man) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
                                                     - (IData)(this->__PVT__result_buffer_man)))))));
}

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_11_5__376(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_11_5__376\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_11_5_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_11_5_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_11_5_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_11_5_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_11_5_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_11_5_io_in_ver_r_exp)));
    this->__PVT__fpmult__DOT___io_out_result_man_T_7 
        = ((0x1fU < (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T))
            ? 0x1fU : (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T));
    this->__PVT__fpmult__DOT___io_out_result_exp_T_5 
        = ((0xffU < (IData)(this->__PVT__fpmult__DOT__exp_addition))
            ? 0xffU : (IData)(this->__PVT__fpmult__DOT__exp_addition));
    this->__PVT__fpadder__DOT___exp_diff_T = ((0xffU 
                                               & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                              > (IData)(this->__PVT__result_buffer_exp));
    this->__PVT__fpadder__DOT__exp_diff = (0xffU & 
                                           (((0xffU 
                                              & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                             > (IData)(this->__PVT__result_buffer_exp))
                                             ? ((IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5) 
                                                - (IData)(this->__PVT__result_buffer_exp))
                                             : ((IData)(this->__PVT__result_buffer_exp) 
                                                - (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5))));
    this->__PVT__fpadder_io_out_result_exp = (0xffU 
                                              & ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                                  ? (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)
                                                  : (IData)(this->__PVT__result_buffer_exp)));
    if ((4U >= (IData)(this->__PVT__fpadder__DOT__exp_diff))) {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 
            = (0x1fU & ((IData)(this->__PVT__result_buffer_man) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 
            = (0x1fU & ((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
    } else {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__fpadder__DOT___io_out_result_sign_T_3 
        = (((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
            > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT___io_out_result_sign_T_6 
        = (((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
            > (IData)(this->__PVT__result_buffer_man))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT__addition = (0x3fU & 
                                           ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                             ? (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((0x1fU 
                                                  & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                 : 
                                                (0x1fU 
                                                 & (((0x1fU 
                                                      & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     ? 
                                                    ((IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1) 
                                                     - (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)))))
                                             : (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((IData)(this->__PVT__result_buffer_man) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                 : 
                                                (0x1fU 
                                                 & (((IData)(this->__PVT__result_buffer_man) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     ? 
                                                    ((IData)(this->__PVT__result_buffer_man) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
                                                     - (IData)(this->__PVT__result_buffer_man)))))));
}

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_11_6__355(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_11_6__355\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_11_6_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_11_6_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_11_6_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_11_6_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_11_6_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_11_6_io_in_ver_r_exp)));
    this->__PVT__fpmult__DOT___io_out_result_man_T_7 
        = ((0x1fU < (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T))
            ? 0x1fU : (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T));
    this->__PVT__fpmult__DOT___io_out_result_exp_T_5 
        = ((0xffU < (IData)(this->__PVT__fpmult__DOT__exp_addition))
            ? 0xffU : (IData)(this->__PVT__fpmult__DOT__exp_addition));
    this->__PVT__fpadder__DOT___exp_diff_T = ((0xffU 
                                               & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                              > (IData)(this->__PVT__result_buffer_exp));
    this->__PVT__fpadder__DOT__exp_diff = (0xffU & 
                                           (((0xffU 
                                              & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                             > (IData)(this->__PVT__result_buffer_exp))
                                             ? ((IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5) 
                                                - (IData)(this->__PVT__result_buffer_exp))
                                             : ((IData)(this->__PVT__result_buffer_exp) 
                                                - (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5))));
    this->__PVT__fpadder_io_out_result_exp = (0xffU 
                                              & ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                                  ? (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)
                                                  : (IData)(this->__PVT__result_buffer_exp)));
    if ((4U >= (IData)(this->__PVT__fpadder__DOT__exp_diff))) {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 
            = (0x1fU & ((IData)(this->__PVT__result_buffer_man) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 
            = (0x1fU & ((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
    } else {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__fpadder__DOT___io_out_result_sign_T_3 
        = (((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
            > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT___io_out_result_sign_T_6 
        = (((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
            > (IData)(this->__PVT__result_buffer_man))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT__addition = (0x3fU & 
                                           ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                             ? (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((0x1fU 
                                                  & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                 : 
                                                (0x1fU 
                                                 & (((0x1fU 
                                                      & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     ? 
                                                    ((IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1) 
                                                     - (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)))))
                                             : (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((IData)(this->__PVT__result_buffer_man) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                 : 
                                                (0x1fU 
                                                 & (((IData)(this->__PVT__result_buffer_man) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     ? 
                                                    ((IData)(this->__PVT__result_buffer_man) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
                                                     - (IData)(this->__PVT__result_buffer_man)))))));
}

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_11_7__336(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_11_7__336\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_11_7_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_11_7_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_11_7_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_11_7_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_11_7_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_11_7_io_in_ver_r_exp)));
    this->__PVT__fpmult__DOT___io_out_result_man_T_7 
        = ((0x1fU < (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T))
            ? 0x1fU : (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T));
    this->__PVT__fpmult__DOT___io_out_result_exp_T_5 
        = ((0xffU < (IData)(this->__PVT__fpmult__DOT__exp_addition))
            ? 0xffU : (IData)(this->__PVT__fpmult__DOT__exp_addition));
    this->__PVT__fpadder__DOT___exp_diff_T = ((0xffU 
                                               & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                              > (IData)(this->__PVT__result_buffer_exp));
    this->__PVT__fpadder__DOT__exp_diff = (0xffU & 
                                           (((0xffU 
                                              & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                             > (IData)(this->__PVT__result_buffer_exp))
                                             ? ((IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5) 
                                                - (IData)(this->__PVT__result_buffer_exp))
                                             : ((IData)(this->__PVT__result_buffer_exp) 
                                                - (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5))));
    this->__PVT__fpadder_io_out_result_exp = (0xffU 
                                              & ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                                  ? (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)
                                                  : (IData)(this->__PVT__result_buffer_exp)));
    if ((4U >= (IData)(this->__PVT__fpadder__DOT__exp_diff))) {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 
            = (0x1fU & ((IData)(this->__PVT__result_buffer_man) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 
            = (0x1fU & ((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
    } else {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__fpadder__DOT___io_out_result_sign_T_3 
        = (((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
            > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT___io_out_result_sign_T_6 
        = (((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
            > (IData)(this->__PVT__result_buffer_man))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT__addition = (0x3fU & 
                                           ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                             ? (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((0x1fU 
                                                  & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                 : 
                                                (0x1fU 
                                                 & (((0x1fU 
                                                      & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     ? 
                                                    ((IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1) 
                                                     - (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)))))
                                             : (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((IData)(this->__PVT__result_buffer_man) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                 : 
                                                (0x1fU 
                                                 & (((IData)(this->__PVT__result_buffer_man) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     ? 
                                                    ((IData)(this->__PVT__result_buffer_man) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
                                                     - (IData)(this->__PVT__result_buffer_man)))))));
}

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_11_8__319(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_11_8__319\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_11_8_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_11_8_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_11_8_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_11_8_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_11_8_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_11_8_io_in_ver_r_exp)));
    this->__PVT__fpmult__DOT___io_out_result_man_T_7 
        = ((0x1fU < (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T))
            ? 0x1fU : (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T));
    this->__PVT__fpmult__DOT___io_out_result_exp_T_5 
        = ((0xffU < (IData)(this->__PVT__fpmult__DOT__exp_addition))
            ? 0xffU : (IData)(this->__PVT__fpmult__DOT__exp_addition));
    this->__PVT__fpadder__DOT___exp_diff_T = ((0xffU 
                                               & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                              > (IData)(this->__PVT__result_buffer_exp));
    this->__PVT__fpadder__DOT__exp_diff = (0xffU & 
                                           (((0xffU 
                                              & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                             > (IData)(this->__PVT__result_buffer_exp))
                                             ? ((IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5) 
                                                - (IData)(this->__PVT__result_buffer_exp))
                                             : ((IData)(this->__PVT__result_buffer_exp) 
                                                - (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5))));
    this->__PVT__fpadder_io_out_result_exp = (0xffU 
                                              & ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                                  ? (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)
                                                  : (IData)(this->__PVT__result_buffer_exp)));
    if ((4U >= (IData)(this->__PVT__fpadder__DOT__exp_diff))) {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 
            = (0x1fU & ((IData)(this->__PVT__result_buffer_man) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 
            = (0x1fU & ((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
    } else {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__fpadder__DOT___io_out_result_sign_T_3 
        = (((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
            > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT___io_out_result_sign_T_6 
        = (((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
            > (IData)(this->__PVT__result_buffer_man))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT__addition = (0x3fU & 
                                           ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                             ? (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((0x1fU 
                                                  & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                 : 
                                                (0x1fU 
                                                 & (((0x1fU 
                                                      & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     ? 
                                                    ((IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1) 
                                                     - (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)))))
                                             : (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((IData)(this->__PVT__result_buffer_man) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                 : 
                                                (0x1fU 
                                                 & (((IData)(this->__PVT__result_buffer_man) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     ? 
                                                    ((IData)(this->__PVT__result_buffer_man) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
                                                     - (IData)(this->__PVT__result_buffer_man)))))));
}

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_11_9__304(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_11_9__304\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_11_9_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_11_9_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_11_9_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_11_9_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_11_9_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_11_9_io_in_ver_r_exp)));
    this->__PVT__fpmult__DOT___io_out_result_man_T_7 
        = ((0x1fU < (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T))
            ? 0x1fU : (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T));
    this->__PVT__fpmult__DOT___io_out_result_exp_T_5 
        = ((0xffU < (IData)(this->__PVT__fpmult__DOT__exp_addition))
            ? 0xffU : (IData)(this->__PVT__fpmult__DOT__exp_addition));
    this->__PVT__fpadder__DOT___exp_diff_T = ((0xffU 
                                               & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                              > (IData)(this->__PVT__result_buffer_exp));
    this->__PVT__fpadder__DOT__exp_diff = (0xffU & 
                                           (((0xffU 
                                              & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                             > (IData)(this->__PVT__result_buffer_exp))
                                             ? ((IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5) 
                                                - (IData)(this->__PVT__result_buffer_exp))
                                             : ((IData)(this->__PVT__result_buffer_exp) 
                                                - (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5))));
    this->__PVT__fpadder_io_out_result_exp = (0xffU 
                                              & ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                                  ? (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)
                                                  : (IData)(this->__PVT__result_buffer_exp)));
    if ((4U >= (IData)(this->__PVT__fpadder__DOT__exp_diff))) {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 
            = (0x1fU & ((IData)(this->__PVT__result_buffer_man) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 
            = (0x1fU & ((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
    } else {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__fpadder__DOT___io_out_result_sign_T_3 
        = (((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
            > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT___io_out_result_sign_T_6 
        = (((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
            > (IData)(this->__PVT__result_buffer_man))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT__addition = (0x3fU & 
                                           ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                             ? (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((0x1fU 
                                                  & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                 : 
                                                (0x1fU 
                                                 & (((0x1fU 
                                                      & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     ? 
                                                    ((IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1) 
                                                     - (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)))))
                                             : (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((IData)(this->__PVT__result_buffer_man) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                 : 
                                                (0x1fU 
                                                 & (((IData)(this->__PVT__result_buffer_man) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     ? 
                                                    ((IData)(this->__PVT__result_buffer_man) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
                                                     - (IData)(this->__PVT__result_buffer_man)))))));
}

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_11_10__291(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_11_10__291\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_11_10_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_11_10_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_11_10_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_11_10_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_11_10_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_11_10_io_in_ver_r_exp)));
    this->__PVT__fpmult__DOT___io_out_result_man_T_7 
        = ((0x1fU < (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T))
            ? 0x1fU : (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T));
    this->__PVT__fpmult__DOT___io_out_result_exp_T_5 
        = ((0xffU < (IData)(this->__PVT__fpmult__DOT__exp_addition))
            ? 0xffU : (IData)(this->__PVT__fpmult__DOT__exp_addition));
    this->__PVT__fpadder__DOT___exp_diff_T = ((0xffU 
                                               & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                              > (IData)(this->__PVT__result_buffer_exp));
    this->__PVT__fpadder__DOT__exp_diff = (0xffU & 
                                           (((0xffU 
                                              & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                             > (IData)(this->__PVT__result_buffer_exp))
                                             ? ((IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5) 
                                                - (IData)(this->__PVT__result_buffer_exp))
                                             : ((IData)(this->__PVT__result_buffer_exp) 
                                                - (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5))));
    this->__PVT__fpadder_io_out_result_exp = (0xffU 
                                              & ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                                  ? (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)
                                                  : (IData)(this->__PVT__result_buffer_exp)));
    if ((4U >= (IData)(this->__PVT__fpadder__DOT__exp_diff))) {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 
            = (0x1fU & ((IData)(this->__PVT__result_buffer_man) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 
            = (0x1fU & ((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
    } else {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__fpadder__DOT___io_out_result_sign_T_3 
        = (((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
            > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT___io_out_result_sign_T_6 
        = (((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
            > (IData)(this->__PVT__result_buffer_man))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT__addition = (0x3fU & 
                                           ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                             ? (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((0x1fU 
                                                  & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                 : 
                                                (0x1fU 
                                                 & (((0x1fU 
                                                      & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     ? 
                                                    ((IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1) 
                                                     - (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)))))
                                             : (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((IData)(this->__PVT__result_buffer_man) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                 : 
                                                (0x1fU 
                                                 & (((IData)(this->__PVT__result_buffer_man) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     ? 
                                                    ((IData)(this->__PVT__result_buffer_man) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
                                                     - (IData)(this->__PVT__result_buffer_man)))))));
}

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_11_11__280(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_11_11__280\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_11_11_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_11_11_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_11_11_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_11_11_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_11_11_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_11_11_io_in_ver_r_exp)));
    this->__PVT__fpmult__DOT___io_out_result_man_T_7 
        = ((0x1fU < (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T))
            ? 0x1fU : (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T));
    this->__PVT__fpmult__DOT___io_out_result_exp_T_5 
        = ((0xffU < (IData)(this->__PVT__fpmult__DOT__exp_addition))
            ? 0xffU : (IData)(this->__PVT__fpmult__DOT__exp_addition));
    this->__PVT__fpadder__DOT___exp_diff_T = ((0xffU 
                                               & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                              > (IData)(this->__PVT__result_buffer_exp));
    this->__PVT__fpadder__DOT__exp_diff = (0xffU & 
                                           (((0xffU 
                                              & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                             > (IData)(this->__PVT__result_buffer_exp))
                                             ? ((IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5) 
                                                - (IData)(this->__PVT__result_buffer_exp))
                                             : ((IData)(this->__PVT__result_buffer_exp) 
                                                - (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5))));
    this->__PVT__fpadder_io_out_result_exp = (0xffU 
                                              & ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                                  ? (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)
                                                  : (IData)(this->__PVT__result_buffer_exp)));
    if ((4U >= (IData)(this->__PVT__fpadder__DOT__exp_diff))) {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 
            = (0x1fU & ((IData)(this->__PVT__result_buffer_man) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 
            = (0x1fU & ((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
    } else {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__fpadder__DOT___io_out_result_sign_T_3 
        = (((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
            > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT___io_out_result_sign_T_6 
        = (((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
            > (IData)(this->__PVT__result_buffer_man))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT__addition = (0x3fU & 
                                           ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                             ? (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((0x1fU 
                                                  & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                 : 
                                                (0x1fU 
                                                 & (((0x1fU 
                                                      & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     ? 
                                                    ((IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1) 
                                                     - (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)))))
                                             : (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((IData)(this->__PVT__result_buffer_man) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                 : 
                                                (0x1fU 
                                                 & (((IData)(this->__PVT__result_buffer_man) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     ? 
                                                    ((IData)(this->__PVT__result_buffer_man) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
                                                     - (IData)(this->__PVT__result_buffer_man)))))));
}

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_11_12__276(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_11_12__276\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_11_12_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_11_12_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_11_12_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_11_12_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_11_12_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_11_12_io_in_ver_r_exp)));
    this->__PVT__fpmult__DOT___io_out_result_man_T_7 
        = ((0x1fU < (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T))
            ? 0x1fU : (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T));
    this->__PVT__fpmult__DOT___io_out_result_exp_T_5 
        = ((0xffU < (IData)(this->__PVT__fpmult__DOT__exp_addition))
            ? 0xffU : (IData)(this->__PVT__fpmult__DOT__exp_addition));
    this->__PVT__fpadder__DOT___exp_diff_T = ((0xffU 
                                               & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                              > (IData)(this->__PVT__result_buffer_exp));
    this->__PVT__fpadder__DOT__exp_diff = (0xffU & 
                                           (((0xffU 
                                              & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                             > (IData)(this->__PVT__result_buffer_exp))
                                             ? ((IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5) 
                                                - (IData)(this->__PVT__result_buffer_exp))
                                             : ((IData)(this->__PVT__result_buffer_exp) 
                                                - (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5))));
    this->__PVT__fpadder_io_out_result_exp = (0xffU 
                                              & ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                                  ? (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)
                                                  : (IData)(this->__PVT__result_buffer_exp)));
    if ((4U >= (IData)(this->__PVT__fpadder__DOT__exp_diff))) {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 
            = (0x1fU & ((IData)(this->__PVT__result_buffer_man) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 
            = (0x1fU & ((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
    } else {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__fpadder__DOT___io_out_result_sign_T_3 
        = (((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
            > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT___io_out_result_sign_T_6 
        = (((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
            > (IData)(this->__PVT__result_buffer_man))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT__addition = (0x3fU & 
                                           ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                             ? (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((0x1fU 
                                                  & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                 : 
                                                (0x1fU 
                                                 & (((0x1fU 
                                                      & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     ? 
                                                    ((IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1) 
                                                     - (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)))))
                                             : (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((IData)(this->__PVT__result_buffer_man) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                 : 
                                                (0x1fU 
                                                 & (((IData)(this->__PVT__result_buffer_man) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     ? 
                                                    ((IData)(this->__PVT__result_buffer_man) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
                                                     - (IData)(this->__PVT__result_buffer_man)))))));
}

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_11_13__275(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_11_13__275\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_11_13_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_11_13_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_11_13_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_11_13_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_11_13_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_11_13_io_in_ver_r_exp)));
    this->__PVT__fpmult__DOT___io_out_result_man_T_7 
        = ((0x1fU < (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T))
            ? 0x1fU : (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T));
    this->__PVT__fpmult__DOT___io_out_result_exp_T_5 
        = ((0xffU < (IData)(this->__PVT__fpmult__DOT__exp_addition))
            ? 0xffU : (IData)(this->__PVT__fpmult__DOT__exp_addition));
    this->__PVT__fpadder__DOT___exp_diff_T = ((0xffU 
                                               & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                              > (IData)(this->__PVT__result_buffer_exp));
    this->__PVT__fpadder__DOT__exp_diff = (0xffU & 
                                           (((0xffU 
                                              & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                             > (IData)(this->__PVT__result_buffer_exp))
                                             ? ((IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5) 
                                                - (IData)(this->__PVT__result_buffer_exp))
                                             : ((IData)(this->__PVT__result_buffer_exp) 
                                                - (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5))));
    this->__PVT__fpadder_io_out_result_exp = (0xffU 
                                              & ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                                  ? (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)
                                                  : (IData)(this->__PVT__result_buffer_exp)));
    if ((4U >= (IData)(this->__PVT__fpadder__DOT__exp_diff))) {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 
            = (0x1fU & ((IData)(this->__PVT__result_buffer_man) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 
            = (0x1fU & ((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
    } else {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__fpadder__DOT___io_out_result_sign_T_3 
        = (((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
            > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT___io_out_result_sign_T_6 
        = (((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
            > (IData)(this->__PVT__result_buffer_man))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT__addition = (0x3fU & 
                                           ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                             ? (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((0x1fU 
                                                  & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                 : 
                                                (0x1fU 
                                                 & (((0x1fU 
                                                      & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     ? 
                                                    ((IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1) 
                                                     - (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)))))
                                             : (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((IData)(this->__PVT__result_buffer_man) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                 : 
                                                (0x1fU 
                                                 & (((IData)(this->__PVT__result_buffer_man) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     ? 
                                                    ((IData)(this->__PVT__result_buffer_man) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
                                                     - (IData)(this->__PVT__result_buffer_man)))))));
}

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_11_14__274(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_11_14__274\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_11_14_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_11_14_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_11_14_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_11_14_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_11_14_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_11_14_io_in_ver_r_exp)));
    this->__PVT__fpmult__DOT___io_out_result_man_T_7 
        = ((0x1fU < (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T))
            ? 0x1fU : (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T));
    this->__PVT__fpmult__DOT___io_out_result_exp_T_5 
        = ((0xffU < (IData)(this->__PVT__fpmult__DOT__exp_addition))
            ? 0xffU : (IData)(this->__PVT__fpmult__DOT__exp_addition));
    this->__PVT__fpadder__DOT___exp_diff_T = ((0xffU 
                                               & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                              > (IData)(this->__PVT__result_buffer_exp));
    this->__PVT__fpadder__DOT__exp_diff = (0xffU & 
                                           (((0xffU 
                                              & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                             > (IData)(this->__PVT__result_buffer_exp))
                                             ? ((IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5) 
                                                - (IData)(this->__PVT__result_buffer_exp))
                                             : ((IData)(this->__PVT__result_buffer_exp) 
                                                - (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5))));
    this->__PVT__fpadder_io_out_result_exp = (0xffU 
                                              & ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                                  ? (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)
                                                  : (IData)(this->__PVT__result_buffer_exp)));
    if ((4U >= (IData)(this->__PVT__fpadder__DOT__exp_diff))) {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 
            = (0x1fU & ((IData)(this->__PVT__result_buffer_man) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 
            = (0x1fU & ((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
    } else {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__fpadder__DOT___io_out_result_sign_T_3 
        = (((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
            > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT___io_out_result_sign_T_6 
        = (((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
            > (IData)(this->__PVT__result_buffer_man))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT__addition = (0x3fU & 
                                           ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                             ? (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((0x1fU 
                                                  & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                 : 
                                                (0x1fU 
                                                 & (((0x1fU 
                                                      & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     ? 
                                                    ((IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1) 
                                                     - (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)))))
                                             : (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((IData)(this->__PVT__result_buffer_man) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                 : 
                                                (0x1fU 
                                                 & (((IData)(this->__PVT__result_buffer_man) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     ? 
                                                    ((IData)(this->__PVT__result_buffer_man) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
                                                     - (IData)(this->__PVT__result_buffer_man)))))));
}

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_11_15__273(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_11_15__273\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_11_15_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_11_15_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_11_15_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_11_15_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_11_15_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_11_15_io_in_ver_r_exp)));
    this->__PVT__fpmult__DOT___io_out_result_man_T_7 
        = ((0x1fU < (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T))
            ? 0x1fU : (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T));
    this->__PVT__fpmult__DOT___io_out_result_exp_T_5 
        = ((0xffU < (IData)(this->__PVT__fpmult__DOT__exp_addition))
            ? 0xffU : (IData)(this->__PVT__fpmult__DOT__exp_addition));
    this->__PVT__fpadder__DOT___exp_diff_T = ((0xffU 
                                               & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                              > (IData)(this->__PVT__result_buffer_exp));
    this->__PVT__fpadder__DOT__exp_diff = (0xffU & 
                                           (((0xffU 
                                              & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                             > (IData)(this->__PVT__result_buffer_exp))
                                             ? ((IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5) 
                                                - (IData)(this->__PVT__result_buffer_exp))
                                             : ((IData)(this->__PVT__result_buffer_exp) 
                                                - (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5))));
    this->__PVT__fpadder_io_out_result_exp = (0xffU 
                                              & ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                                  ? (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)
                                                  : (IData)(this->__PVT__result_buffer_exp)));
    if ((4U >= (IData)(this->__PVT__fpadder__DOT__exp_diff))) {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 
            = (0x1fU & ((IData)(this->__PVT__result_buffer_man) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 
            = (0x1fU & ((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
    } else {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__fpadder__DOT___io_out_result_sign_T_3 
        = (((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
            > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT___io_out_result_sign_T_6 
        = (((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
            > (IData)(this->__PVT__result_buffer_man))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT__addition = (0x3fU & 
                                           ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                             ? (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((0x1fU 
                                                  & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                 : 
                                                (0x1fU 
                                                 & (((0x1fU 
                                                      & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     ? 
                                                    ((IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1) 
                                                     - (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)))))
                                             : (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((IData)(this->__PVT__result_buffer_man) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                 : 
                                                (0x1fU 
                                                 & (((IData)(this->__PVT__result_buffer_man) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     ? 
                                                    ((IData)(this->__PVT__result_buffer_man) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
                                                     - (IData)(this->__PVT__result_buffer_man)))))));
}

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_12_0__506(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_12_0__506\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_12_0_io_in_hor_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_12_0_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_12_0_io_in_hor_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_12_0_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_12_0_io_in_hor_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_12_0_io_in_ver_r_exp)));
    this->__PVT__fpmult__DOT___io_out_result_man_T_7 
        = ((0x1fU < (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T))
            ? 0x1fU : (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T));
    this->__PVT__fpmult__DOT___io_out_result_exp_T_5 
        = ((0xffU < (IData)(this->__PVT__fpmult__DOT__exp_addition))
            ? 0xffU : (IData)(this->__PVT__fpmult__DOT__exp_addition));
    this->__PVT__fpadder__DOT___exp_diff_T = ((0xffU 
                                               & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                              > (IData)(this->__PVT__result_buffer_exp));
    this->__PVT__fpadder__DOT__exp_diff = (0xffU & 
                                           (((0xffU 
                                              & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                             > (IData)(this->__PVT__result_buffer_exp))
                                             ? ((IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5) 
                                                - (IData)(this->__PVT__result_buffer_exp))
                                             : ((IData)(this->__PVT__result_buffer_exp) 
                                                - (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5))));
    this->__PVT__fpadder_io_out_result_exp = (0xffU 
                                              & ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                                  ? (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)
                                                  : (IData)(this->__PVT__result_buffer_exp)));
    if ((4U >= (IData)(this->__PVT__fpadder__DOT__exp_diff))) {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 
            = (0x1fU & ((IData)(this->__PVT__result_buffer_man) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 
            = (0x1fU & ((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
    } else {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__fpadder__DOT___io_out_result_sign_T_3 
        = (((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
            > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT___io_out_result_sign_T_6 
        = (((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
            > (IData)(this->__PVT__result_buffer_man))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT__addition = (0x3fU & 
                                           ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                             ? (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((0x1fU 
                                                  & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                 : 
                                                (0x1fU 
                                                 & (((0x1fU 
                                                      & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     ? 
                                                    ((IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1) 
                                                     - (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)))))
                                             : (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((IData)(this->__PVT__result_buffer_man) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                 : 
                                                (0x1fU 
                                                 & (((IData)(this->__PVT__result_buffer_man) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     ? 
                                                    ((IData)(this->__PVT__result_buffer_man) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
                                                     - (IData)(this->__PVT__result_buffer_man)))))));
}

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_12_1__505(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_12_1__505\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_12_1_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_12_1_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_12_1_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_12_1_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_12_1_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_12_1_io_in_ver_r_exp)));
    this->__PVT__fpmult__DOT___io_out_result_man_T_7 
        = ((0x1fU < (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T))
            ? 0x1fU : (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T));
    this->__PVT__fpmult__DOT___io_out_result_exp_T_5 
        = ((0xffU < (IData)(this->__PVT__fpmult__DOT__exp_addition))
            ? 0xffU : (IData)(this->__PVT__fpmult__DOT__exp_addition));
    this->__PVT__fpadder__DOT___exp_diff_T = ((0xffU 
                                               & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                              > (IData)(this->__PVT__result_buffer_exp));
    this->__PVT__fpadder__DOT__exp_diff = (0xffU & 
                                           (((0xffU 
                                              & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                             > (IData)(this->__PVT__result_buffer_exp))
                                             ? ((IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5) 
                                                - (IData)(this->__PVT__result_buffer_exp))
                                             : ((IData)(this->__PVT__result_buffer_exp) 
                                                - (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5))));
    this->__PVT__fpadder_io_out_result_exp = (0xffU 
                                              & ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                                  ? (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)
                                                  : (IData)(this->__PVT__result_buffer_exp)));
    if ((4U >= (IData)(this->__PVT__fpadder__DOT__exp_diff))) {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 
            = (0x1fU & ((IData)(this->__PVT__result_buffer_man) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 
            = (0x1fU & ((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
    } else {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__fpadder__DOT___io_out_result_sign_T_3 
        = (((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
            > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT___io_out_result_sign_T_6 
        = (((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
            > (IData)(this->__PVT__result_buffer_man))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT__addition = (0x3fU & 
                                           ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                             ? (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((0x1fU 
                                                  & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                 : 
                                                (0x1fU 
                                                 & (((0x1fU 
                                                      & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     ? 
                                                    ((IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1) 
                                                     - (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)))))
                                             : (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((IData)(this->__PVT__result_buffer_man) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                 : 
                                                (0x1fU 
                                                 & (((IData)(this->__PVT__result_buffer_man) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     ? 
                                                    ((IData)(this->__PVT__result_buffer_man) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
                                                     - (IData)(this->__PVT__result_buffer_man)))))));
}

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_12_2__451(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_12_2__451\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_12_2_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_12_2_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_12_2_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_12_2_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_12_2_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_12_2_io_in_ver_r_exp)));
    this->__PVT__fpmult__DOT___io_out_result_man_T_7 
        = ((0x1fU < (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T))
            ? 0x1fU : (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T));
    this->__PVT__fpmult__DOT___io_out_result_exp_T_5 
        = ((0xffU < (IData)(this->__PVT__fpmult__DOT__exp_addition))
            ? 0xffU : (IData)(this->__PVT__fpmult__DOT__exp_addition));
    this->__PVT__fpadder__DOT___exp_diff_T = ((0xffU 
                                               & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                              > (IData)(this->__PVT__result_buffer_exp));
    this->__PVT__fpadder__DOT__exp_diff = (0xffU & 
                                           (((0xffU 
                                              & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                             > (IData)(this->__PVT__result_buffer_exp))
                                             ? ((IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5) 
                                                - (IData)(this->__PVT__result_buffer_exp))
                                             : ((IData)(this->__PVT__result_buffer_exp) 
                                                - (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5))));
    this->__PVT__fpadder_io_out_result_exp = (0xffU 
                                              & ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                                  ? (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)
                                                  : (IData)(this->__PVT__result_buffer_exp)));
    if ((4U >= (IData)(this->__PVT__fpadder__DOT__exp_diff))) {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 
            = (0x1fU & ((IData)(this->__PVT__result_buffer_man) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 
            = (0x1fU & ((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
    } else {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__fpadder__DOT___io_out_result_sign_T_3 
        = (((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
            > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT___io_out_result_sign_T_6 
        = (((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
            > (IData)(this->__PVT__result_buffer_man))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT__addition = (0x3fU & 
                                           ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                             ? (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((0x1fU 
                                                  & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                 : 
                                                (0x1fU 
                                                 & (((0x1fU 
                                                      & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     ? 
                                                    ((IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1) 
                                                     - (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)))))
                                             : (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((IData)(this->__PVT__result_buffer_man) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                 : 
                                                (0x1fU 
                                                 & (((IData)(this->__PVT__result_buffer_man) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     ? 
                                                    ((IData)(this->__PVT__result_buffer_man) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
                                                     - (IData)(this->__PVT__result_buffer_man)))))));
}

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_12_3__425(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_12_3__425\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_12_3_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_12_3_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_12_3_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_12_3_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_12_3_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_12_3_io_in_ver_r_exp)));
    this->__PVT__fpmult__DOT___io_out_result_man_T_7 
        = ((0x1fU < (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T))
            ? 0x1fU : (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T));
    this->__PVT__fpmult__DOT___io_out_result_exp_T_5 
        = ((0xffU < (IData)(this->__PVT__fpmult__DOT__exp_addition))
            ? 0xffU : (IData)(this->__PVT__fpmult__DOT__exp_addition));
    this->__PVT__fpadder__DOT___exp_diff_T = ((0xffU 
                                               & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                              > (IData)(this->__PVT__result_buffer_exp));
    this->__PVT__fpadder__DOT__exp_diff = (0xffU & 
                                           (((0xffU 
                                              & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                             > (IData)(this->__PVT__result_buffer_exp))
                                             ? ((IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5) 
                                                - (IData)(this->__PVT__result_buffer_exp))
                                             : ((IData)(this->__PVT__result_buffer_exp) 
                                                - (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5))));
    this->__PVT__fpadder_io_out_result_exp = (0xffU 
                                              & ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                                  ? (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)
                                                  : (IData)(this->__PVT__result_buffer_exp)));
    if ((4U >= (IData)(this->__PVT__fpadder__DOT__exp_diff))) {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 
            = (0x1fU & ((IData)(this->__PVT__result_buffer_man) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 
            = (0x1fU & ((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
    } else {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__fpadder__DOT___io_out_result_sign_T_3 
        = (((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
            > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT___io_out_result_sign_T_6 
        = (((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
            > (IData)(this->__PVT__result_buffer_man))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT__addition = (0x3fU & 
                                           ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                             ? (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((0x1fU 
                                                  & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                 : 
                                                (0x1fU 
                                                 & (((0x1fU 
                                                      & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     ? 
                                                    ((IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1) 
                                                     - (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)))))
                                             : (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((IData)(this->__PVT__result_buffer_man) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                 : 
                                                (0x1fU 
                                                 & (((IData)(this->__PVT__result_buffer_man) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     ? 
                                                    ((IData)(this->__PVT__result_buffer_man) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
                                                     - (IData)(this->__PVT__result_buffer_man)))))));
}

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_12_4__400(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_12_4__400\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_12_4_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_12_4_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_12_4_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_12_4_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_12_4_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_12_4_io_in_ver_r_exp)));
    this->__PVT__fpmult__DOT___io_out_result_man_T_7 
        = ((0x1fU < (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T))
            ? 0x1fU : (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T));
    this->__PVT__fpmult__DOT___io_out_result_exp_T_5 
        = ((0xffU < (IData)(this->__PVT__fpmult__DOT__exp_addition))
            ? 0xffU : (IData)(this->__PVT__fpmult__DOT__exp_addition));
    this->__PVT__fpadder__DOT___exp_diff_T = ((0xffU 
                                               & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                              > (IData)(this->__PVT__result_buffer_exp));
    this->__PVT__fpadder__DOT__exp_diff = (0xffU & 
                                           (((0xffU 
                                              & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                             > (IData)(this->__PVT__result_buffer_exp))
                                             ? ((IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5) 
                                                - (IData)(this->__PVT__result_buffer_exp))
                                             : ((IData)(this->__PVT__result_buffer_exp) 
                                                - (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5))));
    this->__PVT__fpadder_io_out_result_exp = (0xffU 
                                              & ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                                  ? (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)
                                                  : (IData)(this->__PVT__result_buffer_exp)));
    if ((4U >= (IData)(this->__PVT__fpadder__DOT__exp_diff))) {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 
            = (0x1fU & ((IData)(this->__PVT__result_buffer_man) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 
            = (0x1fU & ((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
    } else {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__fpadder__DOT___io_out_result_sign_T_3 
        = (((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
            > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT___io_out_result_sign_T_6 
        = (((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
            > (IData)(this->__PVT__result_buffer_man))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT__addition = (0x3fU & 
                                           ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                             ? (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((0x1fU 
                                                  & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                 : 
                                                (0x1fU 
                                                 & (((0x1fU 
                                                      & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     ? 
                                                    ((IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1) 
                                                     - (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)))))
                                             : (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((IData)(this->__PVT__result_buffer_man) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                 : 
                                                (0x1fU 
                                                 & (((IData)(this->__PVT__result_buffer_man) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     ? 
                                                    ((IData)(this->__PVT__result_buffer_man) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
                                                     - (IData)(this->__PVT__result_buffer_man)))))));
}

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_12_5__377(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_12_5__377\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_12_5_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_12_5_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_12_5_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_12_5_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_12_5_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_12_5_io_in_ver_r_exp)));
    this->__PVT__fpmult__DOT___io_out_result_man_T_7 
        = ((0x1fU < (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T))
            ? 0x1fU : (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T));
    this->__PVT__fpmult__DOT___io_out_result_exp_T_5 
        = ((0xffU < (IData)(this->__PVT__fpmult__DOT__exp_addition))
            ? 0xffU : (IData)(this->__PVT__fpmult__DOT__exp_addition));
    this->__PVT__fpadder__DOT___exp_diff_T = ((0xffU 
                                               & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                              > (IData)(this->__PVT__result_buffer_exp));
    this->__PVT__fpadder__DOT__exp_diff = (0xffU & 
                                           (((0xffU 
                                              & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                             > (IData)(this->__PVT__result_buffer_exp))
                                             ? ((IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5) 
                                                - (IData)(this->__PVT__result_buffer_exp))
                                             : ((IData)(this->__PVT__result_buffer_exp) 
                                                - (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5))));
    this->__PVT__fpadder_io_out_result_exp = (0xffU 
                                              & ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                                  ? (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)
                                                  : (IData)(this->__PVT__result_buffer_exp)));
    if ((4U >= (IData)(this->__PVT__fpadder__DOT__exp_diff))) {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 
            = (0x1fU & ((IData)(this->__PVT__result_buffer_man) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 
            = (0x1fU & ((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
    } else {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__fpadder__DOT___io_out_result_sign_T_3 
        = (((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
            > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT___io_out_result_sign_T_6 
        = (((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
            > (IData)(this->__PVT__result_buffer_man))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT__addition = (0x3fU & 
                                           ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                             ? (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((0x1fU 
                                                  & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                 : 
                                                (0x1fU 
                                                 & (((0x1fU 
                                                      & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     ? 
                                                    ((IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1) 
                                                     - (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)))))
                                             : (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((IData)(this->__PVT__result_buffer_man) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                 : 
                                                (0x1fU 
                                                 & (((IData)(this->__PVT__result_buffer_man) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     ? 
                                                    ((IData)(this->__PVT__result_buffer_man) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
                                                     - (IData)(this->__PVT__result_buffer_man)))))));
}

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_12_6__356(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_12_6__356\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_12_6_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_12_6_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_12_6_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_12_6_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_12_6_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_12_6_io_in_ver_r_exp)));
    this->__PVT__fpmult__DOT___io_out_result_man_T_7 
        = ((0x1fU < (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T))
            ? 0x1fU : (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T));
    this->__PVT__fpmult__DOT___io_out_result_exp_T_5 
        = ((0xffU < (IData)(this->__PVT__fpmult__DOT__exp_addition))
            ? 0xffU : (IData)(this->__PVT__fpmult__DOT__exp_addition));
    this->__PVT__fpadder__DOT___exp_diff_T = ((0xffU 
                                               & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                              > (IData)(this->__PVT__result_buffer_exp));
    this->__PVT__fpadder__DOT__exp_diff = (0xffU & 
                                           (((0xffU 
                                              & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                             > (IData)(this->__PVT__result_buffer_exp))
                                             ? ((IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5) 
                                                - (IData)(this->__PVT__result_buffer_exp))
                                             : ((IData)(this->__PVT__result_buffer_exp) 
                                                - (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5))));
    this->__PVT__fpadder_io_out_result_exp = (0xffU 
                                              & ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                                  ? (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)
                                                  : (IData)(this->__PVT__result_buffer_exp)));
    if ((4U >= (IData)(this->__PVT__fpadder__DOT__exp_diff))) {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 
            = (0x1fU & ((IData)(this->__PVT__result_buffer_man) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 
            = (0x1fU & ((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
    } else {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__fpadder__DOT___io_out_result_sign_T_3 
        = (((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
            > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT___io_out_result_sign_T_6 
        = (((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
            > (IData)(this->__PVT__result_buffer_man))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT__addition = (0x3fU & 
                                           ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                             ? (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((0x1fU 
                                                  & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                 : 
                                                (0x1fU 
                                                 & (((0x1fU 
                                                      & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     ? 
                                                    ((IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1) 
                                                     - (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)))))
                                             : (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((IData)(this->__PVT__result_buffer_man) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                 : 
                                                (0x1fU 
                                                 & (((IData)(this->__PVT__result_buffer_man) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     ? 
                                                    ((IData)(this->__PVT__result_buffer_man) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
                                                     - (IData)(this->__PVT__result_buffer_man)))))));
}

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_12_7__337(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_12_7__337\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_12_7_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_12_7_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_12_7_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_12_7_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_12_7_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_12_7_io_in_ver_r_exp)));
    this->__PVT__fpmult__DOT___io_out_result_man_T_7 
        = ((0x1fU < (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T))
            ? 0x1fU : (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T));
    this->__PVT__fpmult__DOT___io_out_result_exp_T_5 
        = ((0xffU < (IData)(this->__PVT__fpmult__DOT__exp_addition))
            ? 0xffU : (IData)(this->__PVT__fpmult__DOT__exp_addition));
    this->__PVT__fpadder__DOT___exp_diff_T = ((0xffU 
                                               & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                              > (IData)(this->__PVT__result_buffer_exp));
    this->__PVT__fpadder__DOT__exp_diff = (0xffU & 
                                           (((0xffU 
                                              & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                             > (IData)(this->__PVT__result_buffer_exp))
                                             ? ((IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5) 
                                                - (IData)(this->__PVT__result_buffer_exp))
                                             : ((IData)(this->__PVT__result_buffer_exp) 
                                                - (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5))));
    this->__PVT__fpadder_io_out_result_exp = (0xffU 
                                              & ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                                  ? (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)
                                                  : (IData)(this->__PVT__result_buffer_exp)));
    if ((4U >= (IData)(this->__PVT__fpadder__DOT__exp_diff))) {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 
            = (0x1fU & ((IData)(this->__PVT__result_buffer_man) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 
            = (0x1fU & ((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
    } else {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__fpadder__DOT___io_out_result_sign_T_3 
        = (((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
            > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT___io_out_result_sign_T_6 
        = (((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
            > (IData)(this->__PVT__result_buffer_man))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT__addition = (0x3fU & 
                                           ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                             ? (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((0x1fU 
                                                  & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                 : 
                                                (0x1fU 
                                                 & (((0x1fU 
                                                      & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     ? 
                                                    ((IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1) 
                                                     - (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)))))
                                             : (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((IData)(this->__PVT__result_buffer_man) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                 : 
                                                (0x1fU 
                                                 & (((IData)(this->__PVT__result_buffer_man) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     ? 
                                                    ((IData)(this->__PVT__result_buffer_man) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
                                                     - (IData)(this->__PVT__result_buffer_man)))))));
}

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_12_8__320(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_12_8__320\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_12_8_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_12_8_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_12_8_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_12_8_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_12_8_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_12_8_io_in_ver_r_exp)));
    this->__PVT__fpmult__DOT___io_out_result_man_T_7 
        = ((0x1fU < (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T))
            ? 0x1fU : (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T));
    this->__PVT__fpmult__DOT___io_out_result_exp_T_5 
        = ((0xffU < (IData)(this->__PVT__fpmult__DOT__exp_addition))
            ? 0xffU : (IData)(this->__PVT__fpmult__DOT__exp_addition));
    this->__PVT__fpadder__DOT___exp_diff_T = ((0xffU 
                                               & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                              > (IData)(this->__PVT__result_buffer_exp));
    this->__PVT__fpadder__DOT__exp_diff = (0xffU & 
                                           (((0xffU 
                                              & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                             > (IData)(this->__PVT__result_buffer_exp))
                                             ? ((IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5) 
                                                - (IData)(this->__PVT__result_buffer_exp))
                                             : ((IData)(this->__PVT__result_buffer_exp) 
                                                - (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5))));
    this->__PVT__fpadder_io_out_result_exp = (0xffU 
                                              & ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                                  ? (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)
                                                  : (IData)(this->__PVT__result_buffer_exp)));
    if ((4U >= (IData)(this->__PVT__fpadder__DOT__exp_diff))) {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 
            = (0x1fU & ((IData)(this->__PVT__result_buffer_man) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 
            = (0x1fU & ((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
    } else {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__fpadder__DOT___io_out_result_sign_T_3 
        = (((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
            > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT___io_out_result_sign_T_6 
        = (((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
            > (IData)(this->__PVT__result_buffer_man))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT__addition = (0x3fU & 
                                           ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                             ? (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((0x1fU 
                                                  & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                 : 
                                                (0x1fU 
                                                 & (((0x1fU 
                                                      & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     ? 
                                                    ((IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1) 
                                                     - (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)))))
                                             : (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((IData)(this->__PVT__result_buffer_man) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                 : 
                                                (0x1fU 
                                                 & (((IData)(this->__PVT__result_buffer_man) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     ? 
                                                    ((IData)(this->__PVT__result_buffer_man) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
                                                     - (IData)(this->__PVT__result_buffer_man)))))));
}

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_12_9__305(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_12_9__305\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_12_9_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_12_9_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_12_9_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_12_9_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_12_9_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_12_9_io_in_ver_r_exp)));
    this->__PVT__fpmult__DOT___io_out_result_man_T_7 
        = ((0x1fU < (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T))
            ? 0x1fU : (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T));
    this->__PVT__fpmult__DOT___io_out_result_exp_T_5 
        = ((0xffU < (IData)(this->__PVT__fpmult__DOT__exp_addition))
            ? 0xffU : (IData)(this->__PVT__fpmult__DOT__exp_addition));
    this->__PVT__fpadder__DOT___exp_diff_T = ((0xffU 
                                               & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                              > (IData)(this->__PVT__result_buffer_exp));
    this->__PVT__fpadder__DOT__exp_diff = (0xffU & 
                                           (((0xffU 
                                              & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                             > (IData)(this->__PVT__result_buffer_exp))
                                             ? ((IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5) 
                                                - (IData)(this->__PVT__result_buffer_exp))
                                             : ((IData)(this->__PVT__result_buffer_exp) 
                                                - (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5))));
    this->__PVT__fpadder_io_out_result_exp = (0xffU 
                                              & ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                                  ? (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)
                                                  : (IData)(this->__PVT__result_buffer_exp)));
    if ((4U >= (IData)(this->__PVT__fpadder__DOT__exp_diff))) {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 
            = (0x1fU & ((IData)(this->__PVT__result_buffer_man) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 
            = (0x1fU & ((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
    } else {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__fpadder__DOT___io_out_result_sign_T_3 
        = (((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
            > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT___io_out_result_sign_T_6 
        = (((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
            > (IData)(this->__PVT__result_buffer_man))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT__addition = (0x3fU & 
                                           ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                             ? (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((0x1fU 
                                                  & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                 : 
                                                (0x1fU 
                                                 & (((0x1fU 
                                                      & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     ? 
                                                    ((IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1) 
                                                     - (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)))))
                                             : (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((IData)(this->__PVT__result_buffer_man) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                 : 
                                                (0x1fU 
                                                 & (((IData)(this->__PVT__result_buffer_man) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     ? 
                                                    ((IData)(this->__PVT__result_buffer_man) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
                                                     - (IData)(this->__PVT__result_buffer_man)))))));
}

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_12_10__292(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_12_10__292\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_12_10_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_12_10_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_12_10_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_12_10_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_12_10_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_12_10_io_in_ver_r_exp)));
    this->__PVT__fpmult__DOT___io_out_result_man_T_7 
        = ((0x1fU < (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T))
            ? 0x1fU : (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T));
    this->__PVT__fpmult__DOT___io_out_result_exp_T_5 
        = ((0xffU < (IData)(this->__PVT__fpmult__DOT__exp_addition))
            ? 0xffU : (IData)(this->__PVT__fpmult__DOT__exp_addition));
    this->__PVT__fpadder__DOT___exp_diff_T = ((0xffU 
                                               & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                              > (IData)(this->__PVT__result_buffer_exp));
    this->__PVT__fpadder__DOT__exp_diff = (0xffU & 
                                           (((0xffU 
                                              & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                             > (IData)(this->__PVT__result_buffer_exp))
                                             ? ((IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5) 
                                                - (IData)(this->__PVT__result_buffer_exp))
                                             : ((IData)(this->__PVT__result_buffer_exp) 
                                                - (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5))));
    this->__PVT__fpadder_io_out_result_exp = (0xffU 
                                              & ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                                  ? (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)
                                                  : (IData)(this->__PVT__result_buffer_exp)));
    if ((4U >= (IData)(this->__PVT__fpadder__DOT__exp_diff))) {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 
            = (0x1fU & ((IData)(this->__PVT__result_buffer_man) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 
            = (0x1fU & ((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
    } else {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__fpadder__DOT___io_out_result_sign_T_3 
        = (((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
            > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT___io_out_result_sign_T_6 
        = (((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
            > (IData)(this->__PVT__result_buffer_man))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT__addition = (0x3fU & 
                                           ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                             ? (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((0x1fU 
                                                  & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                 : 
                                                (0x1fU 
                                                 & (((0x1fU 
                                                      & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     ? 
                                                    ((IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1) 
                                                     - (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)))))
                                             : (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((IData)(this->__PVT__result_buffer_man) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                 : 
                                                (0x1fU 
                                                 & (((IData)(this->__PVT__result_buffer_man) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     ? 
                                                    ((IData)(this->__PVT__result_buffer_man) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
                                                     - (IData)(this->__PVT__result_buffer_man)))))));
}

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_12_11__281(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_12_11__281\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_12_11_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_12_11_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_12_11_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_12_11_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_12_11_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_12_11_io_in_ver_r_exp)));
    this->__PVT__fpmult__DOT___io_out_result_man_T_7 
        = ((0x1fU < (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T))
            ? 0x1fU : (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T));
    this->__PVT__fpmult__DOT___io_out_result_exp_T_5 
        = ((0xffU < (IData)(this->__PVT__fpmult__DOT__exp_addition))
            ? 0xffU : (IData)(this->__PVT__fpmult__DOT__exp_addition));
    this->__PVT__fpadder__DOT___exp_diff_T = ((0xffU 
                                               & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                              > (IData)(this->__PVT__result_buffer_exp));
    this->__PVT__fpadder__DOT__exp_diff = (0xffU & 
                                           (((0xffU 
                                              & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                             > (IData)(this->__PVT__result_buffer_exp))
                                             ? ((IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5) 
                                                - (IData)(this->__PVT__result_buffer_exp))
                                             : ((IData)(this->__PVT__result_buffer_exp) 
                                                - (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5))));
    this->__PVT__fpadder_io_out_result_exp = (0xffU 
                                              & ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                                  ? (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)
                                                  : (IData)(this->__PVT__result_buffer_exp)));
    if ((4U >= (IData)(this->__PVT__fpadder__DOT__exp_diff))) {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 
            = (0x1fU & ((IData)(this->__PVT__result_buffer_man) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 
            = (0x1fU & ((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
    } else {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__fpadder__DOT___io_out_result_sign_T_3 
        = (((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
            > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT___io_out_result_sign_T_6 
        = (((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
            > (IData)(this->__PVT__result_buffer_man))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT__addition = (0x3fU & 
                                           ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                             ? (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((0x1fU 
                                                  & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                 : 
                                                (0x1fU 
                                                 & (((0x1fU 
                                                      & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     ? 
                                                    ((IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1) 
                                                     - (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)))))
                                             : (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((IData)(this->__PVT__result_buffer_man) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                 : 
                                                (0x1fU 
                                                 & (((IData)(this->__PVT__result_buffer_man) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     ? 
                                                    ((IData)(this->__PVT__result_buffer_man) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
                                                     - (IData)(this->__PVT__result_buffer_man)))))));
}

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_12_12__272(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_12_12__272\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_12_12_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_12_12_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_12_12_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_12_12_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_12_12_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_12_12_io_in_ver_r_exp)));
    this->__PVT__fpmult__DOT___io_out_result_man_T_7 
        = ((0x1fU < (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T))
            ? 0x1fU : (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T));
    this->__PVT__fpmult__DOT___io_out_result_exp_T_5 
        = ((0xffU < (IData)(this->__PVT__fpmult__DOT__exp_addition))
            ? 0xffU : (IData)(this->__PVT__fpmult__DOT__exp_addition));
    this->__PVT__fpadder__DOT___exp_diff_T = ((0xffU 
                                               & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                              > (IData)(this->__PVT__result_buffer_exp));
    this->__PVT__fpadder__DOT__exp_diff = (0xffU & 
                                           (((0xffU 
                                              & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                             > (IData)(this->__PVT__result_buffer_exp))
                                             ? ((IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5) 
                                                - (IData)(this->__PVT__result_buffer_exp))
                                             : ((IData)(this->__PVT__result_buffer_exp) 
                                                - (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5))));
    this->__PVT__fpadder_io_out_result_exp = (0xffU 
                                              & ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                                  ? (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)
                                                  : (IData)(this->__PVT__result_buffer_exp)));
    if ((4U >= (IData)(this->__PVT__fpadder__DOT__exp_diff))) {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 
            = (0x1fU & ((IData)(this->__PVT__result_buffer_man) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 
            = (0x1fU & ((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
    } else {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__fpadder__DOT___io_out_result_sign_T_3 
        = (((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
            > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT___io_out_result_sign_T_6 
        = (((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
            > (IData)(this->__PVT__result_buffer_man))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT__addition = (0x3fU & 
                                           ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                             ? (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((0x1fU 
                                                  & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                 : 
                                                (0x1fU 
                                                 & (((0x1fU 
                                                      & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     ? 
                                                    ((IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1) 
                                                     - (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)))))
                                             : (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((IData)(this->__PVT__result_buffer_man) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                 : 
                                                (0x1fU 
                                                 & (((IData)(this->__PVT__result_buffer_man) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     ? 
                                                    ((IData)(this->__PVT__result_buffer_man) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
                                                     - (IData)(this->__PVT__result_buffer_man)))))));
}

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_12_13__268(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_12_13__268\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_12_13_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_12_13_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_12_13_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_12_13_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_12_13_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_12_13_io_in_ver_r_exp)));
    this->__PVT__fpmult__DOT___io_out_result_man_T_7 
        = ((0x1fU < (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T))
            ? 0x1fU : (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T));
    this->__PVT__fpmult__DOT___io_out_result_exp_T_5 
        = ((0xffU < (IData)(this->__PVT__fpmult__DOT__exp_addition))
            ? 0xffU : (IData)(this->__PVT__fpmult__DOT__exp_addition));
    this->__PVT__fpadder__DOT___exp_diff_T = ((0xffU 
                                               & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                              > (IData)(this->__PVT__result_buffer_exp));
    this->__PVT__fpadder__DOT__exp_diff = (0xffU & 
                                           (((0xffU 
                                              & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                             > (IData)(this->__PVT__result_buffer_exp))
                                             ? ((IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5) 
                                                - (IData)(this->__PVT__result_buffer_exp))
                                             : ((IData)(this->__PVT__result_buffer_exp) 
                                                - (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5))));
    this->__PVT__fpadder_io_out_result_exp = (0xffU 
                                              & ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                                  ? (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)
                                                  : (IData)(this->__PVT__result_buffer_exp)));
    if ((4U >= (IData)(this->__PVT__fpadder__DOT__exp_diff))) {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 
            = (0x1fU & ((IData)(this->__PVT__result_buffer_man) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 
            = (0x1fU & ((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
    } else {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__fpadder__DOT___io_out_result_sign_T_3 
        = (((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
            > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT___io_out_result_sign_T_6 
        = (((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
            > (IData)(this->__PVT__result_buffer_man))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT__addition = (0x3fU & 
                                           ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                             ? (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((0x1fU 
                                                  & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                 : 
                                                (0x1fU 
                                                 & (((0x1fU 
                                                      & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     ? 
                                                    ((IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1) 
                                                     - (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)))))
                                             : (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((IData)(this->__PVT__result_buffer_man) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                 : 
                                                (0x1fU 
                                                 & (((IData)(this->__PVT__result_buffer_man) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     ? 
                                                    ((IData)(this->__PVT__result_buffer_man) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
                                                     - (IData)(this->__PVT__result_buffer_man)))))));
}

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_12_14__267(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_12_14__267\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_12_14_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_12_14_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_12_14_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_12_14_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_12_14_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_12_14_io_in_ver_r_exp)));
    this->__PVT__fpmult__DOT___io_out_result_man_T_7 
        = ((0x1fU < (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T))
            ? 0x1fU : (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T));
    this->__PVT__fpmult__DOT___io_out_result_exp_T_5 
        = ((0xffU < (IData)(this->__PVT__fpmult__DOT__exp_addition))
            ? 0xffU : (IData)(this->__PVT__fpmult__DOT__exp_addition));
    this->__PVT__fpadder__DOT___exp_diff_T = ((0xffU 
                                               & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                              > (IData)(this->__PVT__result_buffer_exp));
    this->__PVT__fpadder__DOT__exp_diff = (0xffU & 
                                           (((0xffU 
                                              & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                             > (IData)(this->__PVT__result_buffer_exp))
                                             ? ((IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5) 
                                                - (IData)(this->__PVT__result_buffer_exp))
                                             : ((IData)(this->__PVT__result_buffer_exp) 
                                                - (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5))));
    this->__PVT__fpadder_io_out_result_exp = (0xffU 
                                              & ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                                  ? (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)
                                                  : (IData)(this->__PVT__result_buffer_exp)));
    if ((4U >= (IData)(this->__PVT__fpadder__DOT__exp_diff))) {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 
            = (0x1fU & ((IData)(this->__PVT__result_buffer_man) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 
            = (0x1fU & ((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
    } else {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__fpadder__DOT___io_out_result_sign_T_3 
        = (((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
            > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT___io_out_result_sign_T_6 
        = (((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
            > (IData)(this->__PVT__result_buffer_man))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT__addition = (0x3fU & 
                                           ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                             ? (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((0x1fU 
                                                  & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                 : 
                                                (0x1fU 
                                                 & (((0x1fU 
                                                      & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     ? 
                                                    ((IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1) 
                                                     - (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)))))
                                             : (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((IData)(this->__PVT__result_buffer_man) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                 : 
                                                (0x1fU 
                                                 & (((IData)(this->__PVT__result_buffer_man) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     ? 
                                                    ((IData)(this->__PVT__result_buffer_man) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
                                                     - (IData)(this->__PVT__result_buffer_man)))))));
}

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_12_15__266(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_12_15__266\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_12_15_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_12_15_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_12_15_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_12_15_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_12_15_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_12_15_io_in_ver_r_exp)));
    this->__PVT__fpmult__DOT___io_out_result_man_T_7 
        = ((0x1fU < (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T))
            ? 0x1fU : (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T));
    this->__PVT__fpmult__DOT___io_out_result_exp_T_5 
        = ((0xffU < (IData)(this->__PVT__fpmult__DOT__exp_addition))
            ? 0xffU : (IData)(this->__PVT__fpmult__DOT__exp_addition));
    this->__PVT__fpadder__DOT___exp_diff_T = ((0xffU 
                                               & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                              > (IData)(this->__PVT__result_buffer_exp));
    this->__PVT__fpadder__DOT__exp_diff = (0xffU & 
                                           (((0xffU 
                                              & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                             > (IData)(this->__PVT__result_buffer_exp))
                                             ? ((IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5) 
                                                - (IData)(this->__PVT__result_buffer_exp))
                                             : ((IData)(this->__PVT__result_buffer_exp) 
                                                - (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5))));
    this->__PVT__fpadder_io_out_result_exp = (0xffU 
                                              & ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                                  ? (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)
                                                  : (IData)(this->__PVT__result_buffer_exp)));
    if ((4U >= (IData)(this->__PVT__fpadder__DOT__exp_diff))) {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 
            = (0x1fU & ((IData)(this->__PVT__result_buffer_man) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 
            = (0x1fU & ((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
    } else {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__fpadder__DOT___io_out_result_sign_T_3 
        = (((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
            > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT___io_out_result_sign_T_6 
        = (((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
            > (IData)(this->__PVT__result_buffer_man))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT__addition = (0x3fU & 
                                           ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                             ? (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((0x1fU 
                                                  & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                 : 
                                                (0x1fU 
                                                 & (((0x1fU 
                                                      & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     ? 
                                                    ((IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1) 
                                                     - (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)))))
                                             : (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((IData)(this->__PVT__result_buffer_man) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                 : 
                                                (0x1fU 
                                                 & (((IData)(this->__PVT__result_buffer_man) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     ? 
                                                    ((IData)(this->__PVT__result_buffer_man) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
                                                     - (IData)(this->__PVT__result_buffer_man)))))));
}

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_13_0__486(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_13_0__486\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_13_0_io_in_hor_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_13_0_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_13_0_io_in_hor_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_13_0_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_13_0_io_in_hor_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_13_0_io_in_ver_r_exp)));
    this->__PVT__fpmult__DOT___io_out_result_man_T_7 
        = ((0x1fU < (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T))
            ? 0x1fU : (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T));
    this->__PVT__fpmult__DOT___io_out_result_exp_T_5 
        = ((0xffU < (IData)(this->__PVT__fpmult__DOT__exp_addition))
            ? 0xffU : (IData)(this->__PVT__fpmult__DOT__exp_addition));
    this->__PVT__fpadder__DOT___exp_diff_T = ((0xffU 
                                               & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                              > (IData)(this->__PVT__result_buffer_exp));
    this->__PVT__fpadder__DOT__exp_diff = (0xffU & 
                                           (((0xffU 
                                              & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                             > (IData)(this->__PVT__result_buffer_exp))
                                             ? ((IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5) 
                                                - (IData)(this->__PVT__result_buffer_exp))
                                             : ((IData)(this->__PVT__result_buffer_exp) 
                                                - (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5))));
    this->__PVT__fpadder_io_out_result_exp = (0xffU 
                                              & ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                                  ? (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)
                                                  : (IData)(this->__PVT__result_buffer_exp)));
    if ((4U >= (IData)(this->__PVT__fpadder__DOT__exp_diff))) {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 
            = (0x1fU & ((IData)(this->__PVT__result_buffer_man) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 
            = (0x1fU & ((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
    } else {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__fpadder__DOT___io_out_result_sign_T_3 
        = (((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
            > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT___io_out_result_sign_T_6 
        = (((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
            > (IData)(this->__PVT__result_buffer_man))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT__addition = (0x3fU & 
                                           ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                             ? (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((0x1fU 
                                                  & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                 : 
                                                (0x1fU 
                                                 & (((0x1fU 
                                                      & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     ? 
                                                    ((IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1) 
                                                     - (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)))))
                                             : (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((IData)(this->__PVT__result_buffer_man) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                 : 
                                                (0x1fU 
                                                 & (((IData)(this->__PVT__result_buffer_man) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     ? 
                                                    ((IData)(this->__PVT__result_buffer_man) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
                                                     - (IData)(this->__PVT__result_buffer_man)))))));
}

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_13_1__485(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_13_1__485\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_13_1_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_13_1_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_13_1_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_13_1_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_13_1_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_13_1_io_in_ver_r_exp)));
    this->__PVT__fpmult__DOT___io_out_result_man_T_7 
        = ((0x1fU < (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T))
            ? 0x1fU : (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T));
    this->__PVT__fpmult__DOT___io_out_result_exp_T_5 
        = ((0xffU < (IData)(this->__PVT__fpmult__DOT__exp_addition))
            ? 0xffU : (IData)(this->__PVT__fpmult__DOT__exp_addition));
    this->__PVT__fpadder__DOT___exp_diff_T = ((0xffU 
                                               & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                              > (IData)(this->__PVT__result_buffer_exp));
    this->__PVT__fpadder__DOT__exp_diff = (0xffU & 
                                           (((0xffU 
                                              & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                             > (IData)(this->__PVT__result_buffer_exp))
                                             ? ((IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5) 
                                                - (IData)(this->__PVT__result_buffer_exp))
                                             : ((IData)(this->__PVT__result_buffer_exp) 
                                                - (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5))));
    this->__PVT__fpadder_io_out_result_exp = (0xffU 
                                              & ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                                  ? (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)
                                                  : (IData)(this->__PVT__result_buffer_exp)));
    if ((4U >= (IData)(this->__PVT__fpadder__DOT__exp_diff))) {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 
            = (0x1fU & ((IData)(this->__PVT__result_buffer_man) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 
            = (0x1fU & ((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
    } else {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__fpadder__DOT___io_out_result_sign_T_3 
        = (((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
            > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT___io_out_result_sign_T_6 
        = (((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
            > (IData)(this->__PVT__result_buffer_man))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT__addition = (0x3fU & 
                                           ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                             ? (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((0x1fU 
                                                  & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                 : 
                                                (0x1fU 
                                                 & (((0x1fU 
                                                      & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     ? 
                                                    ((IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1) 
                                                     - (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)))))
                                             : (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((IData)(this->__PVT__result_buffer_man) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                 : 
                                                (0x1fU 
                                                 & (((IData)(this->__PVT__result_buffer_man) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     ? 
                                                    ((IData)(this->__PVT__result_buffer_man) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
                                                     - (IData)(this->__PVT__result_buffer_man)))))));
}

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_13_2__441(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_13_2__441\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_13_2_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_13_2_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_13_2_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_13_2_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_13_2_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_13_2_io_in_ver_r_exp)));
    this->__PVT__fpmult__DOT___io_out_result_man_T_7 
        = ((0x1fU < (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T))
            ? 0x1fU : (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T));
    this->__PVT__fpmult__DOT___io_out_result_exp_T_5 
        = ((0xffU < (IData)(this->__PVT__fpmult__DOT__exp_addition))
            ? 0xffU : (IData)(this->__PVT__fpmult__DOT__exp_addition));
    this->__PVT__fpadder__DOT___exp_diff_T = ((0xffU 
                                               & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                              > (IData)(this->__PVT__result_buffer_exp));
    this->__PVT__fpadder__DOT__exp_diff = (0xffU & 
                                           (((0xffU 
                                              & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                             > (IData)(this->__PVT__result_buffer_exp))
                                             ? ((IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5) 
                                                - (IData)(this->__PVT__result_buffer_exp))
                                             : ((IData)(this->__PVT__result_buffer_exp) 
                                                - (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5))));
    this->__PVT__fpadder_io_out_result_exp = (0xffU 
                                              & ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                                  ? (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)
                                                  : (IData)(this->__PVT__result_buffer_exp)));
    if ((4U >= (IData)(this->__PVT__fpadder__DOT__exp_diff))) {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 
            = (0x1fU & ((IData)(this->__PVT__result_buffer_man) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 
            = (0x1fU & ((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
    } else {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__fpadder__DOT___io_out_result_sign_T_3 
        = (((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
            > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT___io_out_result_sign_T_6 
        = (((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
            > (IData)(this->__PVT__result_buffer_man))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT__addition = (0x3fU & 
                                           ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                             ? (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((0x1fU 
                                                  & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                 : 
                                                (0x1fU 
                                                 & (((0x1fU 
                                                      & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     ? 
                                                    ((IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1) 
                                                     - (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)))))
                                             : (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((IData)(this->__PVT__result_buffer_man) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                 : 
                                                (0x1fU 
                                                 & (((IData)(this->__PVT__result_buffer_man) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     ? 
                                                    ((IData)(this->__PVT__result_buffer_man) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
                                                     - (IData)(this->__PVT__result_buffer_man)))))));
}

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_13_3__415(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_13_3__415\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_13_3_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_13_3_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_13_3_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_13_3_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_13_3_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_13_3_io_in_ver_r_exp)));
    this->__PVT__fpmult__DOT___io_out_result_man_T_7 
        = ((0x1fU < (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T))
            ? 0x1fU : (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T));
    this->__PVT__fpmult__DOT___io_out_result_exp_T_5 
        = ((0xffU < (IData)(this->__PVT__fpmult__DOT__exp_addition))
            ? 0xffU : (IData)(this->__PVT__fpmult__DOT__exp_addition));
    this->__PVT__fpadder__DOT___exp_diff_T = ((0xffU 
                                               & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                              > (IData)(this->__PVT__result_buffer_exp));
    this->__PVT__fpadder__DOT__exp_diff = (0xffU & 
                                           (((0xffU 
                                              & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                             > (IData)(this->__PVT__result_buffer_exp))
                                             ? ((IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5) 
                                                - (IData)(this->__PVT__result_buffer_exp))
                                             : ((IData)(this->__PVT__result_buffer_exp) 
                                                - (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5))));
    this->__PVT__fpadder_io_out_result_exp = (0xffU 
                                              & ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                                  ? (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)
                                                  : (IData)(this->__PVT__result_buffer_exp)));
    if ((4U >= (IData)(this->__PVT__fpadder__DOT__exp_diff))) {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 
            = (0x1fU & ((IData)(this->__PVT__result_buffer_man) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 
            = (0x1fU & ((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
    } else {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__fpadder__DOT___io_out_result_sign_T_3 
        = (((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
            > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT___io_out_result_sign_T_6 
        = (((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
            > (IData)(this->__PVT__result_buffer_man))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT__addition = (0x3fU & 
                                           ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                             ? (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((0x1fU 
                                                  & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                 : 
                                                (0x1fU 
                                                 & (((0x1fU 
                                                      & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     ? 
                                                    ((IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1) 
                                                     - (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)))))
                                             : (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((IData)(this->__PVT__result_buffer_man) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                 : 
                                                (0x1fU 
                                                 & (((IData)(this->__PVT__result_buffer_man) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     ? 
                                                    ((IData)(this->__PVT__result_buffer_man) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
                                                     - (IData)(this->__PVT__result_buffer_man)))))));
}

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_13_4__391(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_13_4__391\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_13_4_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_13_4_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_13_4_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_13_4_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_13_4_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_13_4_io_in_ver_r_exp)));
    this->__PVT__fpmult__DOT___io_out_result_man_T_7 
        = ((0x1fU < (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T))
            ? 0x1fU : (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T));
    this->__PVT__fpmult__DOT___io_out_result_exp_T_5 
        = ((0xffU < (IData)(this->__PVT__fpmult__DOT__exp_addition))
            ? 0xffU : (IData)(this->__PVT__fpmult__DOT__exp_addition));
    this->__PVT__fpadder__DOT___exp_diff_T = ((0xffU 
                                               & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                              > (IData)(this->__PVT__result_buffer_exp));
    this->__PVT__fpadder__DOT__exp_diff = (0xffU & 
                                           (((0xffU 
                                              & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                             > (IData)(this->__PVT__result_buffer_exp))
                                             ? ((IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5) 
                                                - (IData)(this->__PVT__result_buffer_exp))
                                             : ((IData)(this->__PVT__result_buffer_exp) 
                                                - (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5))));
    this->__PVT__fpadder_io_out_result_exp = (0xffU 
                                              & ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                                  ? (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)
                                                  : (IData)(this->__PVT__result_buffer_exp)));
    if ((4U >= (IData)(this->__PVT__fpadder__DOT__exp_diff))) {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 
            = (0x1fU & ((IData)(this->__PVT__result_buffer_man) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 
            = (0x1fU & ((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
    } else {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__fpadder__DOT___io_out_result_sign_T_3 
        = (((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
            > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT___io_out_result_sign_T_6 
        = (((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
            > (IData)(this->__PVT__result_buffer_man))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT__addition = (0x3fU & 
                                           ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                             ? (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((0x1fU 
                                                  & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                 : 
                                                (0x1fU 
                                                 & (((0x1fU 
                                                      & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     ? 
                                                    ((IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1) 
                                                     - (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)))))
                                             : (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((IData)(this->__PVT__result_buffer_man) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                 : 
                                                (0x1fU 
                                                 & (((IData)(this->__PVT__result_buffer_man) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     ? 
                                                    ((IData)(this->__PVT__result_buffer_man) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
                                                     - (IData)(this->__PVT__result_buffer_man)))))));
}

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_13_5__369(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_13_5__369\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_13_5_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_13_5_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_13_5_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_13_5_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_13_5_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_13_5_io_in_ver_r_exp)));
    this->__PVT__fpmult__DOT___io_out_result_man_T_7 
        = ((0x1fU < (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T))
            ? 0x1fU : (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T));
    this->__PVT__fpmult__DOT___io_out_result_exp_T_5 
        = ((0xffU < (IData)(this->__PVT__fpmult__DOT__exp_addition))
            ? 0xffU : (IData)(this->__PVT__fpmult__DOT__exp_addition));
    this->__PVT__fpadder__DOT___exp_diff_T = ((0xffU 
                                               & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                              > (IData)(this->__PVT__result_buffer_exp));
    this->__PVT__fpadder__DOT__exp_diff = (0xffU & 
                                           (((0xffU 
                                              & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                             > (IData)(this->__PVT__result_buffer_exp))
                                             ? ((IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5) 
                                                - (IData)(this->__PVT__result_buffer_exp))
                                             : ((IData)(this->__PVT__result_buffer_exp) 
                                                - (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5))));
    this->__PVT__fpadder_io_out_result_exp = (0xffU 
                                              & ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                                  ? (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)
                                                  : (IData)(this->__PVT__result_buffer_exp)));
    if ((4U >= (IData)(this->__PVT__fpadder__DOT__exp_diff))) {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 
            = (0x1fU & ((IData)(this->__PVT__result_buffer_man) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 
            = (0x1fU & ((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
    } else {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__fpadder__DOT___io_out_result_sign_T_3 
        = (((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
            > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT___io_out_result_sign_T_6 
        = (((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
            > (IData)(this->__PVT__result_buffer_man))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT__addition = (0x3fU & 
                                           ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                             ? (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((0x1fU 
                                                  & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                 : 
                                                (0x1fU 
                                                 & (((0x1fU 
                                                      & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     ? 
                                                    ((IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1) 
                                                     - (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)))))
                                             : (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((IData)(this->__PVT__result_buffer_man) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                 : 
                                                (0x1fU 
                                                 & (((IData)(this->__PVT__result_buffer_man) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     ? 
                                                    ((IData)(this->__PVT__result_buffer_man) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
                                                     - (IData)(this->__PVT__result_buffer_man)))))));
}

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_13_6__349(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_13_6__349\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_13_6_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_13_6_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_13_6_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_13_6_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_13_6_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_13_6_io_in_ver_r_exp)));
    this->__PVT__fpmult__DOT___io_out_result_man_T_7 
        = ((0x1fU < (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T))
            ? 0x1fU : (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T));
    this->__PVT__fpmult__DOT___io_out_result_exp_T_5 
        = ((0xffU < (IData)(this->__PVT__fpmult__DOT__exp_addition))
            ? 0xffU : (IData)(this->__PVT__fpmult__DOT__exp_addition));
    this->__PVT__fpadder__DOT___exp_diff_T = ((0xffU 
                                               & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                              > (IData)(this->__PVT__result_buffer_exp));
    this->__PVT__fpadder__DOT__exp_diff = (0xffU & 
                                           (((0xffU 
                                              & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                             > (IData)(this->__PVT__result_buffer_exp))
                                             ? ((IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5) 
                                                - (IData)(this->__PVT__result_buffer_exp))
                                             : ((IData)(this->__PVT__result_buffer_exp) 
                                                - (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5))));
    this->__PVT__fpadder_io_out_result_exp = (0xffU 
                                              & ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                                  ? (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)
                                                  : (IData)(this->__PVT__result_buffer_exp)));
    if ((4U >= (IData)(this->__PVT__fpadder__DOT__exp_diff))) {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 
            = (0x1fU & ((IData)(this->__PVT__result_buffer_man) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 
            = (0x1fU & ((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
    } else {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__fpadder__DOT___io_out_result_sign_T_3 
        = (((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
            > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT___io_out_result_sign_T_6 
        = (((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
            > (IData)(this->__PVT__result_buffer_man))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT__addition = (0x3fU & 
                                           ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                             ? (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((0x1fU 
                                                  & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                 : 
                                                (0x1fU 
                                                 & (((0x1fU 
                                                      & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     ? 
                                                    ((IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1) 
                                                     - (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)))))
                                             : (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((IData)(this->__PVT__result_buffer_man) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                 : 
                                                (0x1fU 
                                                 & (((IData)(this->__PVT__result_buffer_man) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     ? 
                                                    ((IData)(this->__PVT__result_buffer_man) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
                                                     - (IData)(this->__PVT__result_buffer_man)))))));
}

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_13_7__331(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_13_7__331\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_13_7_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_13_7_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_13_7_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_13_7_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_13_7_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_13_7_io_in_ver_r_exp)));
    this->__PVT__fpmult__DOT___io_out_result_man_T_7 
        = ((0x1fU < (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T))
            ? 0x1fU : (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T));
    this->__PVT__fpmult__DOT___io_out_result_exp_T_5 
        = ((0xffU < (IData)(this->__PVT__fpmult__DOT__exp_addition))
            ? 0xffU : (IData)(this->__PVT__fpmult__DOT__exp_addition));
    this->__PVT__fpadder__DOT___exp_diff_T = ((0xffU 
                                               & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                              > (IData)(this->__PVT__result_buffer_exp));
    this->__PVT__fpadder__DOT__exp_diff = (0xffU & 
                                           (((0xffU 
                                              & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                             > (IData)(this->__PVT__result_buffer_exp))
                                             ? ((IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5) 
                                                - (IData)(this->__PVT__result_buffer_exp))
                                             : ((IData)(this->__PVT__result_buffer_exp) 
                                                - (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5))));
    this->__PVT__fpadder_io_out_result_exp = (0xffU 
                                              & ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                                  ? (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)
                                                  : (IData)(this->__PVT__result_buffer_exp)));
    if ((4U >= (IData)(this->__PVT__fpadder__DOT__exp_diff))) {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 
            = (0x1fU & ((IData)(this->__PVT__result_buffer_man) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 
            = (0x1fU & ((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
    } else {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__fpadder__DOT___io_out_result_sign_T_3 
        = (((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
            > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT___io_out_result_sign_T_6 
        = (((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
            > (IData)(this->__PVT__result_buffer_man))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT__addition = (0x3fU & 
                                           ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                             ? (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((0x1fU 
                                                  & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                 : 
                                                (0x1fU 
                                                 & (((0x1fU 
                                                      & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     ? 
                                                    ((IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1) 
                                                     - (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)))))
                                             : (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((IData)(this->__PVT__result_buffer_man) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                 : 
                                                (0x1fU 
                                                 & (((IData)(this->__PVT__result_buffer_man) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     ? 
                                                    ((IData)(this->__PVT__result_buffer_man) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
                                                     - (IData)(this->__PVT__result_buffer_man)))))));
}

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_13_8__315(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_13_8__315\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_13_8_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_13_8_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_13_8_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_13_8_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_13_8_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_13_8_io_in_ver_r_exp)));
    this->__PVT__fpmult__DOT___io_out_result_man_T_7 
        = ((0x1fU < (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T))
            ? 0x1fU : (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T));
    this->__PVT__fpmult__DOT___io_out_result_exp_T_5 
        = ((0xffU < (IData)(this->__PVT__fpmult__DOT__exp_addition))
            ? 0xffU : (IData)(this->__PVT__fpmult__DOT__exp_addition));
    this->__PVT__fpadder__DOT___exp_diff_T = ((0xffU 
                                               & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                              > (IData)(this->__PVT__result_buffer_exp));
    this->__PVT__fpadder__DOT__exp_diff = (0xffU & 
                                           (((0xffU 
                                              & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                             > (IData)(this->__PVT__result_buffer_exp))
                                             ? ((IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5) 
                                                - (IData)(this->__PVT__result_buffer_exp))
                                             : ((IData)(this->__PVT__result_buffer_exp) 
                                                - (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5))));
    this->__PVT__fpadder_io_out_result_exp = (0xffU 
                                              & ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                                  ? (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)
                                                  : (IData)(this->__PVT__result_buffer_exp)));
    if ((4U >= (IData)(this->__PVT__fpadder__DOT__exp_diff))) {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 
            = (0x1fU & ((IData)(this->__PVT__result_buffer_man) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 
            = (0x1fU & ((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
    } else {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__fpadder__DOT___io_out_result_sign_T_3 
        = (((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
            > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT___io_out_result_sign_T_6 
        = (((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
            > (IData)(this->__PVT__result_buffer_man))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT__addition = (0x3fU & 
                                           ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                             ? (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((0x1fU 
                                                  & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                 : 
                                                (0x1fU 
                                                 & (((0x1fU 
                                                      & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     ? 
                                                    ((IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1) 
                                                     - (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)))))
                                             : (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((IData)(this->__PVT__result_buffer_man) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                 : 
                                                (0x1fU 
                                                 & (((IData)(this->__PVT__result_buffer_man) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     ? 
                                                    ((IData)(this->__PVT__result_buffer_man) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
                                                     - (IData)(this->__PVT__result_buffer_man)))))));
}

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_13_9__301(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_13_9__301\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_13_9_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_13_9_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_13_9_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_13_9_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_13_9_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_13_9_io_in_ver_r_exp)));
    this->__PVT__fpmult__DOT___io_out_result_man_T_7 
        = ((0x1fU < (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T))
            ? 0x1fU : (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T));
    this->__PVT__fpmult__DOT___io_out_result_exp_T_5 
        = ((0xffU < (IData)(this->__PVT__fpmult__DOT__exp_addition))
            ? 0xffU : (IData)(this->__PVT__fpmult__DOT__exp_addition));
    this->__PVT__fpadder__DOT___exp_diff_T = ((0xffU 
                                               & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                              > (IData)(this->__PVT__result_buffer_exp));
    this->__PVT__fpadder__DOT__exp_diff = (0xffU & 
                                           (((0xffU 
                                              & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                             > (IData)(this->__PVT__result_buffer_exp))
                                             ? ((IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5) 
                                                - (IData)(this->__PVT__result_buffer_exp))
                                             : ((IData)(this->__PVT__result_buffer_exp) 
                                                - (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5))));
    this->__PVT__fpadder_io_out_result_exp = (0xffU 
                                              & ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                                  ? (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)
                                                  : (IData)(this->__PVT__result_buffer_exp)));
    if ((4U >= (IData)(this->__PVT__fpadder__DOT__exp_diff))) {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 
            = (0x1fU & ((IData)(this->__PVT__result_buffer_man) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 
            = (0x1fU & ((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
    } else {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__fpadder__DOT___io_out_result_sign_T_3 
        = (((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
            > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT___io_out_result_sign_T_6 
        = (((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
            > (IData)(this->__PVT__result_buffer_man))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT__addition = (0x3fU & 
                                           ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                             ? (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((0x1fU 
                                                  & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                 : 
                                                (0x1fU 
                                                 & (((0x1fU 
                                                      & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     ? 
                                                    ((IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1) 
                                                     - (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)))))
                                             : (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((IData)(this->__PVT__result_buffer_man) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                 : 
                                                (0x1fU 
                                                 & (((IData)(this->__PVT__result_buffer_man) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     ? 
                                                    ((IData)(this->__PVT__result_buffer_man) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
                                                     - (IData)(this->__PVT__result_buffer_man)))))));
}

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_13_10__289(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_13_10__289\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_13_10_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_13_10_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_13_10_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_13_10_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_13_10_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_13_10_io_in_ver_r_exp)));
    this->__PVT__fpmult__DOT___io_out_result_man_T_7 
        = ((0x1fU < (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T))
            ? 0x1fU : (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T));
    this->__PVT__fpmult__DOT___io_out_result_exp_T_5 
        = ((0xffU < (IData)(this->__PVT__fpmult__DOT__exp_addition))
            ? 0xffU : (IData)(this->__PVT__fpmult__DOT__exp_addition));
    this->__PVT__fpadder__DOT___exp_diff_T = ((0xffU 
                                               & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                              > (IData)(this->__PVT__result_buffer_exp));
    this->__PVT__fpadder__DOT__exp_diff = (0xffU & 
                                           (((0xffU 
                                              & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                             > (IData)(this->__PVT__result_buffer_exp))
                                             ? ((IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5) 
                                                - (IData)(this->__PVT__result_buffer_exp))
                                             : ((IData)(this->__PVT__result_buffer_exp) 
                                                - (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5))));
    this->__PVT__fpadder_io_out_result_exp = (0xffU 
                                              & ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                                  ? (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)
                                                  : (IData)(this->__PVT__result_buffer_exp)));
    if ((4U >= (IData)(this->__PVT__fpadder__DOT__exp_diff))) {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 
            = (0x1fU & ((IData)(this->__PVT__result_buffer_man) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 
            = (0x1fU & ((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
    } else {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__fpadder__DOT___io_out_result_sign_T_3 
        = (((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
            > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT___io_out_result_sign_T_6 
        = (((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
            > (IData)(this->__PVT__result_buffer_man))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT__addition = (0x3fU & 
                                           ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                             ? (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((0x1fU 
                                                  & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                 : 
                                                (0x1fU 
                                                 & (((0x1fU 
                                                      & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     ? 
                                                    ((IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1) 
                                                     - (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)))))
                                             : (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((IData)(this->__PVT__result_buffer_man) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                 : 
                                                (0x1fU 
                                                 & (((IData)(this->__PVT__result_buffer_man) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     ? 
                                                    ((IData)(this->__PVT__result_buffer_man) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
                                                     - (IData)(this->__PVT__result_buffer_man)))))));
}

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_13_11__279(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_13_11__279\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_13_11_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_13_11_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_13_11_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_13_11_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_13_11_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_13_11_io_in_ver_r_exp)));
    this->__PVT__fpmult__DOT___io_out_result_man_T_7 
        = ((0x1fU < (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T))
            ? 0x1fU : (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T));
    this->__PVT__fpmult__DOT___io_out_result_exp_T_5 
        = ((0xffU < (IData)(this->__PVT__fpmult__DOT__exp_addition))
            ? 0xffU : (IData)(this->__PVT__fpmult__DOT__exp_addition));
    this->__PVT__fpadder__DOT___exp_diff_T = ((0xffU 
                                               & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                              > (IData)(this->__PVT__result_buffer_exp));
    this->__PVT__fpadder__DOT__exp_diff = (0xffU & 
                                           (((0xffU 
                                              & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                             > (IData)(this->__PVT__result_buffer_exp))
                                             ? ((IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5) 
                                                - (IData)(this->__PVT__result_buffer_exp))
                                             : ((IData)(this->__PVT__result_buffer_exp) 
                                                - (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5))));
    this->__PVT__fpadder_io_out_result_exp = (0xffU 
                                              & ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                                  ? (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)
                                                  : (IData)(this->__PVT__result_buffer_exp)));
    if ((4U >= (IData)(this->__PVT__fpadder__DOT__exp_diff))) {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 
            = (0x1fU & ((IData)(this->__PVT__result_buffer_man) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 
            = (0x1fU & ((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
    } else {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__fpadder__DOT___io_out_result_sign_T_3 
        = (((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
            > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT___io_out_result_sign_T_6 
        = (((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
            > (IData)(this->__PVT__result_buffer_man))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT__addition = (0x3fU & 
                                           ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                             ? (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((0x1fU 
                                                  & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                 : 
                                                (0x1fU 
                                                 & (((0x1fU 
                                                      & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     ? 
                                                    ((IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1) 
                                                     - (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)))))
                                             : (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((IData)(this->__PVT__result_buffer_man) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                 : 
                                                (0x1fU 
                                                 & (((IData)(this->__PVT__result_buffer_man) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     ? 
                                                    ((IData)(this->__PVT__result_buffer_man) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
                                                     - (IData)(this->__PVT__result_buffer_man)))))));
}

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_13_12__271(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_13_12__271\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_13_12_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_13_12_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_13_12_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_13_12_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_13_12_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_13_12_io_in_ver_r_exp)));
    this->__PVT__fpmult__DOT___io_out_result_man_T_7 
        = ((0x1fU < (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T))
            ? 0x1fU : (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T));
    this->__PVT__fpmult__DOT___io_out_result_exp_T_5 
        = ((0xffU < (IData)(this->__PVT__fpmult__DOT__exp_addition))
            ? 0xffU : (IData)(this->__PVT__fpmult__DOT__exp_addition));
    this->__PVT__fpadder__DOT___exp_diff_T = ((0xffU 
                                               & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                              > (IData)(this->__PVT__result_buffer_exp));
    this->__PVT__fpadder__DOT__exp_diff = (0xffU & 
                                           (((0xffU 
                                              & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                             > (IData)(this->__PVT__result_buffer_exp))
                                             ? ((IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5) 
                                                - (IData)(this->__PVT__result_buffer_exp))
                                             : ((IData)(this->__PVT__result_buffer_exp) 
                                                - (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5))));
    this->__PVT__fpadder_io_out_result_exp = (0xffU 
                                              & ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                                  ? (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)
                                                  : (IData)(this->__PVT__result_buffer_exp)));
    if ((4U >= (IData)(this->__PVT__fpadder__DOT__exp_diff))) {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 
            = (0x1fU & ((IData)(this->__PVT__result_buffer_man) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 
            = (0x1fU & ((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
    } else {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__fpadder__DOT___io_out_result_sign_T_3 
        = (((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
            > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT___io_out_result_sign_T_6 
        = (((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
            > (IData)(this->__PVT__result_buffer_man))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT__addition = (0x3fU & 
                                           ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                             ? (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((0x1fU 
                                                  & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                 : 
                                                (0x1fU 
                                                 & (((0x1fU 
                                                      & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     ? 
                                                    ((IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1) 
                                                     - (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)))))
                                             : (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((IData)(this->__PVT__result_buffer_man) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                 : 
                                                (0x1fU 
                                                 & (((IData)(this->__PVT__result_buffer_man) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     ? 
                                                    ((IData)(this->__PVT__result_buffer_man) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
                                                     - (IData)(this->__PVT__result_buffer_man)))))));
}

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_13_13__265(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_13_13__265\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_13_13_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_13_13_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_13_13_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_13_13_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_13_13_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_13_13_io_in_ver_r_exp)));
    this->__PVT__fpmult__DOT___io_out_result_man_T_7 
        = ((0x1fU < (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T))
            ? 0x1fU : (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T));
    this->__PVT__fpmult__DOT___io_out_result_exp_T_5 
        = ((0xffU < (IData)(this->__PVT__fpmult__DOT__exp_addition))
            ? 0xffU : (IData)(this->__PVT__fpmult__DOT__exp_addition));
    this->__PVT__fpadder__DOT___exp_diff_T = ((0xffU 
                                               & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                              > (IData)(this->__PVT__result_buffer_exp));
    this->__PVT__fpadder__DOT__exp_diff = (0xffU & 
                                           (((0xffU 
                                              & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                             > (IData)(this->__PVT__result_buffer_exp))
                                             ? ((IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5) 
                                                - (IData)(this->__PVT__result_buffer_exp))
                                             : ((IData)(this->__PVT__result_buffer_exp) 
                                                - (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5))));
    this->__PVT__fpadder_io_out_result_exp = (0xffU 
                                              & ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                                  ? (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)
                                                  : (IData)(this->__PVT__result_buffer_exp)));
    if ((4U >= (IData)(this->__PVT__fpadder__DOT__exp_diff))) {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 
            = (0x1fU & ((IData)(this->__PVT__result_buffer_man) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 
            = (0x1fU & ((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
    } else {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__fpadder__DOT___io_out_result_sign_T_3 
        = (((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
            > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT___io_out_result_sign_T_6 
        = (((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
            > (IData)(this->__PVT__result_buffer_man))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT__addition = (0x3fU & 
                                           ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                             ? (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((0x1fU 
                                                  & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                 : 
                                                (0x1fU 
                                                 & (((0x1fU 
                                                      & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     ? 
                                                    ((IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1) 
                                                     - (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)))))
                                             : (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((IData)(this->__PVT__result_buffer_man) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                 : 
                                                (0x1fU 
                                                 & (((IData)(this->__PVT__result_buffer_man) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     ? 
                                                    ((IData)(this->__PVT__result_buffer_man) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
                                                     - (IData)(this->__PVT__result_buffer_man)))))));
}

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_13_14__262(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_13_14__262\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_13_14_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_13_14_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_13_14_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_13_14_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_13_14_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_13_14_io_in_ver_r_exp)));
    this->__PVT__fpmult__DOT___io_out_result_man_T_7 
        = ((0x1fU < (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T))
            ? 0x1fU : (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T));
    this->__PVT__fpmult__DOT___io_out_result_exp_T_5 
        = ((0xffU < (IData)(this->__PVT__fpmult__DOT__exp_addition))
            ? 0xffU : (IData)(this->__PVT__fpmult__DOT__exp_addition));
    this->__PVT__fpadder__DOT___exp_diff_T = ((0xffU 
                                               & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                              > (IData)(this->__PVT__result_buffer_exp));
    this->__PVT__fpadder__DOT__exp_diff = (0xffU & 
                                           (((0xffU 
                                              & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                             > (IData)(this->__PVT__result_buffer_exp))
                                             ? ((IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5) 
                                                - (IData)(this->__PVT__result_buffer_exp))
                                             : ((IData)(this->__PVT__result_buffer_exp) 
                                                - (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5))));
    this->__PVT__fpadder_io_out_result_exp = (0xffU 
                                              & ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                                  ? (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)
                                                  : (IData)(this->__PVT__result_buffer_exp)));
    if ((4U >= (IData)(this->__PVT__fpadder__DOT__exp_diff))) {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 
            = (0x1fU & ((IData)(this->__PVT__result_buffer_man) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 
            = (0x1fU & ((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
    } else {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__fpadder__DOT___io_out_result_sign_T_3 
        = (((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
            > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT___io_out_result_sign_T_6 
        = (((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
            > (IData)(this->__PVT__result_buffer_man))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT__addition = (0x3fU & 
                                           ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                             ? (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((0x1fU 
                                                  & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                 : 
                                                (0x1fU 
                                                 & (((0x1fU 
                                                      & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     ? 
                                                    ((IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1) 
                                                     - (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)))))
                                             : (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((IData)(this->__PVT__result_buffer_man) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                 : 
                                                (0x1fU 
                                                 & (((IData)(this->__PVT__result_buffer_man) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     ? 
                                                    ((IData)(this->__PVT__result_buffer_man) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
                                                     - (IData)(this->__PVT__result_buffer_man)))))));
}

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_13_15__261(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_13_15__261\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_13_15_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_13_15_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_13_15_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_13_15_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_13_15_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_13_15_io_in_ver_r_exp)));
    this->__PVT__fpmult__DOT___io_out_result_man_T_7 
        = ((0x1fU < (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T))
            ? 0x1fU : (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T));
    this->__PVT__fpmult__DOT___io_out_result_exp_T_5 
        = ((0xffU < (IData)(this->__PVT__fpmult__DOT__exp_addition))
            ? 0xffU : (IData)(this->__PVT__fpmult__DOT__exp_addition));
    this->__PVT__fpadder__DOT___exp_diff_T = ((0xffU 
                                               & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                              > (IData)(this->__PVT__result_buffer_exp));
    this->__PVT__fpadder__DOT__exp_diff = (0xffU & 
                                           (((0xffU 
                                              & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                             > (IData)(this->__PVT__result_buffer_exp))
                                             ? ((IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5) 
                                                - (IData)(this->__PVT__result_buffer_exp))
                                             : ((IData)(this->__PVT__result_buffer_exp) 
                                                - (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5))));
    this->__PVT__fpadder_io_out_result_exp = (0xffU 
                                              & ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                                  ? (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)
                                                  : (IData)(this->__PVT__result_buffer_exp)));
    if ((4U >= (IData)(this->__PVT__fpadder__DOT__exp_diff))) {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 
            = (0x1fU & ((IData)(this->__PVT__result_buffer_man) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 
            = (0x1fU & ((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
    } else {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__fpadder__DOT___io_out_result_sign_T_3 
        = (((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
            > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT___io_out_result_sign_T_6 
        = (((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
            > (IData)(this->__PVT__result_buffer_man))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT__addition = (0x3fU & 
                                           ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                             ? (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((0x1fU 
                                                  & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                 : 
                                                (0x1fU 
                                                 & (((0x1fU 
                                                      & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     ? 
                                                    ((IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1) 
                                                     - (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)))))
                                             : (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((IData)(this->__PVT__result_buffer_man) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                 : 
                                                (0x1fU 
                                                 & (((IData)(this->__PVT__result_buffer_man) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     ? 
                                                    ((IData)(this->__PVT__result_buffer_man) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
                                                     - (IData)(this->__PVT__result_buffer_man)))))));
}

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_14_0__484(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_14_0__484\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_14_0_io_in_hor_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_14_0_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_14_0_io_in_hor_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_14_0_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_14_0_io_in_hor_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_14_0_io_in_ver_r_exp)));
    this->__PVT__fpmult__DOT___io_out_result_man_T_7 
        = ((0x1fU < (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T))
            ? 0x1fU : (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T));
    this->__PVT__fpmult__DOT___io_out_result_exp_T_5 
        = ((0xffU < (IData)(this->__PVT__fpmult__DOT__exp_addition))
            ? 0xffU : (IData)(this->__PVT__fpmult__DOT__exp_addition));
    this->__PVT__fpadder__DOT___exp_diff_T = ((0xffU 
                                               & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                              > (IData)(this->__PVT__result_buffer_exp));
    this->__PVT__fpadder__DOT__exp_diff = (0xffU & 
                                           (((0xffU 
                                              & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                             > (IData)(this->__PVT__result_buffer_exp))
                                             ? ((IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5) 
                                                - (IData)(this->__PVT__result_buffer_exp))
                                             : ((IData)(this->__PVT__result_buffer_exp) 
                                                - (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5))));
    this->__PVT__fpadder_io_out_result_exp = (0xffU 
                                              & ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                                  ? (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)
                                                  : (IData)(this->__PVT__result_buffer_exp)));
    if ((4U >= (IData)(this->__PVT__fpadder__DOT__exp_diff))) {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 
            = (0x1fU & ((IData)(this->__PVT__result_buffer_man) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 
            = (0x1fU & ((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
    } else {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__fpadder__DOT___io_out_result_sign_T_3 
        = (((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
            > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT___io_out_result_sign_T_6 
        = (((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
            > (IData)(this->__PVT__result_buffer_man))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT__addition = (0x3fU & 
                                           ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                             ? (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((0x1fU 
                                                  & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                 : 
                                                (0x1fU 
                                                 & (((0x1fU 
                                                      & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     ? 
                                                    ((IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1) 
                                                     - (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)))))
                                             : (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((IData)(this->__PVT__result_buffer_man) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                 : 
                                                (0x1fU 
                                                 & (((IData)(this->__PVT__result_buffer_man) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     ? 
                                                    ((IData)(this->__PVT__result_buffer_man) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
                                                     - (IData)(this->__PVT__result_buffer_man)))))));
}

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_14_1__483(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_14_1__483\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_14_1_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_14_1_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_14_1_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_14_1_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_14_1_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_14_1_io_in_ver_r_exp)));
    this->__PVT__fpmult__DOT___io_out_result_man_T_7 
        = ((0x1fU < (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T))
            ? 0x1fU : (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T));
    this->__PVT__fpmult__DOT___io_out_result_exp_T_5 
        = ((0xffU < (IData)(this->__PVT__fpmult__DOT__exp_addition))
            ? 0xffU : (IData)(this->__PVT__fpmult__DOT__exp_addition));
    this->__PVT__fpadder__DOT___exp_diff_T = ((0xffU 
                                               & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                              > (IData)(this->__PVT__result_buffer_exp));
    this->__PVT__fpadder__DOT__exp_diff = (0xffU & 
                                           (((0xffU 
                                              & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                             > (IData)(this->__PVT__result_buffer_exp))
                                             ? ((IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5) 
                                                - (IData)(this->__PVT__result_buffer_exp))
                                             : ((IData)(this->__PVT__result_buffer_exp) 
                                                - (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5))));
    this->__PVT__fpadder_io_out_result_exp = (0xffU 
                                              & ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                                  ? (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)
                                                  : (IData)(this->__PVT__result_buffer_exp)));
    if ((4U >= (IData)(this->__PVT__fpadder__DOT__exp_diff))) {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 
            = (0x1fU & ((IData)(this->__PVT__result_buffer_man) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 
            = (0x1fU & ((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
    } else {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__fpadder__DOT___io_out_result_sign_T_3 
        = (((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
            > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT___io_out_result_sign_T_6 
        = (((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
            > (IData)(this->__PVT__result_buffer_man))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT__addition = (0x3fU & 
                                           ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                             ? (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((0x1fU 
                                                  & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                 : 
                                                (0x1fU 
                                                 & (((0x1fU 
                                                      & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     ? 
                                                    ((IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1) 
                                                     - (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)))))
                                             : (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((IData)(this->__PVT__result_buffer_man) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                 : 
                                                (0x1fU 
                                                 & (((IData)(this->__PVT__result_buffer_man) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     ? 
                                                    ((IData)(this->__PVT__result_buffer_man) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
                                                     - (IData)(this->__PVT__result_buffer_man)))))));
}

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_14_2__440(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_14_2__440\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_14_2_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_14_2_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_14_2_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_14_2_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_14_2_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_14_2_io_in_ver_r_exp)));
    this->__PVT__fpmult__DOT___io_out_result_man_T_7 
        = ((0x1fU < (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T))
            ? 0x1fU : (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T));
    this->__PVT__fpmult__DOT___io_out_result_exp_T_5 
        = ((0xffU < (IData)(this->__PVT__fpmult__DOT__exp_addition))
            ? 0xffU : (IData)(this->__PVT__fpmult__DOT__exp_addition));
    this->__PVT__fpadder__DOT___exp_diff_T = ((0xffU 
                                               & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                              > (IData)(this->__PVT__result_buffer_exp));
    this->__PVT__fpadder__DOT__exp_diff = (0xffU & 
                                           (((0xffU 
                                              & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                             > (IData)(this->__PVT__result_buffer_exp))
                                             ? ((IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5) 
                                                - (IData)(this->__PVT__result_buffer_exp))
                                             : ((IData)(this->__PVT__result_buffer_exp) 
                                                - (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5))));
    this->__PVT__fpadder_io_out_result_exp = (0xffU 
                                              & ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                                  ? (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)
                                                  : (IData)(this->__PVT__result_buffer_exp)));
    if ((4U >= (IData)(this->__PVT__fpadder__DOT__exp_diff))) {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 
            = (0x1fU & ((IData)(this->__PVT__result_buffer_man) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 
            = (0x1fU & ((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
    } else {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__fpadder__DOT___io_out_result_sign_T_3 
        = (((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
            > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT___io_out_result_sign_T_6 
        = (((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
            > (IData)(this->__PVT__result_buffer_man))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT__addition = (0x3fU & 
                                           ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                             ? (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((0x1fU 
                                                  & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                 : 
                                                (0x1fU 
                                                 & (((0x1fU 
                                                      & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     ? 
                                                    ((IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1) 
                                                     - (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)))))
                                             : (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((IData)(this->__PVT__result_buffer_man) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                 : 
                                                (0x1fU 
                                                 & (((IData)(this->__PVT__result_buffer_man) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     ? 
                                                    ((IData)(this->__PVT__result_buffer_man) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
                                                     - (IData)(this->__PVT__result_buffer_man)))))));
}

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_14_3__414(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_14_3__414\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_14_3_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_14_3_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_14_3_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_14_3_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_14_3_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_14_3_io_in_ver_r_exp)));
    this->__PVT__fpmult__DOT___io_out_result_man_T_7 
        = ((0x1fU < (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T))
            ? 0x1fU : (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T));
    this->__PVT__fpmult__DOT___io_out_result_exp_T_5 
        = ((0xffU < (IData)(this->__PVT__fpmult__DOT__exp_addition))
            ? 0xffU : (IData)(this->__PVT__fpmult__DOT__exp_addition));
    this->__PVT__fpadder__DOT___exp_diff_T = ((0xffU 
                                               & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                              > (IData)(this->__PVT__result_buffer_exp));
    this->__PVT__fpadder__DOT__exp_diff = (0xffU & 
                                           (((0xffU 
                                              & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                             > (IData)(this->__PVT__result_buffer_exp))
                                             ? ((IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5) 
                                                - (IData)(this->__PVT__result_buffer_exp))
                                             : ((IData)(this->__PVT__result_buffer_exp) 
                                                - (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5))));
    this->__PVT__fpadder_io_out_result_exp = (0xffU 
                                              & ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                                  ? (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)
                                                  : (IData)(this->__PVT__result_buffer_exp)));
    if ((4U >= (IData)(this->__PVT__fpadder__DOT__exp_diff))) {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 
            = (0x1fU & ((IData)(this->__PVT__result_buffer_man) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 
            = (0x1fU & ((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
    } else {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__fpadder__DOT___io_out_result_sign_T_3 
        = (((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
            > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT___io_out_result_sign_T_6 
        = (((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
            > (IData)(this->__PVT__result_buffer_man))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT__addition = (0x3fU & 
                                           ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                             ? (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((0x1fU 
                                                  & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                 : 
                                                (0x1fU 
                                                 & (((0x1fU 
                                                      & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     ? 
                                                    ((IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1) 
                                                     - (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)))))
                                             : (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((IData)(this->__PVT__result_buffer_man) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                 : 
                                                (0x1fU 
                                                 & (((IData)(this->__PVT__result_buffer_man) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     ? 
                                                    ((IData)(this->__PVT__result_buffer_man) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
                                                     - (IData)(this->__PVT__result_buffer_man)))))));
}

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_14_4__390(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_14_4__390\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_14_4_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_14_4_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_14_4_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_14_4_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_14_4_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_14_4_io_in_ver_r_exp)));
    this->__PVT__fpmult__DOT___io_out_result_man_T_7 
        = ((0x1fU < (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T))
            ? 0x1fU : (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T));
    this->__PVT__fpmult__DOT___io_out_result_exp_T_5 
        = ((0xffU < (IData)(this->__PVT__fpmult__DOT__exp_addition))
            ? 0xffU : (IData)(this->__PVT__fpmult__DOT__exp_addition));
    this->__PVT__fpadder__DOT___exp_diff_T = ((0xffU 
                                               & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                              > (IData)(this->__PVT__result_buffer_exp));
    this->__PVT__fpadder__DOT__exp_diff = (0xffU & 
                                           (((0xffU 
                                              & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                             > (IData)(this->__PVT__result_buffer_exp))
                                             ? ((IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5) 
                                                - (IData)(this->__PVT__result_buffer_exp))
                                             : ((IData)(this->__PVT__result_buffer_exp) 
                                                - (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5))));
    this->__PVT__fpadder_io_out_result_exp = (0xffU 
                                              & ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                                  ? (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)
                                                  : (IData)(this->__PVT__result_buffer_exp)));
    if ((4U >= (IData)(this->__PVT__fpadder__DOT__exp_diff))) {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 
            = (0x1fU & ((IData)(this->__PVT__result_buffer_man) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 
            = (0x1fU & ((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
    } else {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__fpadder__DOT___io_out_result_sign_T_3 
        = (((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
            > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT___io_out_result_sign_T_6 
        = (((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
            > (IData)(this->__PVT__result_buffer_man))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT__addition = (0x3fU & 
                                           ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                             ? (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((0x1fU 
                                                  & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                 : 
                                                (0x1fU 
                                                 & (((0x1fU 
                                                      & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     ? 
                                                    ((IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1) 
                                                     - (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)))))
                                             : (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((IData)(this->__PVT__result_buffer_man) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                 : 
                                                (0x1fU 
                                                 & (((IData)(this->__PVT__result_buffer_man) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     ? 
                                                    ((IData)(this->__PVT__result_buffer_man) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
                                                     - (IData)(this->__PVT__result_buffer_man)))))));
}

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_14_5__368(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_14_5__368\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_14_5_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_14_5_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_14_5_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_14_5_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_14_5_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_14_5_io_in_ver_r_exp)));
    this->__PVT__fpmult__DOT___io_out_result_man_T_7 
        = ((0x1fU < (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T))
            ? 0x1fU : (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T));
    this->__PVT__fpmult__DOT___io_out_result_exp_T_5 
        = ((0xffU < (IData)(this->__PVT__fpmult__DOT__exp_addition))
            ? 0xffU : (IData)(this->__PVT__fpmult__DOT__exp_addition));
    this->__PVT__fpadder__DOT___exp_diff_T = ((0xffU 
                                               & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                              > (IData)(this->__PVT__result_buffer_exp));
    this->__PVT__fpadder__DOT__exp_diff = (0xffU & 
                                           (((0xffU 
                                              & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                             > (IData)(this->__PVT__result_buffer_exp))
                                             ? ((IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5) 
                                                - (IData)(this->__PVT__result_buffer_exp))
                                             : ((IData)(this->__PVT__result_buffer_exp) 
                                                - (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5))));
    this->__PVT__fpadder_io_out_result_exp = (0xffU 
                                              & ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                                  ? (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)
                                                  : (IData)(this->__PVT__result_buffer_exp)));
    if ((4U >= (IData)(this->__PVT__fpadder__DOT__exp_diff))) {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 
            = (0x1fU & ((IData)(this->__PVT__result_buffer_man) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 
            = (0x1fU & ((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
    } else {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__fpadder__DOT___io_out_result_sign_T_3 
        = (((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
            > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT___io_out_result_sign_T_6 
        = (((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
            > (IData)(this->__PVT__result_buffer_man))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT__addition = (0x3fU & 
                                           ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                             ? (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((0x1fU 
                                                  & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                 : 
                                                (0x1fU 
                                                 & (((0x1fU 
                                                      & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     ? 
                                                    ((IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1) 
                                                     - (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)))))
                                             : (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((IData)(this->__PVT__result_buffer_man) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                 : 
                                                (0x1fU 
                                                 & (((IData)(this->__PVT__result_buffer_man) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     ? 
                                                    ((IData)(this->__PVT__result_buffer_man) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
                                                     - (IData)(this->__PVT__result_buffer_man)))))));
}

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_14_6__348(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_14_6__348\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_14_6_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_14_6_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_14_6_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_14_6_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_14_6_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_14_6_io_in_ver_r_exp)));
    this->__PVT__fpmult__DOT___io_out_result_man_T_7 
        = ((0x1fU < (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T))
            ? 0x1fU : (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T));
    this->__PVT__fpmult__DOT___io_out_result_exp_T_5 
        = ((0xffU < (IData)(this->__PVT__fpmult__DOT__exp_addition))
            ? 0xffU : (IData)(this->__PVT__fpmult__DOT__exp_addition));
    this->__PVT__fpadder__DOT___exp_diff_T = ((0xffU 
                                               & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                              > (IData)(this->__PVT__result_buffer_exp));
    this->__PVT__fpadder__DOT__exp_diff = (0xffU & 
                                           (((0xffU 
                                              & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                             > (IData)(this->__PVT__result_buffer_exp))
                                             ? ((IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5) 
                                                - (IData)(this->__PVT__result_buffer_exp))
                                             : ((IData)(this->__PVT__result_buffer_exp) 
                                                - (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5))));
    this->__PVT__fpadder_io_out_result_exp = (0xffU 
                                              & ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                                  ? (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)
                                                  : (IData)(this->__PVT__result_buffer_exp)));
    if ((4U >= (IData)(this->__PVT__fpadder__DOT__exp_diff))) {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 
            = (0x1fU & ((IData)(this->__PVT__result_buffer_man) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 
            = (0x1fU & ((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
    } else {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__fpadder__DOT___io_out_result_sign_T_3 
        = (((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
            > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT___io_out_result_sign_T_6 
        = (((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
            > (IData)(this->__PVT__result_buffer_man))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT__addition = (0x3fU & 
                                           ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                             ? (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((0x1fU 
                                                  & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                 : 
                                                (0x1fU 
                                                 & (((0x1fU 
                                                      & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     ? 
                                                    ((IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1) 
                                                     - (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)))))
                                             : (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((IData)(this->__PVT__result_buffer_man) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                 : 
                                                (0x1fU 
                                                 & (((IData)(this->__PVT__result_buffer_man) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     ? 
                                                    ((IData)(this->__PVT__result_buffer_man) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
                                                     - (IData)(this->__PVT__result_buffer_man)))))));
}

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_14_7__330(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_14_7__330\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_14_7_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_14_7_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_14_7_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_14_7_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_14_7_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_14_7_io_in_ver_r_exp)));
    this->__PVT__fpmult__DOT___io_out_result_man_T_7 
        = ((0x1fU < (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T))
            ? 0x1fU : (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T));
    this->__PVT__fpmult__DOT___io_out_result_exp_T_5 
        = ((0xffU < (IData)(this->__PVT__fpmult__DOT__exp_addition))
            ? 0xffU : (IData)(this->__PVT__fpmult__DOT__exp_addition));
    this->__PVT__fpadder__DOT___exp_diff_T = ((0xffU 
                                               & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                              > (IData)(this->__PVT__result_buffer_exp));
    this->__PVT__fpadder__DOT__exp_diff = (0xffU & 
                                           (((0xffU 
                                              & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                             > (IData)(this->__PVT__result_buffer_exp))
                                             ? ((IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5) 
                                                - (IData)(this->__PVT__result_buffer_exp))
                                             : ((IData)(this->__PVT__result_buffer_exp) 
                                                - (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5))));
    this->__PVT__fpadder_io_out_result_exp = (0xffU 
                                              & ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                                  ? (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)
                                                  : (IData)(this->__PVT__result_buffer_exp)));
    if ((4U >= (IData)(this->__PVT__fpadder__DOT__exp_diff))) {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 
            = (0x1fU & ((IData)(this->__PVT__result_buffer_man) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 
            = (0x1fU & ((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
    } else {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__fpadder__DOT___io_out_result_sign_T_3 
        = (((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
            > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT___io_out_result_sign_T_6 
        = (((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
            > (IData)(this->__PVT__result_buffer_man))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT__addition = (0x3fU & 
                                           ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                             ? (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((0x1fU 
                                                  & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                 : 
                                                (0x1fU 
                                                 & (((0x1fU 
                                                      & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     ? 
                                                    ((IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1) 
                                                     - (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)))))
                                             : (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((IData)(this->__PVT__result_buffer_man) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                 : 
                                                (0x1fU 
                                                 & (((IData)(this->__PVT__result_buffer_man) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     ? 
                                                    ((IData)(this->__PVT__result_buffer_man) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
                                                     - (IData)(this->__PVT__result_buffer_man)))))));
}

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_14_8__314(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_14_8__314\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_14_8_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_14_8_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_14_8_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_14_8_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_14_8_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_14_8_io_in_ver_r_exp)));
    this->__PVT__fpmult__DOT___io_out_result_man_T_7 
        = ((0x1fU < (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T))
            ? 0x1fU : (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T));
    this->__PVT__fpmult__DOT___io_out_result_exp_T_5 
        = ((0xffU < (IData)(this->__PVT__fpmult__DOT__exp_addition))
            ? 0xffU : (IData)(this->__PVT__fpmult__DOT__exp_addition));
    this->__PVT__fpadder__DOT___exp_diff_T = ((0xffU 
                                               & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                              > (IData)(this->__PVT__result_buffer_exp));
    this->__PVT__fpadder__DOT__exp_diff = (0xffU & 
                                           (((0xffU 
                                              & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                             > (IData)(this->__PVT__result_buffer_exp))
                                             ? ((IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5) 
                                                - (IData)(this->__PVT__result_buffer_exp))
                                             : ((IData)(this->__PVT__result_buffer_exp) 
                                                - (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5))));
    this->__PVT__fpadder_io_out_result_exp = (0xffU 
                                              & ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                                  ? (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)
                                                  : (IData)(this->__PVT__result_buffer_exp)));
    if ((4U >= (IData)(this->__PVT__fpadder__DOT__exp_diff))) {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 
            = (0x1fU & ((IData)(this->__PVT__result_buffer_man) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 
            = (0x1fU & ((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
    } else {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__fpadder__DOT___io_out_result_sign_T_3 
        = (((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
            > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT___io_out_result_sign_T_6 
        = (((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
            > (IData)(this->__PVT__result_buffer_man))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT__addition = (0x3fU & 
                                           ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                             ? (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((0x1fU 
                                                  & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                 : 
                                                (0x1fU 
                                                 & (((0x1fU 
                                                      & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     ? 
                                                    ((IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1) 
                                                     - (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)))))
                                             : (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((IData)(this->__PVT__result_buffer_man) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                 : 
                                                (0x1fU 
                                                 & (((IData)(this->__PVT__result_buffer_man) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     ? 
                                                    ((IData)(this->__PVT__result_buffer_man) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
                                                     - (IData)(this->__PVT__result_buffer_man)))))));
}

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_14_9__300(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_14_9__300\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_14_9_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_14_9_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_14_9_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_14_9_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_14_9_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_14_9_io_in_ver_r_exp)));
    this->__PVT__fpmult__DOT___io_out_result_man_T_7 
        = ((0x1fU < (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T))
            ? 0x1fU : (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T));
    this->__PVT__fpmult__DOT___io_out_result_exp_T_5 
        = ((0xffU < (IData)(this->__PVT__fpmult__DOT__exp_addition))
            ? 0xffU : (IData)(this->__PVT__fpmult__DOT__exp_addition));
    this->__PVT__fpadder__DOT___exp_diff_T = ((0xffU 
                                               & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                              > (IData)(this->__PVT__result_buffer_exp));
    this->__PVT__fpadder__DOT__exp_diff = (0xffU & 
                                           (((0xffU 
                                              & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                             > (IData)(this->__PVT__result_buffer_exp))
                                             ? ((IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5) 
                                                - (IData)(this->__PVT__result_buffer_exp))
                                             : ((IData)(this->__PVT__result_buffer_exp) 
                                                - (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5))));
    this->__PVT__fpadder_io_out_result_exp = (0xffU 
                                              & ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                                  ? (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)
                                                  : (IData)(this->__PVT__result_buffer_exp)));
    if ((4U >= (IData)(this->__PVT__fpadder__DOT__exp_diff))) {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 
            = (0x1fU & ((IData)(this->__PVT__result_buffer_man) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 
            = (0x1fU & ((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
    } else {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__fpadder__DOT___io_out_result_sign_T_3 
        = (((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
            > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT___io_out_result_sign_T_6 
        = (((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
            > (IData)(this->__PVT__result_buffer_man))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT__addition = (0x3fU & 
                                           ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                             ? (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((0x1fU 
                                                  & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                 : 
                                                (0x1fU 
                                                 & (((0x1fU 
                                                      & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     ? 
                                                    ((IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1) 
                                                     - (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)))))
                                             : (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((IData)(this->__PVT__result_buffer_man) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                 : 
                                                (0x1fU 
                                                 & (((IData)(this->__PVT__result_buffer_man) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     ? 
                                                    ((IData)(this->__PVT__result_buffer_man) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
                                                     - (IData)(this->__PVT__result_buffer_man)))))));
}

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_14_10__288(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_14_10__288\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_14_10_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_14_10_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_14_10_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_14_10_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_14_10_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_14_10_io_in_ver_r_exp)));
    this->__PVT__fpmult__DOT___io_out_result_man_T_7 
        = ((0x1fU < (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T))
            ? 0x1fU : (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T));
    this->__PVT__fpmult__DOT___io_out_result_exp_T_5 
        = ((0xffU < (IData)(this->__PVT__fpmult__DOT__exp_addition))
            ? 0xffU : (IData)(this->__PVT__fpmult__DOT__exp_addition));
    this->__PVT__fpadder__DOT___exp_diff_T = ((0xffU 
                                               & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                              > (IData)(this->__PVT__result_buffer_exp));
    this->__PVT__fpadder__DOT__exp_diff = (0xffU & 
                                           (((0xffU 
                                              & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                             > (IData)(this->__PVT__result_buffer_exp))
                                             ? ((IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5) 
                                                - (IData)(this->__PVT__result_buffer_exp))
                                             : ((IData)(this->__PVT__result_buffer_exp) 
                                                - (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5))));
    this->__PVT__fpadder_io_out_result_exp = (0xffU 
                                              & ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                                  ? (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)
                                                  : (IData)(this->__PVT__result_buffer_exp)));
    if ((4U >= (IData)(this->__PVT__fpadder__DOT__exp_diff))) {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 
            = (0x1fU & ((IData)(this->__PVT__result_buffer_man) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 
            = (0x1fU & ((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
    } else {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__fpadder__DOT___io_out_result_sign_T_3 
        = (((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
            > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT___io_out_result_sign_T_6 
        = (((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
            > (IData)(this->__PVT__result_buffer_man))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT__addition = (0x3fU & 
                                           ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                             ? (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((0x1fU 
                                                  & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                 : 
                                                (0x1fU 
                                                 & (((0x1fU 
                                                      & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     ? 
                                                    ((IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1) 
                                                     - (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)))))
                                             : (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((IData)(this->__PVT__result_buffer_man) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                 : 
                                                (0x1fU 
                                                 & (((IData)(this->__PVT__result_buffer_man) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     ? 
                                                    ((IData)(this->__PVT__result_buffer_man) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
                                                     - (IData)(this->__PVT__result_buffer_man)))))));
}

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_14_11__278(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_14_11__278\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_14_11_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_14_11_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_14_11_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_14_11_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_14_11_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_14_11_io_in_ver_r_exp)));
    this->__PVT__fpmult__DOT___io_out_result_man_T_7 
        = ((0x1fU < (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T))
            ? 0x1fU : (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T));
    this->__PVT__fpmult__DOT___io_out_result_exp_T_5 
        = ((0xffU < (IData)(this->__PVT__fpmult__DOT__exp_addition))
            ? 0xffU : (IData)(this->__PVT__fpmult__DOT__exp_addition));
    this->__PVT__fpadder__DOT___exp_diff_T = ((0xffU 
                                               & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                              > (IData)(this->__PVT__result_buffer_exp));
    this->__PVT__fpadder__DOT__exp_diff = (0xffU & 
                                           (((0xffU 
                                              & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                             > (IData)(this->__PVT__result_buffer_exp))
                                             ? ((IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5) 
                                                - (IData)(this->__PVT__result_buffer_exp))
                                             : ((IData)(this->__PVT__result_buffer_exp) 
                                                - (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5))));
    this->__PVT__fpadder_io_out_result_exp = (0xffU 
                                              & ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                                  ? (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)
                                                  : (IData)(this->__PVT__result_buffer_exp)));
    if ((4U >= (IData)(this->__PVT__fpadder__DOT__exp_diff))) {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 
            = (0x1fU & ((IData)(this->__PVT__result_buffer_man) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 
            = (0x1fU & ((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
    } else {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__fpadder__DOT___io_out_result_sign_T_3 
        = (((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
            > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT___io_out_result_sign_T_6 
        = (((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
            > (IData)(this->__PVT__result_buffer_man))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT__addition = (0x3fU & 
                                           ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                             ? (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((0x1fU 
                                                  & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                 : 
                                                (0x1fU 
                                                 & (((0x1fU 
                                                      & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     ? 
                                                    ((IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1) 
                                                     - (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)))))
                                             : (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((IData)(this->__PVT__result_buffer_man) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                 : 
                                                (0x1fU 
                                                 & (((IData)(this->__PVT__result_buffer_man) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     ? 
                                                    ((IData)(this->__PVT__result_buffer_man) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
                                                     - (IData)(this->__PVT__result_buffer_man)))))));
}

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_14_12__270(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_14_12__270\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_14_12_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_14_12_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_14_12_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_14_12_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_14_12_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_14_12_io_in_ver_r_exp)));
    this->__PVT__fpmult__DOT___io_out_result_man_T_7 
        = ((0x1fU < (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T))
            ? 0x1fU : (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T));
    this->__PVT__fpmult__DOT___io_out_result_exp_T_5 
        = ((0xffU < (IData)(this->__PVT__fpmult__DOT__exp_addition))
            ? 0xffU : (IData)(this->__PVT__fpmult__DOT__exp_addition));
    this->__PVT__fpadder__DOT___exp_diff_T = ((0xffU 
                                               & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                              > (IData)(this->__PVT__result_buffer_exp));
    this->__PVT__fpadder__DOT__exp_diff = (0xffU & 
                                           (((0xffU 
                                              & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                             > (IData)(this->__PVT__result_buffer_exp))
                                             ? ((IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5) 
                                                - (IData)(this->__PVT__result_buffer_exp))
                                             : ((IData)(this->__PVT__result_buffer_exp) 
                                                - (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5))));
    this->__PVT__fpadder_io_out_result_exp = (0xffU 
                                              & ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                                  ? (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)
                                                  : (IData)(this->__PVT__result_buffer_exp)));
    if ((4U >= (IData)(this->__PVT__fpadder__DOT__exp_diff))) {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 
            = (0x1fU & ((IData)(this->__PVT__result_buffer_man) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 
            = (0x1fU & ((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
    } else {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__fpadder__DOT___io_out_result_sign_T_3 
        = (((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
            > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT___io_out_result_sign_T_6 
        = (((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
            > (IData)(this->__PVT__result_buffer_man))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT__addition = (0x3fU & 
                                           ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                             ? (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((0x1fU 
                                                  & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                 : 
                                                (0x1fU 
                                                 & (((0x1fU 
                                                      & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     ? 
                                                    ((IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1) 
                                                     - (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)))))
                                             : (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((IData)(this->__PVT__result_buffer_man) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                 : 
                                                (0x1fU 
                                                 & (((IData)(this->__PVT__result_buffer_man) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     ? 
                                                    ((IData)(this->__PVT__result_buffer_man) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
                                                     - (IData)(this->__PVT__result_buffer_man)))))));
}

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_14_13__264(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_14_13__264\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_14_13_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_14_13_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_14_13_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_14_13_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_14_13_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_14_13_io_in_ver_r_exp)));
    this->__PVT__fpmult__DOT___io_out_result_man_T_7 
        = ((0x1fU < (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T))
            ? 0x1fU : (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T));
    this->__PVT__fpmult__DOT___io_out_result_exp_T_5 
        = ((0xffU < (IData)(this->__PVT__fpmult__DOT__exp_addition))
            ? 0xffU : (IData)(this->__PVT__fpmult__DOT__exp_addition));
    this->__PVT__fpadder__DOT___exp_diff_T = ((0xffU 
                                               & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                              > (IData)(this->__PVT__result_buffer_exp));
    this->__PVT__fpadder__DOT__exp_diff = (0xffU & 
                                           (((0xffU 
                                              & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                             > (IData)(this->__PVT__result_buffer_exp))
                                             ? ((IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5) 
                                                - (IData)(this->__PVT__result_buffer_exp))
                                             : ((IData)(this->__PVT__result_buffer_exp) 
                                                - (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5))));
    this->__PVT__fpadder_io_out_result_exp = (0xffU 
                                              & ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                                  ? (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)
                                                  : (IData)(this->__PVT__result_buffer_exp)));
    if ((4U >= (IData)(this->__PVT__fpadder__DOT__exp_diff))) {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 
            = (0x1fU & ((IData)(this->__PVT__result_buffer_man) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 
            = (0x1fU & ((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
    } else {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__fpadder__DOT___io_out_result_sign_T_3 
        = (((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
            > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT___io_out_result_sign_T_6 
        = (((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
            > (IData)(this->__PVT__result_buffer_man))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT__addition = (0x3fU & 
                                           ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                             ? (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((0x1fU 
                                                  & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                 : 
                                                (0x1fU 
                                                 & (((0x1fU 
                                                      & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     ? 
                                                    ((IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1) 
                                                     - (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)))))
                                             : (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((IData)(this->__PVT__result_buffer_man) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                 : 
                                                (0x1fU 
                                                 & (((IData)(this->__PVT__result_buffer_man) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     ? 
                                                    ((IData)(this->__PVT__result_buffer_man) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
                                                     - (IData)(this->__PVT__result_buffer_man)))))));
}

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_14_14__260(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_14_14__260\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_14_14_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_14_14_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_14_14_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_14_14_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_14_14_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_14_14_io_in_ver_r_exp)));
    this->__PVT__fpmult__DOT___io_out_result_man_T_7 
        = ((0x1fU < (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T))
            ? 0x1fU : (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T));
    this->__PVT__fpmult__DOT___io_out_result_exp_T_5 
        = ((0xffU < (IData)(this->__PVT__fpmult__DOT__exp_addition))
            ? 0xffU : (IData)(this->__PVT__fpmult__DOT__exp_addition));
    this->__PVT__fpadder__DOT___exp_diff_T = ((0xffU 
                                               & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                              > (IData)(this->__PVT__result_buffer_exp));
    this->__PVT__fpadder__DOT__exp_diff = (0xffU & 
                                           (((0xffU 
                                              & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                             > (IData)(this->__PVT__result_buffer_exp))
                                             ? ((IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5) 
                                                - (IData)(this->__PVT__result_buffer_exp))
                                             : ((IData)(this->__PVT__result_buffer_exp) 
                                                - (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5))));
    this->__PVT__fpadder_io_out_result_exp = (0xffU 
                                              & ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                                  ? (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)
                                                  : (IData)(this->__PVT__result_buffer_exp)));
    if ((4U >= (IData)(this->__PVT__fpadder__DOT__exp_diff))) {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 
            = (0x1fU & ((IData)(this->__PVT__result_buffer_man) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 
            = (0x1fU & ((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
    } else {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__fpadder__DOT___io_out_result_sign_T_3 
        = (((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
            > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT___io_out_result_sign_T_6 
        = (((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
            > (IData)(this->__PVT__result_buffer_man))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT__addition = (0x3fU & 
                                           ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                             ? (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((0x1fU 
                                                  & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                 : 
                                                (0x1fU 
                                                 & (((0x1fU 
                                                      & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     ? 
                                                    ((IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1) 
                                                     - (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)))))
                                             : (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((IData)(this->__PVT__result_buffer_man) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                 : 
                                                (0x1fU 
                                                 & (((IData)(this->__PVT__result_buffer_man) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     ? 
                                                    ((IData)(this->__PVT__result_buffer_man) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
                                                     - (IData)(this->__PVT__result_buffer_man)))))));
}

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_14_15__258(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_14_15__258\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_14_15_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_14_15_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_14_15_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_14_15_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_14_15_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_14_15_io_in_ver_r_exp)));
    this->__PVT__fpmult__DOT___io_out_result_man_T_7 
        = ((0x1fU < (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T))
            ? 0x1fU : (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T));
    this->__PVT__fpmult__DOT___io_out_result_exp_T_5 
        = ((0xffU < (IData)(this->__PVT__fpmult__DOT__exp_addition))
            ? 0xffU : (IData)(this->__PVT__fpmult__DOT__exp_addition));
    this->__PVT__fpadder__DOT___exp_diff_T = ((0xffU 
                                               & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                              > (IData)(this->__PVT__result_buffer_exp));
    this->__PVT__fpadder__DOT__exp_diff = (0xffU & 
                                           (((0xffU 
                                              & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                             > (IData)(this->__PVT__result_buffer_exp))
                                             ? ((IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5) 
                                                - (IData)(this->__PVT__result_buffer_exp))
                                             : ((IData)(this->__PVT__result_buffer_exp) 
                                                - (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5))));
    this->__PVT__fpadder_io_out_result_exp = (0xffU 
                                              & ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                                  ? (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)
                                                  : (IData)(this->__PVT__result_buffer_exp)));
    if ((4U >= (IData)(this->__PVT__fpadder__DOT__exp_diff))) {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 
            = (0x1fU & ((IData)(this->__PVT__result_buffer_man) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 
            = (0x1fU & ((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
    } else {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__fpadder__DOT___io_out_result_sign_T_3 
        = (((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
            > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT___io_out_result_sign_T_6 
        = (((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
            > (IData)(this->__PVT__result_buffer_man))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT__addition = (0x3fU & 
                                           ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                             ? (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((0x1fU 
                                                  & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                 : 
                                                (0x1fU 
                                                 & (((0x1fU 
                                                      & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     ? 
                                                    ((IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1) 
                                                     - (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)))))
                                             : (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((IData)(this->__PVT__result_buffer_man) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                 : 
                                                (0x1fU 
                                                 & (((IData)(this->__PVT__result_buffer_man) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     ? 
                                                    ((IData)(this->__PVT__result_buffer_man) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
                                                     - (IData)(this->__PVT__result_buffer_man)))))));
}

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_15_0__482(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_15_0__482\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_15_0_io_in_hor_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_15_0_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_15_0_io_in_hor_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_15_0_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_15_0_io_in_hor_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_15_0_io_in_ver_r_exp)));
    this->__PVT__fpmult__DOT___io_out_result_man_T_7 
        = ((0x1fU < (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T))
            ? 0x1fU : (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T));
    this->__PVT__fpmult__DOT___io_out_result_exp_T_5 
        = ((0xffU < (IData)(this->__PVT__fpmult__DOT__exp_addition))
            ? 0xffU : (IData)(this->__PVT__fpmult__DOT__exp_addition));
    this->__PVT__fpadder__DOT___exp_diff_T = ((0xffU 
                                               & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                              > (IData)(this->__PVT__result_buffer_exp));
    this->__PVT__fpadder__DOT__exp_diff = (0xffU & 
                                           (((0xffU 
                                              & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                             > (IData)(this->__PVT__result_buffer_exp))
                                             ? ((IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5) 
                                                - (IData)(this->__PVT__result_buffer_exp))
                                             : ((IData)(this->__PVT__result_buffer_exp) 
                                                - (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5))));
    this->__PVT__fpadder_io_out_result_exp = (0xffU 
                                              & ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                                  ? (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)
                                                  : (IData)(this->__PVT__result_buffer_exp)));
    if ((4U >= (IData)(this->__PVT__fpadder__DOT__exp_diff))) {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 
            = (0x1fU & ((IData)(this->__PVT__result_buffer_man) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 
            = (0x1fU & ((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
    } else {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__fpadder__DOT___io_out_result_sign_T_3 
        = (((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
            > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT___io_out_result_sign_T_6 
        = (((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
            > (IData)(this->__PVT__result_buffer_man))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT__addition = (0x3fU & 
                                           ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                             ? (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((0x1fU 
                                                  & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                 : 
                                                (0x1fU 
                                                 & (((0x1fU 
                                                      & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     ? 
                                                    ((IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1) 
                                                     - (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)))))
                                             : (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((IData)(this->__PVT__result_buffer_man) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                 : 
                                                (0x1fU 
                                                 & (((IData)(this->__PVT__result_buffer_man) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     ? 
                                                    ((IData)(this->__PVT__result_buffer_man) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
                                                     - (IData)(this->__PVT__result_buffer_man)))))));
}

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_15_1__481(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_15_1__481\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_15_1_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_15_1_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_15_1_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_15_1_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_15_1_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_15_1_io_in_ver_r_exp)));
    this->__PVT__fpmult__DOT___io_out_result_man_T_7 
        = ((0x1fU < (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T))
            ? 0x1fU : (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T));
    this->__PVT__fpmult__DOT___io_out_result_exp_T_5 
        = ((0xffU < (IData)(this->__PVT__fpmult__DOT__exp_addition))
            ? 0xffU : (IData)(this->__PVT__fpmult__DOT__exp_addition));
    this->__PVT__fpadder__DOT___exp_diff_T = ((0xffU 
                                               & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                              > (IData)(this->__PVT__result_buffer_exp));
    this->__PVT__fpadder__DOT__exp_diff = (0xffU & 
                                           (((0xffU 
                                              & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                             > (IData)(this->__PVT__result_buffer_exp))
                                             ? ((IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5) 
                                                - (IData)(this->__PVT__result_buffer_exp))
                                             : ((IData)(this->__PVT__result_buffer_exp) 
                                                - (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5))));
    this->__PVT__fpadder_io_out_result_exp = (0xffU 
                                              & ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                                  ? (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)
                                                  : (IData)(this->__PVT__result_buffer_exp)));
    if ((4U >= (IData)(this->__PVT__fpadder__DOT__exp_diff))) {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 
            = (0x1fU & ((IData)(this->__PVT__result_buffer_man) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 
            = (0x1fU & ((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
    } else {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__fpadder__DOT___io_out_result_sign_T_3 
        = (((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
            > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT___io_out_result_sign_T_6 
        = (((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
            > (IData)(this->__PVT__result_buffer_man))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT__addition = (0x3fU & 
                                           ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                             ? (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((0x1fU 
                                                  & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                 : 
                                                (0x1fU 
                                                 & (((0x1fU 
                                                      & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     ? 
                                                    ((IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1) 
                                                     - (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)))))
                                             : (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((IData)(this->__PVT__result_buffer_man) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                 : 
                                                (0x1fU 
                                                 & (((IData)(this->__PVT__result_buffer_man) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     ? 
                                                    ((IData)(this->__PVT__result_buffer_man) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
                                                     - (IData)(this->__PVT__result_buffer_man)))))));
}

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_15_2__439(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_15_2__439\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_15_2_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_15_2_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_15_2_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_15_2_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_15_2_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_15_2_io_in_ver_r_exp)));
    this->__PVT__fpmult__DOT___io_out_result_man_T_7 
        = ((0x1fU < (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T))
            ? 0x1fU : (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T));
    this->__PVT__fpmult__DOT___io_out_result_exp_T_5 
        = ((0xffU < (IData)(this->__PVT__fpmult__DOT__exp_addition))
            ? 0xffU : (IData)(this->__PVT__fpmult__DOT__exp_addition));
    this->__PVT__fpadder__DOT___exp_diff_T = ((0xffU 
                                               & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                              > (IData)(this->__PVT__result_buffer_exp));
    this->__PVT__fpadder__DOT__exp_diff = (0xffU & 
                                           (((0xffU 
                                              & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                             > (IData)(this->__PVT__result_buffer_exp))
                                             ? ((IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5) 
                                                - (IData)(this->__PVT__result_buffer_exp))
                                             : ((IData)(this->__PVT__result_buffer_exp) 
                                                - (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5))));
    this->__PVT__fpadder_io_out_result_exp = (0xffU 
                                              & ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                                  ? (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)
                                                  : (IData)(this->__PVT__result_buffer_exp)));
    if ((4U >= (IData)(this->__PVT__fpadder__DOT__exp_diff))) {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 
            = (0x1fU & ((IData)(this->__PVT__result_buffer_man) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 
            = (0x1fU & ((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
    } else {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__fpadder__DOT___io_out_result_sign_T_3 
        = (((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
            > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT___io_out_result_sign_T_6 
        = (((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
            > (IData)(this->__PVT__result_buffer_man))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT__addition = (0x3fU & 
                                           ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                             ? (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((0x1fU 
                                                  & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                 : 
                                                (0x1fU 
                                                 & (((0x1fU 
                                                      & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     ? 
                                                    ((IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1) 
                                                     - (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)))))
                                             : (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((IData)(this->__PVT__result_buffer_man) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                 : 
                                                (0x1fU 
                                                 & (((IData)(this->__PVT__result_buffer_man) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     ? 
                                                    ((IData)(this->__PVT__result_buffer_man) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
                                                     - (IData)(this->__PVT__result_buffer_man)))))));
}

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_15_3__413(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_15_3__413\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_15_3_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_15_3_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_15_3_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_15_3_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_15_3_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_15_3_io_in_ver_r_exp)));
    this->__PVT__fpmult__DOT___io_out_result_man_T_7 
        = ((0x1fU < (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T))
            ? 0x1fU : (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T));
    this->__PVT__fpmult__DOT___io_out_result_exp_T_5 
        = ((0xffU < (IData)(this->__PVT__fpmult__DOT__exp_addition))
            ? 0xffU : (IData)(this->__PVT__fpmult__DOT__exp_addition));
    this->__PVT__fpadder__DOT___exp_diff_T = ((0xffU 
                                               & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                              > (IData)(this->__PVT__result_buffer_exp));
    this->__PVT__fpadder__DOT__exp_diff = (0xffU & 
                                           (((0xffU 
                                              & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                             > (IData)(this->__PVT__result_buffer_exp))
                                             ? ((IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5) 
                                                - (IData)(this->__PVT__result_buffer_exp))
                                             : ((IData)(this->__PVT__result_buffer_exp) 
                                                - (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5))));
    this->__PVT__fpadder_io_out_result_exp = (0xffU 
                                              & ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                                  ? (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)
                                                  : (IData)(this->__PVT__result_buffer_exp)));
    if ((4U >= (IData)(this->__PVT__fpadder__DOT__exp_diff))) {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 
            = (0x1fU & ((IData)(this->__PVT__result_buffer_man) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 
            = (0x1fU & ((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
    } else {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__fpadder__DOT___io_out_result_sign_T_3 
        = (((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
            > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT___io_out_result_sign_T_6 
        = (((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
            > (IData)(this->__PVT__result_buffer_man))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT__addition = (0x3fU & 
                                           ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                             ? (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((0x1fU 
                                                  & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                 : 
                                                (0x1fU 
                                                 & (((0x1fU 
                                                      & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     ? 
                                                    ((IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1) 
                                                     - (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)))))
                                             : (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((IData)(this->__PVT__result_buffer_man) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                 : 
                                                (0x1fU 
                                                 & (((IData)(this->__PVT__result_buffer_man) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     ? 
                                                    ((IData)(this->__PVT__result_buffer_man) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
                                                     - (IData)(this->__PVT__result_buffer_man)))))));
}

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_15_4__389(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_15_4__389\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_15_4_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_15_4_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_15_4_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_15_4_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_15_4_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_15_4_io_in_ver_r_exp)));
    this->__PVT__fpmult__DOT___io_out_result_man_T_7 
        = ((0x1fU < (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T))
            ? 0x1fU : (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T));
    this->__PVT__fpmult__DOT___io_out_result_exp_T_5 
        = ((0xffU < (IData)(this->__PVT__fpmult__DOT__exp_addition))
            ? 0xffU : (IData)(this->__PVT__fpmult__DOT__exp_addition));
    this->__PVT__fpadder__DOT___exp_diff_T = ((0xffU 
                                               & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                              > (IData)(this->__PVT__result_buffer_exp));
    this->__PVT__fpadder__DOT__exp_diff = (0xffU & 
                                           (((0xffU 
                                              & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                             > (IData)(this->__PVT__result_buffer_exp))
                                             ? ((IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5) 
                                                - (IData)(this->__PVT__result_buffer_exp))
                                             : ((IData)(this->__PVT__result_buffer_exp) 
                                                - (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5))));
    this->__PVT__fpadder_io_out_result_exp = (0xffU 
                                              & ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                                  ? (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)
                                                  : (IData)(this->__PVT__result_buffer_exp)));
    if ((4U >= (IData)(this->__PVT__fpadder__DOT__exp_diff))) {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 
            = (0x1fU & ((IData)(this->__PVT__result_buffer_man) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 
            = (0x1fU & ((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
    } else {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__fpadder__DOT___io_out_result_sign_T_3 
        = (((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
            > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT___io_out_result_sign_T_6 
        = (((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
            > (IData)(this->__PVT__result_buffer_man))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT__addition = (0x3fU & 
                                           ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                             ? (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((0x1fU 
                                                  & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                 : 
                                                (0x1fU 
                                                 & (((0x1fU 
                                                      & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     ? 
                                                    ((IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1) 
                                                     - (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)))))
                                             : (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((IData)(this->__PVT__result_buffer_man) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                 : 
                                                (0x1fU 
                                                 & (((IData)(this->__PVT__result_buffer_man) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     ? 
                                                    ((IData)(this->__PVT__result_buffer_man) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
                                                     - (IData)(this->__PVT__result_buffer_man)))))));
}

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_15_5__367(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_15_5__367\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_15_5_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_15_5_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_15_5_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_15_5_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_15_5_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_15_5_io_in_ver_r_exp)));
    this->__PVT__fpmult__DOT___io_out_result_man_T_7 
        = ((0x1fU < (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T))
            ? 0x1fU : (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T));
    this->__PVT__fpmult__DOT___io_out_result_exp_T_5 
        = ((0xffU < (IData)(this->__PVT__fpmult__DOT__exp_addition))
            ? 0xffU : (IData)(this->__PVT__fpmult__DOT__exp_addition));
    this->__PVT__fpadder__DOT___exp_diff_T = ((0xffU 
                                               & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                              > (IData)(this->__PVT__result_buffer_exp));
    this->__PVT__fpadder__DOT__exp_diff = (0xffU & 
                                           (((0xffU 
                                              & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                             > (IData)(this->__PVT__result_buffer_exp))
                                             ? ((IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5) 
                                                - (IData)(this->__PVT__result_buffer_exp))
                                             : ((IData)(this->__PVT__result_buffer_exp) 
                                                - (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5))));
    this->__PVT__fpadder_io_out_result_exp = (0xffU 
                                              & ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                                  ? (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)
                                                  : (IData)(this->__PVT__result_buffer_exp)));
    if ((4U >= (IData)(this->__PVT__fpadder__DOT__exp_diff))) {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 
            = (0x1fU & ((IData)(this->__PVT__result_buffer_man) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 
            = (0x1fU & ((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
    } else {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__fpadder__DOT___io_out_result_sign_T_3 
        = (((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
            > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT___io_out_result_sign_T_6 
        = (((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
            > (IData)(this->__PVT__result_buffer_man))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT__addition = (0x3fU & 
                                           ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                             ? (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((0x1fU 
                                                  & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                 : 
                                                (0x1fU 
                                                 & (((0x1fU 
                                                      & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     ? 
                                                    ((IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1) 
                                                     - (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)))))
                                             : (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((IData)(this->__PVT__result_buffer_man) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                 : 
                                                (0x1fU 
                                                 & (((IData)(this->__PVT__result_buffer_man) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     ? 
                                                    ((IData)(this->__PVT__result_buffer_man) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
                                                     - (IData)(this->__PVT__result_buffer_man)))))));
}

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_15_6__347(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_15_6__347\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_15_6_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_15_6_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_15_6_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_15_6_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_15_6_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_15_6_io_in_ver_r_exp)));
    this->__PVT__fpmult__DOT___io_out_result_man_T_7 
        = ((0x1fU < (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T))
            ? 0x1fU : (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T));
    this->__PVT__fpmult__DOT___io_out_result_exp_T_5 
        = ((0xffU < (IData)(this->__PVT__fpmult__DOT__exp_addition))
            ? 0xffU : (IData)(this->__PVT__fpmult__DOT__exp_addition));
    this->__PVT__fpadder__DOT___exp_diff_T = ((0xffU 
                                               & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                              > (IData)(this->__PVT__result_buffer_exp));
    this->__PVT__fpadder__DOT__exp_diff = (0xffU & 
                                           (((0xffU 
                                              & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                             > (IData)(this->__PVT__result_buffer_exp))
                                             ? ((IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5) 
                                                - (IData)(this->__PVT__result_buffer_exp))
                                             : ((IData)(this->__PVT__result_buffer_exp) 
                                                - (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5))));
    this->__PVT__fpadder_io_out_result_exp = (0xffU 
                                              & ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                                  ? (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)
                                                  : (IData)(this->__PVT__result_buffer_exp)));
    if ((4U >= (IData)(this->__PVT__fpadder__DOT__exp_diff))) {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 
            = (0x1fU & ((IData)(this->__PVT__result_buffer_man) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 
            = (0x1fU & ((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
    } else {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__fpadder__DOT___io_out_result_sign_T_3 
        = (((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
            > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT___io_out_result_sign_T_6 
        = (((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
            > (IData)(this->__PVT__result_buffer_man))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT__addition = (0x3fU & 
                                           ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                             ? (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((0x1fU 
                                                  & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                 : 
                                                (0x1fU 
                                                 & (((0x1fU 
                                                      & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     ? 
                                                    ((IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1) 
                                                     - (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)))))
                                             : (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((IData)(this->__PVT__result_buffer_man) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                 : 
                                                (0x1fU 
                                                 & (((IData)(this->__PVT__result_buffer_man) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     ? 
                                                    ((IData)(this->__PVT__result_buffer_man) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
                                                     - (IData)(this->__PVT__result_buffer_man)))))));
}

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_15_7__329(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_15_7__329\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_15_7_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_15_7_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_15_7_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_15_7_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_15_7_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_15_7_io_in_ver_r_exp)));
    this->__PVT__fpmult__DOT___io_out_result_man_T_7 
        = ((0x1fU < (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T))
            ? 0x1fU : (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T));
    this->__PVT__fpmult__DOT___io_out_result_exp_T_5 
        = ((0xffU < (IData)(this->__PVT__fpmult__DOT__exp_addition))
            ? 0xffU : (IData)(this->__PVT__fpmult__DOT__exp_addition));
    this->__PVT__fpadder__DOT___exp_diff_T = ((0xffU 
                                               & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                              > (IData)(this->__PVT__result_buffer_exp));
    this->__PVT__fpadder__DOT__exp_diff = (0xffU & 
                                           (((0xffU 
                                              & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                             > (IData)(this->__PVT__result_buffer_exp))
                                             ? ((IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5) 
                                                - (IData)(this->__PVT__result_buffer_exp))
                                             : ((IData)(this->__PVT__result_buffer_exp) 
                                                - (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5))));
    this->__PVT__fpadder_io_out_result_exp = (0xffU 
                                              & ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                                  ? (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)
                                                  : (IData)(this->__PVT__result_buffer_exp)));
    if ((4U >= (IData)(this->__PVT__fpadder__DOT__exp_diff))) {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 
            = (0x1fU & ((IData)(this->__PVT__result_buffer_man) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 
            = (0x1fU & ((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
    } else {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__fpadder__DOT___io_out_result_sign_T_3 
        = (((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
            > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT___io_out_result_sign_T_6 
        = (((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
            > (IData)(this->__PVT__result_buffer_man))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT__addition = (0x3fU & 
                                           ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                             ? (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((0x1fU 
                                                  & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                 : 
                                                (0x1fU 
                                                 & (((0x1fU 
                                                      & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     ? 
                                                    ((IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1) 
                                                     - (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)))))
                                             : (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((IData)(this->__PVT__result_buffer_man) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                 : 
                                                (0x1fU 
                                                 & (((IData)(this->__PVT__result_buffer_man) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     ? 
                                                    ((IData)(this->__PVT__result_buffer_man) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
                                                     - (IData)(this->__PVT__result_buffer_man)))))));
}

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_15_8__313(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_15_8__313\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_15_8_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_15_8_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_15_8_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_15_8_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_15_8_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_15_8_io_in_ver_r_exp)));
    this->__PVT__fpmult__DOT___io_out_result_man_T_7 
        = ((0x1fU < (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T))
            ? 0x1fU : (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T));
    this->__PVT__fpmult__DOT___io_out_result_exp_T_5 
        = ((0xffU < (IData)(this->__PVT__fpmult__DOT__exp_addition))
            ? 0xffU : (IData)(this->__PVT__fpmult__DOT__exp_addition));
    this->__PVT__fpadder__DOT___exp_diff_T = ((0xffU 
                                               & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                              > (IData)(this->__PVT__result_buffer_exp));
    this->__PVT__fpadder__DOT__exp_diff = (0xffU & 
                                           (((0xffU 
                                              & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                             > (IData)(this->__PVT__result_buffer_exp))
                                             ? ((IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5) 
                                                - (IData)(this->__PVT__result_buffer_exp))
                                             : ((IData)(this->__PVT__result_buffer_exp) 
                                                - (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5))));
    this->__PVT__fpadder_io_out_result_exp = (0xffU 
                                              & ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                                  ? (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)
                                                  : (IData)(this->__PVT__result_buffer_exp)));
    if ((4U >= (IData)(this->__PVT__fpadder__DOT__exp_diff))) {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 
            = (0x1fU & ((IData)(this->__PVT__result_buffer_man) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 
            = (0x1fU & ((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
    } else {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__fpadder__DOT___io_out_result_sign_T_3 
        = (((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
            > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT___io_out_result_sign_T_6 
        = (((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
            > (IData)(this->__PVT__result_buffer_man))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT__addition = (0x3fU & 
                                           ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                             ? (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((0x1fU 
                                                  & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                 : 
                                                (0x1fU 
                                                 & (((0x1fU 
                                                      & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     ? 
                                                    ((IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1) 
                                                     - (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)))))
                                             : (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((IData)(this->__PVT__result_buffer_man) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                 : 
                                                (0x1fU 
                                                 & (((IData)(this->__PVT__result_buffer_man) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     ? 
                                                    ((IData)(this->__PVT__result_buffer_man) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
                                                     - (IData)(this->__PVT__result_buffer_man)))))));
}

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_15_9__299(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_15_9__299\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_15_9_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_15_9_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_15_9_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_15_9_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_15_9_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_15_9_io_in_ver_r_exp)));
    this->__PVT__fpmult__DOT___io_out_result_man_T_7 
        = ((0x1fU < (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T))
            ? 0x1fU : (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T));
    this->__PVT__fpmult__DOT___io_out_result_exp_T_5 
        = ((0xffU < (IData)(this->__PVT__fpmult__DOT__exp_addition))
            ? 0xffU : (IData)(this->__PVT__fpmult__DOT__exp_addition));
    this->__PVT__fpadder__DOT___exp_diff_T = ((0xffU 
                                               & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                              > (IData)(this->__PVT__result_buffer_exp));
    this->__PVT__fpadder__DOT__exp_diff = (0xffU & 
                                           (((0xffU 
                                              & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                             > (IData)(this->__PVT__result_buffer_exp))
                                             ? ((IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5) 
                                                - (IData)(this->__PVT__result_buffer_exp))
                                             : ((IData)(this->__PVT__result_buffer_exp) 
                                                - (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5))));
    this->__PVT__fpadder_io_out_result_exp = (0xffU 
                                              & ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                                  ? (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)
                                                  : (IData)(this->__PVT__result_buffer_exp)));
    if ((4U >= (IData)(this->__PVT__fpadder__DOT__exp_diff))) {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 
            = (0x1fU & ((IData)(this->__PVT__result_buffer_man) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 
            = (0x1fU & ((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
    } else {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__fpadder__DOT___io_out_result_sign_T_3 
        = (((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
            > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT___io_out_result_sign_T_6 
        = (((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
            > (IData)(this->__PVT__result_buffer_man))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT__addition = (0x3fU & 
                                           ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                             ? (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((0x1fU 
                                                  & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                 : 
                                                (0x1fU 
                                                 & (((0x1fU 
                                                      & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     ? 
                                                    ((IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1) 
                                                     - (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)))))
                                             : (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((IData)(this->__PVT__result_buffer_man) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                 : 
                                                (0x1fU 
                                                 & (((IData)(this->__PVT__result_buffer_man) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     ? 
                                                    ((IData)(this->__PVT__result_buffer_man) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
                                                     - (IData)(this->__PVT__result_buffer_man)))))));
}

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_15_10__287(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_15_10__287\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_15_10_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_15_10_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_15_10_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_15_10_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_15_10_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_15_10_io_in_ver_r_exp)));
    this->__PVT__fpmult__DOT___io_out_result_man_T_7 
        = ((0x1fU < (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T))
            ? 0x1fU : (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T));
    this->__PVT__fpmult__DOT___io_out_result_exp_T_5 
        = ((0xffU < (IData)(this->__PVT__fpmult__DOT__exp_addition))
            ? 0xffU : (IData)(this->__PVT__fpmult__DOT__exp_addition));
    this->__PVT__fpadder__DOT___exp_diff_T = ((0xffU 
                                               & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                              > (IData)(this->__PVT__result_buffer_exp));
    this->__PVT__fpadder__DOT__exp_diff = (0xffU & 
                                           (((0xffU 
                                              & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                             > (IData)(this->__PVT__result_buffer_exp))
                                             ? ((IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5) 
                                                - (IData)(this->__PVT__result_buffer_exp))
                                             : ((IData)(this->__PVT__result_buffer_exp) 
                                                - (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5))));
    this->__PVT__fpadder_io_out_result_exp = (0xffU 
                                              & ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                                  ? (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)
                                                  : (IData)(this->__PVT__result_buffer_exp)));
    if ((4U >= (IData)(this->__PVT__fpadder__DOT__exp_diff))) {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 
            = (0x1fU & ((IData)(this->__PVT__result_buffer_man) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 
            = (0x1fU & ((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
    } else {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__fpadder__DOT___io_out_result_sign_T_3 
        = (((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
            > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT___io_out_result_sign_T_6 
        = (((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
            > (IData)(this->__PVT__result_buffer_man))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT__addition = (0x3fU & 
                                           ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                             ? (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((0x1fU 
                                                  & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                 : 
                                                (0x1fU 
                                                 & (((0x1fU 
                                                      & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     ? 
                                                    ((IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1) 
                                                     - (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)))))
                                             : (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((IData)(this->__PVT__result_buffer_man) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                 : 
                                                (0x1fU 
                                                 & (((IData)(this->__PVT__result_buffer_man) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     ? 
                                                    ((IData)(this->__PVT__result_buffer_man) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
                                                     - (IData)(this->__PVT__result_buffer_man)))))));
}

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_15_11__277(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_15_11__277\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_15_11_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_15_11_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_15_11_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_15_11_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_15_11_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_15_11_io_in_ver_r_exp)));
    this->__PVT__fpmult__DOT___io_out_result_man_T_7 
        = ((0x1fU < (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T))
            ? 0x1fU : (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T));
    this->__PVT__fpmult__DOT___io_out_result_exp_T_5 
        = ((0xffU < (IData)(this->__PVT__fpmult__DOT__exp_addition))
            ? 0xffU : (IData)(this->__PVT__fpmult__DOT__exp_addition));
    this->__PVT__fpadder__DOT___exp_diff_T = ((0xffU 
                                               & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                              > (IData)(this->__PVT__result_buffer_exp));
    this->__PVT__fpadder__DOT__exp_diff = (0xffU & 
                                           (((0xffU 
                                              & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                             > (IData)(this->__PVT__result_buffer_exp))
                                             ? ((IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5) 
                                                - (IData)(this->__PVT__result_buffer_exp))
                                             : ((IData)(this->__PVT__result_buffer_exp) 
                                                - (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5))));
    this->__PVT__fpadder_io_out_result_exp = (0xffU 
                                              & ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                                  ? (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)
                                                  : (IData)(this->__PVT__result_buffer_exp)));
    if ((4U >= (IData)(this->__PVT__fpadder__DOT__exp_diff))) {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 
            = (0x1fU & ((IData)(this->__PVT__result_buffer_man) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 
            = (0x1fU & ((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
    } else {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__fpadder__DOT___io_out_result_sign_T_3 
        = (((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
            > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT___io_out_result_sign_T_6 
        = (((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
            > (IData)(this->__PVT__result_buffer_man))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT__addition = (0x3fU & 
                                           ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                             ? (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((0x1fU 
                                                  & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                 : 
                                                (0x1fU 
                                                 & (((0x1fU 
                                                      & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     ? 
                                                    ((IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1) 
                                                     - (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)))))
                                             : (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((IData)(this->__PVT__result_buffer_man) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                 : 
                                                (0x1fU 
                                                 & (((IData)(this->__PVT__result_buffer_man) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     ? 
                                                    ((IData)(this->__PVT__result_buffer_man) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
                                                     - (IData)(this->__PVT__result_buffer_man)))))));
}

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_15_12__269(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_15_12__269\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_15_12_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_15_12_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_15_12_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_15_12_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_15_12_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_15_12_io_in_ver_r_exp)));
    this->__PVT__fpmult__DOT___io_out_result_man_T_7 
        = ((0x1fU < (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T))
            ? 0x1fU : (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T));
    this->__PVT__fpmult__DOT___io_out_result_exp_T_5 
        = ((0xffU < (IData)(this->__PVT__fpmult__DOT__exp_addition))
            ? 0xffU : (IData)(this->__PVT__fpmult__DOT__exp_addition));
    this->__PVT__fpadder__DOT___exp_diff_T = ((0xffU 
                                               & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                              > (IData)(this->__PVT__result_buffer_exp));
    this->__PVT__fpadder__DOT__exp_diff = (0xffU & 
                                           (((0xffU 
                                              & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                             > (IData)(this->__PVT__result_buffer_exp))
                                             ? ((IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5) 
                                                - (IData)(this->__PVT__result_buffer_exp))
                                             : ((IData)(this->__PVT__result_buffer_exp) 
                                                - (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5))));
    this->__PVT__fpadder_io_out_result_exp = (0xffU 
                                              & ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                                  ? (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)
                                                  : (IData)(this->__PVT__result_buffer_exp)));
    if ((4U >= (IData)(this->__PVT__fpadder__DOT__exp_diff))) {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 
            = (0x1fU & ((IData)(this->__PVT__result_buffer_man) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 
            = (0x1fU & ((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
    } else {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__fpadder__DOT___io_out_result_sign_T_3 
        = (((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
            > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT___io_out_result_sign_T_6 
        = (((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
            > (IData)(this->__PVT__result_buffer_man))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT__addition = (0x3fU & 
                                           ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                             ? (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((0x1fU 
                                                  & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                 : 
                                                (0x1fU 
                                                 & (((0x1fU 
                                                      & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     ? 
                                                    ((IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1) 
                                                     - (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)))))
                                             : (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((IData)(this->__PVT__result_buffer_man) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                 : 
                                                (0x1fU 
                                                 & (((IData)(this->__PVT__result_buffer_man) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     ? 
                                                    ((IData)(this->__PVT__result_buffer_man) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
                                                     - (IData)(this->__PVT__result_buffer_man)))))));
}

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_15_13__263(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_15_13__263\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_15_13_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_15_13_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_15_13_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_15_13_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_15_13_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_15_13_io_in_ver_r_exp)));
    this->__PVT__fpmult__DOT___io_out_result_man_T_7 
        = ((0x1fU < (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T))
            ? 0x1fU : (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T));
    this->__PVT__fpmult__DOT___io_out_result_exp_T_5 
        = ((0xffU < (IData)(this->__PVT__fpmult__DOT__exp_addition))
            ? 0xffU : (IData)(this->__PVT__fpmult__DOT__exp_addition));
    this->__PVT__fpadder__DOT___exp_diff_T = ((0xffU 
                                               & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                              > (IData)(this->__PVT__result_buffer_exp));
    this->__PVT__fpadder__DOT__exp_diff = (0xffU & 
                                           (((0xffU 
                                              & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                             > (IData)(this->__PVT__result_buffer_exp))
                                             ? ((IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5) 
                                                - (IData)(this->__PVT__result_buffer_exp))
                                             : ((IData)(this->__PVT__result_buffer_exp) 
                                                - (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5))));
    this->__PVT__fpadder_io_out_result_exp = (0xffU 
                                              & ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                                  ? (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)
                                                  : (IData)(this->__PVT__result_buffer_exp)));
    if ((4U >= (IData)(this->__PVT__fpadder__DOT__exp_diff))) {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 
            = (0x1fU & ((IData)(this->__PVT__result_buffer_man) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 
            = (0x1fU & ((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
    } else {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__fpadder__DOT___io_out_result_sign_T_3 
        = (((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
            > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT___io_out_result_sign_T_6 
        = (((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
            > (IData)(this->__PVT__result_buffer_man))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT__addition = (0x3fU & 
                                           ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                             ? (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((0x1fU 
                                                  & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                 : 
                                                (0x1fU 
                                                 & (((0x1fU 
                                                      & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     ? 
                                                    ((IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1) 
                                                     - (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)))))
                                             : (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((IData)(this->__PVT__result_buffer_man) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                 : 
                                                (0x1fU 
                                                 & (((IData)(this->__PVT__result_buffer_man) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     ? 
                                                    ((IData)(this->__PVT__result_buffer_man) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
                                                     - (IData)(this->__PVT__result_buffer_man)))))));
}

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_15_14__259(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_15_14__259\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_15_14_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_15_14_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_15_14_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_15_14_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_15_14_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_15_14_io_in_ver_r_exp)));
    this->__PVT__fpmult__DOT___io_out_result_man_T_7 
        = ((0x1fU < (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T))
            ? 0x1fU : (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T));
    this->__PVT__fpmult__DOT___io_out_result_exp_T_5 
        = ((0xffU < (IData)(this->__PVT__fpmult__DOT__exp_addition))
            ? 0xffU : (IData)(this->__PVT__fpmult__DOT__exp_addition));
    this->__PVT__fpadder__DOT___exp_diff_T = ((0xffU 
                                               & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                              > (IData)(this->__PVT__result_buffer_exp));
    this->__PVT__fpadder__DOT__exp_diff = (0xffU & 
                                           (((0xffU 
                                              & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                             > (IData)(this->__PVT__result_buffer_exp))
                                             ? ((IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5) 
                                                - (IData)(this->__PVT__result_buffer_exp))
                                             : ((IData)(this->__PVT__result_buffer_exp) 
                                                - (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5))));
    this->__PVT__fpadder_io_out_result_exp = (0xffU 
                                              & ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                                  ? (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)
                                                  : (IData)(this->__PVT__result_buffer_exp)));
    if ((4U >= (IData)(this->__PVT__fpadder__DOT__exp_diff))) {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 
            = (0x1fU & ((IData)(this->__PVT__result_buffer_man) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 
            = (0x1fU & ((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
    } else {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__fpadder__DOT___io_out_result_sign_T_3 
        = (((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
            > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT___io_out_result_sign_T_6 
        = (((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
            > (IData)(this->__PVT__result_buffer_man))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT__addition = (0x3fU & 
                                           ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                             ? (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((0x1fU 
                                                  & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                 : 
                                                (0x1fU 
                                                 & (((0x1fU 
                                                      & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     ? 
                                                    ((IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1) 
                                                     - (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)))))
                                             : (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((IData)(this->__PVT__result_buffer_man) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                 : 
                                                (0x1fU 
                                                 & (((IData)(this->__PVT__result_buffer_man) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     ? 
                                                    ((IData)(this->__PVT__result_buffer_man) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
                                                     - (IData)(this->__PVT__result_buffer_man)))))));
}

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_15_15__257(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_15_15__257\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_15_15_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_15_15_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_15_15_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_15_15_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_15_15_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_15_15_io_in_ver_r_exp)));
    this->__PVT__fpmult__DOT___io_out_result_man_T_7 
        = ((0x1fU < (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T))
            ? 0x1fU : (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T));
    this->__PVT__fpmult__DOT___io_out_result_exp_T_5 
        = ((0xffU < (IData)(this->__PVT__fpmult__DOT__exp_addition))
            ? 0xffU : (IData)(this->__PVT__fpmult__DOT__exp_addition));
    this->__PVT__fpadder__DOT___exp_diff_T = ((0xffU 
                                               & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                              > (IData)(this->__PVT__result_buffer_exp));
    this->__PVT__fpadder__DOT__exp_diff = (0xffU & 
                                           (((0xffU 
                                              & (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)) 
                                             > (IData)(this->__PVT__result_buffer_exp))
                                             ? ((IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5) 
                                                - (IData)(this->__PVT__result_buffer_exp))
                                             : ((IData)(this->__PVT__result_buffer_exp) 
                                                - (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5))));
    this->__PVT__fpadder_io_out_result_exp = (0xffU 
                                              & ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                                  ? (IData)(this->__PVT__fpmult__DOT___io_out_result_exp_T_5)
                                                  : (IData)(this->__PVT__result_buffer_exp)));
    if ((4U >= (IData)(this->__PVT__fpadder__DOT__exp_diff))) {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 
            = (0x1fU & ((IData)(this->__PVT__result_buffer_man) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 
            = (0x1fU & ((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                        >> (IData)(this->__PVT__fpadder__DOT__exp_diff)));
    } else {
        this->__PVT__fpadder__DOT___io_out_result_sign_T_1 = 0U;
        this->__PVT__fpadder__DOT___io_out_result_sign_T_4 = 0U;
    }
    this->__PVT__fpadder__DOT___io_out_result_sign_T_3 
        = (((0x1fU & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
            > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT___io_out_result_sign_T_6 
        = (((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
            > (IData)(this->__PVT__result_buffer_man))
            ? (IData)(this->__PVT__fpmult_io_out_result_sign)
            : (IData)(this->__PVT__result_buffer_sign));
    this->__PVT__fpadder__DOT__addition = (0x3fU & 
                                           ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                             ? (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((0x1fU 
                                                  & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                 : 
                                                (0x1fU 
                                                 & (((0x1fU 
                                                      & (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     ? 
                                                    ((IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_1) 
                                                     - (IData)(this->__PVT__fpmult__DOT___io_out_result_man_T_7)))))
                                             : (((IData)(this->__PVT__fpmult_io_out_result_sign) 
                                                 == (IData)(this->__PVT__result_buffer_sign))
                                                 ? 
                                                ((IData)(this->__PVT__result_buffer_man) 
                                                 + (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                 : 
                                                (0x1fU 
                                                 & (((IData)(this->__PVT__result_buffer_man) 
                                                     > (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     ? 
                                                    ((IData)(this->__PVT__result_buffer_man) 
                                                     - (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4))
                                                     : 
                                                    ((IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_4) 
                                                     - (IData)(this->__PVT__result_buffer_man)))))));
}
