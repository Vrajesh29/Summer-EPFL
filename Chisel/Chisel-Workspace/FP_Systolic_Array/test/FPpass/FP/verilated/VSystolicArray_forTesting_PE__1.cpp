// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSystolicArray_forTesting.h for the primary calling header

#include "VSystolicArray_forTesting_PE.h"
#include "VSystolicArray_forTesting__Syms.h"

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_5_10__362(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_5_10__362\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_5_10_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_5_10_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_5_10_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_5_10_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_5_10_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_5_10_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_5_11__361(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_5_11__361\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_5_11_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_5_11_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_5_11_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_5_11_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_5_11_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_5_11_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_5_12__360(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_5_12__360\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_5_12_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_5_12_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_5_12_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_5_12_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_5_12_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_5_12_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_5_13__359(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_5_13__359\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_5_13_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_5_13_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_5_13_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_5_13_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_5_13_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_5_13_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_5_14__358(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_5_14__358\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_5_14_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_5_14_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_5_14_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_5_14_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_5_14_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_5_14_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_5_15__357(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_5_15__357\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_5_15_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_5_15_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_5_15_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_5_15_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_5_15_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_5_15_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_6_0__494(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_6_0__494\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_6_0_io_in_hor_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_6_0_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_6_0_io_in_hor_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_6_0_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_6_0_io_in_hor_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_6_0_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_6_1__493(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_6_1__493\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_6_1_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_6_1_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_6_1_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_6_1_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_6_1_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_6_1_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_6_2__445(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_6_2__445\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_6_2_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_6_2_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_6_2_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_6_2_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_6_2_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_6_2_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_6_3__419(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_6_3__419\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_6_3_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_6_3_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_6_3_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_6_3_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_6_3_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_6_3_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_6_4__394(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_6_4__394\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_6_4_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_6_4_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_6_4_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_6_4_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_6_4_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_6_4_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_6_5__372(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_6_5__372\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_6_5_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_6_5_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_6_5_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_6_5_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_6_5_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_6_5_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_6_6__351(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_6_6__351\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_6_6_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_6_6_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_6_6_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_6_6_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_6_6_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_6_6_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_6_7__346(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_6_7__346\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_6_7_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_6_7_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_6_7_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_6_7_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_6_7_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_6_7_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_6_8__345(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_6_8__345\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_6_8_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_6_8_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_6_8_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_6_8_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_6_8_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_6_8_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_6_9__344(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_6_9__344\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_6_9_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_6_9_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_6_9_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_6_9_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_6_9_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_6_9_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_6_10__343(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_6_10__343\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_6_10_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_6_10_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_6_10_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_6_10_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_6_10_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_6_10_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_6_11__342(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_6_11__342\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_6_11_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_6_11_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_6_11_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_6_11_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_6_11_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_6_11_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_6_12__341(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_6_12__341\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_6_12_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_6_12_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_6_12_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_6_12_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_6_12_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_6_12_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_6_13__340(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_6_13__340\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_6_13_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_6_13_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_6_13_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_6_13_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_6_13_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_6_13_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_6_14__339(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_6_14__339\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_6_14_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_6_14_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_6_14_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_6_14_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_6_14_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_6_14_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_6_15__338(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_6_15__338\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_6_15_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_6_15_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_6_15_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_6_15_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_6_15_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_6_15_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_7_0__488(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_7_0__488\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_7_0_io_in_hor_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_7_0_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_7_0_io_in_hor_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_7_0_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_7_0_io_in_hor_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_7_0_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_7_1__487(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_7_1__487\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_7_1_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_7_1_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_7_1_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_7_1_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_7_1_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_7_1_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_7_2__442(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_7_2__442\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_7_2_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_7_2_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_7_2_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_7_2_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_7_2_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_7_2_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_7_3__416(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_7_3__416\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_7_3_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_7_3_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_7_3_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_7_3_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_7_3_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_7_3_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_7_4__392(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_7_4__392\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_7_4_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_7_4_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_7_4_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_7_4_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_7_4_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_7_4_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_7_5__370(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_7_5__370\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_7_5_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_7_5_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_7_5_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_7_5_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_7_5_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_7_5_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_7_6__350(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_7_6__350\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_7_6_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_7_6_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_7_6_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_7_6_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_7_6_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_7_6_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_7_7__332(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_7_7__332\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_7_7_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_7_7_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_7_7_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_7_7_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_7_7_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_7_7_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_7_8__328(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_7_8__328\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_7_8_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_7_8_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_7_8_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_7_8_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_7_8_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_7_8_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_7_9__327(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_7_9__327\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_7_9_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_7_9_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_7_9_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_7_9_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_7_9_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_7_9_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_7_10__326(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_7_10__326\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_7_10_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_7_10_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_7_10_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_7_10_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_7_10_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_7_10_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_7_11__325(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_7_11__325\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_7_11_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_7_11_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_7_11_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_7_11_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_7_11_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_7_11_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_7_12__324(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_7_12__324\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_7_12_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_7_12_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_7_12_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_7_12_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_7_12_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_7_12_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_7_13__323(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_7_13__323\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_7_13_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_7_13_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_7_13_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_7_13_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_7_13_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_7_13_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_7_14__322(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_7_14__322\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_7_14_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_7_14_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_7_14_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_7_14_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_7_14_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_7_14_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_7_15__321(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_7_15__321\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_7_15_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_7_15_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_7_15_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_7_15_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_7_15_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_7_15_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_8_0__496(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_8_0__496\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_8_0_io_in_hor_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_8_0_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_8_0_io_in_hor_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_8_0_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_8_0_io_in_hor_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_8_0_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_8_1__495(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_8_1__495\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_8_1_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_8_1_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_8_1_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_8_1_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_8_1_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_8_1_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_8_2__446(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_8_2__446\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_8_2_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_8_2_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_8_2_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_8_2_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_8_2_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_8_2_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_8_3__420(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_8_3__420\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_8_3_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_8_3_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_8_3_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_8_3_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_8_3_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_8_3_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_8_4__395(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_8_4__395\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_8_4_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_8_4_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_8_4_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_8_4_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_8_4_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_8_4_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_8_5__373(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_8_5__373\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_8_5_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_8_5_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_8_5_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_8_5_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_8_5_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_8_5_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_8_6__352(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_8_6__352\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_8_6_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_8_6_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_8_6_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_8_6_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_8_6_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_8_6_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_8_7__333(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_8_7__333\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_8_7_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_8_7_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_8_7_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_8_7_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_8_7_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_8_7_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_8_8__316(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_8_8__316\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_8_8_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_8_8_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_8_8_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_8_8_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_8_8_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_8_8_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_8_9__312(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_8_9__312\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_8_9_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_8_9_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_8_9_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_8_9_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_8_9_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_8_9_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_8_10__311(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_8_10__311\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_8_10_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_8_10_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_8_10_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_8_10_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_8_10_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_8_10_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_8_11__310(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_8_11__310\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_8_11_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_8_11_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_8_11_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_8_11_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_8_11_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_8_11_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_8_12__309(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_8_12__309\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_8_12_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_8_12_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_8_12_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_8_12_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_8_12_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_8_12_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_8_13__308(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_8_13__308\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_8_13_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_8_13_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_8_13_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_8_13_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_8_13_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_8_13_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_8_14__307(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_8_14__307\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_8_14_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_8_14_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_8_14_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_8_14_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_8_14_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_8_14_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_8_15__306(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_8_15__306\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_8_15_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_8_15_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_8_15_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_8_15_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_8_15_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_8_15_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_9_0__498(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_9_0__498\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_9_0_io_in_hor_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_9_0_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_9_0_io_in_hor_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_9_0_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_9_0_io_in_hor_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_9_0_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_9_1__497(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_9_1__497\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_9_1_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_9_1_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_9_1_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_9_1_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_9_1_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_9_1_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_9_2__447(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_9_2__447\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_9_2_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_9_2_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_9_2_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_9_2_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_9_2_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_9_2_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_9_3__421(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_9_3__421\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_9_3_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_9_3_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_9_3_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_9_3_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_9_3_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_9_3_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_9_4__396(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_9_4__396\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_9_4_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_9_4_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_9_4_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_9_4_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_9_4_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_9_4_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_9_5__374(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_9_5__374\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_9_5_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_9_5_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_9_5_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_9_5_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_9_5_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_9_5_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_9_6__353(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_9_6__353\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_9_6_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_9_6_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_9_6_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_9_6_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_9_6_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_9_6_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_9_7__334(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_9_7__334\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_9_7_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_9_7_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_9_7_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_9_7_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_9_7_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_9_7_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_9_8__317(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_9_8__317\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_9_8_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_9_8_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_9_8_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_9_8_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_9_8_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_9_8_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_9_9__302(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_9_9__302\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_9_9_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_9_9_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_9_9_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_9_9_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_9_9_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_9_9_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_9_10__298(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_9_10__298\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_9_10_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_9_10_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_9_10_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_9_10_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_9_10_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_9_10_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_9_11__297(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_9_11__297\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_9_11_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_9_11_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_9_11_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_9_11_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_9_11_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_9_11_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_9_12__296(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_9_12__296\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_9_12_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_9_12_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_9_12_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_9_12_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_9_12_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_9_12_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_9_13__295(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_9_13__295\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_9_13_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_9_13_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_9_13_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_9_13_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_9_13_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_9_13_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_9_14__294(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_9_14__294\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_9_14_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_9_14_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_9_14_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_9_14_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_9_14_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_9_14_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_9_15__293(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_9_15__293\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_9_15_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_9_15_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_9_15_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_9_15_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_9_15_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_9_15_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_10_0__500(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_10_0__500\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_10_0_io_in_hor_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_10_0_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_10_0_io_in_hor_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_10_0_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_10_0_io_in_hor_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_10_0_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_10_1__499(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_10_1__499\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_10_1_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_10_1_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_10_1_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_10_1_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_10_1_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_10_1_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_10_2__448(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_10_2__448\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_10_2_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_10_2_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_10_2_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_10_2_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_10_2_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_10_2_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_10_3__422(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_10_3__422\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_10_3_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_10_3_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_10_3_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_10_3_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_10_3_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_10_3_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_10_4__397(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_10_4__397\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_10_4_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_10_4_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_10_4_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_10_4_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_10_4_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_10_4_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_10_5__375(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_10_5__375\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_10_5_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_10_5_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_10_5_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_10_5_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_10_5_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_10_5_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_10_6__354(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_10_6__354\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_10_6_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_10_6_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_10_6_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_10_6_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_10_6_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_10_6_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_10_7__335(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_10_7__335\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_10_7_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_10_7_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_10_7_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_10_7_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_10_7_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_10_7_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_10_8__318(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_10_8__318\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_10_8_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_10_8_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_10_8_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_10_8_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_10_8_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_10_8_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_10_9__303(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_10_9__303\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_10_9_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_10_9_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_10_9_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_10_9_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_10_9_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_10_9_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_10_10__290(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_10_10__290\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_10_10_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_10_10_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_10_10_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_10_10_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_10_10_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_10_10_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_10_11__286(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_10_11__286\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_10_11_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_10_11_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_10_11_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_10_11_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_10_11_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_10_11_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_10_12__285(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_10_12__285\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_10_12_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_10_12_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_10_12_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_10_12_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_10_12_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_10_12_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_10_13__284(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_10_13__284\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_10_13_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_10_13_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_10_13_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_10_13_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_10_13_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_10_13_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_10_14__283(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_10_14__283\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_10_14_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_10_14_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_10_14_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_10_14_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_10_14_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_10_14_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_10_15__282(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_10_15__282\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_10_15_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_10_15_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_10_15_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_10_15_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_10_15_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_10_15_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_11_0__504(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_11_0__504\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_11_0_io_in_hor_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_11_0_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_11_0_io_in_hor_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_11_0_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_11_0_io_in_hor_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_11_0_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_11_1__503(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_11_1__503\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_11_1_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_11_1_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_11_1_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_11_1_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_11_1_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_11_1_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_11_2__450(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_11_2__450\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_11_2_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_11_2_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_11_2_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_11_2_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_11_2_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_11_2_io_in_ver_r_exp)));
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

VL_INLINE_OPT void VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_11_3__424(VSystolicArray_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_forTesting_PE::_sequent__TOP__SystolicArray_forTesting__DOT__pes_11_3__424\n"); );
    VSystolicArray_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__fpmult_io_out_result_sign = ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_11_3_io_in_hor_r_sign) 
                                              ^ (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_11_3_io_in_ver_r_sign));
    this->__PVT__fpmult__DOT___io_out_result_man_T 
        = (0x3ffU & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_11_3_io_in_hor_r_man) 
                     * (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_11_3_io_in_ver_r_man)));
    this->__PVT__fpmult__DOT__exp_addition = (0x1ffU 
                                              & ((IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_11_3_io_in_hor_r_exp) 
                                                 + (IData)(vlTOPp->SystolicArray_forTesting__DOT__pes_11_3_io_in_ver_r_exp)));
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
