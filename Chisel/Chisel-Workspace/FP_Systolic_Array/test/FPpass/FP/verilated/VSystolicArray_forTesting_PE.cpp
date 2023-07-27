// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSystolicArray_forTesting.h for the primary calling header

#include "VSystolicArray_forTesting_PE.h"
#include "VSystolicArray_forTesting__Syms.h"

//==========

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_0_0__1(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_0_0__1\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__result_buffer_sign = ((IData)(this->__PVT__fpadder__DOT___exp_diff_T)
                                        ? (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_3)
                                        : (IData)(this->__PVT__fpadder__DOT___io_out_result_sign_T_6));
    this->__PVT__result_buffer_man = ((0x1fU < (IData)(this->__PVT__fpadder__DOT__addition))
                                       ? 0x1fU : (0x1fU 
                                                  & (IData)(this->__PVT__fpadder__DOT__addition)));
    this->__PVT__result_buffer_exp = this->__PVT__fpadder_io_out_result_exp;
}

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_0_0__512(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_0_0__512\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_0_0_io_in_hor_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_0_0_io_in_ver_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_0_0_io_in_hor_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_0_0_io_in_ver_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_0_0_io_in_hor_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_0_0_io_in_ver_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_0_1__510(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_0_1__510\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_0_1_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_0_1_io_in_ver_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_0_1_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_0_1_io_in_ver_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_0_1_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_0_1_io_in_ver_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_0_2__480(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_0_2__480\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_0_2_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_0_2_io_in_ver_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_0_2_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_0_2_io_in_ver_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_0_2_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_0_2_io_in_ver_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_0_3__478(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_0_3__478\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_0_3_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_0_3_io_in_ver_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_0_3_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_0_3_io_in_ver_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_0_3_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_0_3_io_in_ver_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_0_4__476(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_0_4__476\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_0_4_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_0_4_io_in_ver_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_0_4_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_0_4_io_in_ver_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_0_4_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_0_4_io_in_ver_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_0_5__474(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_0_5__474\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_0_5_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_0_5_io_in_ver_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_0_5_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_0_5_io_in_ver_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_0_5_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_0_5_io_in_ver_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_0_6__472(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_0_6__472\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_0_6_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_0_6_io_in_ver_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_0_6_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_0_6_io_in_ver_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_0_6_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_0_6_io_in_ver_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_0_7__470(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_0_7__470\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_0_7_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_0_7_io_in_ver_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_0_7_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_0_7_io_in_ver_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_0_7_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_0_7_io_in_ver_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_0_8__468(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_0_8__468\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_0_8_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_0_8_io_in_ver_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_0_8_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_0_8_io_in_ver_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_0_8_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_0_8_io_in_ver_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_0_9__466(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_0_9__466\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_0_9_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_0_9_io_in_ver_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_0_9_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_0_9_io_in_ver_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_0_9_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_0_9_io_in_ver_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_0_10__464(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_0_10__464\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_0_10_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_0_10_io_in_ver_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_0_10_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_0_10_io_in_ver_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_0_10_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_0_10_io_in_ver_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_0_11__462(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_0_11__462\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_0_11_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_0_11_io_in_ver_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_0_11_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_0_11_io_in_ver_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_0_11_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_0_11_io_in_ver_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_0_12__460(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_0_12__460\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_0_12_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_0_12_io_in_ver_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_0_12_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_0_12_io_in_ver_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_0_12_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_0_12_io_in_ver_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_0_13__458(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_0_13__458\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_0_13_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_0_13_io_in_ver_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_0_13_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_0_13_io_in_ver_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_0_13_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_0_13_io_in_ver_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_0_14__456(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_0_14__456\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_0_14_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_0_14_io_in_ver_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_0_14_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_0_14_io_in_ver_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_0_14_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_0_14_io_in_ver_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_0_15__454(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_0_15__454\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_0_15_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_0_15_io_in_ver_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_0_15_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_0_15_io_in_ver_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_0_15_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_0_15_io_in_ver_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_1_0__511(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_1_0__511\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_1_0_io_in_hor_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_1_0_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_1_0_io_in_hor_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_1_0_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_1_0_io_in_hor_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_1_0_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_1_1__507(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_1_1__507\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_1_1_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_1_1_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_1_1_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_1_1_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_1_1_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_1_1_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_1_2__479(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_1_2__479\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_1_2_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_1_2_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_1_2_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_1_2_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_1_2_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_1_2_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_1_3__477(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_1_3__477\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_1_3_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_1_3_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_1_3_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_1_3_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_1_3_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_1_3_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_1_4__475(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_1_4__475\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_1_4_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_1_4_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_1_4_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_1_4_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_1_4_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_1_4_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_1_5__473(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_1_5__473\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_1_5_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_1_5_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_1_5_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_1_5_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_1_5_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_1_5_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_1_6__471(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_1_6__471\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_1_6_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_1_6_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_1_6_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_1_6_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_1_6_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_1_6_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_1_7__469(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_1_7__469\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_1_7_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_1_7_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_1_7_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_1_7_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_1_7_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_1_7_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_1_8__467(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_1_8__467\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_1_8_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_1_8_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_1_8_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_1_8_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_1_8_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_1_8_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_1_9__465(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_1_9__465\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_1_9_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_1_9_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_1_9_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_1_9_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_1_9_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_1_9_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_1_10__463(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_1_10__463\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_1_10_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_1_10_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_1_10_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_1_10_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_1_10_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_1_10_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_1_11__461(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_1_11__461\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_1_11_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_1_11_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_1_11_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_1_11_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_1_11_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_1_11_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_1_12__459(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_1_12__459\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_1_12_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_1_12_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_1_12_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_1_12_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_1_12_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_1_12_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_1_13__457(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_1_13__457\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_1_13_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_1_13_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_1_13_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_1_13_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_1_13_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_1_13_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_1_14__455(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_1_14__455\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_1_14_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_1_14_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_1_14_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_1_14_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_1_14_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_1_14_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_1_15__453(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_1_15__453\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_1_15_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_1_15_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_1_15_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_1_15_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_1_15_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_1_15_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_2_0__509(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_2_0__509\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_2_0_io_in_hor_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_2_0_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_2_0_io_in_hor_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_2_0_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_2_0_io_in_hor_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_2_0_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_2_1__508(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_2_1__508\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_2_1_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_2_1_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_2_1_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_2_1_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_2_1_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_2_1_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_2_2__452(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_2_2__452\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_2_2_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_2_2_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_2_2_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_2_2_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_2_2_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_2_2_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_2_3__438(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_2_3__438\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_2_3_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_2_3_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_2_3_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_2_3_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_2_3_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_2_3_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_2_4__437(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_2_4__437\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_2_4_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_2_4_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_2_4_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_2_4_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_2_4_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_2_4_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_2_5__436(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_2_5__436\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_2_5_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_2_5_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_2_5_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_2_5_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_2_5_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_2_5_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_2_6__435(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_2_6__435\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_2_6_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_2_6_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_2_6_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_2_6_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_2_6_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_2_6_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_2_7__434(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_2_7__434\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_2_7_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_2_7_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_2_7_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_2_7_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_2_7_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_2_7_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_2_8__433(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_2_8__433\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_2_8_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_2_8_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_2_8_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_2_8_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_2_8_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_2_8_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_2_9__432(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_2_9__432\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_2_9_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_2_9_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_2_9_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_2_9_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_2_9_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_2_9_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_2_10__431(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_2_10__431\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_2_10_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_2_10_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_2_10_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_2_10_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_2_10_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_2_10_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_2_11__430(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_2_11__430\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_2_11_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_2_11_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_2_11_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_2_11_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_2_11_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_2_11_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_2_12__429(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_2_12__429\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_2_12_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_2_12_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_2_12_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_2_12_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_2_12_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_2_12_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_2_13__428(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_2_13__428\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_2_13_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_2_13_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_2_13_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_2_13_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_2_13_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_2_13_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_2_14__427(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_2_14__427\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_2_14_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_2_14_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_2_14_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_2_14_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_2_14_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_2_14_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_2_15__426(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_2_15__426\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_2_15_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_2_15_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_2_15_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_2_15_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_2_15_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_2_15_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_3_0__492(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_3_0__492\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_3_0_io_in_hor_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_3_0_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_3_0_io_in_hor_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_3_0_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_3_0_io_in_hor_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_3_0_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_3_1__491(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_3_1__491\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_3_1_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_3_1_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_3_1_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_3_1_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_3_1_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_3_1_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_3_2__444(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_3_2__444\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_3_2_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_3_2_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_3_2_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_3_2_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_3_2_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_3_2_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_3_3__418(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_3_3__418\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_3_3_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_3_3_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_3_3_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_3_3_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_3_3_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_3_3_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_3_4__412(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_3_4__412\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_3_4_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_3_4_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_3_4_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_3_4_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_3_4_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_3_4_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_3_5__411(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_3_5__411\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_3_5_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_3_5_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_3_5_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_3_5_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_3_5_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_3_5_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_3_6__410(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_3_6__410\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_3_6_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_3_6_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_3_6_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_3_6_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_3_6_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_3_6_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_3_7__409(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_3_7__409\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_3_7_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_3_7_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_3_7_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_3_7_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_3_7_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_3_7_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_3_8__408(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_3_8__408\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_3_8_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_3_8_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_3_8_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_3_8_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_3_8_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_3_8_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_3_9__407(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_3_9__407\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_3_9_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_3_9_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_3_9_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_3_9_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_3_9_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_3_9_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_3_10__406(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_3_10__406\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_3_10_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_3_10_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_3_10_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_3_10_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_3_10_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_3_10_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_3_11__405(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_3_11__405\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_3_11_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_3_11_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_3_11_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_3_11_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_3_11_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_3_11_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_3_12__404(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_3_12__404\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_3_12_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_3_12_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_3_12_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_3_12_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_3_12_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_3_12_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_3_13__403(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_3_13__403\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_3_13_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_3_13_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_3_13_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_3_13_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_3_13_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_3_13_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_3_14__402(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_3_14__402\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_3_14_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_3_14_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_3_14_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_3_14_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_3_14_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_3_14_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_3_15__401(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_3_15__401\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_3_15_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_3_15_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_3_15_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_3_15_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_3_15_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_3_15_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_4_0__502(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_4_0__502\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_4_0_io_in_hor_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_4_0_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_4_0_io_in_hor_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_4_0_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_4_0_io_in_hor_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_4_0_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_4_1__501(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_4_1__501\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_4_1_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_4_1_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_4_1_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_4_1_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_4_1_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_4_1_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_4_2__449(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_4_2__449\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_4_2_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_4_2_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_4_2_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_4_2_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_4_2_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_4_2_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_4_3__423(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_4_3__423\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_4_3_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_4_3_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_4_3_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_4_3_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_4_3_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_4_3_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_4_4__398(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_4_4__398\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_4_4_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_4_4_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_4_4_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_4_4_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_4_4_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_4_4_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_4_5__388(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_4_5__388\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_4_5_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_4_5_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_4_5_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_4_5_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_4_5_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_4_5_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_4_6__387(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_4_6__387\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_4_6_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_4_6_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_4_6_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_4_6_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_4_6_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_4_6_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_4_7__386(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_4_7__386\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_4_7_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_4_7_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_4_7_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_4_7_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_4_7_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_4_7_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_4_8__385(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_4_8__385\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_4_8_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_4_8_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_4_8_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_4_8_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_4_8_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_4_8_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_4_9__384(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_4_9__384\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_4_9_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_4_9_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_4_9_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_4_9_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_4_9_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_4_9_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_4_10__383(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_4_10__383\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_4_10_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_4_10_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_4_10_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_4_10_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_4_10_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_4_10_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_4_11__382(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_4_11__382\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_4_11_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_4_11_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_4_11_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_4_11_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_4_11_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_4_11_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_4_12__381(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_4_12__381\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_4_12_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_4_12_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_4_12_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_4_12_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_4_12_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_4_12_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_4_13__380(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_4_13__380\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_4_13_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_4_13_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_4_13_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_4_13_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_4_13_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_4_13_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_4_14__379(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_4_14__379\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_4_14_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_4_14_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_4_14_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_4_14_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_4_14_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_4_14_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_4_15__378(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_4_15__378\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_4_15_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_4_15_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_4_15_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_4_15_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_4_15_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_4_15_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_5_0__490(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_5_0__490\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_5_0_io_in_hor_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_5_0_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_5_0_io_in_hor_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_5_0_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_5_0_io_in_hor_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_5_0_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_5_1__489(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_5_1__489\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_5_1_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_5_1_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_5_1_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_5_1_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_5_1_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_5_1_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_5_2__443(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_5_2__443\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_5_2_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_5_2_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_5_2_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_5_2_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_5_2_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_5_2_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_5_3__417(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_5_3__417\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_5_3_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_5_3_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_5_3_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_5_3_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_5_3_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_5_3_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_5_4__393(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_5_4__393\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_5_4_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_5_4_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_5_4_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_5_4_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_5_4_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_5_4_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_5_5__371(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_5_5__371\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_5_5_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_5_5_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_5_5_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_5_5_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_5_5_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_5_5_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_5_6__366(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_5_6__366\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_5_6_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_5_6_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_5_6_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_5_6_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_5_6_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_5_6_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_5_7__365(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_5_7__365\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_5_7_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_5_7_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_5_7_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_5_7_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_5_7_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_5_7_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_5_8__364(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_5_8__364\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_5_8_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_5_8_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_5_8_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_5_8_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_5_8_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_5_8_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_5_9__363(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_5_9__363\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_5_9_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_5_9_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_5_9_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_5_9_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_5_9_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_5_9_io_in_ver_r_exp)));
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
