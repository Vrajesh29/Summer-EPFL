// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSystolicArray.h for the primary calling header

#include "VSystolicArray.h"
#include "VSystolicArray__Syms.h"

//==========

void VSystolicArray::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VSystolicArray::eval\n"); );
    VSystolicArray__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VSystolicArray* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        vlSymsp->__Vm_activity = true;
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("SystolicArray.sv", 212, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VSystolicArray::_eval_initial_loop(VSystolicArray__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("SystolicArray.sv", 212, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VSystolicArray::_combo__TOP__1(VSystolicArray__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSystolicArray::_combo__TOP__1\n"); );
    VSystolicArray* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->SystolicArray__DOT__pes_0_0__DOT__fpmult__DOT___io_out_result_man_T 
        = (0xffU & ((IData)(vlTOPp->io_in_0_0_hor_man) 
                    * (IData)(vlTOPp->io_in_0_0_ver_man)));
    vlTOPp->SystolicArray__DOT__pes_0_0__DOT__fpmult_io_out_result_exp 
        = (0xffU & ((IData)(vlTOPp->io_in_0_0_hor_exp) 
                    + (IData)(vlTOPp->io_in_0_0_ver_exp)));
}

VL_INLINE_OPT void VSystolicArray::_sequent__TOP__3(VSystolicArray__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSystolicArray::_sequent__TOP__3\n"); );
    VSystolicArray* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->SystolicArray__DOT__pes_0_0__DOT__result_buffer_sign 
        = vlTOPp->SystolicArray__DOT__pes_0_0__DOT__fpadder_io_out_result_sign;
    vlTOPp->SystolicArray__DOT__pes_0_1__DOT__result_buffer_sign 
        = vlTOPp->SystolicArray__DOT__pes_0_1__DOT__fpadder_io_out_result_sign;
    vlTOPp->SystolicArray__DOT__pes_1_0__DOT__result_buffer_sign 
        = vlTOPp->SystolicArray__DOT__pes_1_0__DOT__fpadder_io_out_result_sign;
    vlTOPp->SystolicArray__DOT__pes_1_1__DOT__result_buffer_sign 
        = vlTOPp->SystolicArray__DOT__pes_1_1__DOT__fpadder_io_out_result_sign;
    vlTOPp->SystolicArray__DOT__pes_0_1__DOT__io_out_hor_REG_sign 
        = vlTOPp->SystolicArray__DOT__pes_0_0__DOT__io_out_hor_REG_sign;
    vlTOPp->SystolicArray__DOT__pes_1_0__DOT__io_out_ver_REG_sign 
        = vlTOPp->SystolicArray__DOT__pes_0_0__DOT__io_out_ver_REG_sign;
    vlTOPp->SystolicArray__DOT__pes_1_1__DOT__io_out_ver_REG_sign 
        = vlTOPp->SystolicArray__DOT__pes_0_1__DOT__io_out_ver_REG_sign;
    vlTOPp->SystolicArray__DOT__pes_1_1__DOT__io_out_hor_REG_sign 
        = vlTOPp->SystolicArray__DOT__pes_1_0__DOT__io_out_hor_REG_sign;
    vlTOPp->SystolicArray__DOT__pes_0_0__DOT__result_buffer_man 
        = ((IData)(vlTOPp->SystolicArray__DOT__pes_0_0__DOT__fpadder__DOT___exp_diff_T)
            ? (IData)(vlTOPp->SystolicArray__DOT__pes_0_0__DOT__fpadder__DOT___io_out_result_man_T_3)
            : (IData)(vlTOPp->SystolicArray__DOT__pes_0_0__DOT__fpadder__DOT___io_out_result_man_T_6));
    vlTOPp->SystolicArray__DOT__pes_0_1__DOT__result_buffer_man 
        = ((IData)(vlTOPp->SystolicArray__DOT__pes_0_1__DOT__fpadder__DOT___exp_diff_T)
            ? (IData)(vlTOPp->SystolicArray__DOT__pes_0_1__DOT__fpadder__DOT___io_out_result_man_T_3)
            : (IData)(vlTOPp->SystolicArray__DOT__pes_0_1__DOT__fpadder__DOT___io_out_result_man_T_6));
    vlTOPp->SystolicArray__DOT__pes_1_0__DOT__result_buffer_man 
        = ((IData)(vlTOPp->SystolicArray__DOT__pes_1_0__DOT__fpadder__DOT___exp_diff_T)
            ? (IData)(vlTOPp->SystolicArray__DOT__pes_1_0__DOT__fpadder__DOT___io_out_result_man_T_3)
            : (IData)(vlTOPp->SystolicArray__DOT__pes_1_0__DOT__fpadder__DOT___io_out_result_man_T_6));
    vlTOPp->SystolicArray__DOT__pes_1_1__DOT__result_buffer_man 
        = ((IData)(vlTOPp->SystolicArray__DOT__pes_1_1__DOT__fpadder__DOT___exp_diff_T)
            ? (IData)(vlTOPp->SystolicArray__DOT__pes_1_1__DOT__fpadder__DOT___io_out_result_man_T_3)
            : (IData)(vlTOPp->SystolicArray__DOT__pes_1_1__DOT__fpadder__DOT___io_out_result_man_T_6));
    vlTOPp->SystolicArray__DOT__pes_0_1__DOT__io_out_hor_REG_man 
        = vlTOPp->SystolicArray__DOT__pes_0_0__DOT__io_out_hor_REG_man;
    vlTOPp->SystolicArray__DOT__pes_1_0__DOT__io_out_ver_REG_man 
        = vlTOPp->SystolicArray__DOT__pes_0_0__DOT__io_out_ver_REG_man;
    vlTOPp->SystolicArray__DOT__pes_1_1__DOT__io_out_ver_REG_man 
        = vlTOPp->SystolicArray__DOT__pes_0_1__DOT__io_out_ver_REG_man;
    vlTOPp->SystolicArray__DOT__pes_1_1__DOT__io_out_hor_REG_man 
        = vlTOPp->SystolicArray__DOT__pes_1_0__DOT__io_out_hor_REG_man;
    vlTOPp->SystolicArray__DOT__pes_0_0__DOT__result_buffer_exp 
        = vlTOPp->SystolicArray__DOT__pes_0_0__DOT__fpadder_io_out_result_exp;
    vlTOPp->SystolicArray__DOT__pes_0_1__DOT__result_buffer_exp 
        = vlTOPp->SystolicArray__DOT__pes_0_1__DOT__fpadder_io_out_result_exp;
    vlTOPp->SystolicArray__DOT__pes_1_0__DOT__result_buffer_exp 
        = vlTOPp->SystolicArray__DOT__pes_1_0__DOT__fpadder_io_out_result_exp;
    vlTOPp->SystolicArray__DOT__pes_1_1__DOT__result_buffer_exp 
        = vlTOPp->SystolicArray__DOT__pes_1_1__DOT__fpadder_io_out_result_exp;
    vlTOPp->SystolicArray__DOT__pes_0_1__DOT__io_out_hor_REG_exp 
        = vlTOPp->SystolicArray__DOT__pes_0_0__DOT__io_out_hor_REG_exp;
    vlTOPp->SystolicArray__DOT__pes_1_0__DOT__io_out_ver_REG_exp 
        = vlTOPp->SystolicArray__DOT__pes_0_0__DOT__io_out_ver_REG_exp;
    vlTOPp->SystolicArray__DOT__pes_1_1__DOT__io_out_ver_REG_exp 
        = vlTOPp->SystolicArray__DOT__pes_0_1__DOT__io_out_ver_REG_exp;
    vlTOPp->SystolicArray__DOT__pes_1_1__DOT__io_out_hor_REG_exp 
        = vlTOPp->SystolicArray__DOT__pes_1_0__DOT__io_out_hor_REG_exp;
    vlTOPp->io_out_0_0_result_sign = vlTOPp->SystolicArray__DOT__pes_0_0__DOT__result_buffer_sign;
    vlTOPp->io_out_0_1_result_sign = vlTOPp->SystolicArray__DOT__pes_0_1__DOT__result_buffer_sign;
    vlTOPp->io_out_1_0_result_sign = vlTOPp->SystolicArray__DOT__pes_1_0__DOT__result_buffer_sign;
    vlTOPp->io_out_1_1_result_sign = vlTOPp->SystolicArray__DOT__pes_1_1__DOT__result_buffer_sign;
    vlTOPp->io_out_0_1_hor_sign = vlTOPp->SystolicArray__DOT__pes_0_1__DOT__io_out_hor_REG_sign;
    vlTOPp->SystolicArray__DOT__pes_0_0__DOT__io_out_hor_REG_sign 
        = vlTOPp->io_in_0_0_hor_sign;
    vlTOPp->io_out_1_0_ver_sign = vlTOPp->SystolicArray__DOT__pes_1_0__DOT__io_out_ver_REG_sign;
    vlTOPp->SystolicArray__DOT__pes_0_0__DOT__io_out_ver_REG_sign 
        = vlTOPp->io_in_0_0_ver_sign;
    vlTOPp->io_out_1_1_ver_sign = vlTOPp->SystolicArray__DOT__pes_1_1__DOT__io_out_ver_REG_sign;
    vlTOPp->SystolicArray__DOT__pes_0_1__DOT__io_out_ver_REG_sign 
        = vlTOPp->io_in_0_1_ver_sign;
    vlTOPp->io_out_1_1_hor_sign = vlTOPp->SystolicArray__DOT__pes_1_1__DOT__io_out_hor_REG_sign;
    vlTOPp->SystolicArray__DOT__pes_1_0__DOT__io_out_hor_REG_sign 
        = vlTOPp->io_in_1_0_hor_sign;
    vlTOPp->io_out_0_0_result_man = vlTOPp->SystolicArray__DOT__pes_0_0__DOT__result_buffer_man;
    vlTOPp->io_out_0_1_result_man = vlTOPp->SystolicArray__DOT__pes_0_1__DOT__result_buffer_man;
    vlTOPp->io_out_1_0_result_man = vlTOPp->SystolicArray__DOT__pes_1_0__DOT__result_buffer_man;
    vlTOPp->io_out_1_1_result_man = vlTOPp->SystolicArray__DOT__pes_1_1__DOT__result_buffer_man;
    vlTOPp->io_out_0_1_hor_man = vlTOPp->SystolicArray__DOT__pes_0_1__DOT__io_out_hor_REG_man;
    vlTOPp->SystolicArray__DOT__pes_0_0__DOT__io_out_hor_REG_man 
        = vlTOPp->io_in_0_0_hor_man;
    vlTOPp->io_out_1_0_ver_man = vlTOPp->SystolicArray__DOT__pes_1_0__DOT__io_out_ver_REG_man;
    vlTOPp->SystolicArray__DOT__pes_0_0__DOT__io_out_ver_REG_man 
        = vlTOPp->io_in_0_0_ver_man;
    vlTOPp->io_out_1_1_ver_man = vlTOPp->SystolicArray__DOT__pes_1_1__DOT__io_out_ver_REG_man;
    vlTOPp->SystolicArray__DOT__pes_0_1__DOT__io_out_ver_REG_man 
        = vlTOPp->io_in_0_1_ver_man;
    vlTOPp->io_out_1_1_hor_man = vlTOPp->SystolicArray__DOT__pes_1_1__DOT__io_out_hor_REG_man;
    vlTOPp->SystolicArray__DOT__pes_1_0__DOT__io_out_hor_REG_man 
        = vlTOPp->io_in_1_0_hor_man;
    vlTOPp->io_out_0_0_result_exp = vlTOPp->SystolicArray__DOT__pes_0_0__DOT__result_buffer_exp;
    vlTOPp->io_out_0_1_result_exp = vlTOPp->SystolicArray__DOT__pes_0_1__DOT__result_buffer_exp;
    vlTOPp->io_out_1_0_result_exp = vlTOPp->SystolicArray__DOT__pes_1_0__DOT__result_buffer_exp;
    vlTOPp->io_out_1_1_result_exp = vlTOPp->SystolicArray__DOT__pes_1_1__DOT__result_buffer_exp;
    vlTOPp->io_out_0_1_hor_exp = vlTOPp->SystolicArray__DOT__pes_0_1__DOT__io_out_hor_REG_exp;
    vlTOPp->SystolicArray__DOT__pes_0_0__DOT__io_out_hor_REG_exp 
        = vlTOPp->io_in_0_0_hor_exp;
    vlTOPp->io_out_1_0_ver_exp = vlTOPp->SystolicArray__DOT__pes_1_0__DOT__io_out_ver_REG_exp;
    vlTOPp->SystolicArray__DOT__pes_0_0__DOT__io_out_ver_REG_exp 
        = vlTOPp->io_in_0_0_ver_exp;
    vlTOPp->io_out_1_1_ver_exp = vlTOPp->SystolicArray__DOT__pes_1_1__DOT__io_out_ver_REG_exp;
    vlTOPp->SystolicArray__DOT__pes_0_1__DOT__io_out_ver_REG_exp 
        = vlTOPp->io_in_0_1_ver_exp;
    vlTOPp->io_out_1_1_hor_exp = vlTOPp->SystolicArray__DOT__pes_1_1__DOT__io_out_hor_REG_exp;
    vlTOPp->SystolicArray__DOT__pes_1_0__DOT__io_out_hor_REG_exp 
        = vlTOPp->io_in_1_0_hor_exp;
    vlTOPp->io_out_0_0_hor_sign = vlTOPp->SystolicArray__DOT__pes_0_0__DOT__io_out_hor_REG_sign;
    vlTOPp->io_out_0_0_ver_sign = vlTOPp->SystolicArray__DOT__pes_0_0__DOT__io_out_ver_REG_sign;
    vlTOPp->io_out_0_1_ver_sign = vlTOPp->SystolicArray__DOT__pes_0_1__DOT__io_out_ver_REG_sign;
    vlTOPp->io_out_1_0_hor_sign = vlTOPp->SystolicArray__DOT__pes_1_0__DOT__io_out_hor_REG_sign;
    vlTOPp->io_out_0_0_hor_man = vlTOPp->SystolicArray__DOT__pes_0_0__DOT__io_out_hor_REG_man;
    vlTOPp->io_out_0_0_ver_man = vlTOPp->SystolicArray__DOT__pes_0_0__DOT__io_out_ver_REG_man;
    vlTOPp->io_out_0_1_ver_man = vlTOPp->SystolicArray__DOT__pes_0_1__DOT__io_out_ver_REG_man;
    vlTOPp->io_out_1_0_hor_man = vlTOPp->SystolicArray__DOT__pes_1_0__DOT__io_out_hor_REG_man;
    vlTOPp->SystolicArray__DOT__pes_1_1__DOT__fpmult__DOT___io_out_result_man_T 
        = (0xffU & ((IData)(vlTOPp->SystolicArray__DOT__pes_1_0__DOT__io_out_hor_REG_man) 
                    * (IData)(vlTOPp->SystolicArray__DOT__pes_0_1__DOT__io_out_ver_REG_man)));
    vlTOPp->io_out_0_0_hor_exp = vlTOPp->SystolicArray__DOT__pes_0_0__DOT__io_out_hor_REG_exp;
    vlTOPp->io_out_0_0_ver_exp = vlTOPp->SystolicArray__DOT__pes_0_0__DOT__io_out_ver_REG_exp;
    vlTOPp->io_out_0_1_ver_exp = vlTOPp->SystolicArray__DOT__pes_0_1__DOT__io_out_ver_REG_exp;
    vlTOPp->io_out_1_0_hor_exp = vlTOPp->SystolicArray__DOT__pes_1_0__DOT__io_out_hor_REG_exp;
    vlTOPp->SystolicArray__DOT__pes_1_1__DOT__fpmult_io_out_result_exp 
        = (0xffU & ((IData)(vlTOPp->SystolicArray__DOT__pes_1_0__DOT__io_out_hor_REG_exp) 
                    + (IData)(vlTOPp->SystolicArray__DOT__pes_0_1__DOT__io_out_ver_REG_exp)));
    if (((IData)(vlTOPp->SystolicArray__DOT__pes_1_1__DOT__fpmult_io_out_result_exp) 
         > (IData)(vlTOPp->SystolicArray__DOT__pes_1_1__DOT__result_buffer_exp))) {
        vlTOPp->SystolicArray__DOT__pes_1_1__DOT__fpadder__DOT__exp_diff 
            = (0xffU & ((IData)(vlTOPp->SystolicArray__DOT__pes_1_1__DOT__fpmult_io_out_result_exp) 
                        - (IData)(vlTOPp->SystolicArray__DOT__pes_1_1__DOT__result_buffer_exp)));
        vlTOPp->SystolicArray__DOT__pes_1_1__DOT__fpadder__DOT___exp_diff_T = 1U;
    } else {
        vlTOPp->SystolicArray__DOT__pes_1_1__DOT__fpadder__DOT__exp_diff 
            = (0xffU & ((IData)(vlTOPp->SystolicArray__DOT__pes_1_1__DOT__result_buffer_exp) 
                        - (IData)(vlTOPp->SystolicArray__DOT__pes_1_1__DOT__fpmult_io_out_result_exp)));
        vlTOPp->SystolicArray__DOT__pes_1_1__DOT__fpadder__DOT___exp_diff_T = 0U;
    }
    vlTOPp->SystolicArray__DOT__pes_1_1__DOT__fpadder__DOT___io_out_result_man_T_3 
        = (0xfU & ((IData)(vlTOPp->SystolicArray__DOT__pes_1_1__DOT__fpmult__DOT___io_out_result_man_T) 
                   + ((3U >= (IData)(vlTOPp->SystolicArray__DOT__pes_1_1__DOT__fpadder__DOT__exp_diff))
                       ? ((IData)(vlTOPp->SystolicArray__DOT__pes_1_1__DOT__result_buffer_man) 
                          >> (IData)(vlTOPp->SystolicArray__DOT__pes_1_1__DOT__fpadder__DOT__exp_diff))
                       : 0U)));
    vlTOPp->SystolicArray__DOT__pes_1_1__DOT__fpadder__DOT___io_out_result_man_T_6 
        = (0xfU & (((3U >= (IData)(vlTOPp->SystolicArray__DOT__pes_1_1__DOT__fpadder__DOT__exp_diff))
                     ? ((0xfU & (IData)(vlTOPp->SystolicArray__DOT__pes_1_1__DOT__fpmult__DOT___io_out_result_man_T)) 
                        >> (IData)(vlTOPp->SystolicArray__DOT__pes_1_1__DOT__fpadder__DOT__exp_diff))
                     : 0U) + (IData)(vlTOPp->SystolicArray__DOT__pes_1_1__DOT__result_buffer_man)));
    if (vlTOPp->SystolicArray__DOT__pes_1_1__DOT__fpadder__DOT___exp_diff_T) {
        vlTOPp->SystolicArray__DOT__pes_1_1__DOT__fpadder_io_out_result_exp 
            = vlTOPp->SystolicArray__DOT__pes_1_1__DOT__fpmult_io_out_result_exp;
        vlTOPp->SystolicArray__DOT__pes_1_1__DOT__fpadder_io_out_result_sign 
            = ((IData)(vlTOPp->SystolicArray__DOT__pes_1_0__DOT__io_out_hor_REG_sign) 
               ^ (IData)(vlTOPp->SystolicArray__DOT__pes_0_1__DOT__io_out_ver_REG_sign));
    } else {
        vlTOPp->SystolicArray__DOT__pes_1_1__DOT__fpadder_io_out_result_exp 
            = vlTOPp->SystolicArray__DOT__pes_1_1__DOT__result_buffer_exp;
        vlTOPp->SystolicArray__DOT__pes_1_1__DOT__fpadder_io_out_result_sign 
            = vlTOPp->SystolicArray__DOT__pes_1_1__DOT__result_buffer_sign;
    }
}

VL_INLINE_OPT void VSystolicArray::_combo__TOP__4(VSystolicArray__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSystolicArray::_combo__TOP__4\n"); );
    VSystolicArray* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->SystolicArray__DOT__pes_0_0__DOT__fpmult_io_out_result_exp) 
         > (IData)(vlTOPp->SystolicArray__DOT__pes_0_0__DOT__result_buffer_exp))) {
        vlTOPp->SystolicArray__DOT__pes_0_0__DOT__fpadder__DOT__exp_diff 
            = (0xffU & ((IData)(vlTOPp->SystolicArray__DOT__pes_0_0__DOT__fpmult_io_out_result_exp) 
                        - (IData)(vlTOPp->SystolicArray__DOT__pes_0_0__DOT__result_buffer_exp)));
        vlTOPp->SystolicArray__DOT__pes_0_0__DOT__fpadder__DOT___exp_diff_T = 1U;
    } else {
        vlTOPp->SystolicArray__DOT__pes_0_0__DOT__fpadder__DOT__exp_diff 
            = (0xffU & ((IData)(vlTOPp->SystolicArray__DOT__pes_0_0__DOT__result_buffer_exp) 
                        - (IData)(vlTOPp->SystolicArray__DOT__pes_0_0__DOT__fpmult_io_out_result_exp)));
        vlTOPp->SystolicArray__DOT__pes_0_0__DOT__fpadder__DOT___exp_diff_T = 0U;
    }
    vlTOPp->SystolicArray__DOT__pes_0_1__DOT__fpmult__DOT___io_out_result_man_T 
        = (0xffU & ((IData)(vlTOPp->SystolicArray__DOT__pes_0_0__DOT__io_out_hor_REG_man) 
                    * (IData)(vlTOPp->io_in_0_1_ver_man)));
    vlTOPp->SystolicArray__DOT__pes_1_0__DOT__fpmult__DOT___io_out_result_man_T 
        = (0xffU & ((IData)(vlTOPp->io_in_1_0_hor_man) 
                    * (IData)(vlTOPp->SystolicArray__DOT__pes_0_0__DOT__io_out_ver_REG_man)));
    vlTOPp->SystolicArray__DOT__pes_0_1__DOT__fpmult_io_out_result_exp 
        = (0xffU & ((IData)(vlTOPp->SystolicArray__DOT__pes_0_0__DOT__io_out_hor_REG_exp) 
                    + (IData)(vlTOPp->io_in_0_1_ver_exp)));
    vlTOPp->SystolicArray__DOT__pes_1_0__DOT__fpmult_io_out_result_exp 
        = (0xffU & ((IData)(vlTOPp->io_in_1_0_hor_exp) 
                    + (IData)(vlTOPp->SystolicArray__DOT__pes_0_0__DOT__io_out_ver_REG_exp)));
    vlTOPp->SystolicArray__DOT__pes_0_0__DOT__fpadder__DOT___io_out_result_man_T_3 
        = (0xfU & ((IData)(vlTOPp->SystolicArray__DOT__pes_0_0__DOT__fpmult__DOT___io_out_result_man_T) 
                   + ((3U >= (IData)(vlTOPp->SystolicArray__DOT__pes_0_0__DOT__fpadder__DOT__exp_diff))
                       ? ((IData)(vlTOPp->SystolicArray__DOT__pes_0_0__DOT__result_buffer_man) 
                          >> (IData)(vlTOPp->SystolicArray__DOT__pes_0_0__DOT__fpadder__DOT__exp_diff))
                       : 0U)));
    vlTOPp->SystolicArray__DOT__pes_0_0__DOT__fpadder__DOT___io_out_result_man_T_6 
        = (0xfU & (((3U >= (IData)(vlTOPp->SystolicArray__DOT__pes_0_0__DOT__fpadder__DOT__exp_diff))
                     ? ((0xfU & (IData)(vlTOPp->SystolicArray__DOT__pes_0_0__DOT__fpmult__DOT___io_out_result_man_T)) 
                        >> (IData)(vlTOPp->SystolicArray__DOT__pes_0_0__DOT__fpadder__DOT__exp_diff))
                     : 0U) + (IData)(vlTOPp->SystolicArray__DOT__pes_0_0__DOT__result_buffer_man)));
    if (vlTOPp->SystolicArray__DOT__pes_0_0__DOT__fpadder__DOT___exp_diff_T) {
        vlTOPp->SystolicArray__DOT__pes_0_0__DOT__fpadder_io_out_result_exp 
            = vlTOPp->SystolicArray__DOT__pes_0_0__DOT__fpmult_io_out_result_exp;
        vlTOPp->SystolicArray__DOT__pes_0_0__DOT__fpadder_io_out_result_sign 
            = ((IData)(vlTOPp->io_in_0_0_hor_sign) 
               ^ (IData)(vlTOPp->io_in_0_0_ver_sign));
    } else {
        vlTOPp->SystolicArray__DOT__pes_0_0__DOT__fpadder_io_out_result_exp 
            = vlTOPp->SystolicArray__DOT__pes_0_0__DOT__result_buffer_exp;
        vlTOPp->SystolicArray__DOT__pes_0_0__DOT__fpadder_io_out_result_sign 
            = vlTOPp->SystolicArray__DOT__pes_0_0__DOT__result_buffer_sign;
    }
    if (((IData)(vlTOPp->SystolicArray__DOT__pes_0_1__DOT__fpmult_io_out_result_exp) 
         > (IData)(vlTOPp->SystolicArray__DOT__pes_0_1__DOT__result_buffer_exp))) {
        vlTOPp->SystolicArray__DOT__pes_0_1__DOT__fpadder__DOT__exp_diff 
            = (0xffU & ((IData)(vlTOPp->SystolicArray__DOT__pes_0_1__DOT__fpmult_io_out_result_exp) 
                        - (IData)(vlTOPp->SystolicArray__DOT__pes_0_1__DOT__result_buffer_exp)));
        vlTOPp->SystolicArray__DOT__pes_0_1__DOT__fpadder__DOT___exp_diff_T = 1U;
    } else {
        vlTOPp->SystolicArray__DOT__pes_0_1__DOT__fpadder__DOT__exp_diff 
            = (0xffU & ((IData)(vlTOPp->SystolicArray__DOT__pes_0_1__DOT__result_buffer_exp) 
                        - (IData)(vlTOPp->SystolicArray__DOT__pes_0_1__DOT__fpmult_io_out_result_exp)));
        vlTOPp->SystolicArray__DOT__pes_0_1__DOT__fpadder__DOT___exp_diff_T = 0U;
    }
    if (((IData)(vlTOPp->SystolicArray__DOT__pes_1_0__DOT__fpmult_io_out_result_exp) 
         > (IData)(vlTOPp->SystolicArray__DOT__pes_1_0__DOT__result_buffer_exp))) {
        vlTOPp->SystolicArray__DOT__pes_1_0__DOT__fpadder__DOT__exp_diff 
            = (0xffU & ((IData)(vlTOPp->SystolicArray__DOT__pes_1_0__DOT__fpmult_io_out_result_exp) 
                        - (IData)(vlTOPp->SystolicArray__DOT__pes_1_0__DOT__result_buffer_exp)));
        vlTOPp->SystolicArray__DOT__pes_1_0__DOT__fpadder__DOT___exp_diff_T = 1U;
    } else {
        vlTOPp->SystolicArray__DOT__pes_1_0__DOT__fpadder__DOT__exp_diff 
            = (0xffU & ((IData)(vlTOPp->SystolicArray__DOT__pes_1_0__DOT__result_buffer_exp) 
                        - (IData)(vlTOPp->SystolicArray__DOT__pes_1_0__DOT__fpmult_io_out_result_exp)));
        vlTOPp->SystolicArray__DOT__pes_1_0__DOT__fpadder__DOT___exp_diff_T = 0U;
    }
    vlTOPp->SystolicArray__DOT__pes_0_1__DOT__fpadder__DOT___io_out_result_man_T_3 
        = (0xfU & ((IData)(vlTOPp->SystolicArray__DOT__pes_0_1__DOT__fpmult__DOT___io_out_result_man_T) 
                   + ((3U >= (IData)(vlTOPp->SystolicArray__DOT__pes_0_1__DOT__fpadder__DOT__exp_diff))
                       ? ((IData)(vlTOPp->SystolicArray__DOT__pes_0_1__DOT__result_buffer_man) 
                          >> (IData)(vlTOPp->SystolicArray__DOT__pes_0_1__DOT__fpadder__DOT__exp_diff))
                       : 0U)));
    vlTOPp->SystolicArray__DOT__pes_0_1__DOT__fpadder__DOT___io_out_result_man_T_6 
        = (0xfU & (((3U >= (IData)(vlTOPp->SystolicArray__DOT__pes_0_1__DOT__fpadder__DOT__exp_diff))
                     ? ((0xfU & (IData)(vlTOPp->SystolicArray__DOT__pes_0_1__DOT__fpmult__DOT___io_out_result_man_T)) 
                        >> (IData)(vlTOPp->SystolicArray__DOT__pes_0_1__DOT__fpadder__DOT__exp_diff))
                     : 0U) + (IData)(vlTOPp->SystolicArray__DOT__pes_0_1__DOT__result_buffer_man)));
    if (vlTOPp->SystolicArray__DOT__pes_0_1__DOT__fpadder__DOT___exp_diff_T) {
        vlTOPp->SystolicArray__DOT__pes_0_1__DOT__fpadder_io_out_result_exp 
            = vlTOPp->SystolicArray__DOT__pes_0_1__DOT__fpmult_io_out_result_exp;
        vlTOPp->SystolicArray__DOT__pes_0_1__DOT__fpadder_io_out_result_sign 
            = ((IData)(vlTOPp->SystolicArray__DOT__pes_0_0__DOT__io_out_hor_REG_sign) 
               ^ (IData)(vlTOPp->io_in_0_1_ver_sign));
    } else {
        vlTOPp->SystolicArray__DOT__pes_0_1__DOT__fpadder_io_out_result_exp 
            = vlTOPp->SystolicArray__DOT__pes_0_1__DOT__result_buffer_exp;
        vlTOPp->SystolicArray__DOT__pes_0_1__DOT__fpadder_io_out_result_sign 
            = vlTOPp->SystolicArray__DOT__pes_0_1__DOT__result_buffer_sign;
    }
    vlTOPp->SystolicArray__DOT__pes_1_0__DOT__fpadder__DOT___io_out_result_man_T_3 
        = (0xfU & ((IData)(vlTOPp->SystolicArray__DOT__pes_1_0__DOT__fpmult__DOT___io_out_result_man_T) 
                   + ((3U >= (IData)(vlTOPp->SystolicArray__DOT__pes_1_0__DOT__fpadder__DOT__exp_diff))
                       ? ((IData)(vlTOPp->SystolicArray__DOT__pes_1_0__DOT__result_buffer_man) 
                          >> (IData)(vlTOPp->SystolicArray__DOT__pes_1_0__DOT__fpadder__DOT__exp_diff))
                       : 0U)));
    vlTOPp->SystolicArray__DOT__pes_1_0__DOT__fpadder__DOT___io_out_result_man_T_6 
        = (0xfU & (((3U >= (IData)(vlTOPp->SystolicArray__DOT__pes_1_0__DOT__fpadder__DOT__exp_diff))
                     ? ((0xfU & (IData)(vlTOPp->SystolicArray__DOT__pes_1_0__DOT__fpmult__DOT___io_out_result_man_T)) 
                        >> (IData)(vlTOPp->SystolicArray__DOT__pes_1_0__DOT__fpadder__DOT__exp_diff))
                     : 0U) + (IData)(vlTOPp->SystolicArray__DOT__pes_1_0__DOT__result_buffer_man)));
    if (vlTOPp->SystolicArray__DOT__pes_1_0__DOT__fpadder__DOT___exp_diff_T) {
        vlTOPp->SystolicArray__DOT__pes_1_0__DOT__fpadder_io_out_result_exp 
            = vlTOPp->SystolicArray__DOT__pes_1_0__DOT__fpmult_io_out_result_exp;
        vlTOPp->SystolicArray__DOT__pes_1_0__DOT__fpadder_io_out_result_sign 
            = ((IData)(vlTOPp->io_in_1_0_hor_sign) 
               ^ (IData)(vlTOPp->SystolicArray__DOT__pes_0_0__DOT__io_out_ver_REG_sign));
    } else {
        vlTOPp->SystolicArray__DOT__pes_1_0__DOT__fpadder_io_out_result_exp 
            = vlTOPp->SystolicArray__DOT__pes_1_0__DOT__result_buffer_exp;
        vlTOPp->SystolicArray__DOT__pes_1_0__DOT__fpadder_io_out_result_sign 
            = vlTOPp->SystolicArray__DOT__pes_1_0__DOT__result_buffer_sign;
    }
}

void VSystolicArray::_eval(VSystolicArray__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSystolicArray::_eval\n"); );
    VSystolicArray* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
        vlTOPp->_sequent__TOP__3(vlSymsp);
        vlTOPp->__Vm_traceActivity[2U] = 1U;
    }
    vlTOPp->_combo__TOP__4(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

VL_INLINE_OPT QData VSystolicArray::_change_request(VSystolicArray__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSystolicArray::_change_request\n"); );
    VSystolicArray* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VSystolicArray::_change_request_1(VSystolicArray__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSystolicArray::_change_request_1\n"); );
    VSystolicArray* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VSystolicArray::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSystolicArray::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((io_in_0_0_hor_sign & 0xfeU))) {
        Verilated::overWidthError("io_in_0_0_hor_sign");}
    if (VL_UNLIKELY((io_in_0_0_hor_man & 0xf0U))) {
        Verilated::overWidthError("io_in_0_0_hor_man");}
    if (VL_UNLIKELY((io_in_0_0_ver_sign & 0xfeU))) {
        Verilated::overWidthError("io_in_0_0_ver_sign");}
    if (VL_UNLIKELY((io_in_0_0_ver_man & 0xf0U))) {
        Verilated::overWidthError("io_in_0_0_ver_man");}
    if (VL_UNLIKELY((io_in_0_1_hor_sign & 0xfeU))) {
        Verilated::overWidthError("io_in_0_1_hor_sign");}
    if (VL_UNLIKELY((io_in_0_1_hor_man & 0xf0U))) {
        Verilated::overWidthError("io_in_0_1_hor_man");}
    if (VL_UNLIKELY((io_in_0_1_ver_sign & 0xfeU))) {
        Verilated::overWidthError("io_in_0_1_ver_sign");}
    if (VL_UNLIKELY((io_in_0_1_ver_man & 0xf0U))) {
        Verilated::overWidthError("io_in_0_1_ver_man");}
    if (VL_UNLIKELY((io_in_1_0_hor_sign & 0xfeU))) {
        Verilated::overWidthError("io_in_1_0_hor_sign");}
    if (VL_UNLIKELY((io_in_1_0_hor_man & 0xf0U))) {
        Verilated::overWidthError("io_in_1_0_hor_man");}
    if (VL_UNLIKELY((io_in_1_0_ver_sign & 0xfeU))) {
        Verilated::overWidthError("io_in_1_0_ver_sign");}
    if (VL_UNLIKELY((io_in_1_0_ver_man & 0xf0U))) {
        Verilated::overWidthError("io_in_1_0_ver_man");}
    if (VL_UNLIKELY((io_in_1_1_hor_sign & 0xfeU))) {
        Verilated::overWidthError("io_in_1_1_hor_sign");}
    if (VL_UNLIKELY((io_in_1_1_hor_man & 0xf0U))) {
        Verilated::overWidthError("io_in_1_1_hor_man");}
    if (VL_UNLIKELY((io_in_1_1_ver_sign & 0xfeU))) {
        Verilated::overWidthError("io_in_1_1_ver_sign");}
    if (VL_UNLIKELY((io_in_1_1_ver_man & 0xf0U))) {
        Verilated::overWidthError("io_in_1_1_ver_man");}
}
#endif  // VL_DEBUG
