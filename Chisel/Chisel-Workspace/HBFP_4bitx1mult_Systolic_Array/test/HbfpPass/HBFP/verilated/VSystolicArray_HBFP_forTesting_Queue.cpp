// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSystolicArray_HBFP_forTesting.h for the primary calling header

#include "VSystolicArray_HBFP_forTesting_Queue.h"
#include "VSystolicArray_HBFP_forTesting__Syms.h"

//==========

VL_INLINE_OPT void VSystolicArray_HBFP_forTesting_Queue::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_0__1(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_Queue::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_0__1\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vdlyvset__ram_exp__v0 = 0U;
    this->__Vdlyvset__ram_sign_5__v0 = 0U;
    this->__Vdlyvset__ram_sign_4__v0 = 0U;
    this->__Vdlyvset__ram_sign_3__v0 = 0U;
    this->__Vdlyvset__ram_sign_2__v0 = 0U;
    this->__Vdlyvset__ram_sign_1__v0 = 0U;
    this->__Vdlyvset__ram_sign_0__v0 = 0U;
    this->__Vdlyvset__ram_sign_6__v0 = 0U;
    this->__Vdlyvset__ram_sign_7__v0 = 0U;
    this->__Vdlyvset__ram_man_7__v0 = 0U;
    this->__Vdlyvset__ram_man_6__v0 = 0U;
    this->__Vdlyvset__ram_man_3__v0 = 0U;
    this->__Vdlyvset__ram_man_2__v0 = 0U;
    this->__Vdlyvset__ram_man_5__v0 = 0U;
    this->__Vdlyvset__ram_man_1__v0 = 0U;
    this->__Vdlyvset__ram_man_4__v0 = 0U;
    this->__Vdlyvset__ram_man_0__v0 = 0U;
    if (vlTOPp->reset) {
        this->__PVT__maybe_full = 0U;
    } else {
        if (((IData)(this->__PVT__do_enq) != (IData)(this->__PVT__do_deq))) {
            this->__PVT__maybe_full = this->__PVT__do_enq;
        }
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_0_valid))) {
        this->__Vdlyvval__ram_exp__v0 = vlTOPp->io_in_hor_0_bits_exp;
        this->__Vdlyvset__ram_exp__v0 = 1U;
        this->__Vdlyvdim0__ram_exp__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_0_valid))) {
        this->__Vdlyvval__ram_sign_5__v0 = vlTOPp->io_in_hor_0_bits_sign_5;
        this->__Vdlyvset__ram_sign_5__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_5__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_0_valid))) {
        this->__Vdlyvval__ram_sign_4__v0 = vlTOPp->io_in_hor_0_bits_sign_4;
        this->__Vdlyvset__ram_sign_4__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_4__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_0_valid))) {
        this->__Vdlyvval__ram_sign_3__v0 = vlTOPp->io_in_hor_0_bits_sign_3;
        this->__Vdlyvset__ram_sign_3__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_3__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_0_valid))) {
        this->__Vdlyvval__ram_sign_2__v0 = vlTOPp->io_in_hor_0_bits_sign_2;
        this->__Vdlyvset__ram_sign_2__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_2__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_0_valid))) {
        this->__Vdlyvval__ram_sign_1__v0 = vlTOPp->io_in_hor_0_bits_sign_1;
        this->__Vdlyvset__ram_sign_1__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_1__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_0_valid))) {
        this->__Vdlyvval__ram_sign_0__v0 = vlTOPp->io_in_hor_0_bits_sign_0;
        this->__Vdlyvset__ram_sign_0__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_0__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_0_valid))) {
        this->__Vdlyvval__ram_sign_6__v0 = vlTOPp->io_in_hor_0_bits_sign_6;
        this->__Vdlyvset__ram_sign_6__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_6__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_0_valid))) {
        this->__Vdlyvval__ram_sign_7__v0 = vlTOPp->io_in_hor_0_bits_sign_7;
        this->__Vdlyvset__ram_sign_7__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_7__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_0_valid))) {
        this->__Vdlyvval__ram_man_7__v0 = vlTOPp->io_in_hor_0_bits_man_7;
        this->__Vdlyvset__ram_man_7__v0 = 1U;
        this->__Vdlyvdim0__ram_man_7__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_0_valid))) {
        this->__Vdlyvval__ram_man_6__v0 = vlTOPp->io_in_hor_0_bits_man_6;
        this->__Vdlyvset__ram_man_6__v0 = 1U;
        this->__Vdlyvdim0__ram_man_6__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_0_valid))) {
        this->__Vdlyvval__ram_man_3__v0 = vlTOPp->io_in_hor_0_bits_man_3;
        this->__Vdlyvset__ram_man_3__v0 = 1U;
        this->__Vdlyvdim0__ram_man_3__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_0_valid))) {
        this->__Vdlyvval__ram_man_2__v0 = vlTOPp->io_in_hor_0_bits_man_2;
        this->__Vdlyvset__ram_man_2__v0 = 1U;
        this->__Vdlyvdim0__ram_man_2__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_0_valid))) {
        this->__Vdlyvval__ram_man_5__v0 = vlTOPp->io_in_hor_0_bits_man_5;
        this->__Vdlyvset__ram_man_5__v0 = 1U;
        this->__Vdlyvdim0__ram_man_5__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_0_valid))) {
        this->__Vdlyvval__ram_man_1__v0 = vlTOPp->io_in_hor_0_bits_man_1;
        this->__Vdlyvset__ram_man_1__v0 = 1U;
        this->__Vdlyvdim0__ram_man_1__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_0_valid))) {
        this->__Vdlyvval__ram_man_4__v0 = vlTOPp->io_in_hor_0_bits_man_4;
        this->__Vdlyvset__ram_man_4__v0 = 1U;
        this->__Vdlyvdim0__ram_man_4__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_0_valid))) {
        this->__Vdlyvval__ram_man_0__v0 = vlTOPp->io_in_hor_0_bits_man_0;
        this->__Vdlyvset__ram_man_0__v0 = 1U;
        this->__Vdlyvdim0__ram_man_0__v0 = this->__PVT__enq_ptr_value;
    }
    if (vlTOPp->reset) {
        this->__PVT__deq_ptr_value = 0U;
    } else {
        if (this->__PVT__do_deq) {
            this->__PVT__deq_ptr_value = this->__PVT___value_T_3;
        }
    }
    if (this->__Vdlyvset__ram_exp__v0) {
        this->__PVT__ram_exp[this->__Vdlyvdim0__ram_exp__v0] 
            = this->__Vdlyvval__ram_exp__v0;
    }
    if (this->__Vdlyvset__ram_sign_5__v0) {
        this->__PVT__ram_sign_5[this->__Vdlyvdim0__ram_sign_5__v0] 
            = this->__Vdlyvval__ram_sign_5__v0;
    }
    if (this->__Vdlyvset__ram_sign_4__v0) {
        this->__PVT__ram_sign_4[this->__Vdlyvdim0__ram_sign_4__v0] 
            = this->__Vdlyvval__ram_sign_4__v0;
    }
    if (this->__Vdlyvset__ram_sign_3__v0) {
        this->__PVT__ram_sign_3[this->__Vdlyvdim0__ram_sign_3__v0] 
            = this->__Vdlyvval__ram_sign_3__v0;
    }
    if (this->__Vdlyvset__ram_sign_2__v0) {
        this->__PVT__ram_sign_2[this->__Vdlyvdim0__ram_sign_2__v0] 
            = this->__Vdlyvval__ram_sign_2__v0;
    }
    if (this->__Vdlyvset__ram_sign_1__v0) {
        this->__PVT__ram_sign_1[this->__Vdlyvdim0__ram_sign_1__v0] 
            = this->__Vdlyvval__ram_sign_1__v0;
    }
    if (this->__Vdlyvset__ram_sign_0__v0) {
        this->__PVT__ram_sign_0[this->__Vdlyvdim0__ram_sign_0__v0] 
            = this->__Vdlyvval__ram_sign_0__v0;
    }
    if (this->__Vdlyvset__ram_sign_6__v0) {
        this->__PVT__ram_sign_6[this->__Vdlyvdim0__ram_sign_6__v0] 
            = this->__Vdlyvval__ram_sign_6__v0;
    }
    if (this->__Vdlyvset__ram_sign_7__v0) {
        this->__PVT__ram_sign_7[this->__Vdlyvdim0__ram_sign_7__v0] 
            = this->__Vdlyvval__ram_sign_7__v0;
    }
    if (this->__Vdlyvset__ram_man_7__v0) {
        this->__PVT__ram_man_7[this->__Vdlyvdim0__ram_man_7__v0] 
            = this->__Vdlyvval__ram_man_7__v0;
    }
    if (this->__Vdlyvset__ram_man_6__v0) {
        this->__PVT__ram_man_6[this->__Vdlyvdim0__ram_man_6__v0] 
            = this->__Vdlyvval__ram_man_6__v0;
    }
    if (this->__Vdlyvset__ram_man_3__v0) {
        this->__PVT__ram_man_3[this->__Vdlyvdim0__ram_man_3__v0] 
            = this->__Vdlyvval__ram_man_3__v0;
    }
    if (this->__Vdlyvset__ram_man_2__v0) {
        this->__PVT__ram_man_2[this->__Vdlyvdim0__ram_man_2__v0] 
            = this->__Vdlyvval__ram_man_2__v0;
    }
    if (this->__Vdlyvset__ram_man_5__v0) {
        this->__PVT__ram_man_5[this->__Vdlyvdim0__ram_man_5__v0] 
            = this->__Vdlyvval__ram_man_5__v0;
    }
    if (this->__Vdlyvset__ram_man_1__v0) {
        this->__PVT__ram_man_1[this->__Vdlyvdim0__ram_man_1__v0] 
            = this->__Vdlyvval__ram_man_1__v0;
    }
    if (this->__Vdlyvset__ram_man_4__v0) {
        this->__PVT__ram_man_4[this->__Vdlyvdim0__ram_man_4__v0] 
            = this->__Vdlyvval__ram_man_4__v0;
    }
    if (this->__Vdlyvset__ram_man_0__v0) {
        this->__PVT__ram_man_0[this->__Vdlyvdim0__ram_man_0__v0] 
            = this->__Vdlyvval__ram_man_0__v0;
    }
    if (vlTOPp->reset) {
        this->__PVT__enq_ptr_value = 0U;
    } else {
        if (this->__PVT__do_enq) {
            this->__PVT__enq_ptr_value = this->__PVT___value_T_1;
        }
    }
    this->__PVT___value_T_3 = (0x1ffU & ((IData)(1U) 
                                         + (IData)(this->__PVT__deq_ptr_value)));
    this->__PVT___value_T_1 = (0x1ffU & ((IData)(1U) 
                                         + (IData)(this->__PVT__enq_ptr_value)));
    this->__PVT__ptr_match = ((IData)(this->__PVT__enq_ptr_value) 
                              == (IData)(this->__PVT__deq_ptr_value));
    this->__PVT__full = ((IData)(this->__PVT__ptr_match) 
                         & (IData)(this->__PVT__maybe_full));
    this->__PVT__empty = ((IData)(this->__PVT__ptr_match) 
                          & (~ (IData)(this->__PVT__maybe_full)));
}

VL_INLINE_OPT void VSystolicArray_HBFP_forTesting_Queue::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_0__18(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_Queue::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_0__18\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__do_deq = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_0_io_deq_ready) 
                           & (~ (IData)(this->__PVT__empty)));
}

VL_INLINE_OPT void VSystolicArray_HBFP_forTesting_Queue::_combo__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_0__51(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_Queue::_combo__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_0__51\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__do_enq = ((~ (IData)(this->__PVT__full)) 
                           & (IData)(vlTOPp->io_in_hor_0_valid));
}

VL_INLINE_OPT void VSystolicArray_HBFP_forTesting_Queue::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_1__2(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_Queue::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_1__2\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vdlyvset__ram_exp__v0 = 0U;
    this->__Vdlyvset__ram_sign_5__v0 = 0U;
    this->__Vdlyvset__ram_sign_4__v0 = 0U;
    this->__Vdlyvset__ram_sign_3__v0 = 0U;
    this->__Vdlyvset__ram_sign_2__v0 = 0U;
    this->__Vdlyvset__ram_sign_1__v0 = 0U;
    this->__Vdlyvset__ram_sign_0__v0 = 0U;
    this->__Vdlyvset__ram_sign_6__v0 = 0U;
    this->__Vdlyvset__ram_sign_7__v0 = 0U;
    this->__Vdlyvset__ram_man_7__v0 = 0U;
    this->__Vdlyvset__ram_man_6__v0 = 0U;
    this->__Vdlyvset__ram_man_3__v0 = 0U;
    this->__Vdlyvset__ram_man_2__v0 = 0U;
    this->__Vdlyvset__ram_man_5__v0 = 0U;
    this->__Vdlyvset__ram_man_1__v0 = 0U;
    this->__Vdlyvset__ram_man_4__v0 = 0U;
    this->__Vdlyvset__ram_man_0__v0 = 0U;
    if (vlTOPp->reset) {
        this->__PVT__maybe_full = 0U;
    } else {
        if (((IData)(this->__PVT__do_enq) != (IData)(this->__PVT__do_deq))) {
            this->__PVT__maybe_full = this->__PVT__do_enq;
        }
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_1_valid))) {
        this->__Vdlyvval__ram_exp__v0 = vlTOPp->io_in_hor_1_bits_exp;
        this->__Vdlyvset__ram_exp__v0 = 1U;
        this->__Vdlyvdim0__ram_exp__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_1_valid))) {
        this->__Vdlyvval__ram_sign_5__v0 = vlTOPp->io_in_hor_1_bits_sign_5;
        this->__Vdlyvset__ram_sign_5__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_5__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_1_valid))) {
        this->__Vdlyvval__ram_sign_4__v0 = vlTOPp->io_in_hor_1_bits_sign_4;
        this->__Vdlyvset__ram_sign_4__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_4__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_1_valid))) {
        this->__Vdlyvval__ram_sign_3__v0 = vlTOPp->io_in_hor_1_bits_sign_3;
        this->__Vdlyvset__ram_sign_3__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_3__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_1_valid))) {
        this->__Vdlyvval__ram_sign_2__v0 = vlTOPp->io_in_hor_1_bits_sign_2;
        this->__Vdlyvset__ram_sign_2__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_2__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_1_valid))) {
        this->__Vdlyvval__ram_sign_1__v0 = vlTOPp->io_in_hor_1_bits_sign_1;
        this->__Vdlyvset__ram_sign_1__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_1__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_1_valid))) {
        this->__Vdlyvval__ram_sign_0__v0 = vlTOPp->io_in_hor_1_bits_sign_0;
        this->__Vdlyvset__ram_sign_0__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_0__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_1_valid))) {
        this->__Vdlyvval__ram_sign_6__v0 = vlTOPp->io_in_hor_1_bits_sign_6;
        this->__Vdlyvset__ram_sign_6__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_6__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_1_valid))) {
        this->__Vdlyvval__ram_sign_7__v0 = vlTOPp->io_in_hor_1_bits_sign_7;
        this->__Vdlyvset__ram_sign_7__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_7__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_1_valid))) {
        this->__Vdlyvval__ram_man_7__v0 = vlTOPp->io_in_hor_1_bits_man_7;
        this->__Vdlyvset__ram_man_7__v0 = 1U;
        this->__Vdlyvdim0__ram_man_7__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_1_valid))) {
        this->__Vdlyvval__ram_man_6__v0 = vlTOPp->io_in_hor_1_bits_man_6;
        this->__Vdlyvset__ram_man_6__v0 = 1U;
        this->__Vdlyvdim0__ram_man_6__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_1_valid))) {
        this->__Vdlyvval__ram_man_3__v0 = vlTOPp->io_in_hor_1_bits_man_3;
        this->__Vdlyvset__ram_man_3__v0 = 1U;
        this->__Vdlyvdim0__ram_man_3__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_1_valid))) {
        this->__Vdlyvval__ram_man_2__v0 = vlTOPp->io_in_hor_1_bits_man_2;
        this->__Vdlyvset__ram_man_2__v0 = 1U;
        this->__Vdlyvdim0__ram_man_2__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_1_valid))) {
        this->__Vdlyvval__ram_man_5__v0 = vlTOPp->io_in_hor_1_bits_man_5;
        this->__Vdlyvset__ram_man_5__v0 = 1U;
        this->__Vdlyvdim0__ram_man_5__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_1_valid))) {
        this->__Vdlyvval__ram_man_1__v0 = vlTOPp->io_in_hor_1_bits_man_1;
        this->__Vdlyvset__ram_man_1__v0 = 1U;
        this->__Vdlyvdim0__ram_man_1__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_1_valid))) {
        this->__Vdlyvval__ram_man_4__v0 = vlTOPp->io_in_hor_1_bits_man_4;
        this->__Vdlyvset__ram_man_4__v0 = 1U;
        this->__Vdlyvdim0__ram_man_4__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_1_valid))) {
        this->__Vdlyvval__ram_man_0__v0 = vlTOPp->io_in_hor_1_bits_man_0;
        this->__Vdlyvset__ram_man_0__v0 = 1U;
        this->__Vdlyvdim0__ram_man_0__v0 = this->__PVT__enq_ptr_value;
    }
    if (vlTOPp->reset) {
        this->__PVT__deq_ptr_value = 0U;
    } else {
        if (this->__PVT__do_deq) {
            this->__PVT__deq_ptr_value = this->__PVT___value_T_3;
        }
    }
    if (this->__Vdlyvset__ram_exp__v0) {
        this->__PVT__ram_exp[this->__Vdlyvdim0__ram_exp__v0] 
            = this->__Vdlyvval__ram_exp__v0;
    }
    if (this->__Vdlyvset__ram_sign_5__v0) {
        this->__PVT__ram_sign_5[this->__Vdlyvdim0__ram_sign_5__v0] 
            = this->__Vdlyvval__ram_sign_5__v0;
    }
    if (this->__Vdlyvset__ram_sign_4__v0) {
        this->__PVT__ram_sign_4[this->__Vdlyvdim0__ram_sign_4__v0] 
            = this->__Vdlyvval__ram_sign_4__v0;
    }
    if (this->__Vdlyvset__ram_sign_3__v0) {
        this->__PVT__ram_sign_3[this->__Vdlyvdim0__ram_sign_3__v0] 
            = this->__Vdlyvval__ram_sign_3__v0;
    }
    if (this->__Vdlyvset__ram_sign_2__v0) {
        this->__PVT__ram_sign_2[this->__Vdlyvdim0__ram_sign_2__v0] 
            = this->__Vdlyvval__ram_sign_2__v0;
    }
    if (this->__Vdlyvset__ram_sign_1__v0) {
        this->__PVT__ram_sign_1[this->__Vdlyvdim0__ram_sign_1__v0] 
            = this->__Vdlyvval__ram_sign_1__v0;
    }
    if (this->__Vdlyvset__ram_sign_0__v0) {
        this->__PVT__ram_sign_0[this->__Vdlyvdim0__ram_sign_0__v0] 
            = this->__Vdlyvval__ram_sign_0__v0;
    }
    if (this->__Vdlyvset__ram_sign_6__v0) {
        this->__PVT__ram_sign_6[this->__Vdlyvdim0__ram_sign_6__v0] 
            = this->__Vdlyvval__ram_sign_6__v0;
    }
    if (this->__Vdlyvset__ram_sign_7__v0) {
        this->__PVT__ram_sign_7[this->__Vdlyvdim0__ram_sign_7__v0] 
            = this->__Vdlyvval__ram_sign_7__v0;
    }
    if (this->__Vdlyvset__ram_man_7__v0) {
        this->__PVT__ram_man_7[this->__Vdlyvdim0__ram_man_7__v0] 
            = this->__Vdlyvval__ram_man_7__v0;
    }
    if (this->__Vdlyvset__ram_man_6__v0) {
        this->__PVT__ram_man_6[this->__Vdlyvdim0__ram_man_6__v0] 
            = this->__Vdlyvval__ram_man_6__v0;
    }
    if (this->__Vdlyvset__ram_man_3__v0) {
        this->__PVT__ram_man_3[this->__Vdlyvdim0__ram_man_3__v0] 
            = this->__Vdlyvval__ram_man_3__v0;
    }
    if (this->__Vdlyvset__ram_man_2__v0) {
        this->__PVT__ram_man_2[this->__Vdlyvdim0__ram_man_2__v0] 
            = this->__Vdlyvval__ram_man_2__v0;
    }
    if (this->__Vdlyvset__ram_man_5__v0) {
        this->__PVT__ram_man_5[this->__Vdlyvdim0__ram_man_5__v0] 
            = this->__Vdlyvval__ram_man_5__v0;
    }
    if (this->__Vdlyvset__ram_man_1__v0) {
        this->__PVT__ram_man_1[this->__Vdlyvdim0__ram_man_1__v0] 
            = this->__Vdlyvval__ram_man_1__v0;
    }
    if (this->__Vdlyvset__ram_man_4__v0) {
        this->__PVT__ram_man_4[this->__Vdlyvdim0__ram_man_4__v0] 
            = this->__Vdlyvval__ram_man_4__v0;
    }
    if (this->__Vdlyvset__ram_man_0__v0) {
        this->__PVT__ram_man_0[this->__Vdlyvdim0__ram_man_0__v0] 
            = this->__Vdlyvval__ram_man_0__v0;
    }
    if (vlTOPp->reset) {
        this->__PVT__enq_ptr_value = 0U;
    } else {
        if (this->__PVT__do_enq) {
            this->__PVT__enq_ptr_value = this->__PVT___value_T_1;
        }
    }
    this->__PVT___value_T_3 = (0x1ffU & ((IData)(1U) 
                                         + (IData)(this->__PVT__deq_ptr_value)));
    this->__PVT___value_T_1 = (0x1ffU & ((IData)(1U) 
                                         + (IData)(this->__PVT__enq_ptr_value)));
    this->__PVT__ptr_match = ((IData)(this->__PVT__enq_ptr_value) 
                              == (IData)(this->__PVT__deq_ptr_value));
    this->__PVT__full = ((IData)(this->__PVT__ptr_match) 
                         & (IData)(this->__PVT__maybe_full));
    this->__PVT__empty = ((IData)(this->__PVT__ptr_match) 
                          & (~ (IData)(this->__PVT__maybe_full)));
}

VL_INLINE_OPT void VSystolicArray_HBFP_forTesting_Queue::_combo__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_1__52(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_Queue::_combo__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_1__52\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__do_enq = ((~ (IData)(this->__PVT__full)) 
                           & (IData)(vlTOPp->io_in_hor_1_valid));
    this->__PVT__do_deq = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_1_io_deq_ready) 
                           & (~ (IData)(this->__PVT__empty)));
}

VL_INLINE_OPT void VSystolicArray_HBFP_forTesting_Queue::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_2__3(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_Queue::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_2__3\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vdlyvset__ram_exp__v0 = 0U;
    this->__Vdlyvset__ram_sign_5__v0 = 0U;
    this->__Vdlyvset__ram_sign_4__v0 = 0U;
    this->__Vdlyvset__ram_sign_3__v0 = 0U;
    this->__Vdlyvset__ram_sign_2__v0 = 0U;
    this->__Vdlyvset__ram_sign_1__v0 = 0U;
    this->__Vdlyvset__ram_sign_0__v0 = 0U;
    this->__Vdlyvset__ram_sign_6__v0 = 0U;
    this->__Vdlyvset__ram_sign_7__v0 = 0U;
    this->__Vdlyvset__ram_man_7__v0 = 0U;
    this->__Vdlyvset__ram_man_6__v0 = 0U;
    this->__Vdlyvset__ram_man_3__v0 = 0U;
    this->__Vdlyvset__ram_man_2__v0 = 0U;
    this->__Vdlyvset__ram_man_5__v0 = 0U;
    this->__Vdlyvset__ram_man_1__v0 = 0U;
    this->__Vdlyvset__ram_man_4__v0 = 0U;
    this->__Vdlyvset__ram_man_0__v0 = 0U;
    if (vlTOPp->reset) {
        this->__PVT__maybe_full = 0U;
    } else {
        if (((IData)(this->__PVT__do_enq) != (IData)(this->__PVT__do_deq))) {
            this->__PVT__maybe_full = this->__PVT__do_enq;
        }
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_2_valid))) {
        this->__Vdlyvval__ram_exp__v0 = vlTOPp->io_in_hor_2_bits_exp;
        this->__Vdlyvset__ram_exp__v0 = 1U;
        this->__Vdlyvdim0__ram_exp__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_2_valid))) {
        this->__Vdlyvval__ram_sign_5__v0 = vlTOPp->io_in_hor_2_bits_sign_5;
        this->__Vdlyvset__ram_sign_5__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_5__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_2_valid))) {
        this->__Vdlyvval__ram_sign_4__v0 = vlTOPp->io_in_hor_2_bits_sign_4;
        this->__Vdlyvset__ram_sign_4__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_4__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_2_valid))) {
        this->__Vdlyvval__ram_sign_3__v0 = vlTOPp->io_in_hor_2_bits_sign_3;
        this->__Vdlyvset__ram_sign_3__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_3__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_2_valid))) {
        this->__Vdlyvval__ram_sign_2__v0 = vlTOPp->io_in_hor_2_bits_sign_2;
        this->__Vdlyvset__ram_sign_2__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_2__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_2_valid))) {
        this->__Vdlyvval__ram_sign_1__v0 = vlTOPp->io_in_hor_2_bits_sign_1;
        this->__Vdlyvset__ram_sign_1__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_1__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_2_valid))) {
        this->__Vdlyvval__ram_sign_0__v0 = vlTOPp->io_in_hor_2_bits_sign_0;
        this->__Vdlyvset__ram_sign_0__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_0__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_2_valid))) {
        this->__Vdlyvval__ram_sign_6__v0 = vlTOPp->io_in_hor_2_bits_sign_6;
        this->__Vdlyvset__ram_sign_6__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_6__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_2_valid))) {
        this->__Vdlyvval__ram_sign_7__v0 = vlTOPp->io_in_hor_2_bits_sign_7;
        this->__Vdlyvset__ram_sign_7__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_7__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_2_valid))) {
        this->__Vdlyvval__ram_man_7__v0 = vlTOPp->io_in_hor_2_bits_man_7;
        this->__Vdlyvset__ram_man_7__v0 = 1U;
        this->__Vdlyvdim0__ram_man_7__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_2_valid))) {
        this->__Vdlyvval__ram_man_6__v0 = vlTOPp->io_in_hor_2_bits_man_6;
        this->__Vdlyvset__ram_man_6__v0 = 1U;
        this->__Vdlyvdim0__ram_man_6__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_2_valid))) {
        this->__Vdlyvval__ram_man_3__v0 = vlTOPp->io_in_hor_2_bits_man_3;
        this->__Vdlyvset__ram_man_3__v0 = 1U;
        this->__Vdlyvdim0__ram_man_3__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_2_valid))) {
        this->__Vdlyvval__ram_man_2__v0 = vlTOPp->io_in_hor_2_bits_man_2;
        this->__Vdlyvset__ram_man_2__v0 = 1U;
        this->__Vdlyvdim0__ram_man_2__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_2_valid))) {
        this->__Vdlyvval__ram_man_5__v0 = vlTOPp->io_in_hor_2_bits_man_5;
        this->__Vdlyvset__ram_man_5__v0 = 1U;
        this->__Vdlyvdim0__ram_man_5__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_2_valid))) {
        this->__Vdlyvval__ram_man_1__v0 = vlTOPp->io_in_hor_2_bits_man_1;
        this->__Vdlyvset__ram_man_1__v0 = 1U;
        this->__Vdlyvdim0__ram_man_1__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_2_valid))) {
        this->__Vdlyvval__ram_man_4__v0 = vlTOPp->io_in_hor_2_bits_man_4;
        this->__Vdlyvset__ram_man_4__v0 = 1U;
        this->__Vdlyvdim0__ram_man_4__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_2_valid))) {
        this->__Vdlyvval__ram_man_0__v0 = vlTOPp->io_in_hor_2_bits_man_0;
        this->__Vdlyvset__ram_man_0__v0 = 1U;
        this->__Vdlyvdim0__ram_man_0__v0 = this->__PVT__enq_ptr_value;
    }
    if (vlTOPp->reset) {
        this->__PVT__deq_ptr_value = 0U;
    } else {
        if (this->__PVT__do_deq) {
            this->__PVT__deq_ptr_value = this->__PVT___value_T_3;
        }
    }
    if (this->__Vdlyvset__ram_exp__v0) {
        this->__PVT__ram_exp[this->__Vdlyvdim0__ram_exp__v0] 
            = this->__Vdlyvval__ram_exp__v0;
    }
    if (this->__Vdlyvset__ram_sign_5__v0) {
        this->__PVT__ram_sign_5[this->__Vdlyvdim0__ram_sign_5__v0] 
            = this->__Vdlyvval__ram_sign_5__v0;
    }
    if (this->__Vdlyvset__ram_sign_4__v0) {
        this->__PVT__ram_sign_4[this->__Vdlyvdim0__ram_sign_4__v0] 
            = this->__Vdlyvval__ram_sign_4__v0;
    }
    if (this->__Vdlyvset__ram_sign_3__v0) {
        this->__PVT__ram_sign_3[this->__Vdlyvdim0__ram_sign_3__v0] 
            = this->__Vdlyvval__ram_sign_3__v0;
    }
    if (this->__Vdlyvset__ram_sign_2__v0) {
        this->__PVT__ram_sign_2[this->__Vdlyvdim0__ram_sign_2__v0] 
            = this->__Vdlyvval__ram_sign_2__v0;
    }
    if (this->__Vdlyvset__ram_sign_1__v0) {
        this->__PVT__ram_sign_1[this->__Vdlyvdim0__ram_sign_1__v0] 
            = this->__Vdlyvval__ram_sign_1__v0;
    }
    if (this->__Vdlyvset__ram_sign_0__v0) {
        this->__PVT__ram_sign_0[this->__Vdlyvdim0__ram_sign_0__v0] 
            = this->__Vdlyvval__ram_sign_0__v0;
    }
    if (this->__Vdlyvset__ram_sign_6__v0) {
        this->__PVT__ram_sign_6[this->__Vdlyvdim0__ram_sign_6__v0] 
            = this->__Vdlyvval__ram_sign_6__v0;
    }
    if (this->__Vdlyvset__ram_sign_7__v0) {
        this->__PVT__ram_sign_7[this->__Vdlyvdim0__ram_sign_7__v0] 
            = this->__Vdlyvval__ram_sign_7__v0;
    }
    if (this->__Vdlyvset__ram_man_7__v0) {
        this->__PVT__ram_man_7[this->__Vdlyvdim0__ram_man_7__v0] 
            = this->__Vdlyvval__ram_man_7__v0;
    }
    if (this->__Vdlyvset__ram_man_6__v0) {
        this->__PVT__ram_man_6[this->__Vdlyvdim0__ram_man_6__v0] 
            = this->__Vdlyvval__ram_man_6__v0;
    }
    if (this->__Vdlyvset__ram_man_3__v0) {
        this->__PVT__ram_man_3[this->__Vdlyvdim0__ram_man_3__v0] 
            = this->__Vdlyvval__ram_man_3__v0;
    }
    if (this->__Vdlyvset__ram_man_2__v0) {
        this->__PVT__ram_man_2[this->__Vdlyvdim0__ram_man_2__v0] 
            = this->__Vdlyvval__ram_man_2__v0;
    }
    if (this->__Vdlyvset__ram_man_5__v0) {
        this->__PVT__ram_man_5[this->__Vdlyvdim0__ram_man_5__v0] 
            = this->__Vdlyvval__ram_man_5__v0;
    }
    if (this->__Vdlyvset__ram_man_1__v0) {
        this->__PVT__ram_man_1[this->__Vdlyvdim0__ram_man_1__v0] 
            = this->__Vdlyvval__ram_man_1__v0;
    }
    if (this->__Vdlyvset__ram_man_4__v0) {
        this->__PVT__ram_man_4[this->__Vdlyvdim0__ram_man_4__v0] 
            = this->__Vdlyvval__ram_man_4__v0;
    }
    if (this->__Vdlyvset__ram_man_0__v0) {
        this->__PVT__ram_man_0[this->__Vdlyvdim0__ram_man_0__v0] 
            = this->__Vdlyvval__ram_man_0__v0;
    }
    if (vlTOPp->reset) {
        this->__PVT__enq_ptr_value = 0U;
    } else {
        if (this->__PVT__do_enq) {
            this->__PVT__enq_ptr_value = this->__PVT___value_T_1;
        }
    }
    this->__PVT___value_T_3 = (0x1ffU & ((IData)(1U) 
                                         + (IData)(this->__PVT__deq_ptr_value)));
    this->__PVT___value_T_1 = (0x1ffU & ((IData)(1U) 
                                         + (IData)(this->__PVT__enq_ptr_value)));
    this->__PVT__ptr_match = ((IData)(this->__PVT__enq_ptr_value) 
                              == (IData)(this->__PVT__deq_ptr_value));
    this->__PVT__full = ((IData)(this->__PVT__ptr_match) 
                         & (IData)(this->__PVT__maybe_full));
    this->__PVT__empty = ((IData)(this->__PVT__ptr_match) 
                          & (~ (IData)(this->__PVT__maybe_full)));
}

VL_INLINE_OPT void VSystolicArray_HBFP_forTesting_Queue::_combo__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_2__53(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_Queue::_combo__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_2__53\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__do_enq = ((~ (IData)(this->__PVT__full)) 
                           & (IData)(vlTOPp->io_in_hor_2_valid));
    this->__PVT__do_deq = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_2_io_deq_ready) 
                           & (~ (IData)(this->__PVT__empty)));
}

VL_INLINE_OPT void VSystolicArray_HBFP_forTesting_Queue::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_3__4(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_Queue::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_3__4\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vdlyvset__ram_exp__v0 = 0U;
    this->__Vdlyvset__ram_sign_5__v0 = 0U;
    this->__Vdlyvset__ram_sign_4__v0 = 0U;
    this->__Vdlyvset__ram_sign_3__v0 = 0U;
    this->__Vdlyvset__ram_sign_2__v0 = 0U;
    this->__Vdlyvset__ram_sign_1__v0 = 0U;
    this->__Vdlyvset__ram_sign_0__v0 = 0U;
    this->__Vdlyvset__ram_sign_6__v0 = 0U;
    this->__Vdlyvset__ram_sign_7__v0 = 0U;
    this->__Vdlyvset__ram_man_7__v0 = 0U;
    this->__Vdlyvset__ram_man_6__v0 = 0U;
    this->__Vdlyvset__ram_man_3__v0 = 0U;
    this->__Vdlyvset__ram_man_2__v0 = 0U;
    this->__Vdlyvset__ram_man_5__v0 = 0U;
    this->__Vdlyvset__ram_man_1__v0 = 0U;
    this->__Vdlyvset__ram_man_4__v0 = 0U;
    this->__Vdlyvset__ram_man_0__v0 = 0U;
    if (vlTOPp->reset) {
        this->__PVT__maybe_full = 0U;
    } else {
        if (((IData)(this->__PVT__do_enq) != (IData)(this->__PVT__do_deq))) {
            this->__PVT__maybe_full = this->__PVT__do_enq;
        }
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_3_valid))) {
        this->__Vdlyvval__ram_exp__v0 = vlTOPp->io_in_hor_3_bits_exp;
        this->__Vdlyvset__ram_exp__v0 = 1U;
        this->__Vdlyvdim0__ram_exp__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_3_valid))) {
        this->__Vdlyvval__ram_sign_5__v0 = vlTOPp->io_in_hor_3_bits_sign_5;
        this->__Vdlyvset__ram_sign_5__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_5__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_3_valid))) {
        this->__Vdlyvval__ram_sign_4__v0 = vlTOPp->io_in_hor_3_bits_sign_4;
        this->__Vdlyvset__ram_sign_4__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_4__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_3_valid))) {
        this->__Vdlyvval__ram_sign_3__v0 = vlTOPp->io_in_hor_3_bits_sign_3;
        this->__Vdlyvset__ram_sign_3__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_3__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_3_valid))) {
        this->__Vdlyvval__ram_sign_2__v0 = vlTOPp->io_in_hor_3_bits_sign_2;
        this->__Vdlyvset__ram_sign_2__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_2__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_3_valid))) {
        this->__Vdlyvval__ram_sign_1__v0 = vlTOPp->io_in_hor_3_bits_sign_1;
        this->__Vdlyvset__ram_sign_1__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_1__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_3_valid))) {
        this->__Vdlyvval__ram_sign_0__v0 = vlTOPp->io_in_hor_3_bits_sign_0;
        this->__Vdlyvset__ram_sign_0__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_0__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_3_valid))) {
        this->__Vdlyvval__ram_sign_6__v0 = vlTOPp->io_in_hor_3_bits_sign_6;
        this->__Vdlyvset__ram_sign_6__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_6__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_3_valid))) {
        this->__Vdlyvval__ram_sign_7__v0 = vlTOPp->io_in_hor_3_bits_sign_7;
        this->__Vdlyvset__ram_sign_7__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_7__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_3_valid))) {
        this->__Vdlyvval__ram_man_7__v0 = vlTOPp->io_in_hor_3_bits_man_7;
        this->__Vdlyvset__ram_man_7__v0 = 1U;
        this->__Vdlyvdim0__ram_man_7__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_3_valid))) {
        this->__Vdlyvval__ram_man_6__v0 = vlTOPp->io_in_hor_3_bits_man_6;
        this->__Vdlyvset__ram_man_6__v0 = 1U;
        this->__Vdlyvdim0__ram_man_6__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_3_valid))) {
        this->__Vdlyvval__ram_man_3__v0 = vlTOPp->io_in_hor_3_bits_man_3;
        this->__Vdlyvset__ram_man_3__v0 = 1U;
        this->__Vdlyvdim0__ram_man_3__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_3_valid))) {
        this->__Vdlyvval__ram_man_2__v0 = vlTOPp->io_in_hor_3_bits_man_2;
        this->__Vdlyvset__ram_man_2__v0 = 1U;
        this->__Vdlyvdim0__ram_man_2__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_3_valid))) {
        this->__Vdlyvval__ram_man_5__v0 = vlTOPp->io_in_hor_3_bits_man_5;
        this->__Vdlyvset__ram_man_5__v0 = 1U;
        this->__Vdlyvdim0__ram_man_5__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_3_valid))) {
        this->__Vdlyvval__ram_man_1__v0 = vlTOPp->io_in_hor_3_bits_man_1;
        this->__Vdlyvset__ram_man_1__v0 = 1U;
        this->__Vdlyvdim0__ram_man_1__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_3_valid))) {
        this->__Vdlyvval__ram_man_4__v0 = vlTOPp->io_in_hor_3_bits_man_4;
        this->__Vdlyvset__ram_man_4__v0 = 1U;
        this->__Vdlyvdim0__ram_man_4__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_3_valid))) {
        this->__Vdlyvval__ram_man_0__v0 = vlTOPp->io_in_hor_3_bits_man_0;
        this->__Vdlyvset__ram_man_0__v0 = 1U;
        this->__Vdlyvdim0__ram_man_0__v0 = this->__PVT__enq_ptr_value;
    }
    if (vlTOPp->reset) {
        this->__PVT__deq_ptr_value = 0U;
    } else {
        if (this->__PVT__do_deq) {
            this->__PVT__deq_ptr_value = this->__PVT___value_T_3;
        }
    }
    if (this->__Vdlyvset__ram_exp__v0) {
        this->__PVT__ram_exp[this->__Vdlyvdim0__ram_exp__v0] 
            = this->__Vdlyvval__ram_exp__v0;
    }
    if (this->__Vdlyvset__ram_sign_5__v0) {
        this->__PVT__ram_sign_5[this->__Vdlyvdim0__ram_sign_5__v0] 
            = this->__Vdlyvval__ram_sign_5__v0;
    }
    if (this->__Vdlyvset__ram_sign_4__v0) {
        this->__PVT__ram_sign_4[this->__Vdlyvdim0__ram_sign_4__v0] 
            = this->__Vdlyvval__ram_sign_4__v0;
    }
    if (this->__Vdlyvset__ram_sign_3__v0) {
        this->__PVT__ram_sign_3[this->__Vdlyvdim0__ram_sign_3__v0] 
            = this->__Vdlyvval__ram_sign_3__v0;
    }
    if (this->__Vdlyvset__ram_sign_2__v0) {
        this->__PVT__ram_sign_2[this->__Vdlyvdim0__ram_sign_2__v0] 
            = this->__Vdlyvval__ram_sign_2__v0;
    }
    if (this->__Vdlyvset__ram_sign_1__v0) {
        this->__PVT__ram_sign_1[this->__Vdlyvdim0__ram_sign_1__v0] 
            = this->__Vdlyvval__ram_sign_1__v0;
    }
    if (this->__Vdlyvset__ram_sign_0__v0) {
        this->__PVT__ram_sign_0[this->__Vdlyvdim0__ram_sign_0__v0] 
            = this->__Vdlyvval__ram_sign_0__v0;
    }
    if (this->__Vdlyvset__ram_sign_6__v0) {
        this->__PVT__ram_sign_6[this->__Vdlyvdim0__ram_sign_6__v0] 
            = this->__Vdlyvval__ram_sign_6__v0;
    }
    if (this->__Vdlyvset__ram_sign_7__v0) {
        this->__PVT__ram_sign_7[this->__Vdlyvdim0__ram_sign_7__v0] 
            = this->__Vdlyvval__ram_sign_7__v0;
    }
    if (this->__Vdlyvset__ram_man_7__v0) {
        this->__PVT__ram_man_7[this->__Vdlyvdim0__ram_man_7__v0] 
            = this->__Vdlyvval__ram_man_7__v0;
    }
    if (this->__Vdlyvset__ram_man_6__v0) {
        this->__PVT__ram_man_6[this->__Vdlyvdim0__ram_man_6__v0] 
            = this->__Vdlyvval__ram_man_6__v0;
    }
    if (this->__Vdlyvset__ram_man_3__v0) {
        this->__PVT__ram_man_3[this->__Vdlyvdim0__ram_man_3__v0] 
            = this->__Vdlyvval__ram_man_3__v0;
    }
    if (this->__Vdlyvset__ram_man_2__v0) {
        this->__PVT__ram_man_2[this->__Vdlyvdim0__ram_man_2__v0] 
            = this->__Vdlyvval__ram_man_2__v0;
    }
    if (this->__Vdlyvset__ram_man_5__v0) {
        this->__PVT__ram_man_5[this->__Vdlyvdim0__ram_man_5__v0] 
            = this->__Vdlyvval__ram_man_5__v0;
    }
    if (this->__Vdlyvset__ram_man_1__v0) {
        this->__PVT__ram_man_1[this->__Vdlyvdim0__ram_man_1__v0] 
            = this->__Vdlyvval__ram_man_1__v0;
    }
    if (this->__Vdlyvset__ram_man_4__v0) {
        this->__PVT__ram_man_4[this->__Vdlyvdim0__ram_man_4__v0] 
            = this->__Vdlyvval__ram_man_4__v0;
    }
    if (this->__Vdlyvset__ram_man_0__v0) {
        this->__PVT__ram_man_0[this->__Vdlyvdim0__ram_man_0__v0] 
            = this->__Vdlyvval__ram_man_0__v0;
    }
    if (vlTOPp->reset) {
        this->__PVT__enq_ptr_value = 0U;
    } else {
        if (this->__PVT__do_enq) {
            this->__PVT__enq_ptr_value = this->__PVT___value_T_1;
        }
    }
    this->__PVT___value_T_3 = (0x1ffU & ((IData)(1U) 
                                         + (IData)(this->__PVT__deq_ptr_value)));
    this->__PVT___value_T_1 = (0x1ffU & ((IData)(1U) 
                                         + (IData)(this->__PVT__enq_ptr_value)));
    this->__PVT__ptr_match = ((IData)(this->__PVT__enq_ptr_value) 
                              == (IData)(this->__PVT__deq_ptr_value));
    this->__PVT__full = ((IData)(this->__PVT__ptr_match) 
                         & (IData)(this->__PVT__maybe_full));
    this->__PVT__empty = ((IData)(this->__PVT__ptr_match) 
                          & (~ (IData)(this->__PVT__maybe_full)));
}

VL_INLINE_OPT void VSystolicArray_HBFP_forTesting_Queue::_combo__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_3__54(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_Queue::_combo__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_3__54\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__do_enq = ((~ (IData)(this->__PVT__full)) 
                           & (IData)(vlTOPp->io_in_hor_3_valid));
    this->__PVT__do_deq = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_3_io_deq_ready) 
                           & (~ (IData)(this->__PVT__empty)));
}

VL_INLINE_OPT void VSystolicArray_HBFP_forTesting_Queue::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_4__5(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_Queue::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_4__5\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vdlyvset__ram_exp__v0 = 0U;
    this->__Vdlyvset__ram_sign_5__v0 = 0U;
    this->__Vdlyvset__ram_sign_4__v0 = 0U;
    this->__Vdlyvset__ram_sign_3__v0 = 0U;
    this->__Vdlyvset__ram_sign_2__v0 = 0U;
    this->__Vdlyvset__ram_sign_1__v0 = 0U;
    this->__Vdlyvset__ram_sign_0__v0 = 0U;
    this->__Vdlyvset__ram_sign_6__v0 = 0U;
    this->__Vdlyvset__ram_sign_7__v0 = 0U;
    this->__Vdlyvset__ram_man_7__v0 = 0U;
    this->__Vdlyvset__ram_man_6__v0 = 0U;
    this->__Vdlyvset__ram_man_3__v0 = 0U;
    this->__Vdlyvset__ram_man_2__v0 = 0U;
    this->__Vdlyvset__ram_man_5__v0 = 0U;
    this->__Vdlyvset__ram_man_1__v0 = 0U;
    this->__Vdlyvset__ram_man_4__v0 = 0U;
    this->__Vdlyvset__ram_man_0__v0 = 0U;
    if (vlTOPp->reset) {
        this->__PVT__maybe_full = 0U;
    } else {
        if (((IData)(this->__PVT__do_enq) != (IData)(this->__PVT__do_deq))) {
            this->__PVT__maybe_full = this->__PVT__do_enq;
        }
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_4_valid))) {
        this->__Vdlyvval__ram_exp__v0 = vlTOPp->io_in_hor_4_bits_exp;
        this->__Vdlyvset__ram_exp__v0 = 1U;
        this->__Vdlyvdim0__ram_exp__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_4_valid))) {
        this->__Vdlyvval__ram_sign_5__v0 = vlTOPp->io_in_hor_4_bits_sign_5;
        this->__Vdlyvset__ram_sign_5__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_5__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_4_valid))) {
        this->__Vdlyvval__ram_sign_4__v0 = vlTOPp->io_in_hor_4_bits_sign_4;
        this->__Vdlyvset__ram_sign_4__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_4__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_4_valid))) {
        this->__Vdlyvval__ram_sign_3__v0 = vlTOPp->io_in_hor_4_bits_sign_3;
        this->__Vdlyvset__ram_sign_3__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_3__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_4_valid))) {
        this->__Vdlyvval__ram_sign_2__v0 = vlTOPp->io_in_hor_4_bits_sign_2;
        this->__Vdlyvset__ram_sign_2__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_2__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_4_valid))) {
        this->__Vdlyvval__ram_sign_1__v0 = vlTOPp->io_in_hor_4_bits_sign_1;
        this->__Vdlyvset__ram_sign_1__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_1__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_4_valid))) {
        this->__Vdlyvval__ram_sign_0__v0 = vlTOPp->io_in_hor_4_bits_sign_0;
        this->__Vdlyvset__ram_sign_0__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_0__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_4_valid))) {
        this->__Vdlyvval__ram_sign_6__v0 = vlTOPp->io_in_hor_4_bits_sign_6;
        this->__Vdlyvset__ram_sign_6__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_6__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_4_valid))) {
        this->__Vdlyvval__ram_sign_7__v0 = vlTOPp->io_in_hor_4_bits_sign_7;
        this->__Vdlyvset__ram_sign_7__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_7__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_4_valid))) {
        this->__Vdlyvval__ram_man_7__v0 = vlTOPp->io_in_hor_4_bits_man_7;
        this->__Vdlyvset__ram_man_7__v0 = 1U;
        this->__Vdlyvdim0__ram_man_7__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_4_valid))) {
        this->__Vdlyvval__ram_man_6__v0 = vlTOPp->io_in_hor_4_bits_man_6;
        this->__Vdlyvset__ram_man_6__v0 = 1U;
        this->__Vdlyvdim0__ram_man_6__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_4_valid))) {
        this->__Vdlyvval__ram_man_3__v0 = vlTOPp->io_in_hor_4_bits_man_3;
        this->__Vdlyvset__ram_man_3__v0 = 1U;
        this->__Vdlyvdim0__ram_man_3__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_4_valid))) {
        this->__Vdlyvval__ram_man_2__v0 = vlTOPp->io_in_hor_4_bits_man_2;
        this->__Vdlyvset__ram_man_2__v0 = 1U;
        this->__Vdlyvdim0__ram_man_2__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_4_valid))) {
        this->__Vdlyvval__ram_man_5__v0 = vlTOPp->io_in_hor_4_bits_man_5;
        this->__Vdlyvset__ram_man_5__v0 = 1U;
        this->__Vdlyvdim0__ram_man_5__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_4_valid))) {
        this->__Vdlyvval__ram_man_1__v0 = vlTOPp->io_in_hor_4_bits_man_1;
        this->__Vdlyvset__ram_man_1__v0 = 1U;
        this->__Vdlyvdim0__ram_man_1__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_4_valid))) {
        this->__Vdlyvval__ram_man_4__v0 = vlTOPp->io_in_hor_4_bits_man_4;
        this->__Vdlyvset__ram_man_4__v0 = 1U;
        this->__Vdlyvdim0__ram_man_4__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_4_valid))) {
        this->__Vdlyvval__ram_man_0__v0 = vlTOPp->io_in_hor_4_bits_man_0;
        this->__Vdlyvset__ram_man_0__v0 = 1U;
        this->__Vdlyvdim0__ram_man_0__v0 = this->__PVT__enq_ptr_value;
    }
    if (vlTOPp->reset) {
        this->__PVT__deq_ptr_value = 0U;
    } else {
        if (this->__PVT__do_deq) {
            this->__PVT__deq_ptr_value = this->__PVT___value_T_3;
        }
    }
    if (this->__Vdlyvset__ram_exp__v0) {
        this->__PVT__ram_exp[this->__Vdlyvdim0__ram_exp__v0] 
            = this->__Vdlyvval__ram_exp__v0;
    }
    if (this->__Vdlyvset__ram_sign_5__v0) {
        this->__PVT__ram_sign_5[this->__Vdlyvdim0__ram_sign_5__v0] 
            = this->__Vdlyvval__ram_sign_5__v0;
    }
    if (this->__Vdlyvset__ram_sign_4__v0) {
        this->__PVT__ram_sign_4[this->__Vdlyvdim0__ram_sign_4__v0] 
            = this->__Vdlyvval__ram_sign_4__v0;
    }
    if (this->__Vdlyvset__ram_sign_3__v0) {
        this->__PVT__ram_sign_3[this->__Vdlyvdim0__ram_sign_3__v0] 
            = this->__Vdlyvval__ram_sign_3__v0;
    }
    if (this->__Vdlyvset__ram_sign_2__v0) {
        this->__PVT__ram_sign_2[this->__Vdlyvdim0__ram_sign_2__v0] 
            = this->__Vdlyvval__ram_sign_2__v0;
    }
    if (this->__Vdlyvset__ram_sign_1__v0) {
        this->__PVT__ram_sign_1[this->__Vdlyvdim0__ram_sign_1__v0] 
            = this->__Vdlyvval__ram_sign_1__v0;
    }
    if (this->__Vdlyvset__ram_sign_0__v0) {
        this->__PVT__ram_sign_0[this->__Vdlyvdim0__ram_sign_0__v0] 
            = this->__Vdlyvval__ram_sign_0__v0;
    }
    if (this->__Vdlyvset__ram_sign_6__v0) {
        this->__PVT__ram_sign_6[this->__Vdlyvdim0__ram_sign_6__v0] 
            = this->__Vdlyvval__ram_sign_6__v0;
    }
    if (this->__Vdlyvset__ram_sign_7__v0) {
        this->__PVT__ram_sign_7[this->__Vdlyvdim0__ram_sign_7__v0] 
            = this->__Vdlyvval__ram_sign_7__v0;
    }
    if (this->__Vdlyvset__ram_man_7__v0) {
        this->__PVT__ram_man_7[this->__Vdlyvdim0__ram_man_7__v0] 
            = this->__Vdlyvval__ram_man_7__v0;
    }
    if (this->__Vdlyvset__ram_man_6__v0) {
        this->__PVT__ram_man_6[this->__Vdlyvdim0__ram_man_6__v0] 
            = this->__Vdlyvval__ram_man_6__v0;
    }
    if (this->__Vdlyvset__ram_man_3__v0) {
        this->__PVT__ram_man_3[this->__Vdlyvdim0__ram_man_3__v0] 
            = this->__Vdlyvval__ram_man_3__v0;
    }
    if (this->__Vdlyvset__ram_man_2__v0) {
        this->__PVT__ram_man_2[this->__Vdlyvdim0__ram_man_2__v0] 
            = this->__Vdlyvval__ram_man_2__v0;
    }
    if (this->__Vdlyvset__ram_man_5__v0) {
        this->__PVT__ram_man_5[this->__Vdlyvdim0__ram_man_5__v0] 
            = this->__Vdlyvval__ram_man_5__v0;
    }
    if (this->__Vdlyvset__ram_man_1__v0) {
        this->__PVT__ram_man_1[this->__Vdlyvdim0__ram_man_1__v0] 
            = this->__Vdlyvval__ram_man_1__v0;
    }
    if (this->__Vdlyvset__ram_man_4__v0) {
        this->__PVT__ram_man_4[this->__Vdlyvdim0__ram_man_4__v0] 
            = this->__Vdlyvval__ram_man_4__v0;
    }
    if (this->__Vdlyvset__ram_man_0__v0) {
        this->__PVT__ram_man_0[this->__Vdlyvdim0__ram_man_0__v0] 
            = this->__Vdlyvval__ram_man_0__v0;
    }
    if (vlTOPp->reset) {
        this->__PVT__enq_ptr_value = 0U;
    } else {
        if (this->__PVT__do_enq) {
            this->__PVT__enq_ptr_value = this->__PVT___value_T_1;
        }
    }
    this->__PVT___value_T_3 = (0x1ffU & ((IData)(1U) 
                                         + (IData)(this->__PVT__deq_ptr_value)));
    this->__PVT___value_T_1 = (0x1ffU & ((IData)(1U) 
                                         + (IData)(this->__PVT__enq_ptr_value)));
    this->__PVT__ptr_match = ((IData)(this->__PVT__enq_ptr_value) 
                              == (IData)(this->__PVT__deq_ptr_value));
    this->__PVT__full = ((IData)(this->__PVT__ptr_match) 
                         & (IData)(this->__PVT__maybe_full));
    this->__PVT__empty = ((IData)(this->__PVT__ptr_match) 
                          & (~ (IData)(this->__PVT__maybe_full)));
}

VL_INLINE_OPT void VSystolicArray_HBFP_forTesting_Queue::_combo__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_4__55(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_Queue::_combo__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_4__55\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__do_enq = ((~ (IData)(this->__PVT__full)) 
                           & (IData)(vlTOPp->io_in_hor_4_valid));
    this->__PVT__do_deq = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_4_io_deq_ready) 
                           & (~ (IData)(this->__PVT__empty)));
}

VL_INLINE_OPT void VSystolicArray_HBFP_forTesting_Queue::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_5__6(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_Queue::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_5__6\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vdlyvset__ram_exp__v0 = 0U;
    this->__Vdlyvset__ram_sign_5__v0 = 0U;
    this->__Vdlyvset__ram_sign_4__v0 = 0U;
    this->__Vdlyvset__ram_sign_3__v0 = 0U;
    this->__Vdlyvset__ram_sign_2__v0 = 0U;
    this->__Vdlyvset__ram_sign_1__v0 = 0U;
    this->__Vdlyvset__ram_sign_0__v0 = 0U;
    this->__Vdlyvset__ram_sign_6__v0 = 0U;
    this->__Vdlyvset__ram_sign_7__v0 = 0U;
    this->__Vdlyvset__ram_man_7__v0 = 0U;
    this->__Vdlyvset__ram_man_6__v0 = 0U;
    this->__Vdlyvset__ram_man_3__v0 = 0U;
    this->__Vdlyvset__ram_man_2__v0 = 0U;
    this->__Vdlyvset__ram_man_5__v0 = 0U;
    this->__Vdlyvset__ram_man_1__v0 = 0U;
    this->__Vdlyvset__ram_man_4__v0 = 0U;
    this->__Vdlyvset__ram_man_0__v0 = 0U;
    if (vlTOPp->reset) {
        this->__PVT__maybe_full = 0U;
    } else {
        if (((IData)(this->__PVT__do_enq) != (IData)(this->__PVT__do_deq))) {
            this->__PVT__maybe_full = this->__PVT__do_enq;
        }
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_5_valid))) {
        this->__Vdlyvval__ram_exp__v0 = vlTOPp->io_in_hor_5_bits_exp;
        this->__Vdlyvset__ram_exp__v0 = 1U;
        this->__Vdlyvdim0__ram_exp__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_5_valid))) {
        this->__Vdlyvval__ram_sign_5__v0 = vlTOPp->io_in_hor_5_bits_sign_5;
        this->__Vdlyvset__ram_sign_5__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_5__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_5_valid))) {
        this->__Vdlyvval__ram_sign_4__v0 = vlTOPp->io_in_hor_5_bits_sign_4;
        this->__Vdlyvset__ram_sign_4__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_4__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_5_valid))) {
        this->__Vdlyvval__ram_sign_3__v0 = vlTOPp->io_in_hor_5_bits_sign_3;
        this->__Vdlyvset__ram_sign_3__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_3__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_5_valid))) {
        this->__Vdlyvval__ram_sign_2__v0 = vlTOPp->io_in_hor_5_bits_sign_2;
        this->__Vdlyvset__ram_sign_2__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_2__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_5_valid))) {
        this->__Vdlyvval__ram_sign_1__v0 = vlTOPp->io_in_hor_5_bits_sign_1;
        this->__Vdlyvset__ram_sign_1__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_1__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_5_valid))) {
        this->__Vdlyvval__ram_sign_0__v0 = vlTOPp->io_in_hor_5_bits_sign_0;
        this->__Vdlyvset__ram_sign_0__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_0__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_5_valid))) {
        this->__Vdlyvval__ram_sign_6__v0 = vlTOPp->io_in_hor_5_bits_sign_6;
        this->__Vdlyvset__ram_sign_6__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_6__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_5_valid))) {
        this->__Vdlyvval__ram_sign_7__v0 = vlTOPp->io_in_hor_5_bits_sign_7;
        this->__Vdlyvset__ram_sign_7__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_7__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_5_valid))) {
        this->__Vdlyvval__ram_man_7__v0 = vlTOPp->io_in_hor_5_bits_man_7;
        this->__Vdlyvset__ram_man_7__v0 = 1U;
        this->__Vdlyvdim0__ram_man_7__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_5_valid))) {
        this->__Vdlyvval__ram_man_6__v0 = vlTOPp->io_in_hor_5_bits_man_6;
        this->__Vdlyvset__ram_man_6__v0 = 1U;
        this->__Vdlyvdim0__ram_man_6__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_5_valid))) {
        this->__Vdlyvval__ram_man_3__v0 = vlTOPp->io_in_hor_5_bits_man_3;
        this->__Vdlyvset__ram_man_3__v0 = 1U;
        this->__Vdlyvdim0__ram_man_3__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_5_valid))) {
        this->__Vdlyvval__ram_man_2__v0 = vlTOPp->io_in_hor_5_bits_man_2;
        this->__Vdlyvset__ram_man_2__v0 = 1U;
        this->__Vdlyvdim0__ram_man_2__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_5_valid))) {
        this->__Vdlyvval__ram_man_5__v0 = vlTOPp->io_in_hor_5_bits_man_5;
        this->__Vdlyvset__ram_man_5__v0 = 1U;
        this->__Vdlyvdim0__ram_man_5__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_5_valid))) {
        this->__Vdlyvval__ram_man_1__v0 = vlTOPp->io_in_hor_5_bits_man_1;
        this->__Vdlyvset__ram_man_1__v0 = 1U;
        this->__Vdlyvdim0__ram_man_1__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_5_valid))) {
        this->__Vdlyvval__ram_man_4__v0 = vlTOPp->io_in_hor_5_bits_man_4;
        this->__Vdlyvset__ram_man_4__v0 = 1U;
        this->__Vdlyvdim0__ram_man_4__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_5_valid))) {
        this->__Vdlyvval__ram_man_0__v0 = vlTOPp->io_in_hor_5_bits_man_0;
        this->__Vdlyvset__ram_man_0__v0 = 1U;
        this->__Vdlyvdim0__ram_man_0__v0 = this->__PVT__enq_ptr_value;
    }
    if (vlTOPp->reset) {
        this->__PVT__deq_ptr_value = 0U;
    } else {
        if (this->__PVT__do_deq) {
            this->__PVT__deq_ptr_value = this->__PVT___value_T_3;
        }
    }
    if (this->__Vdlyvset__ram_exp__v0) {
        this->__PVT__ram_exp[this->__Vdlyvdim0__ram_exp__v0] 
            = this->__Vdlyvval__ram_exp__v0;
    }
    if (this->__Vdlyvset__ram_sign_5__v0) {
        this->__PVT__ram_sign_5[this->__Vdlyvdim0__ram_sign_5__v0] 
            = this->__Vdlyvval__ram_sign_5__v0;
    }
    if (this->__Vdlyvset__ram_sign_4__v0) {
        this->__PVT__ram_sign_4[this->__Vdlyvdim0__ram_sign_4__v0] 
            = this->__Vdlyvval__ram_sign_4__v0;
    }
    if (this->__Vdlyvset__ram_sign_3__v0) {
        this->__PVT__ram_sign_3[this->__Vdlyvdim0__ram_sign_3__v0] 
            = this->__Vdlyvval__ram_sign_3__v0;
    }
    if (this->__Vdlyvset__ram_sign_2__v0) {
        this->__PVT__ram_sign_2[this->__Vdlyvdim0__ram_sign_2__v0] 
            = this->__Vdlyvval__ram_sign_2__v0;
    }
    if (this->__Vdlyvset__ram_sign_1__v0) {
        this->__PVT__ram_sign_1[this->__Vdlyvdim0__ram_sign_1__v0] 
            = this->__Vdlyvval__ram_sign_1__v0;
    }
    if (this->__Vdlyvset__ram_sign_0__v0) {
        this->__PVT__ram_sign_0[this->__Vdlyvdim0__ram_sign_0__v0] 
            = this->__Vdlyvval__ram_sign_0__v0;
    }
    if (this->__Vdlyvset__ram_sign_6__v0) {
        this->__PVT__ram_sign_6[this->__Vdlyvdim0__ram_sign_6__v0] 
            = this->__Vdlyvval__ram_sign_6__v0;
    }
    if (this->__Vdlyvset__ram_sign_7__v0) {
        this->__PVT__ram_sign_7[this->__Vdlyvdim0__ram_sign_7__v0] 
            = this->__Vdlyvval__ram_sign_7__v0;
    }
    if (this->__Vdlyvset__ram_man_7__v0) {
        this->__PVT__ram_man_7[this->__Vdlyvdim0__ram_man_7__v0] 
            = this->__Vdlyvval__ram_man_7__v0;
    }
    if (this->__Vdlyvset__ram_man_6__v0) {
        this->__PVT__ram_man_6[this->__Vdlyvdim0__ram_man_6__v0] 
            = this->__Vdlyvval__ram_man_6__v0;
    }
    if (this->__Vdlyvset__ram_man_3__v0) {
        this->__PVT__ram_man_3[this->__Vdlyvdim0__ram_man_3__v0] 
            = this->__Vdlyvval__ram_man_3__v0;
    }
    if (this->__Vdlyvset__ram_man_2__v0) {
        this->__PVT__ram_man_2[this->__Vdlyvdim0__ram_man_2__v0] 
            = this->__Vdlyvval__ram_man_2__v0;
    }
    if (this->__Vdlyvset__ram_man_5__v0) {
        this->__PVT__ram_man_5[this->__Vdlyvdim0__ram_man_5__v0] 
            = this->__Vdlyvval__ram_man_5__v0;
    }
    if (this->__Vdlyvset__ram_man_1__v0) {
        this->__PVT__ram_man_1[this->__Vdlyvdim0__ram_man_1__v0] 
            = this->__Vdlyvval__ram_man_1__v0;
    }
    if (this->__Vdlyvset__ram_man_4__v0) {
        this->__PVT__ram_man_4[this->__Vdlyvdim0__ram_man_4__v0] 
            = this->__Vdlyvval__ram_man_4__v0;
    }
    if (this->__Vdlyvset__ram_man_0__v0) {
        this->__PVT__ram_man_0[this->__Vdlyvdim0__ram_man_0__v0] 
            = this->__Vdlyvval__ram_man_0__v0;
    }
    if (vlTOPp->reset) {
        this->__PVT__enq_ptr_value = 0U;
    } else {
        if (this->__PVT__do_enq) {
            this->__PVT__enq_ptr_value = this->__PVT___value_T_1;
        }
    }
    this->__PVT___value_T_3 = (0x1ffU & ((IData)(1U) 
                                         + (IData)(this->__PVT__deq_ptr_value)));
    this->__PVT___value_T_1 = (0x1ffU & ((IData)(1U) 
                                         + (IData)(this->__PVT__enq_ptr_value)));
    this->__PVT__ptr_match = ((IData)(this->__PVT__enq_ptr_value) 
                              == (IData)(this->__PVT__deq_ptr_value));
    this->__PVT__full = ((IData)(this->__PVT__ptr_match) 
                         & (IData)(this->__PVT__maybe_full));
    this->__PVT__empty = ((IData)(this->__PVT__ptr_match) 
                          & (~ (IData)(this->__PVT__maybe_full)));
}

VL_INLINE_OPT void VSystolicArray_HBFP_forTesting_Queue::_combo__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_5__56(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_Queue::_combo__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_5__56\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__do_enq = ((~ (IData)(this->__PVT__full)) 
                           & (IData)(vlTOPp->io_in_hor_5_valid));
    this->__PVT__do_deq = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_5_io_deq_ready) 
                           & (~ (IData)(this->__PVT__empty)));
}

VL_INLINE_OPT void VSystolicArray_HBFP_forTesting_Queue::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_6__7(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_Queue::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_6__7\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vdlyvset__ram_exp__v0 = 0U;
    this->__Vdlyvset__ram_sign_5__v0 = 0U;
    this->__Vdlyvset__ram_sign_4__v0 = 0U;
    this->__Vdlyvset__ram_sign_3__v0 = 0U;
    this->__Vdlyvset__ram_sign_2__v0 = 0U;
    this->__Vdlyvset__ram_sign_1__v0 = 0U;
    this->__Vdlyvset__ram_sign_0__v0 = 0U;
    this->__Vdlyvset__ram_sign_6__v0 = 0U;
    this->__Vdlyvset__ram_sign_7__v0 = 0U;
    this->__Vdlyvset__ram_man_7__v0 = 0U;
    this->__Vdlyvset__ram_man_6__v0 = 0U;
    this->__Vdlyvset__ram_man_3__v0 = 0U;
    this->__Vdlyvset__ram_man_2__v0 = 0U;
    this->__Vdlyvset__ram_man_5__v0 = 0U;
    this->__Vdlyvset__ram_man_1__v0 = 0U;
    this->__Vdlyvset__ram_man_4__v0 = 0U;
    this->__Vdlyvset__ram_man_0__v0 = 0U;
    if (vlTOPp->reset) {
        this->__PVT__maybe_full = 0U;
    } else {
        if (((IData)(this->__PVT__do_enq) != (IData)(this->__PVT__do_deq))) {
            this->__PVT__maybe_full = this->__PVT__do_enq;
        }
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_6_valid))) {
        this->__Vdlyvval__ram_exp__v0 = vlTOPp->io_in_hor_6_bits_exp;
        this->__Vdlyvset__ram_exp__v0 = 1U;
        this->__Vdlyvdim0__ram_exp__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_6_valid))) {
        this->__Vdlyvval__ram_sign_5__v0 = vlTOPp->io_in_hor_6_bits_sign_5;
        this->__Vdlyvset__ram_sign_5__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_5__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_6_valid))) {
        this->__Vdlyvval__ram_sign_4__v0 = vlTOPp->io_in_hor_6_bits_sign_4;
        this->__Vdlyvset__ram_sign_4__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_4__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_6_valid))) {
        this->__Vdlyvval__ram_sign_3__v0 = vlTOPp->io_in_hor_6_bits_sign_3;
        this->__Vdlyvset__ram_sign_3__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_3__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_6_valid))) {
        this->__Vdlyvval__ram_sign_2__v0 = vlTOPp->io_in_hor_6_bits_sign_2;
        this->__Vdlyvset__ram_sign_2__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_2__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_6_valid))) {
        this->__Vdlyvval__ram_sign_1__v0 = vlTOPp->io_in_hor_6_bits_sign_1;
        this->__Vdlyvset__ram_sign_1__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_1__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_6_valid))) {
        this->__Vdlyvval__ram_sign_0__v0 = vlTOPp->io_in_hor_6_bits_sign_0;
        this->__Vdlyvset__ram_sign_0__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_0__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_6_valid))) {
        this->__Vdlyvval__ram_sign_6__v0 = vlTOPp->io_in_hor_6_bits_sign_6;
        this->__Vdlyvset__ram_sign_6__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_6__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_6_valid))) {
        this->__Vdlyvval__ram_sign_7__v0 = vlTOPp->io_in_hor_6_bits_sign_7;
        this->__Vdlyvset__ram_sign_7__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_7__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_6_valid))) {
        this->__Vdlyvval__ram_man_7__v0 = vlTOPp->io_in_hor_6_bits_man_7;
        this->__Vdlyvset__ram_man_7__v0 = 1U;
        this->__Vdlyvdim0__ram_man_7__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_6_valid))) {
        this->__Vdlyvval__ram_man_6__v0 = vlTOPp->io_in_hor_6_bits_man_6;
        this->__Vdlyvset__ram_man_6__v0 = 1U;
        this->__Vdlyvdim0__ram_man_6__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_6_valid))) {
        this->__Vdlyvval__ram_man_3__v0 = vlTOPp->io_in_hor_6_bits_man_3;
        this->__Vdlyvset__ram_man_3__v0 = 1U;
        this->__Vdlyvdim0__ram_man_3__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_6_valid))) {
        this->__Vdlyvval__ram_man_2__v0 = vlTOPp->io_in_hor_6_bits_man_2;
        this->__Vdlyvset__ram_man_2__v0 = 1U;
        this->__Vdlyvdim0__ram_man_2__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_6_valid))) {
        this->__Vdlyvval__ram_man_5__v0 = vlTOPp->io_in_hor_6_bits_man_5;
        this->__Vdlyvset__ram_man_5__v0 = 1U;
        this->__Vdlyvdim0__ram_man_5__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_6_valid))) {
        this->__Vdlyvval__ram_man_1__v0 = vlTOPp->io_in_hor_6_bits_man_1;
        this->__Vdlyvset__ram_man_1__v0 = 1U;
        this->__Vdlyvdim0__ram_man_1__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_6_valid))) {
        this->__Vdlyvval__ram_man_4__v0 = vlTOPp->io_in_hor_6_bits_man_4;
        this->__Vdlyvset__ram_man_4__v0 = 1U;
        this->__Vdlyvdim0__ram_man_4__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_6_valid))) {
        this->__Vdlyvval__ram_man_0__v0 = vlTOPp->io_in_hor_6_bits_man_0;
        this->__Vdlyvset__ram_man_0__v0 = 1U;
        this->__Vdlyvdim0__ram_man_0__v0 = this->__PVT__enq_ptr_value;
    }
    if (vlTOPp->reset) {
        this->__PVT__deq_ptr_value = 0U;
    } else {
        if (this->__PVT__do_deq) {
            this->__PVT__deq_ptr_value = this->__PVT___value_T_3;
        }
    }
    if (this->__Vdlyvset__ram_exp__v0) {
        this->__PVT__ram_exp[this->__Vdlyvdim0__ram_exp__v0] 
            = this->__Vdlyvval__ram_exp__v0;
    }
    if (this->__Vdlyvset__ram_sign_5__v0) {
        this->__PVT__ram_sign_5[this->__Vdlyvdim0__ram_sign_5__v0] 
            = this->__Vdlyvval__ram_sign_5__v0;
    }
    if (this->__Vdlyvset__ram_sign_4__v0) {
        this->__PVT__ram_sign_4[this->__Vdlyvdim0__ram_sign_4__v0] 
            = this->__Vdlyvval__ram_sign_4__v0;
    }
    if (this->__Vdlyvset__ram_sign_3__v0) {
        this->__PVT__ram_sign_3[this->__Vdlyvdim0__ram_sign_3__v0] 
            = this->__Vdlyvval__ram_sign_3__v0;
    }
    if (this->__Vdlyvset__ram_sign_2__v0) {
        this->__PVT__ram_sign_2[this->__Vdlyvdim0__ram_sign_2__v0] 
            = this->__Vdlyvval__ram_sign_2__v0;
    }
    if (this->__Vdlyvset__ram_sign_1__v0) {
        this->__PVT__ram_sign_1[this->__Vdlyvdim0__ram_sign_1__v0] 
            = this->__Vdlyvval__ram_sign_1__v0;
    }
    if (this->__Vdlyvset__ram_sign_0__v0) {
        this->__PVT__ram_sign_0[this->__Vdlyvdim0__ram_sign_0__v0] 
            = this->__Vdlyvval__ram_sign_0__v0;
    }
    if (this->__Vdlyvset__ram_sign_6__v0) {
        this->__PVT__ram_sign_6[this->__Vdlyvdim0__ram_sign_6__v0] 
            = this->__Vdlyvval__ram_sign_6__v0;
    }
    if (this->__Vdlyvset__ram_sign_7__v0) {
        this->__PVT__ram_sign_7[this->__Vdlyvdim0__ram_sign_7__v0] 
            = this->__Vdlyvval__ram_sign_7__v0;
    }
    if (this->__Vdlyvset__ram_man_7__v0) {
        this->__PVT__ram_man_7[this->__Vdlyvdim0__ram_man_7__v0] 
            = this->__Vdlyvval__ram_man_7__v0;
    }
    if (this->__Vdlyvset__ram_man_6__v0) {
        this->__PVT__ram_man_6[this->__Vdlyvdim0__ram_man_6__v0] 
            = this->__Vdlyvval__ram_man_6__v0;
    }
    if (this->__Vdlyvset__ram_man_3__v0) {
        this->__PVT__ram_man_3[this->__Vdlyvdim0__ram_man_3__v0] 
            = this->__Vdlyvval__ram_man_3__v0;
    }
    if (this->__Vdlyvset__ram_man_2__v0) {
        this->__PVT__ram_man_2[this->__Vdlyvdim0__ram_man_2__v0] 
            = this->__Vdlyvval__ram_man_2__v0;
    }
    if (this->__Vdlyvset__ram_man_5__v0) {
        this->__PVT__ram_man_5[this->__Vdlyvdim0__ram_man_5__v0] 
            = this->__Vdlyvval__ram_man_5__v0;
    }
    if (this->__Vdlyvset__ram_man_1__v0) {
        this->__PVT__ram_man_1[this->__Vdlyvdim0__ram_man_1__v0] 
            = this->__Vdlyvval__ram_man_1__v0;
    }
    if (this->__Vdlyvset__ram_man_4__v0) {
        this->__PVT__ram_man_4[this->__Vdlyvdim0__ram_man_4__v0] 
            = this->__Vdlyvval__ram_man_4__v0;
    }
    if (this->__Vdlyvset__ram_man_0__v0) {
        this->__PVT__ram_man_0[this->__Vdlyvdim0__ram_man_0__v0] 
            = this->__Vdlyvval__ram_man_0__v0;
    }
    if (vlTOPp->reset) {
        this->__PVT__enq_ptr_value = 0U;
    } else {
        if (this->__PVT__do_enq) {
            this->__PVT__enq_ptr_value = this->__PVT___value_T_1;
        }
    }
    this->__PVT___value_T_3 = (0x1ffU & ((IData)(1U) 
                                         + (IData)(this->__PVT__deq_ptr_value)));
    this->__PVT___value_T_1 = (0x1ffU & ((IData)(1U) 
                                         + (IData)(this->__PVT__enq_ptr_value)));
    this->__PVT__ptr_match = ((IData)(this->__PVT__enq_ptr_value) 
                              == (IData)(this->__PVT__deq_ptr_value));
    this->__PVT__full = ((IData)(this->__PVT__ptr_match) 
                         & (IData)(this->__PVT__maybe_full));
    this->__PVT__empty = ((IData)(this->__PVT__ptr_match) 
                          & (~ (IData)(this->__PVT__maybe_full)));
}

VL_INLINE_OPT void VSystolicArray_HBFP_forTesting_Queue::_combo__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_6__57(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_Queue::_combo__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_6__57\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__do_enq = ((~ (IData)(this->__PVT__full)) 
                           & (IData)(vlTOPp->io_in_hor_6_valid));
    this->__PVT__do_deq = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_6_io_deq_ready) 
                           & (~ (IData)(this->__PVT__empty)));
}

VL_INLINE_OPT void VSystolicArray_HBFP_forTesting_Queue::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_7__8(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_Queue::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_7__8\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vdlyvset__ram_exp__v0 = 0U;
    this->__Vdlyvset__ram_sign_5__v0 = 0U;
    this->__Vdlyvset__ram_sign_4__v0 = 0U;
    this->__Vdlyvset__ram_sign_3__v0 = 0U;
    this->__Vdlyvset__ram_sign_2__v0 = 0U;
    this->__Vdlyvset__ram_sign_1__v0 = 0U;
    this->__Vdlyvset__ram_sign_0__v0 = 0U;
    this->__Vdlyvset__ram_sign_6__v0 = 0U;
    this->__Vdlyvset__ram_sign_7__v0 = 0U;
    this->__Vdlyvset__ram_man_7__v0 = 0U;
    this->__Vdlyvset__ram_man_6__v0 = 0U;
    this->__Vdlyvset__ram_man_3__v0 = 0U;
    this->__Vdlyvset__ram_man_2__v0 = 0U;
    this->__Vdlyvset__ram_man_5__v0 = 0U;
    this->__Vdlyvset__ram_man_1__v0 = 0U;
    this->__Vdlyvset__ram_man_4__v0 = 0U;
    this->__Vdlyvset__ram_man_0__v0 = 0U;
    if (vlTOPp->reset) {
        this->__PVT__maybe_full = 0U;
    } else {
        if (((IData)(this->__PVT__do_enq) != (IData)(this->__PVT__do_deq))) {
            this->__PVT__maybe_full = this->__PVT__do_enq;
        }
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_7_valid))) {
        this->__Vdlyvval__ram_exp__v0 = vlTOPp->io_in_hor_7_bits_exp;
        this->__Vdlyvset__ram_exp__v0 = 1U;
        this->__Vdlyvdim0__ram_exp__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_7_valid))) {
        this->__Vdlyvval__ram_sign_5__v0 = vlTOPp->io_in_hor_7_bits_sign_5;
        this->__Vdlyvset__ram_sign_5__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_5__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_7_valid))) {
        this->__Vdlyvval__ram_sign_4__v0 = vlTOPp->io_in_hor_7_bits_sign_4;
        this->__Vdlyvset__ram_sign_4__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_4__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_7_valid))) {
        this->__Vdlyvval__ram_sign_3__v0 = vlTOPp->io_in_hor_7_bits_sign_3;
        this->__Vdlyvset__ram_sign_3__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_3__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_7_valid))) {
        this->__Vdlyvval__ram_sign_2__v0 = vlTOPp->io_in_hor_7_bits_sign_2;
        this->__Vdlyvset__ram_sign_2__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_2__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_7_valid))) {
        this->__Vdlyvval__ram_sign_1__v0 = vlTOPp->io_in_hor_7_bits_sign_1;
        this->__Vdlyvset__ram_sign_1__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_1__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_7_valid))) {
        this->__Vdlyvval__ram_sign_0__v0 = vlTOPp->io_in_hor_7_bits_sign_0;
        this->__Vdlyvset__ram_sign_0__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_0__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_7_valid))) {
        this->__Vdlyvval__ram_sign_6__v0 = vlTOPp->io_in_hor_7_bits_sign_6;
        this->__Vdlyvset__ram_sign_6__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_6__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_7_valid))) {
        this->__Vdlyvval__ram_sign_7__v0 = vlTOPp->io_in_hor_7_bits_sign_7;
        this->__Vdlyvset__ram_sign_7__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_7__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_7_valid))) {
        this->__Vdlyvval__ram_man_7__v0 = vlTOPp->io_in_hor_7_bits_man_7;
        this->__Vdlyvset__ram_man_7__v0 = 1U;
        this->__Vdlyvdim0__ram_man_7__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_7_valid))) {
        this->__Vdlyvval__ram_man_6__v0 = vlTOPp->io_in_hor_7_bits_man_6;
        this->__Vdlyvset__ram_man_6__v0 = 1U;
        this->__Vdlyvdim0__ram_man_6__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_7_valid))) {
        this->__Vdlyvval__ram_man_3__v0 = vlTOPp->io_in_hor_7_bits_man_3;
        this->__Vdlyvset__ram_man_3__v0 = 1U;
        this->__Vdlyvdim0__ram_man_3__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_7_valid))) {
        this->__Vdlyvval__ram_man_2__v0 = vlTOPp->io_in_hor_7_bits_man_2;
        this->__Vdlyvset__ram_man_2__v0 = 1U;
        this->__Vdlyvdim0__ram_man_2__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_7_valid))) {
        this->__Vdlyvval__ram_man_5__v0 = vlTOPp->io_in_hor_7_bits_man_5;
        this->__Vdlyvset__ram_man_5__v0 = 1U;
        this->__Vdlyvdim0__ram_man_5__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_7_valid))) {
        this->__Vdlyvval__ram_man_1__v0 = vlTOPp->io_in_hor_7_bits_man_1;
        this->__Vdlyvset__ram_man_1__v0 = 1U;
        this->__Vdlyvdim0__ram_man_1__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_7_valid))) {
        this->__Vdlyvval__ram_man_4__v0 = vlTOPp->io_in_hor_7_bits_man_4;
        this->__Vdlyvset__ram_man_4__v0 = 1U;
        this->__Vdlyvdim0__ram_man_4__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_hor_7_valid))) {
        this->__Vdlyvval__ram_man_0__v0 = vlTOPp->io_in_hor_7_bits_man_0;
        this->__Vdlyvset__ram_man_0__v0 = 1U;
        this->__Vdlyvdim0__ram_man_0__v0 = this->__PVT__enq_ptr_value;
    }
    if (vlTOPp->reset) {
        this->__PVT__deq_ptr_value = 0U;
    } else {
        if (this->__PVT__do_deq) {
            this->__PVT__deq_ptr_value = this->__PVT___value_T_3;
        }
    }
    if (this->__Vdlyvset__ram_exp__v0) {
        this->__PVT__ram_exp[this->__Vdlyvdim0__ram_exp__v0] 
            = this->__Vdlyvval__ram_exp__v0;
    }
    if (this->__Vdlyvset__ram_sign_5__v0) {
        this->__PVT__ram_sign_5[this->__Vdlyvdim0__ram_sign_5__v0] 
            = this->__Vdlyvval__ram_sign_5__v0;
    }
    if (this->__Vdlyvset__ram_sign_4__v0) {
        this->__PVT__ram_sign_4[this->__Vdlyvdim0__ram_sign_4__v0] 
            = this->__Vdlyvval__ram_sign_4__v0;
    }
    if (this->__Vdlyvset__ram_sign_3__v0) {
        this->__PVT__ram_sign_3[this->__Vdlyvdim0__ram_sign_3__v0] 
            = this->__Vdlyvval__ram_sign_3__v0;
    }
    if (this->__Vdlyvset__ram_sign_2__v0) {
        this->__PVT__ram_sign_2[this->__Vdlyvdim0__ram_sign_2__v0] 
            = this->__Vdlyvval__ram_sign_2__v0;
    }
    if (this->__Vdlyvset__ram_sign_1__v0) {
        this->__PVT__ram_sign_1[this->__Vdlyvdim0__ram_sign_1__v0] 
            = this->__Vdlyvval__ram_sign_1__v0;
    }
    if (this->__Vdlyvset__ram_sign_0__v0) {
        this->__PVT__ram_sign_0[this->__Vdlyvdim0__ram_sign_0__v0] 
            = this->__Vdlyvval__ram_sign_0__v0;
    }
    if (this->__Vdlyvset__ram_sign_6__v0) {
        this->__PVT__ram_sign_6[this->__Vdlyvdim0__ram_sign_6__v0] 
            = this->__Vdlyvval__ram_sign_6__v0;
    }
    if (this->__Vdlyvset__ram_sign_7__v0) {
        this->__PVT__ram_sign_7[this->__Vdlyvdim0__ram_sign_7__v0] 
            = this->__Vdlyvval__ram_sign_7__v0;
    }
    if (this->__Vdlyvset__ram_man_7__v0) {
        this->__PVT__ram_man_7[this->__Vdlyvdim0__ram_man_7__v0] 
            = this->__Vdlyvval__ram_man_7__v0;
    }
    if (this->__Vdlyvset__ram_man_6__v0) {
        this->__PVT__ram_man_6[this->__Vdlyvdim0__ram_man_6__v0] 
            = this->__Vdlyvval__ram_man_6__v0;
    }
    if (this->__Vdlyvset__ram_man_3__v0) {
        this->__PVT__ram_man_3[this->__Vdlyvdim0__ram_man_3__v0] 
            = this->__Vdlyvval__ram_man_3__v0;
    }
    if (this->__Vdlyvset__ram_man_2__v0) {
        this->__PVT__ram_man_2[this->__Vdlyvdim0__ram_man_2__v0] 
            = this->__Vdlyvval__ram_man_2__v0;
    }
    if (this->__Vdlyvset__ram_man_5__v0) {
        this->__PVT__ram_man_5[this->__Vdlyvdim0__ram_man_5__v0] 
            = this->__Vdlyvval__ram_man_5__v0;
    }
    if (this->__Vdlyvset__ram_man_1__v0) {
        this->__PVT__ram_man_1[this->__Vdlyvdim0__ram_man_1__v0] 
            = this->__Vdlyvval__ram_man_1__v0;
    }
    if (this->__Vdlyvset__ram_man_4__v0) {
        this->__PVT__ram_man_4[this->__Vdlyvdim0__ram_man_4__v0] 
            = this->__Vdlyvval__ram_man_4__v0;
    }
    if (this->__Vdlyvset__ram_man_0__v0) {
        this->__PVT__ram_man_0[this->__Vdlyvdim0__ram_man_0__v0] 
            = this->__Vdlyvval__ram_man_0__v0;
    }
    if (vlTOPp->reset) {
        this->__PVT__enq_ptr_value = 0U;
    } else {
        if (this->__PVT__do_enq) {
            this->__PVT__enq_ptr_value = this->__PVT___value_T_1;
        }
    }
    this->__PVT___value_T_3 = (0x1ffU & ((IData)(1U) 
                                         + (IData)(this->__PVT__deq_ptr_value)));
    this->__PVT___value_T_1 = (0x1ffU & ((IData)(1U) 
                                         + (IData)(this->__PVT__enq_ptr_value)));
    this->__PVT__ptr_match = ((IData)(this->__PVT__enq_ptr_value) 
                              == (IData)(this->__PVT__deq_ptr_value));
    this->__PVT__full = ((IData)(this->__PVT__ptr_match) 
                         & (IData)(this->__PVT__maybe_full));
    this->__PVT__empty = ((IData)(this->__PVT__ptr_match) 
                          & (~ (IData)(this->__PVT__maybe_full)));
}

VL_INLINE_OPT void VSystolicArray_HBFP_forTesting_Queue::_combo__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_7__58(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_Queue::_combo__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_7__58\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__do_enq = ((~ (IData)(this->__PVT__full)) 
                           & (IData)(vlTOPp->io_in_hor_7_valid));
    this->__PVT__do_deq = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_7_io_deq_ready) 
                           & (~ (IData)(this->__PVT__empty)));
}

VL_INLINE_OPT void VSystolicArray_HBFP_forTesting_Queue::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_0__9(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_Queue::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_0__9\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vdlyvset__ram_exp__v0 = 0U;
    this->__Vdlyvset__ram_sign_5__v0 = 0U;
    this->__Vdlyvset__ram_sign_4__v0 = 0U;
    this->__Vdlyvset__ram_sign_3__v0 = 0U;
    this->__Vdlyvset__ram_sign_2__v0 = 0U;
    this->__Vdlyvset__ram_sign_1__v0 = 0U;
    this->__Vdlyvset__ram_sign_0__v0 = 0U;
    this->__Vdlyvset__ram_sign_6__v0 = 0U;
    this->__Vdlyvset__ram_sign_7__v0 = 0U;
    this->__Vdlyvset__ram_man_7__v0 = 0U;
    this->__Vdlyvset__ram_man_6__v0 = 0U;
    this->__Vdlyvset__ram_man_3__v0 = 0U;
    this->__Vdlyvset__ram_man_2__v0 = 0U;
    this->__Vdlyvset__ram_man_5__v0 = 0U;
    this->__Vdlyvset__ram_man_1__v0 = 0U;
    this->__Vdlyvset__ram_man_4__v0 = 0U;
    this->__Vdlyvset__ram_man_0__v0 = 0U;
    if (vlTOPp->reset) {
        this->__PVT__maybe_full = 0U;
    } else {
        if (((IData)(this->__PVT__do_enq) != (IData)(this->__PVT__do_deq))) {
            this->__PVT__maybe_full = this->__PVT__do_enq;
        }
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_0_valid))) {
        this->__Vdlyvval__ram_exp__v0 = vlTOPp->io_in_ver_0_bits_exp;
        this->__Vdlyvset__ram_exp__v0 = 1U;
        this->__Vdlyvdim0__ram_exp__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_0_valid))) {
        this->__Vdlyvval__ram_sign_5__v0 = vlTOPp->io_in_ver_0_bits_sign_5;
        this->__Vdlyvset__ram_sign_5__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_5__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_0_valid))) {
        this->__Vdlyvval__ram_sign_4__v0 = vlTOPp->io_in_ver_0_bits_sign_4;
        this->__Vdlyvset__ram_sign_4__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_4__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_0_valid))) {
        this->__Vdlyvval__ram_sign_3__v0 = vlTOPp->io_in_ver_0_bits_sign_3;
        this->__Vdlyvset__ram_sign_3__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_3__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_0_valid))) {
        this->__Vdlyvval__ram_sign_2__v0 = vlTOPp->io_in_ver_0_bits_sign_2;
        this->__Vdlyvset__ram_sign_2__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_2__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_0_valid))) {
        this->__Vdlyvval__ram_sign_1__v0 = vlTOPp->io_in_ver_0_bits_sign_1;
        this->__Vdlyvset__ram_sign_1__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_1__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_0_valid))) {
        this->__Vdlyvval__ram_sign_0__v0 = vlTOPp->io_in_ver_0_bits_sign_0;
        this->__Vdlyvset__ram_sign_0__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_0__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_0_valid))) {
        this->__Vdlyvval__ram_sign_6__v0 = vlTOPp->io_in_ver_0_bits_sign_6;
        this->__Vdlyvset__ram_sign_6__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_6__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_0_valid))) {
        this->__Vdlyvval__ram_sign_7__v0 = vlTOPp->io_in_ver_0_bits_sign_7;
        this->__Vdlyvset__ram_sign_7__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_7__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_0_valid))) {
        this->__Vdlyvval__ram_man_7__v0 = vlTOPp->io_in_ver_0_bits_man_7;
        this->__Vdlyvset__ram_man_7__v0 = 1U;
        this->__Vdlyvdim0__ram_man_7__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_0_valid))) {
        this->__Vdlyvval__ram_man_6__v0 = vlTOPp->io_in_ver_0_bits_man_6;
        this->__Vdlyvset__ram_man_6__v0 = 1U;
        this->__Vdlyvdim0__ram_man_6__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_0_valid))) {
        this->__Vdlyvval__ram_man_3__v0 = vlTOPp->io_in_ver_0_bits_man_3;
        this->__Vdlyvset__ram_man_3__v0 = 1U;
        this->__Vdlyvdim0__ram_man_3__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_0_valid))) {
        this->__Vdlyvval__ram_man_2__v0 = vlTOPp->io_in_ver_0_bits_man_2;
        this->__Vdlyvset__ram_man_2__v0 = 1U;
        this->__Vdlyvdim0__ram_man_2__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_0_valid))) {
        this->__Vdlyvval__ram_man_5__v0 = vlTOPp->io_in_ver_0_bits_man_5;
        this->__Vdlyvset__ram_man_5__v0 = 1U;
        this->__Vdlyvdim0__ram_man_5__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_0_valid))) {
        this->__Vdlyvval__ram_man_1__v0 = vlTOPp->io_in_ver_0_bits_man_1;
        this->__Vdlyvset__ram_man_1__v0 = 1U;
        this->__Vdlyvdim0__ram_man_1__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_0_valid))) {
        this->__Vdlyvval__ram_man_4__v0 = vlTOPp->io_in_ver_0_bits_man_4;
        this->__Vdlyvset__ram_man_4__v0 = 1U;
        this->__Vdlyvdim0__ram_man_4__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_0_valid))) {
        this->__Vdlyvval__ram_man_0__v0 = vlTOPp->io_in_ver_0_bits_man_0;
        this->__Vdlyvset__ram_man_0__v0 = 1U;
        this->__Vdlyvdim0__ram_man_0__v0 = this->__PVT__enq_ptr_value;
    }
    if (vlTOPp->reset) {
        this->__PVT__deq_ptr_value = 0U;
    } else {
        if (this->__PVT__do_deq) {
            this->__PVT__deq_ptr_value = this->__PVT___value_T_3;
        }
    }
    if (this->__Vdlyvset__ram_exp__v0) {
        this->__PVT__ram_exp[this->__Vdlyvdim0__ram_exp__v0] 
            = this->__Vdlyvval__ram_exp__v0;
    }
    if (this->__Vdlyvset__ram_sign_5__v0) {
        this->__PVT__ram_sign_5[this->__Vdlyvdim0__ram_sign_5__v0] 
            = this->__Vdlyvval__ram_sign_5__v0;
    }
    if (this->__Vdlyvset__ram_sign_4__v0) {
        this->__PVT__ram_sign_4[this->__Vdlyvdim0__ram_sign_4__v0] 
            = this->__Vdlyvval__ram_sign_4__v0;
    }
    if (this->__Vdlyvset__ram_sign_3__v0) {
        this->__PVT__ram_sign_3[this->__Vdlyvdim0__ram_sign_3__v0] 
            = this->__Vdlyvval__ram_sign_3__v0;
    }
    if (this->__Vdlyvset__ram_sign_2__v0) {
        this->__PVT__ram_sign_2[this->__Vdlyvdim0__ram_sign_2__v0] 
            = this->__Vdlyvval__ram_sign_2__v0;
    }
    if (this->__Vdlyvset__ram_sign_1__v0) {
        this->__PVT__ram_sign_1[this->__Vdlyvdim0__ram_sign_1__v0] 
            = this->__Vdlyvval__ram_sign_1__v0;
    }
    if (this->__Vdlyvset__ram_sign_0__v0) {
        this->__PVT__ram_sign_0[this->__Vdlyvdim0__ram_sign_0__v0] 
            = this->__Vdlyvval__ram_sign_0__v0;
    }
    if (this->__Vdlyvset__ram_sign_6__v0) {
        this->__PVT__ram_sign_6[this->__Vdlyvdim0__ram_sign_6__v0] 
            = this->__Vdlyvval__ram_sign_6__v0;
    }
    if (this->__Vdlyvset__ram_sign_7__v0) {
        this->__PVT__ram_sign_7[this->__Vdlyvdim0__ram_sign_7__v0] 
            = this->__Vdlyvval__ram_sign_7__v0;
    }
    if (this->__Vdlyvset__ram_man_7__v0) {
        this->__PVT__ram_man_7[this->__Vdlyvdim0__ram_man_7__v0] 
            = this->__Vdlyvval__ram_man_7__v0;
    }
    if (this->__Vdlyvset__ram_man_6__v0) {
        this->__PVT__ram_man_6[this->__Vdlyvdim0__ram_man_6__v0] 
            = this->__Vdlyvval__ram_man_6__v0;
    }
    if (this->__Vdlyvset__ram_man_3__v0) {
        this->__PVT__ram_man_3[this->__Vdlyvdim0__ram_man_3__v0] 
            = this->__Vdlyvval__ram_man_3__v0;
    }
    if (this->__Vdlyvset__ram_man_2__v0) {
        this->__PVT__ram_man_2[this->__Vdlyvdim0__ram_man_2__v0] 
            = this->__Vdlyvval__ram_man_2__v0;
    }
    if (this->__Vdlyvset__ram_man_5__v0) {
        this->__PVT__ram_man_5[this->__Vdlyvdim0__ram_man_5__v0] 
            = this->__Vdlyvval__ram_man_5__v0;
    }
    if (this->__Vdlyvset__ram_man_1__v0) {
        this->__PVT__ram_man_1[this->__Vdlyvdim0__ram_man_1__v0] 
            = this->__Vdlyvval__ram_man_1__v0;
    }
    if (this->__Vdlyvset__ram_man_4__v0) {
        this->__PVT__ram_man_4[this->__Vdlyvdim0__ram_man_4__v0] 
            = this->__Vdlyvval__ram_man_4__v0;
    }
    if (this->__Vdlyvset__ram_man_0__v0) {
        this->__PVT__ram_man_0[this->__Vdlyvdim0__ram_man_0__v0] 
            = this->__Vdlyvval__ram_man_0__v0;
    }
    if (vlTOPp->reset) {
        this->__PVT__enq_ptr_value = 0U;
    } else {
        if (this->__PVT__do_enq) {
            this->__PVT__enq_ptr_value = this->__PVT___value_T_1;
        }
    }
    this->__PVT___value_T_3 = (0x1ffU & ((IData)(1U) 
                                         + (IData)(this->__PVT__deq_ptr_value)));
    this->__PVT___value_T_1 = (0x1ffU & ((IData)(1U) 
                                         + (IData)(this->__PVT__enq_ptr_value)));
    this->__PVT__ptr_match = ((IData)(this->__PVT__enq_ptr_value) 
                              == (IData)(this->__PVT__deq_ptr_value));
    this->__PVT__full = ((IData)(this->__PVT__ptr_match) 
                         & (IData)(this->__PVT__maybe_full));
    this->__PVT__empty = ((IData)(this->__PVT__ptr_match) 
                          & (~ (IData)(this->__PVT__maybe_full)));
}

VL_INLINE_OPT void VSystolicArray_HBFP_forTesting_Queue::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_0__17(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_Queue::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_0__17\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__do_deq = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_0_io_deq_ready) 
                           & (~ (IData)(this->__PVT__empty)));
}

VL_INLINE_OPT void VSystolicArray_HBFP_forTesting_Queue::_combo__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_0__59(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_Queue::_combo__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_0__59\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__do_enq = ((~ (IData)(this->__PVT__full)) 
                           & (IData)(vlTOPp->io_in_ver_0_valid));
}

VL_INLINE_OPT void VSystolicArray_HBFP_forTesting_Queue::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_1__10(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_Queue::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_1__10\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vdlyvset__ram_exp__v0 = 0U;
    this->__Vdlyvset__ram_sign_5__v0 = 0U;
    this->__Vdlyvset__ram_sign_4__v0 = 0U;
    this->__Vdlyvset__ram_sign_3__v0 = 0U;
    this->__Vdlyvset__ram_sign_2__v0 = 0U;
    this->__Vdlyvset__ram_sign_1__v0 = 0U;
    this->__Vdlyvset__ram_sign_0__v0 = 0U;
    this->__Vdlyvset__ram_sign_6__v0 = 0U;
    this->__Vdlyvset__ram_sign_7__v0 = 0U;
    this->__Vdlyvset__ram_man_7__v0 = 0U;
    this->__Vdlyvset__ram_man_6__v0 = 0U;
    this->__Vdlyvset__ram_man_3__v0 = 0U;
    this->__Vdlyvset__ram_man_2__v0 = 0U;
    this->__Vdlyvset__ram_man_5__v0 = 0U;
    this->__Vdlyvset__ram_man_1__v0 = 0U;
    this->__Vdlyvset__ram_man_4__v0 = 0U;
    this->__Vdlyvset__ram_man_0__v0 = 0U;
    if (vlTOPp->reset) {
        this->__PVT__maybe_full = 0U;
    } else {
        if (((IData)(this->__PVT__do_enq) != (IData)(this->__PVT__do_deq))) {
            this->__PVT__maybe_full = this->__PVT__do_enq;
        }
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_1_valid))) {
        this->__Vdlyvval__ram_exp__v0 = vlTOPp->io_in_ver_1_bits_exp;
        this->__Vdlyvset__ram_exp__v0 = 1U;
        this->__Vdlyvdim0__ram_exp__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_1_valid))) {
        this->__Vdlyvval__ram_sign_5__v0 = vlTOPp->io_in_ver_1_bits_sign_5;
        this->__Vdlyvset__ram_sign_5__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_5__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_1_valid))) {
        this->__Vdlyvval__ram_sign_4__v0 = vlTOPp->io_in_ver_1_bits_sign_4;
        this->__Vdlyvset__ram_sign_4__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_4__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_1_valid))) {
        this->__Vdlyvval__ram_sign_3__v0 = vlTOPp->io_in_ver_1_bits_sign_3;
        this->__Vdlyvset__ram_sign_3__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_3__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_1_valid))) {
        this->__Vdlyvval__ram_sign_2__v0 = vlTOPp->io_in_ver_1_bits_sign_2;
        this->__Vdlyvset__ram_sign_2__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_2__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_1_valid))) {
        this->__Vdlyvval__ram_sign_1__v0 = vlTOPp->io_in_ver_1_bits_sign_1;
        this->__Vdlyvset__ram_sign_1__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_1__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_1_valid))) {
        this->__Vdlyvval__ram_sign_0__v0 = vlTOPp->io_in_ver_1_bits_sign_0;
        this->__Vdlyvset__ram_sign_0__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_0__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_1_valid))) {
        this->__Vdlyvval__ram_sign_6__v0 = vlTOPp->io_in_ver_1_bits_sign_6;
        this->__Vdlyvset__ram_sign_6__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_6__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_1_valid))) {
        this->__Vdlyvval__ram_sign_7__v0 = vlTOPp->io_in_ver_1_bits_sign_7;
        this->__Vdlyvset__ram_sign_7__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_7__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_1_valid))) {
        this->__Vdlyvval__ram_man_7__v0 = vlTOPp->io_in_ver_1_bits_man_7;
        this->__Vdlyvset__ram_man_7__v0 = 1U;
        this->__Vdlyvdim0__ram_man_7__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_1_valid))) {
        this->__Vdlyvval__ram_man_6__v0 = vlTOPp->io_in_ver_1_bits_man_6;
        this->__Vdlyvset__ram_man_6__v0 = 1U;
        this->__Vdlyvdim0__ram_man_6__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_1_valid))) {
        this->__Vdlyvval__ram_man_3__v0 = vlTOPp->io_in_ver_1_bits_man_3;
        this->__Vdlyvset__ram_man_3__v0 = 1U;
        this->__Vdlyvdim0__ram_man_3__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_1_valid))) {
        this->__Vdlyvval__ram_man_2__v0 = vlTOPp->io_in_ver_1_bits_man_2;
        this->__Vdlyvset__ram_man_2__v0 = 1U;
        this->__Vdlyvdim0__ram_man_2__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_1_valid))) {
        this->__Vdlyvval__ram_man_5__v0 = vlTOPp->io_in_ver_1_bits_man_5;
        this->__Vdlyvset__ram_man_5__v0 = 1U;
        this->__Vdlyvdim0__ram_man_5__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_1_valid))) {
        this->__Vdlyvval__ram_man_1__v0 = vlTOPp->io_in_ver_1_bits_man_1;
        this->__Vdlyvset__ram_man_1__v0 = 1U;
        this->__Vdlyvdim0__ram_man_1__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_1_valid))) {
        this->__Vdlyvval__ram_man_4__v0 = vlTOPp->io_in_ver_1_bits_man_4;
        this->__Vdlyvset__ram_man_4__v0 = 1U;
        this->__Vdlyvdim0__ram_man_4__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_1_valid))) {
        this->__Vdlyvval__ram_man_0__v0 = vlTOPp->io_in_ver_1_bits_man_0;
        this->__Vdlyvset__ram_man_0__v0 = 1U;
        this->__Vdlyvdim0__ram_man_0__v0 = this->__PVT__enq_ptr_value;
    }
    if (vlTOPp->reset) {
        this->__PVT__deq_ptr_value = 0U;
    } else {
        if (this->__PVT__do_deq) {
            this->__PVT__deq_ptr_value = this->__PVT___value_T_3;
        }
    }
    if (this->__Vdlyvset__ram_exp__v0) {
        this->__PVT__ram_exp[this->__Vdlyvdim0__ram_exp__v0] 
            = this->__Vdlyvval__ram_exp__v0;
    }
    if (this->__Vdlyvset__ram_sign_5__v0) {
        this->__PVT__ram_sign_5[this->__Vdlyvdim0__ram_sign_5__v0] 
            = this->__Vdlyvval__ram_sign_5__v0;
    }
    if (this->__Vdlyvset__ram_sign_4__v0) {
        this->__PVT__ram_sign_4[this->__Vdlyvdim0__ram_sign_4__v0] 
            = this->__Vdlyvval__ram_sign_4__v0;
    }
    if (this->__Vdlyvset__ram_sign_3__v0) {
        this->__PVT__ram_sign_3[this->__Vdlyvdim0__ram_sign_3__v0] 
            = this->__Vdlyvval__ram_sign_3__v0;
    }
    if (this->__Vdlyvset__ram_sign_2__v0) {
        this->__PVT__ram_sign_2[this->__Vdlyvdim0__ram_sign_2__v0] 
            = this->__Vdlyvval__ram_sign_2__v0;
    }
    if (this->__Vdlyvset__ram_sign_1__v0) {
        this->__PVT__ram_sign_1[this->__Vdlyvdim0__ram_sign_1__v0] 
            = this->__Vdlyvval__ram_sign_1__v0;
    }
    if (this->__Vdlyvset__ram_sign_0__v0) {
        this->__PVT__ram_sign_0[this->__Vdlyvdim0__ram_sign_0__v0] 
            = this->__Vdlyvval__ram_sign_0__v0;
    }
    if (this->__Vdlyvset__ram_sign_6__v0) {
        this->__PVT__ram_sign_6[this->__Vdlyvdim0__ram_sign_6__v0] 
            = this->__Vdlyvval__ram_sign_6__v0;
    }
    if (this->__Vdlyvset__ram_sign_7__v0) {
        this->__PVT__ram_sign_7[this->__Vdlyvdim0__ram_sign_7__v0] 
            = this->__Vdlyvval__ram_sign_7__v0;
    }
    if (this->__Vdlyvset__ram_man_7__v0) {
        this->__PVT__ram_man_7[this->__Vdlyvdim0__ram_man_7__v0] 
            = this->__Vdlyvval__ram_man_7__v0;
    }
    if (this->__Vdlyvset__ram_man_6__v0) {
        this->__PVT__ram_man_6[this->__Vdlyvdim0__ram_man_6__v0] 
            = this->__Vdlyvval__ram_man_6__v0;
    }
    if (this->__Vdlyvset__ram_man_3__v0) {
        this->__PVT__ram_man_3[this->__Vdlyvdim0__ram_man_3__v0] 
            = this->__Vdlyvval__ram_man_3__v0;
    }
    if (this->__Vdlyvset__ram_man_2__v0) {
        this->__PVT__ram_man_2[this->__Vdlyvdim0__ram_man_2__v0] 
            = this->__Vdlyvval__ram_man_2__v0;
    }
    if (this->__Vdlyvset__ram_man_5__v0) {
        this->__PVT__ram_man_5[this->__Vdlyvdim0__ram_man_5__v0] 
            = this->__Vdlyvval__ram_man_5__v0;
    }
    if (this->__Vdlyvset__ram_man_1__v0) {
        this->__PVT__ram_man_1[this->__Vdlyvdim0__ram_man_1__v0] 
            = this->__Vdlyvval__ram_man_1__v0;
    }
    if (this->__Vdlyvset__ram_man_4__v0) {
        this->__PVT__ram_man_4[this->__Vdlyvdim0__ram_man_4__v0] 
            = this->__Vdlyvval__ram_man_4__v0;
    }
    if (this->__Vdlyvset__ram_man_0__v0) {
        this->__PVT__ram_man_0[this->__Vdlyvdim0__ram_man_0__v0] 
            = this->__Vdlyvval__ram_man_0__v0;
    }
    if (vlTOPp->reset) {
        this->__PVT__enq_ptr_value = 0U;
    } else {
        if (this->__PVT__do_enq) {
            this->__PVT__enq_ptr_value = this->__PVT___value_T_1;
        }
    }
    this->__PVT___value_T_3 = (0x1ffU & ((IData)(1U) 
                                         + (IData)(this->__PVT__deq_ptr_value)));
    this->__PVT___value_T_1 = (0x1ffU & ((IData)(1U) 
                                         + (IData)(this->__PVT__enq_ptr_value)));
    this->__PVT__ptr_match = ((IData)(this->__PVT__enq_ptr_value) 
                              == (IData)(this->__PVT__deq_ptr_value));
    this->__PVT__full = ((IData)(this->__PVT__ptr_match) 
                         & (IData)(this->__PVT__maybe_full));
    this->__PVT__empty = ((IData)(this->__PVT__ptr_match) 
                          & (~ (IData)(this->__PVT__maybe_full)));
}

VL_INLINE_OPT void VSystolicArray_HBFP_forTesting_Queue::_combo__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_1__60(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_Queue::_combo__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_1__60\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__do_enq = ((~ (IData)(this->__PVT__full)) 
                           & (IData)(vlTOPp->io_in_ver_1_valid));
    this->__PVT__do_deq = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_1_io_deq_ready) 
                           & (~ (IData)(this->__PVT__empty)));
}

VL_INLINE_OPT void VSystolicArray_HBFP_forTesting_Queue::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_2__11(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_Queue::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_2__11\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vdlyvset__ram_exp__v0 = 0U;
    this->__Vdlyvset__ram_sign_5__v0 = 0U;
    this->__Vdlyvset__ram_sign_4__v0 = 0U;
    this->__Vdlyvset__ram_sign_3__v0 = 0U;
    this->__Vdlyvset__ram_sign_2__v0 = 0U;
    this->__Vdlyvset__ram_sign_1__v0 = 0U;
    this->__Vdlyvset__ram_sign_0__v0 = 0U;
    this->__Vdlyvset__ram_sign_6__v0 = 0U;
    this->__Vdlyvset__ram_sign_7__v0 = 0U;
    this->__Vdlyvset__ram_man_7__v0 = 0U;
    this->__Vdlyvset__ram_man_6__v0 = 0U;
    this->__Vdlyvset__ram_man_3__v0 = 0U;
    this->__Vdlyvset__ram_man_2__v0 = 0U;
    this->__Vdlyvset__ram_man_5__v0 = 0U;
    this->__Vdlyvset__ram_man_1__v0 = 0U;
    this->__Vdlyvset__ram_man_4__v0 = 0U;
    this->__Vdlyvset__ram_man_0__v0 = 0U;
    if (vlTOPp->reset) {
        this->__PVT__maybe_full = 0U;
    } else {
        if (((IData)(this->__PVT__do_enq) != (IData)(this->__PVT__do_deq))) {
            this->__PVT__maybe_full = this->__PVT__do_enq;
        }
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_2_valid))) {
        this->__Vdlyvval__ram_exp__v0 = vlTOPp->io_in_ver_2_bits_exp;
        this->__Vdlyvset__ram_exp__v0 = 1U;
        this->__Vdlyvdim0__ram_exp__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_2_valid))) {
        this->__Vdlyvval__ram_sign_5__v0 = vlTOPp->io_in_ver_2_bits_sign_5;
        this->__Vdlyvset__ram_sign_5__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_5__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_2_valid))) {
        this->__Vdlyvval__ram_sign_4__v0 = vlTOPp->io_in_ver_2_bits_sign_4;
        this->__Vdlyvset__ram_sign_4__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_4__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_2_valid))) {
        this->__Vdlyvval__ram_sign_3__v0 = vlTOPp->io_in_ver_2_bits_sign_3;
        this->__Vdlyvset__ram_sign_3__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_3__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_2_valid))) {
        this->__Vdlyvval__ram_sign_2__v0 = vlTOPp->io_in_ver_2_bits_sign_2;
        this->__Vdlyvset__ram_sign_2__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_2__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_2_valid))) {
        this->__Vdlyvval__ram_sign_1__v0 = vlTOPp->io_in_ver_2_bits_sign_1;
        this->__Vdlyvset__ram_sign_1__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_1__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_2_valid))) {
        this->__Vdlyvval__ram_sign_0__v0 = vlTOPp->io_in_ver_2_bits_sign_0;
        this->__Vdlyvset__ram_sign_0__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_0__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_2_valid))) {
        this->__Vdlyvval__ram_sign_6__v0 = vlTOPp->io_in_ver_2_bits_sign_6;
        this->__Vdlyvset__ram_sign_6__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_6__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_2_valid))) {
        this->__Vdlyvval__ram_sign_7__v0 = vlTOPp->io_in_ver_2_bits_sign_7;
        this->__Vdlyvset__ram_sign_7__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_7__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_2_valid))) {
        this->__Vdlyvval__ram_man_7__v0 = vlTOPp->io_in_ver_2_bits_man_7;
        this->__Vdlyvset__ram_man_7__v0 = 1U;
        this->__Vdlyvdim0__ram_man_7__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_2_valid))) {
        this->__Vdlyvval__ram_man_6__v0 = vlTOPp->io_in_ver_2_bits_man_6;
        this->__Vdlyvset__ram_man_6__v0 = 1U;
        this->__Vdlyvdim0__ram_man_6__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_2_valid))) {
        this->__Vdlyvval__ram_man_3__v0 = vlTOPp->io_in_ver_2_bits_man_3;
        this->__Vdlyvset__ram_man_3__v0 = 1U;
        this->__Vdlyvdim0__ram_man_3__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_2_valid))) {
        this->__Vdlyvval__ram_man_2__v0 = vlTOPp->io_in_ver_2_bits_man_2;
        this->__Vdlyvset__ram_man_2__v0 = 1U;
        this->__Vdlyvdim0__ram_man_2__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_2_valid))) {
        this->__Vdlyvval__ram_man_5__v0 = vlTOPp->io_in_ver_2_bits_man_5;
        this->__Vdlyvset__ram_man_5__v0 = 1U;
        this->__Vdlyvdim0__ram_man_5__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_2_valid))) {
        this->__Vdlyvval__ram_man_1__v0 = vlTOPp->io_in_ver_2_bits_man_1;
        this->__Vdlyvset__ram_man_1__v0 = 1U;
        this->__Vdlyvdim0__ram_man_1__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_2_valid))) {
        this->__Vdlyvval__ram_man_4__v0 = vlTOPp->io_in_ver_2_bits_man_4;
        this->__Vdlyvset__ram_man_4__v0 = 1U;
        this->__Vdlyvdim0__ram_man_4__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_2_valid))) {
        this->__Vdlyvval__ram_man_0__v0 = vlTOPp->io_in_ver_2_bits_man_0;
        this->__Vdlyvset__ram_man_0__v0 = 1U;
        this->__Vdlyvdim0__ram_man_0__v0 = this->__PVT__enq_ptr_value;
    }
    if (vlTOPp->reset) {
        this->__PVT__deq_ptr_value = 0U;
    } else {
        if (this->__PVT__do_deq) {
            this->__PVT__deq_ptr_value = this->__PVT___value_T_3;
        }
    }
    if (this->__Vdlyvset__ram_exp__v0) {
        this->__PVT__ram_exp[this->__Vdlyvdim0__ram_exp__v0] 
            = this->__Vdlyvval__ram_exp__v0;
    }
    if (this->__Vdlyvset__ram_sign_5__v0) {
        this->__PVT__ram_sign_5[this->__Vdlyvdim0__ram_sign_5__v0] 
            = this->__Vdlyvval__ram_sign_5__v0;
    }
    if (this->__Vdlyvset__ram_sign_4__v0) {
        this->__PVT__ram_sign_4[this->__Vdlyvdim0__ram_sign_4__v0] 
            = this->__Vdlyvval__ram_sign_4__v0;
    }
    if (this->__Vdlyvset__ram_sign_3__v0) {
        this->__PVT__ram_sign_3[this->__Vdlyvdim0__ram_sign_3__v0] 
            = this->__Vdlyvval__ram_sign_3__v0;
    }
    if (this->__Vdlyvset__ram_sign_2__v0) {
        this->__PVT__ram_sign_2[this->__Vdlyvdim0__ram_sign_2__v0] 
            = this->__Vdlyvval__ram_sign_2__v0;
    }
    if (this->__Vdlyvset__ram_sign_1__v0) {
        this->__PVT__ram_sign_1[this->__Vdlyvdim0__ram_sign_1__v0] 
            = this->__Vdlyvval__ram_sign_1__v0;
    }
    if (this->__Vdlyvset__ram_sign_0__v0) {
        this->__PVT__ram_sign_0[this->__Vdlyvdim0__ram_sign_0__v0] 
            = this->__Vdlyvval__ram_sign_0__v0;
    }
    if (this->__Vdlyvset__ram_sign_6__v0) {
        this->__PVT__ram_sign_6[this->__Vdlyvdim0__ram_sign_6__v0] 
            = this->__Vdlyvval__ram_sign_6__v0;
    }
    if (this->__Vdlyvset__ram_sign_7__v0) {
        this->__PVT__ram_sign_7[this->__Vdlyvdim0__ram_sign_7__v0] 
            = this->__Vdlyvval__ram_sign_7__v0;
    }
    if (this->__Vdlyvset__ram_man_7__v0) {
        this->__PVT__ram_man_7[this->__Vdlyvdim0__ram_man_7__v0] 
            = this->__Vdlyvval__ram_man_7__v0;
    }
    if (this->__Vdlyvset__ram_man_6__v0) {
        this->__PVT__ram_man_6[this->__Vdlyvdim0__ram_man_6__v0] 
            = this->__Vdlyvval__ram_man_6__v0;
    }
    if (this->__Vdlyvset__ram_man_3__v0) {
        this->__PVT__ram_man_3[this->__Vdlyvdim0__ram_man_3__v0] 
            = this->__Vdlyvval__ram_man_3__v0;
    }
    if (this->__Vdlyvset__ram_man_2__v0) {
        this->__PVT__ram_man_2[this->__Vdlyvdim0__ram_man_2__v0] 
            = this->__Vdlyvval__ram_man_2__v0;
    }
    if (this->__Vdlyvset__ram_man_5__v0) {
        this->__PVT__ram_man_5[this->__Vdlyvdim0__ram_man_5__v0] 
            = this->__Vdlyvval__ram_man_5__v0;
    }
    if (this->__Vdlyvset__ram_man_1__v0) {
        this->__PVT__ram_man_1[this->__Vdlyvdim0__ram_man_1__v0] 
            = this->__Vdlyvval__ram_man_1__v0;
    }
    if (this->__Vdlyvset__ram_man_4__v0) {
        this->__PVT__ram_man_4[this->__Vdlyvdim0__ram_man_4__v0] 
            = this->__Vdlyvval__ram_man_4__v0;
    }
    if (this->__Vdlyvset__ram_man_0__v0) {
        this->__PVT__ram_man_0[this->__Vdlyvdim0__ram_man_0__v0] 
            = this->__Vdlyvval__ram_man_0__v0;
    }
    if (vlTOPp->reset) {
        this->__PVT__enq_ptr_value = 0U;
    } else {
        if (this->__PVT__do_enq) {
            this->__PVT__enq_ptr_value = this->__PVT___value_T_1;
        }
    }
    this->__PVT___value_T_3 = (0x1ffU & ((IData)(1U) 
                                         + (IData)(this->__PVT__deq_ptr_value)));
    this->__PVT___value_T_1 = (0x1ffU & ((IData)(1U) 
                                         + (IData)(this->__PVT__enq_ptr_value)));
    this->__PVT__ptr_match = ((IData)(this->__PVT__enq_ptr_value) 
                              == (IData)(this->__PVT__deq_ptr_value));
    this->__PVT__full = ((IData)(this->__PVT__ptr_match) 
                         & (IData)(this->__PVT__maybe_full));
    this->__PVT__empty = ((IData)(this->__PVT__ptr_match) 
                          & (~ (IData)(this->__PVT__maybe_full)));
}

VL_INLINE_OPT void VSystolicArray_HBFP_forTesting_Queue::_combo__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_2__61(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_Queue::_combo__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_2__61\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__do_enq = ((~ (IData)(this->__PVT__full)) 
                           & (IData)(vlTOPp->io_in_ver_2_valid));
    this->__PVT__do_deq = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_2_io_deq_ready) 
                           & (~ (IData)(this->__PVT__empty)));
}

VL_INLINE_OPT void VSystolicArray_HBFP_forTesting_Queue::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_3__12(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_Queue::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_3__12\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vdlyvset__ram_exp__v0 = 0U;
    this->__Vdlyvset__ram_sign_5__v0 = 0U;
    this->__Vdlyvset__ram_sign_4__v0 = 0U;
    this->__Vdlyvset__ram_sign_3__v0 = 0U;
    this->__Vdlyvset__ram_sign_2__v0 = 0U;
    this->__Vdlyvset__ram_sign_1__v0 = 0U;
    this->__Vdlyvset__ram_sign_0__v0 = 0U;
    this->__Vdlyvset__ram_sign_6__v0 = 0U;
    this->__Vdlyvset__ram_sign_7__v0 = 0U;
    this->__Vdlyvset__ram_man_7__v0 = 0U;
    this->__Vdlyvset__ram_man_6__v0 = 0U;
    this->__Vdlyvset__ram_man_3__v0 = 0U;
    this->__Vdlyvset__ram_man_2__v0 = 0U;
    this->__Vdlyvset__ram_man_5__v0 = 0U;
    this->__Vdlyvset__ram_man_1__v0 = 0U;
    this->__Vdlyvset__ram_man_4__v0 = 0U;
    this->__Vdlyvset__ram_man_0__v0 = 0U;
    if (vlTOPp->reset) {
        this->__PVT__maybe_full = 0U;
    } else {
        if (((IData)(this->__PVT__do_enq) != (IData)(this->__PVT__do_deq))) {
            this->__PVT__maybe_full = this->__PVT__do_enq;
        }
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_3_valid))) {
        this->__Vdlyvval__ram_exp__v0 = vlTOPp->io_in_ver_3_bits_exp;
        this->__Vdlyvset__ram_exp__v0 = 1U;
        this->__Vdlyvdim0__ram_exp__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_3_valid))) {
        this->__Vdlyvval__ram_sign_5__v0 = vlTOPp->io_in_ver_3_bits_sign_5;
        this->__Vdlyvset__ram_sign_5__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_5__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_3_valid))) {
        this->__Vdlyvval__ram_sign_4__v0 = vlTOPp->io_in_ver_3_bits_sign_4;
        this->__Vdlyvset__ram_sign_4__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_4__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_3_valid))) {
        this->__Vdlyvval__ram_sign_3__v0 = vlTOPp->io_in_ver_3_bits_sign_3;
        this->__Vdlyvset__ram_sign_3__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_3__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_3_valid))) {
        this->__Vdlyvval__ram_sign_2__v0 = vlTOPp->io_in_ver_3_bits_sign_2;
        this->__Vdlyvset__ram_sign_2__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_2__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_3_valid))) {
        this->__Vdlyvval__ram_sign_1__v0 = vlTOPp->io_in_ver_3_bits_sign_1;
        this->__Vdlyvset__ram_sign_1__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_1__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_3_valid))) {
        this->__Vdlyvval__ram_sign_0__v0 = vlTOPp->io_in_ver_3_bits_sign_0;
        this->__Vdlyvset__ram_sign_0__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_0__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_3_valid))) {
        this->__Vdlyvval__ram_sign_6__v0 = vlTOPp->io_in_ver_3_bits_sign_6;
        this->__Vdlyvset__ram_sign_6__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_6__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_3_valid))) {
        this->__Vdlyvval__ram_sign_7__v0 = vlTOPp->io_in_ver_3_bits_sign_7;
        this->__Vdlyvset__ram_sign_7__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_7__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_3_valid))) {
        this->__Vdlyvval__ram_man_7__v0 = vlTOPp->io_in_ver_3_bits_man_7;
        this->__Vdlyvset__ram_man_7__v0 = 1U;
        this->__Vdlyvdim0__ram_man_7__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_3_valid))) {
        this->__Vdlyvval__ram_man_6__v0 = vlTOPp->io_in_ver_3_bits_man_6;
        this->__Vdlyvset__ram_man_6__v0 = 1U;
        this->__Vdlyvdim0__ram_man_6__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_3_valid))) {
        this->__Vdlyvval__ram_man_3__v0 = vlTOPp->io_in_ver_3_bits_man_3;
        this->__Vdlyvset__ram_man_3__v0 = 1U;
        this->__Vdlyvdim0__ram_man_3__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_3_valid))) {
        this->__Vdlyvval__ram_man_2__v0 = vlTOPp->io_in_ver_3_bits_man_2;
        this->__Vdlyvset__ram_man_2__v0 = 1U;
        this->__Vdlyvdim0__ram_man_2__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_3_valid))) {
        this->__Vdlyvval__ram_man_5__v0 = vlTOPp->io_in_ver_3_bits_man_5;
        this->__Vdlyvset__ram_man_5__v0 = 1U;
        this->__Vdlyvdim0__ram_man_5__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_3_valid))) {
        this->__Vdlyvval__ram_man_1__v0 = vlTOPp->io_in_ver_3_bits_man_1;
        this->__Vdlyvset__ram_man_1__v0 = 1U;
        this->__Vdlyvdim0__ram_man_1__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_3_valid))) {
        this->__Vdlyvval__ram_man_4__v0 = vlTOPp->io_in_ver_3_bits_man_4;
        this->__Vdlyvset__ram_man_4__v0 = 1U;
        this->__Vdlyvdim0__ram_man_4__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_3_valid))) {
        this->__Vdlyvval__ram_man_0__v0 = vlTOPp->io_in_ver_3_bits_man_0;
        this->__Vdlyvset__ram_man_0__v0 = 1U;
        this->__Vdlyvdim0__ram_man_0__v0 = this->__PVT__enq_ptr_value;
    }
    if (vlTOPp->reset) {
        this->__PVT__deq_ptr_value = 0U;
    } else {
        if (this->__PVT__do_deq) {
            this->__PVT__deq_ptr_value = this->__PVT___value_T_3;
        }
    }
    if (this->__Vdlyvset__ram_exp__v0) {
        this->__PVT__ram_exp[this->__Vdlyvdim0__ram_exp__v0] 
            = this->__Vdlyvval__ram_exp__v0;
    }
    if (this->__Vdlyvset__ram_sign_5__v0) {
        this->__PVT__ram_sign_5[this->__Vdlyvdim0__ram_sign_5__v0] 
            = this->__Vdlyvval__ram_sign_5__v0;
    }
    if (this->__Vdlyvset__ram_sign_4__v0) {
        this->__PVT__ram_sign_4[this->__Vdlyvdim0__ram_sign_4__v0] 
            = this->__Vdlyvval__ram_sign_4__v0;
    }
    if (this->__Vdlyvset__ram_sign_3__v0) {
        this->__PVT__ram_sign_3[this->__Vdlyvdim0__ram_sign_3__v0] 
            = this->__Vdlyvval__ram_sign_3__v0;
    }
    if (this->__Vdlyvset__ram_sign_2__v0) {
        this->__PVT__ram_sign_2[this->__Vdlyvdim0__ram_sign_2__v0] 
            = this->__Vdlyvval__ram_sign_2__v0;
    }
    if (this->__Vdlyvset__ram_sign_1__v0) {
        this->__PVT__ram_sign_1[this->__Vdlyvdim0__ram_sign_1__v0] 
            = this->__Vdlyvval__ram_sign_1__v0;
    }
    if (this->__Vdlyvset__ram_sign_0__v0) {
        this->__PVT__ram_sign_0[this->__Vdlyvdim0__ram_sign_0__v0] 
            = this->__Vdlyvval__ram_sign_0__v0;
    }
    if (this->__Vdlyvset__ram_sign_6__v0) {
        this->__PVT__ram_sign_6[this->__Vdlyvdim0__ram_sign_6__v0] 
            = this->__Vdlyvval__ram_sign_6__v0;
    }
    if (this->__Vdlyvset__ram_sign_7__v0) {
        this->__PVT__ram_sign_7[this->__Vdlyvdim0__ram_sign_7__v0] 
            = this->__Vdlyvval__ram_sign_7__v0;
    }
    if (this->__Vdlyvset__ram_man_7__v0) {
        this->__PVT__ram_man_7[this->__Vdlyvdim0__ram_man_7__v0] 
            = this->__Vdlyvval__ram_man_7__v0;
    }
    if (this->__Vdlyvset__ram_man_6__v0) {
        this->__PVT__ram_man_6[this->__Vdlyvdim0__ram_man_6__v0] 
            = this->__Vdlyvval__ram_man_6__v0;
    }
    if (this->__Vdlyvset__ram_man_3__v0) {
        this->__PVT__ram_man_3[this->__Vdlyvdim0__ram_man_3__v0] 
            = this->__Vdlyvval__ram_man_3__v0;
    }
    if (this->__Vdlyvset__ram_man_2__v0) {
        this->__PVT__ram_man_2[this->__Vdlyvdim0__ram_man_2__v0] 
            = this->__Vdlyvval__ram_man_2__v0;
    }
    if (this->__Vdlyvset__ram_man_5__v0) {
        this->__PVT__ram_man_5[this->__Vdlyvdim0__ram_man_5__v0] 
            = this->__Vdlyvval__ram_man_5__v0;
    }
    if (this->__Vdlyvset__ram_man_1__v0) {
        this->__PVT__ram_man_1[this->__Vdlyvdim0__ram_man_1__v0] 
            = this->__Vdlyvval__ram_man_1__v0;
    }
    if (this->__Vdlyvset__ram_man_4__v0) {
        this->__PVT__ram_man_4[this->__Vdlyvdim0__ram_man_4__v0] 
            = this->__Vdlyvval__ram_man_4__v0;
    }
    if (this->__Vdlyvset__ram_man_0__v0) {
        this->__PVT__ram_man_0[this->__Vdlyvdim0__ram_man_0__v0] 
            = this->__Vdlyvval__ram_man_0__v0;
    }
    if (vlTOPp->reset) {
        this->__PVT__enq_ptr_value = 0U;
    } else {
        if (this->__PVT__do_enq) {
            this->__PVT__enq_ptr_value = this->__PVT___value_T_1;
        }
    }
    this->__PVT___value_T_3 = (0x1ffU & ((IData)(1U) 
                                         + (IData)(this->__PVT__deq_ptr_value)));
    this->__PVT___value_T_1 = (0x1ffU & ((IData)(1U) 
                                         + (IData)(this->__PVT__enq_ptr_value)));
    this->__PVT__ptr_match = ((IData)(this->__PVT__enq_ptr_value) 
                              == (IData)(this->__PVT__deq_ptr_value));
    this->__PVT__full = ((IData)(this->__PVT__ptr_match) 
                         & (IData)(this->__PVT__maybe_full));
    this->__PVT__empty = ((IData)(this->__PVT__ptr_match) 
                          & (~ (IData)(this->__PVT__maybe_full)));
}

VL_INLINE_OPT void VSystolicArray_HBFP_forTesting_Queue::_combo__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_3__62(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_Queue::_combo__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_3__62\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__do_enq = ((~ (IData)(this->__PVT__full)) 
                           & (IData)(vlTOPp->io_in_ver_3_valid));
    this->__PVT__do_deq = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_3_io_deq_ready) 
                           & (~ (IData)(this->__PVT__empty)));
}

VL_INLINE_OPT void VSystolicArray_HBFP_forTesting_Queue::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_4__13(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_Queue::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_4__13\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vdlyvset__ram_exp__v0 = 0U;
    this->__Vdlyvset__ram_sign_5__v0 = 0U;
    this->__Vdlyvset__ram_sign_4__v0 = 0U;
    this->__Vdlyvset__ram_sign_3__v0 = 0U;
    this->__Vdlyvset__ram_sign_2__v0 = 0U;
    this->__Vdlyvset__ram_sign_1__v0 = 0U;
    this->__Vdlyvset__ram_sign_0__v0 = 0U;
    this->__Vdlyvset__ram_sign_6__v0 = 0U;
    this->__Vdlyvset__ram_sign_7__v0 = 0U;
    this->__Vdlyvset__ram_man_7__v0 = 0U;
    this->__Vdlyvset__ram_man_6__v0 = 0U;
    this->__Vdlyvset__ram_man_3__v0 = 0U;
    this->__Vdlyvset__ram_man_2__v0 = 0U;
    this->__Vdlyvset__ram_man_5__v0 = 0U;
    this->__Vdlyvset__ram_man_1__v0 = 0U;
    this->__Vdlyvset__ram_man_4__v0 = 0U;
    this->__Vdlyvset__ram_man_0__v0 = 0U;
    if (vlTOPp->reset) {
        this->__PVT__maybe_full = 0U;
    } else {
        if (((IData)(this->__PVT__do_enq) != (IData)(this->__PVT__do_deq))) {
            this->__PVT__maybe_full = this->__PVT__do_enq;
        }
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_4_valid))) {
        this->__Vdlyvval__ram_exp__v0 = vlTOPp->io_in_ver_4_bits_exp;
        this->__Vdlyvset__ram_exp__v0 = 1U;
        this->__Vdlyvdim0__ram_exp__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_4_valid))) {
        this->__Vdlyvval__ram_sign_5__v0 = vlTOPp->io_in_ver_4_bits_sign_5;
        this->__Vdlyvset__ram_sign_5__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_5__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_4_valid))) {
        this->__Vdlyvval__ram_sign_4__v0 = vlTOPp->io_in_ver_4_bits_sign_4;
        this->__Vdlyvset__ram_sign_4__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_4__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_4_valid))) {
        this->__Vdlyvval__ram_sign_3__v0 = vlTOPp->io_in_ver_4_bits_sign_3;
        this->__Vdlyvset__ram_sign_3__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_3__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_4_valid))) {
        this->__Vdlyvval__ram_sign_2__v0 = vlTOPp->io_in_ver_4_bits_sign_2;
        this->__Vdlyvset__ram_sign_2__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_2__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_4_valid))) {
        this->__Vdlyvval__ram_sign_1__v0 = vlTOPp->io_in_ver_4_bits_sign_1;
        this->__Vdlyvset__ram_sign_1__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_1__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_4_valid))) {
        this->__Vdlyvval__ram_sign_0__v0 = vlTOPp->io_in_ver_4_bits_sign_0;
        this->__Vdlyvset__ram_sign_0__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_0__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_4_valid))) {
        this->__Vdlyvval__ram_sign_6__v0 = vlTOPp->io_in_ver_4_bits_sign_6;
        this->__Vdlyvset__ram_sign_6__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_6__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_4_valid))) {
        this->__Vdlyvval__ram_sign_7__v0 = vlTOPp->io_in_ver_4_bits_sign_7;
        this->__Vdlyvset__ram_sign_7__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_7__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_4_valid))) {
        this->__Vdlyvval__ram_man_7__v0 = vlTOPp->io_in_ver_4_bits_man_7;
        this->__Vdlyvset__ram_man_7__v0 = 1U;
        this->__Vdlyvdim0__ram_man_7__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_4_valid))) {
        this->__Vdlyvval__ram_man_6__v0 = vlTOPp->io_in_ver_4_bits_man_6;
        this->__Vdlyvset__ram_man_6__v0 = 1U;
        this->__Vdlyvdim0__ram_man_6__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_4_valid))) {
        this->__Vdlyvval__ram_man_3__v0 = vlTOPp->io_in_ver_4_bits_man_3;
        this->__Vdlyvset__ram_man_3__v0 = 1U;
        this->__Vdlyvdim0__ram_man_3__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_4_valid))) {
        this->__Vdlyvval__ram_man_2__v0 = vlTOPp->io_in_ver_4_bits_man_2;
        this->__Vdlyvset__ram_man_2__v0 = 1U;
        this->__Vdlyvdim0__ram_man_2__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_4_valid))) {
        this->__Vdlyvval__ram_man_5__v0 = vlTOPp->io_in_ver_4_bits_man_5;
        this->__Vdlyvset__ram_man_5__v0 = 1U;
        this->__Vdlyvdim0__ram_man_5__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_4_valid))) {
        this->__Vdlyvval__ram_man_1__v0 = vlTOPp->io_in_ver_4_bits_man_1;
        this->__Vdlyvset__ram_man_1__v0 = 1U;
        this->__Vdlyvdim0__ram_man_1__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_4_valid))) {
        this->__Vdlyvval__ram_man_4__v0 = vlTOPp->io_in_ver_4_bits_man_4;
        this->__Vdlyvset__ram_man_4__v0 = 1U;
        this->__Vdlyvdim0__ram_man_4__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_4_valid))) {
        this->__Vdlyvval__ram_man_0__v0 = vlTOPp->io_in_ver_4_bits_man_0;
        this->__Vdlyvset__ram_man_0__v0 = 1U;
        this->__Vdlyvdim0__ram_man_0__v0 = this->__PVT__enq_ptr_value;
    }
    if (vlTOPp->reset) {
        this->__PVT__deq_ptr_value = 0U;
    } else {
        if (this->__PVT__do_deq) {
            this->__PVT__deq_ptr_value = this->__PVT___value_T_3;
        }
    }
    if (this->__Vdlyvset__ram_exp__v0) {
        this->__PVT__ram_exp[this->__Vdlyvdim0__ram_exp__v0] 
            = this->__Vdlyvval__ram_exp__v0;
    }
    if (this->__Vdlyvset__ram_sign_5__v0) {
        this->__PVT__ram_sign_5[this->__Vdlyvdim0__ram_sign_5__v0] 
            = this->__Vdlyvval__ram_sign_5__v0;
    }
    if (this->__Vdlyvset__ram_sign_4__v0) {
        this->__PVT__ram_sign_4[this->__Vdlyvdim0__ram_sign_4__v0] 
            = this->__Vdlyvval__ram_sign_4__v0;
    }
    if (this->__Vdlyvset__ram_sign_3__v0) {
        this->__PVT__ram_sign_3[this->__Vdlyvdim0__ram_sign_3__v0] 
            = this->__Vdlyvval__ram_sign_3__v0;
    }
    if (this->__Vdlyvset__ram_sign_2__v0) {
        this->__PVT__ram_sign_2[this->__Vdlyvdim0__ram_sign_2__v0] 
            = this->__Vdlyvval__ram_sign_2__v0;
    }
    if (this->__Vdlyvset__ram_sign_1__v0) {
        this->__PVT__ram_sign_1[this->__Vdlyvdim0__ram_sign_1__v0] 
            = this->__Vdlyvval__ram_sign_1__v0;
    }
    if (this->__Vdlyvset__ram_sign_0__v0) {
        this->__PVT__ram_sign_0[this->__Vdlyvdim0__ram_sign_0__v0] 
            = this->__Vdlyvval__ram_sign_0__v0;
    }
    if (this->__Vdlyvset__ram_sign_6__v0) {
        this->__PVT__ram_sign_6[this->__Vdlyvdim0__ram_sign_6__v0] 
            = this->__Vdlyvval__ram_sign_6__v0;
    }
    if (this->__Vdlyvset__ram_sign_7__v0) {
        this->__PVT__ram_sign_7[this->__Vdlyvdim0__ram_sign_7__v0] 
            = this->__Vdlyvval__ram_sign_7__v0;
    }
    if (this->__Vdlyvset__ram_man_7__v0) {
        this->__PVT__ram_man_7[this->__Vdlyvdim0__ram_man_7__v0] 
            = this->__Vdlyvval__ram_man_7__v0;
    }
    if (this->__Vdlyvset__ram_man_6__v0) {
        this->__PVT__ram_man_6[this->__Vdlyvdim0__ram_man_6__v0] 
            = this->__Vdlyvval__ram_man_6__v0;
    }
    if (this->__Vdlyvset__ram_man_3__v0) {
        this->__PVT__ram_man_3[this->__Vdlyvdim0__ram_man_3__v0] 
            = this->__Vdlyvval__ram_man_3__v0;
    }
    if (this->__Vdlyvset__ram_man_2__v0) {
        this->__PVT__ram_man_2[this->__Vdlyvdim0__ram_man_2__v0] 
            = this->__Vdlyvval__ram_man_2__v0;
    }
    if (this->__Vdlyvset__ram_man_5__v0) {
        this->__PVT__ram_man_5[this->__Vdlyvdim0__ram_man_5__v0] 
            = this->__Vdlyvval__ram_man_5__v0;
    }
    if (this->__Vdlyvset__ram_man_1__v0) {
        this->__PVT__ram_man_1[this->__Vdlyvdim0__ram_man_1__v0] 
            = this->__Vdlyvval__ram_man_1__v0;
    }
    if (this->__Vdlyvset__ram_man_4__v0) {
        this->__PVT__ram_man_4[this->__Vdlyvdim0__ram_man_4__v0] 
            = this->__Vdlyvval__ram_man_4__v0;
    }
    if (this->__Vdlyvset__ram_man_0__v0) {
        this->__PVT__ram_man_0[this->__Vdlyvdim0__ram_man_0__v0] 
            = this->__Vdlyvval__ram_man_0__v0;
    }
    if (vlTOPp->reset) {
        this->__PVT__enq_ptr_value = 0U;
    } else {
        if (this->__PVT__do_enq) {
            this->__PVT__enq_ptr_value = this->__PVT___value_T_1;
        }
    }
    this->__PVT___value_T_3 = (0x1ffU & ((IData)(1U) 
                                         + (IData)(this->__PVT__deq_ptr_value)));
    this->__PVT___value_T_1 = (0x1ffU & ((IData)(1U) 
                                         + (IData)(this->__PVT__enq_ptr_value)));
    this->__PVT__ptr_match = ((IData)(this->__PVT__enq_ptr_value) 
                              == (IData)(this->__PVT__deq_ptr_value));
    this->__PVT__full = ((IData)(this->__PVT__ptr_match) 
                         & (IData)(this->__PVT__maybe_full));
    this->__PVT__empty = ((IData)(this->__PVT__ptr_match) 
                          & (~ (IData)(this->__PVT__maybe_full)));
}

VL_INLINE_OPT void VSystolicArray_HBFP_forTesting_Queue::_combo__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_4__63(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_Queue::_combo__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_4__63\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__do_enq = ((~ (IData)(this->__PVT__full)) 
                           & (IData)(vlTOPp->io_in_ver_4_valid));
    this->__PVT__do_deq = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_4_io_deq_ready) 
                           & (~ (IData)(this->__PVT__empty)));
}

VL_INLINE_OPT void VSystolicArray_HBFP_forTesting_Queue::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_5__14(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_Queue::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_5__14\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vdlyvset__ram_exp__v0 = 0U;
    this->__Vdlyvset__ram_sign_5__v0 = 0U;
    this->__Vdlyvset__ram_sign_4__v0 = 0U;
    this->__Vdlyvset__ram_sign_3__v0 = 0U;
    this->__Vdlyvset__ram_sign_2__v0 = 0U;
    this->__Vdlyvset__ram_sign_1__v0 = 0U;
    this->__Vdlyvset__ram_sign_0__v0 = 0U;
    this->__Vdlyvset__ram_sign_6__v0 = 0U;
    this->__Vdlyvset__ram_sign_7__v0 = 0U;
    this->__Vdlyvset__ram_man_7__v0 = 0U;
    this->__Vdlyvset__ram_man_6__v0 = 0U;
    this->__Vdlyvset__ram_man_3__v0 = 0U;
    this->__Vdlyvset__ram_man_2__v0 = 0U;
    this->__Vdlyvset__ram_man_5__v0 = 0U;
    this->__Vdlyvset__ram_man_1__v0 = 0U;
    this->__Vdlyvset__ram_man_4__v0 = 0U;
    this->__Vdlyvset__ram_man_0__v0 = 0U;
    if (vlTOPp->reset) {
        this->__PVT__maybe_full = 0U;
    } else {
        if (((IData)(this->__PVT__do_enq) != (IData)(this->__PVT__do_deq))) {
            this->__PVT__maybe_full = this->__PVT__do_enq;
        }
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_5_valid))) {
        this->__Vdlyvval__ram_exp__v0 = vlTOPp->io_in_ver_5_bits_exp;
        this->__Vdlyvset__ram_exp__v0 = 1U;
        this->__Vdlyvdim0__ram_exp__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_5_valid))) {
        this->__Vdlyvval__ram_sign_5__v0 = vlTOPp->io_in_ver_5_bits_sign_5;
        this->__Vdlyvset__ram_sign_5__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_5__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_5_valid))) {
        this->__Vdlyvval__ram_sign_4__v0 = vlTOPp->io_in_ver_5_bits_sign_4;
        this->__Vdlyvset__ram_sign_4__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_4__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_5_valid))) {
        this->__Vdlyvval__ram_sign_3__v0 = vlTOPp->io_in_ver_5_bits_sign_3;
        this->__Vdlyvset__ram_sign_3__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_3__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_5_valid))) {
        this->__Vdlyvval__ram_sign_2__v0 = vlTOPp->io_in_ver_5_bits_sign_2;
        this->__Vdlyvset__ram_sign_2__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_2__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_5_valid))) {
        this->__Vdlyvval__ram_sign_1__v0 = vlTOPp->io_in_ver_5_bits_sign_1;
        this->__Vdlyvset__ram_sign_1__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_1__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_5_valid))) {
        this->__Vdlyvval__ram_sign_0__v0 = vlTOPp->io_in_ver_5_bits_sign_0;
        this->__Vdlyvset__ram_sign_0__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_0__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_5_valid))) {
        this->__Vdlyvval__ram_sign_6__v0 = vlTOPp->io_in_ver_5_bits_sign_6;
        this->__Vdlyvset__ram_sign_6__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_6__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_5_valid))) {
        this->__Vdlyvval__ram_sign_7__v0 = vlTOPp->io_in_ver_5_bits_sign_7;
        this->__Vdlyvset__ram_sign_7__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_7__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_5_valid))) {
        this->__Vdlyvval__ram_man_7__v0 = vlTOPp->io_in_ver_5_bits_man_7;
        this->__Vdlyvset__ram_man_7__v0 = 1U;
        this->__Vdlyvdim0__ram_man_7__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_5_valid))) {
        this->__Vdlyvval__ram_man_6__v0 = vlTOPp->io_in_ver_5_bits_man_6;
        this->__Vdlyvset__ram_man_6__v0 = 1U;
        this->__Vdlyvdim0__ram_man_6__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_5_valid))) {
        this->__Vdlyvval__ram_man_3__v0 = vlTOPp->io_in_ver_5_bits_man_3;
        this->__Vdlyvset__ram_man_3__v0 = 1U;
        this->__Vdlyvdim0__ram_man_3__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_5_valid))) {
        this->__Vdlyvval__ram_man_2__v0 = vlTOPp->io_in_ver_5_bits_man_2;
        this->__Vdlyvset__ram_man_2__v0 = 1U;
        this->__Vdlyvdim0__ram_man_2__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_5_valid))) {
        this->__Vdlyvval__ram_man_5__v0 = vlTOPp->io_in_ver_5_bits_man_5;
        this->__Vdlyvset__ram_man_5__v0 = 1U;
        this->__Vdlyvdim0__ram_man_5__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_5_valid))) {
        this->__Vdlyvval__ram_man_1__v0 = vlTOPp->io_in_ver_5_bits_man_1;
        this->__Vdlyvset__ram_man_1__v0 = 1U;
        this->__Vdlyvdim0__ram_man_1__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_5_valid))) {
        this->__Vdlyvval__ram_man_4__v0 = vlTOPp->io_in_ver_5_bits_man_4;
        this->__Vdlyvset__ram_man_4__v0 = 1U;
        this->__Vdlyvdim0__ram_man_4__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_5_valid))) {
        this->__Vdlyvval__ram_man_0__v0 = vlTOPp->io_in_ver_5_bits_man_0;
        this->__Vdlyvset__ram_man_0__v0 = 1U;
        this->__Vdlyvdim0__ram_man_0__v0 = this->__PVT__enq_ptr_value;
    }
    if (vlTOPp->reset) {
        this->__PVT__deq_ptr_value = 0U;
    } else {
        if (this->__PVT__do_deq) {
            this->__PVT__deq_ptr_value = this->__PVT___value_T_3;
        }
    }
    if (this->__Vdlyvset__ram_exp__v0) {
        this->__PVT__ram_exp[this->__Vdlyvdim0__ram_exp__v0] 
            = this->__Vdlyvval__ram_exp__v0;
    }
    if (this->__Vdlyvset__ram_sign_5__v0) {
        this->__PVT__ram_sign_5[this->__Vdlyvdim0__ram_sign_5__v0] 
            = this->__Vdlyvval__ram_sign_5__v0;
    }
    if (this->__Vdlyvset__ram_sign_4__v0) {
        this->__PVT__ram_sign_4[this->__Vdlyvdim0__ram_sign_4__v0] 
            = this->__Vdlyvval__ram_sign_4__v0;
    }
    if (this->__Vdlyvset__ram_sign_3__v0) {
        this->__PVT__ram_sign_3[this->__Vdlyvdim0__ram_sign_3__v0] 
            = this->__Vdlyvval__ram_sign_3__v0;
    }
    if (this->__Vdlyvset__ram_sign_2__v0) {
        this->__PVT__ram_sign_2[this->__Vdlyvdim0__ram_sign_2__v0] 
            = this->__Vdlyvval__ram_sign_2__v0;
    }
    if (this->__Vdlyvset__ram_sign_1__v0) {
        this->__PVT__ram_sign_1[this->__Vdlyvdim0__ram_sign_1__v0] 
            = this->__Vdlyvval__ram_sign_1__v0;
    }
    if (this->__Vdlyvset__ram_sign_0__v0) {
        this->__PVT__ram_sign_0[this->__Vdlyvdim0__ram_sign_0__v0] 
            = this->__Vdlyvval__ram_sign_0__v0;
    }
    if (this->__Vdlyvset__ram_sign_6__v0) {
        this->__PVT__ram_sign_6[this->__Vdlyvdim0__ram_sign_6__v0] 
            = this->__Vdlyvval__ram_sign_6__v0;
    }
    if (this->__Vdlyvset__ram_sign_7__v0) {
        this->__PVT__ram_sign_7[this->__Vdlyvdim0__ram_sign_7__v0] 
            = this->__Vdlyvval__ram_sign_7__v0;
    }
    if (this->__Vdlyvset__ram_man_7__v0) {
        this->__PVT__ram_man_7[this->__Vdlyvdim0__ram_man_7__v0] 
            = this->__Vdlyvval__ram_man_7__v0;
    }
    if (this->__Vdlyvset__ram_man_6__v0) {
        this->__PVT__ram_man_6[this->__Vdlyvdim0__ram_man_6__v0] 
            = this->__Vdlyvval__ram_man_6__v0;
    }
    if (this->__Vdlyvset__ram_man_3__v0) {
        this->__PVT__ram_man_3[this->__Vdlyvdim0__ram_man_3__v0] 
            = this->__Vdlyvval__ram_man_3__v0;
    }
    if (this->__Vdlyvset__ram_man_2__v0) {
        this->__PVT__ram_man_2[this->__Vdlyvdim0__ram_man_2__v0] 
            = this->__Vdlyvval__ram_man_2__v0;
    }
    if (this->__Vdlyvset__ram_man_5__v0) {
        this->__PVT__ram_man_5[this->__Vdlyvdim0__ram_man_5__v0] 
            = this->__Vdlyvval__ram_man_5__v0;
    }
    if (this->__Vdlyvset__ram_man_1__v0) {
        this->__PVT__ram_man_1[this->__Vdlyvdim0__ram_man_1__v0] 
            = this->__Vdlyvval__ram_man_1__v0;
    }
    if (this->__Vdlyvset__ram_man_4__v0) {
        this->__PVT__ram_man_4[this->__Vdlyvdim0__ram_man_4__v0] 
            = this->__Vdlyvval__ram_man_4__v0;
    }
    if (this->__Vdlyvset__ram_man_0__v0) {
        this->__PVT__ram_man_0[this->__Vdlyvdim0__ram_man_0__v0] 
            = this->__Vdlyvval__ram_man_0__v0;
    }
    if (vlTOPp->reset) {
        this->__PVT__enq_ptr_value = 0U;
    } else {
        if (this->__PVT__do_enq) {
            this->__PVT__enq_ptr_value = this->__PVT___value_T_1;
        }
    }
    this->__PVT___value_T_3 = (0x1ffU & ((IData)(1U) 
                                         + (IData)(this->__PVT__deq_ptr_value)));
    this->__PVT___value_T_1 = (0x1ffU & ((IData)(1U) 
                                         + (IData)(this->__PVT__enq_ptr_value)));
    this->__PVT__ptr_match = ((IData)(this->__PVT__enq_ptr_value) 
                              == (IData)(this->__PVT__deq_ptr_value));
    this->__PVT__full = ((IData)(this->__PVT__ptr_match) 
                         & (IData)(this->__PVT__maybe_full));
    this->__PVT__empty = ((IData)(this->__PVT__ptr_match) 
                          & (~ (IData)(this->__PVT__maybe_full)));
}

VL_INLINE_OPT void VSystolicArray_HBFP_forTesting_Queue::_combo__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_5__64(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_Queue::_combo__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_5__64\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__do_enq = ((~ (IData)(this->__PVT__full)) 
                           & (IData)(vlTOPp->io_in_ver_5_valid));
    this->__PVT__do_deq = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_5_io_deq_ready) 
                           & (~ (IData)(this->__PVT__empty)));
}

VL_INLINE_OPT void VSystolicArray_HBFP_forTesting_Queue::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_6__15(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_Queue::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_6__15\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vdlyvset__ram_exp__v0 = 0U;
    this->__Vdlyvset__ram_sign_5__v0 = 0U;
    this->__Vdlyvset__ram_sign_4__v0 = 0U;
    this->__Vdlyvset__ram_sign_3__v0 = 0U;
    this->__Vdlyvset__ram_sign_2__v0 = 0U;
    this->__Vdlyvset__ram_sign_1__v0 = 0U;
    this->__Vdlyvset__ram_sign_0__v0 = 0U;
    this->__Vdlyvset__ram_sign_6__v0 = 0U;
    this->__Vdlyvset__ram_sign_7__v0 = 0U;
    this->__Vdlyvset__ram_man_7__v0 = 0U;
    this->__Vdlyvset__ram_man_6__v0 = 0U;
    this->__Vdlyvset__ram_man_3__v0 = 0U;
    this->__Vdlyvset__ram_man_2__v0 = 0U;
    this->__Vdlyvset__ram_man_5__v0 = 0U;
    this->__Vdlyvset__ram_man_1__v0 = 0U;
    this->__Vdlyvset__ram_man_4__v0 = 0U;
    this->__Vdlyvset__ram_man_0__v0 = 0U;
    if (vlTOPp->reset) {
        this->__PVT__maybe_full = 0U;
    } else {
        if (((IData)(this->__PVT__do_enq) != (IData)(this->__PVT__do_deq))) {
            this->__PVT__maybe_full = this->__PVT__do_enq;
        }
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_6_valid))) {
        this->__Vdlyvval__ram_exp__v0 = vlTOPp->io_in_ver_6_bits_exp;
        this->__Vdlyvset__ram_exp__v0 = 1U;
        this->__Vdlyvdim0__ram_exp__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_6_valid))) {
        this->__Vdlyvval__ram_sign_5__v0 = vlTOPp->io_in_ver_6_bits_sign_5;
        this->__Vdlyvset__ram_sign_5__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_5__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_6_valid))) {
        this->__Vdlyvval__ram_sign_4__v0 = vlTOPp->io_in_ver_6_bits_sign_4;
        this->__Vdlyvset__ram_sign_4__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_4__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_6_valid))) {
        this->__Vdlyvval__ram_sign_3__v0 = vlTOPp->io_in_ver_6_bits_sign_3;
        this->__Vdlyvset__ram_sign_3__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_3__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_6_valid))) {
        this->__Vdlyvval__ram_sign_2__v0 = vlTOPp->io_in_ver_6_bits_sign_2;
        this->__Vdlyvset__ram_sign_2__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_2__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_6_valid))) {
        this->__Vdlyvval__ram_sign_1__v0 = vlTOPp->io_in_ver_6_bits_sign_1;
        this->__Vdlyvset__ram_sign_1__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_1__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_6_valid))) {
        this->__Vdlyvval__ram_sign_0__v0 = vlTOPp->io_in_ver_6_bits_sign_0;
        this->__Vdlyvset__ram_sign_0__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_0__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_6_valid))) {
        this->__Vdlyvval__ram_sign_6__v0 = vlTOPp->io_in_ver_6_bits_sign_6;
        this->__Vdlyvset__ram_sign_6__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_6__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_6_valid))) {
        this->__Vdlyvval__ram_sign_7__v0 = vlTOPp->io_in_ver_6_bits_sign_7;
        this->__Vdlyvset__ram_sign_7__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_7__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_6_valid))) {
        this->__Vdlyvval__ram_man_7__v0 = vlTOPp->io_in_ver_6_bits_man_7;
        this->__Vdlyvset__ram_man_7__v0 = 1U;
        this->__Vdlyvdim0__ram_man_7__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_6_valid))) {
        this->__Vdlyvval__ram_man_6__v0 = vlTOPp->io_in_ver_6_bits_man_6;
        this->__Vdlyvset__ram_man_6__v0 = 1U;
        this->__Vdlyvdim0__ram_man_6__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_6_valid))) {
        this->__Vdlyvval__ram_man_3__v0 = vlTOPp->io_in_ver_6_bits_man_3;
        this->__Vdlyvset__ram_man_3__v0 = 1U;
        this->__Vdlyvdim0__ram_man_3__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_6_valid))) {
        this->__Vdlyvval__ram_man_2__v0 = vlTOPp->io_in_ver_6_bits_man_2;
        this->__Vdlyvset__ram_man_2__v0 = 1U;
        this->__Vdlyvdim0__ram_man_2__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_6_valid))) {
        this->__Vdlyvval__ram_man_5__v0 = vlTOPp->io_in_ver_6_bits_man_5;
        this->__Vdlyvset__ram_man_5__v0 = 1U;
        this->__Vdlyvdim0__ram_man_5__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_6_valid))) {
        this->__Vdlyvval__ram_man_1__v0 = vlTOPp->io_in_ver_6_bits_man_1;
        this->__Vdlyvset__ram_man_1__v0 = 1U;
        this->__Vdlyvdim0__ram_man_1__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_6_valid))) {
        this->__Vdlyvval__ram_man_4__v0 = vlTOPp->io_in_ver_6_bits_man_4;
        this->__Vdlyvset__ram_man_4__v0 = 1U;
        this->__Vdlyvdim0__ram_man_4__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_6_valid))) {
        this->__Vdlyvval__ram_man_0__v0 = vlTOPp->io_in_ver_6_bits_man_0;
        this->__Vdlyvset__ram_man_0__v0 = 1U;
        this->__Vdlyvdim0__ram_man_0__v0 = this->__PVT__enq_ptr_value;
    }
    if (vlTOPp->reset) {
        this->__PVT__deq_ptr_value = 0U;
    } else {
        if (this->__PVT__do_deq) {
            this->__PVT__deq_ptr_value = this->__PVT___value_T_3;
        }
    }
    if (this->__Vdlyvset__ram_exp__v0) {
        this->__PVT__ram_exp[this->__Vdlyvdim0__ram_exp__v0] 
            = this->__Vdlyvval__ram_exp__v0;
    }
    if (this->__Vdlyvset__ram_sign_5__v0) {
        this->__PVT__ram_sign_5[this->__Vdlyvdim0__ram_sign_5__v0] 
            = this->__Vdlyvval__ram_sign_5__v0;
    }
    if (this->__Vdlyvset__ram_sign_4__v0) {
        this->__PVT__ram_sign_4[this->__Vdlyvdim0__ram_sign_4__v0] 
            = this->__Vdlyvval__ram_sign_4__v0;
    }
    if (this->__Vdlyvset__ram_sign_3__v0) {
        this->__PVT__ram_sign_3[this->__Vdlyvdim0__ram_sign_3__v0] 
            = this->__Vdlyvval__ram_sign_3__v0;
    }
    if (this->__Vdlyvset__ram_sign_2__v0) {
        this->__PVT__ram_sign_2[this->__Vdlyvdim0__ram_sign_2__v0] 
            = this->__Vdlyvval__ram_sign_2__v0;
    }
    if (this->__Vdlyvset__ram_sign_1__v0) {
        this->__PVT__ram_sign_1[this->__Vdlyvdim0__ram_sign_1__v0] 
            = this->__Vdlyvval__ram_sign_1__v0;
    }
    if (this->__Vdlyvset__ram_sign_0__v0) {
        this->__PVT__ram_sign_0[this->__Vdlyvdim0__ram_sign_0__v0] 
            = this->__Vdlyvval__ram_sign_0__v0;
    }
    if (this->__Vdlyvset__ram_sign_6__v0) {
        this->__PVT__ram_sign_6[this->__Vdlyvdim0__ram_sign_6__v0] 
            = this->__Vdlyvval__ram_sign_6__v0;
    }
    if (this->__Vdlyvset__ram_sign_7__v0) {
        this->__PVT__ram_sign_7[this->__Vdlyvdim0__ram_sign_7__v0] 
            = this->__Vdlyvval__ram_sign_7__v0;
    }
    if (this->__Vdlyvset__ram_man_7__v0) {
        this->__PVT__ram_man_7[this->__Vdlyvdim0__ram_man_7__v0] 
            = this->__Vdlyvval__ram_man_7__v0;
    }
    if (this->__Vdlyvset__ram_man_6__v0) {
        this->__PVT__ram_man_6[this->__Vdlyvdim0__ram_man_6__v0] 
            = this->__Vdlyvval__ram_man_6__v0;
    }
    if (this->__Vdlyvset__ram_man_3__v0) {
        this->__PVT__ram_man_3[this->__Vdlyvdim0__ram_man_3__v0] 
            = this->__Vdlyvval__ram_man_3__v0;
    }
    if (this->__Vdlyvset__ram_man_2__v0) {
        this->__PVT__ram_man_2[this->__Vdlyvdim0__ram_man_2__v0] 
            = this->__Vdlyvval__ram_man_2__v0;
    }
    if (this->__Vdlyvset__ram_man_5__v0) {
        this->__PVT__ram_man_5[this->__Vdlyvdim0__ram_man_5__v0] 
            = this->__Vdlyvval__ram_man_5__v0;
    }
    if (this->__Vdlyvset__ram_man_1__v0) {
        this->__PVT__ram_man_1[this->__Vdlyvdim0__ram_man_1__v0] 
            = this->__Vdlyvval__ram_man_1__v0;
    }
    if (this->__Vdlyvset__ram_man_4__v0) {
        this->__PVT__ram_man_4[this->__Vdlyvdim0__ram_man_4__v0] 
            = this->__Vdlyvval__ram_man_4__v0;
    }
    if (this->__Vdlyvset__ram_man_0__v0) {
        this->__PVT__ram_man_0[this->__Vdlyvdim0__ram_man_0__v0] 
            = this->__Vdlyvval__ram_man_0__v0;
    }
    if (vlTOPp->reset) {
        this->__PVT__enq_ptr_value = 0U;
    } else {
        if (this->__PVT__do_enq) {
            this->__PVT__enq_ptr_value = this->__PVT___value_T_1;
        }
    }
    this->__PVT___value_T_3 = (0x1ffU & ((IData)(1U) 
                                         + (IData)(this->__PVT__deq_ptr_value)));
    this->__PVT___value_T_1 = (0x1ffU & ((IData)(1U) 
                                         + (IData)(this->__PVT__enq_ptr_value)));
    this->__PVT__ptr_match = ((IData)(this->__PVT__enq_ptr_value) 
                              == (IData)(this->__PVT__deq_ptr_value));
    this->__PVT__full = ((IData)(this->__PVT__ptr_match) 
                         & (IData)(this->__PVT__maybe_full));
    this->__PVT__empty = ((IData)(this->__PVT__ptr_match) 
                          & (~ (IData)(this->__PVT__maybe_full)));
}

VL_INLINE_OPT void VSystolicArray_HBFP_forTesting_Queue::_combo__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_6__65(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_Queue::_combo__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_6__65\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__do_enq = ((~ (IData)(this->__PVT__full)) 
                           & (IData)(vlTOPp->io_in_ver_6_valid));
    this->__PVT__do_deq = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_6_io_deq_ready) 
                           & (~ (IData)(this->__PVT__empty)));
}

VL_INLINE_OPT void VSystolicArray_HBFP_forTesting_Queue::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_7__16(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_Queue::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_7__16\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vdlyvset__ram_exp__v0 = 0U;
    this->__Vdlyvset__ram_sign_5__v0 = 0U;
    this->__Vdlyvset__ram_sign_4__v0 = 0U;
    this->__Vdlyvset__ram_sign_3__v0 = 0U;
    this->__Vdlyvset__ram_sign_2__v0 = 0U;
    this->__Vdlyvset__ram_sign_1__v0 = 0U;
    this->__Vdlyvset__ram_sign_0__v0 = 0U;
    this->__Vdlyvset__ram_sign_6__v0 = 0U;
    this->__Vdlyvset__ram_sign_7__v0 = 0U;
    this->__Vdlyvset__ram_man_7__v0 = 0U;
    this->__Vdlyvset__ram_man_6__v0 = 0U;
    this->__Vdlyvset__ram_man_3__v0 = 0U;
    this->__Vdlyvset__ram_man_2__v0 = 0U;
    this->__Vdlyvset__ram_man_5__v0 = 0U;
    this->__Vdlyvset__ram_man_1__v0 = 0U;
    this->__Vdlyvset__ram_man_4__v0 = 0U;
    this->__Vdlyvset__ram_man_0__v0 = 0U;
    if (vlTOPp->reset) {
        this->__PVT__maybe_full = 0U;
    } else {
        if (((IData)(this->__PVT__do_enq) != (IData)(this->__PVT__do_deq))) {
            this->__PVT__maybe_full = this->__PVT__do_enq;
        }
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_7_valid))) {
        this->__Vdlyvval__ram_exp__v0 = vlTOPp->io_in_ver_7_bits_exp;
        this->__Vdlyvset__ram_exp__v0 = 1U;
        this->__Vdlyvdim0__ram_exp__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_7_valid))) {
        this->__Vdlyvval__ram_sign_5__v0 = vlTOPp->io_in_ver_7_bits_sign_5;
        this->__Vdlyvset__ram_sign_5__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_5__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_7_valid))) {
        this->__Vdlyvval__ram_sign_4__v0 = vlTOPp->io_in_ver_7_bits_sign_4;
        this->__Vdlyvset__ram_sign_4__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_4__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_7_valid))) {
        this->__Vdlyvval__ram_sign_3__v0 = vlTOPp->io_in_ver_7_bits_sign_3;
        this->__Vdlyvset__ram_sign_3__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_3__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_7_valid))) {
        this->__Vdlyvval__ram_sign_2__v0 = vlTOPp->io_in_ver_7_bits_sign_2;
        this->__Vdlyvset__ram_sign_2__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_2__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_7_valid))) {
        this->__Vdlyvval__ram_sign_1__v0 = vlTOPp->io_in_ver_7_bits_sign_1;
        this->__Vdlyvset__ram_sign_1__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_1__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_7_valid))) {
        this->__Vdlyvval__ram_sign_0__v0 = vlTOPp->io_in_ver_7_bits_sign_0;
        this->__Vdlyvset__ram_sign_0__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_0__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_7_valid))) {
        this->__Vdlyvval__ram_sign_6__v0 = vlTOPp->io_in_ver_7_bits_sign_6;
        this->__Vdlyvset__ram_sign_6__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_6__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_7_valid))) {
        this->__Vdlyvval__ram_sign_7__v0 = vlTOPp->io_in_ver_7_bits_sign_7;
        this->__Vdlyvset__ram_sign_7__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_7__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_7_valid))) {
        this->__Vdlyvval__ram_man_7__v0 = vlTOPp->io_in_ver_7_bits_man_7;
        this->__Vdlyvset__ram_man_7__v0 = 1U;
        this->__Vdlyvdim0__ram_man_7__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_7_valid))) {
        this->__Vdlyvval__ram_man_6__v0 = vlTOPp->io_in_ver_7_bits_man_6;
        this->__Vdlyvset__ram_man_6__v0 = 1U;
        this->__Vdlyvdim0__ram_man_6__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_7_valid))) {
        this->__Vdlyvval__ram_man_3__v0 = vlTOPp->io_in_ver_7_bits_man_3;
        this->__Vdlyvset__ram_man_3__v0 = 1U;
        this->__Vdlyvdim0__ram_man_3__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_7_valid))) {
        this->__Vdlyvval__ram_man_2__v0 = vlTOPp->io_in_ver_7_bits_man_2;
        this->__Vdlyvset__ram_man_2__v0 = 1U;
        this->__Vdlyvdim0__ram_man_2__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_7_valid))) {
        this->__Vdlyvval__ram_man_5__v0 = vlTOPp->io_in_ver_7_bits_man_5;
        this->__Vdlyvset__ram_man_5__v0 = 1U;
        this->__Vdlyvdim0__ram_man_5__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_7_valid))) {
        this->__Vdlyvval__ram_man_1__v0 = vlTOPp->io_in_ver_7_bits_man_1;
        this->__Vdlyvset__ram_man_1__v0 = 1U;
        this->__Vdlyvdim0__ram_man_1__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_7_valid))) {
        this->__Vdlyvval__ram_man_4__v0 = vlTOPp->io_in_ver_7_bits_man_4;
        this->__Vdlyvset__ram_man_4__v0 = 1U;
        this->__Vdlyvdim0__ram_man_4__v0 = this->__PVT__enq_ptr_value;
    }
    if (((~ (IData)(this->__PVT__full)) & (IData)(vlTOPp->io_in_ver_7_valid))) {
        this->__Vdlyvval__ram_man_0__v0 = vlTOPp->io_in_ver_7_bits_man_0;
        this->__Vdlyvset__ram_man_0__v0 = 1U;
        this->__Vdlyvdim0__ram_man_0__v0 = this->__PVT__enq_ptr_value;
    }
    if (vlTOPp->reset) {
        this->__PVT__deq_ptr_value = 0U;
    } else {
        if (this->__PVT__do_deq) {
            this->__PVT__deq_ptr_value = this->__PVT___value_T_3;
        }
    }
    if (this->__Vdlyvset__ram_exp__v0) {
        this->__PVT__ram_exp[this->__Vdlyvdim0__ram_exp__v0] 
            = this->__Vdlyvval__ram_exp__v0;
    }
    if (this->__Vdlyvset__ram_sign_5__v0) {
        this->__PVT__ram_sign_5[this->__Vdlyvdim0__ram_sign_5__v0] 
            = this->__Vdlyvval__ram_sign_5__v0;
    }
    if (this->__Vdlyvset__ram_sign_4__v0) {
        this->__PVT__ram_sign_4[this->__Vdlyvdim0__ram_sign_4__v0] 
            = this->__Vdlyvval__ram_sign_4__v0;
    }
    if (this->__Vdlyvset__ram_sign_3__v0) {
        this->__PVT__ram_sign_3[this->__Vdlyvdim0__ram_sign_3__v0] 
            = this->__Vdlyvval__ram_sign_3__v0;
    }
    if (this->__Vdlyvset__ram_sign_2__v0) {
        this->__PVT__ram_sign_2[this->__Vdlyvdim0__ram_sign_2__v0] 
            = this->__Vdlyvval__ram_sign_2__v0;
    }
    if (this->__Vdlyvset__ram_sign_1__v0) {
        this->__PVT__ram_sign_1[this->__Vdlyvdim0__ram_sign_1__v0] 
            = this->__Vdlyvval__ram_sign_1__v0;
    }
    if (this->__Vdlyvset__ram_sign_0__v0) {
        this->__PVT__ram_sign_0[this->__Vdlyvdim0__ram_sign_0__v0] 
            = this->__Vdlyvval__ram_sign_0__v0;
    }
    if (this->__Vdlyvset__ram_sign_6__v0) {
        this->__PVT__ram_sign_6[this->__Vdlyvdim0__ram_sign_6__v0] 
            = this->__Vdlyvval__ram_sign_6__v0;
    }
    if (this->__Vdlyvset__ram_sign_7__v0) {
        this->__PVT__ram_sign_7[this->__Vdlyvdim0__ram_sign_7__v0] 
            = this->__Vdlyvval__ram_sign_7__v0;
    }
    if (this->__Vdlyvset__ram_man_7__v0) {
        this->__PVT__ram_man_7[this->__Vdlyvdim0__ram_man_7__v0] 
            = this->__Vdlyvval__ram_man_7__v0;
    }
    if (this->__Vdlyvset__ram_man_6__v0) {
        this->__PVT__ram_man_6[this->__Vdlyvdim0__ram_man_6__v0] 
            = this->__Vdlyvval__ram_man_6__v0;
    }
    if (this->__Vdlyvset__ram_man_3__v0) {
        this->__PVT__ram_man_3[this->__Vdlyvdim0__ram_man_3__v0] 
            = this->__Vdlyvval__ram_man_3__v0;
    }
    if (this->__Vdlyvset__ram_man_2__v0) {
        this->__PVT__ram_man_2[this->__Vdlyvdim0__ram_man_2__v0] 
            = this->__Vdlyvval__ram_man_2__v0;
    }
    if (this->__Vdlyvset__ram_man_5__v0) {
        this->__PVT__ram_man_5[this->__Vdlyvdim0__ram_man_5__v0] 
            = this->__Vdlyvval__ram_man_5__v0;
    }
    if (this->__Vdlyvset__ram_man_1__v0) {
        this->__PVT__ram_man_1[this->__Vdlyvdim0__ram_man_1__v0] 
            = this->__Vdlyvval__ram_man_1__v0;
    }
    if (this->__Vdlyvset__ram_man_4__v0) {
        this->__PVT__ram_man_4[this->__Vdlyvdim0__ram_man_4__v0] 
            = this->__Vdlyvval__ram_man_4__v0;
    }
    if (this->__Vdlyvset__ram_man_0__v0) {
        this->__PVT__ram_man_0[this->__Vdlyvdim0__ram_man_0__v0] 
            = this->__Vdlyvval__ram_man_0__v0;
    }
    if (vlTOPp->reset) {
        this->__PVT__enq_ptr_value = 0U;
    } else {
        if (this->__PVT__do_enq) {
            this->__PVT__enq_ptr_value = this->__PVT___value_T_1;
        }
    }
    this->__PVT___value_T_3 = (0x1ffU & ((IData)(1U) 
                                         + (IData)(this->__PVT__deq_ptr_value)));
    this->__PVT___value_T_1 = (0x1ffU & ((IData)(1U) 
                                         + (IData)(this->__PVT__enq_ptr_value)));
    this->__PVT__ptr_match = ((IData)(this->__PVT__enq_ptr_value) 
                              == (IData)(this->__PVT__deq_ptr_value));
    this->__PVT__full = ((IData)(this->__PVT__ptr_match) 
                         & (IData)(this->__PVT__maybe_full));
    this->__PVT__empty = ((IData)(this->__PVT__ptr_match) 
                          & (~ (IData)(this->__PVT__maybe_full)));
}

VL_INLINE_OPT void VSystolicArray_HBFP_forTesting_Queue::_combo__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_7__66(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_Queue::_combo__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_7__66\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__do_enq = ((~ (IData)(this->__PVT__full)) 
                           & (IData)(vlTOPp->io_in_ver_7_valid));
    this->__PVT__do_deq = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_7_io_deq_ready) 
                           & (~ (IData)(this->__PVT__empty)));
}
