// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSystolicArray_HBFP_forTesting.h for the primary calling header

#include "VSystolicArray_HBFP_forTesting_Queue.h"
#include "VSystolicArray_HBFP_forTesting__Syms.h"

VL_INLINE_OPT void VSystolicArray_HBFP_forTesting_Queue::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_6__23(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_Queue::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_6__23\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vdlyvset__ram_exp__v0 = 0U;
    this->__Vdlyvset__ram_sign_28__v0 = 0U;
    this->__Vdlyvset__ram_sign_27__v0 = 0U;
    this->__Vdlyvset__ram_sign_29__v0 = 0U;
    this->__Vdlyvset__ram_sign_30__v0 = 0U;
    this->__Vdlyvset__ram_sign_31__v0 = 0U;
    this->__Vdlyvset__ram_sign_0__v0 = 0U;
    this->__Vdlyvset__ram_sign_1__v0 = 0U;
    this->__Vdlyvset__ram_sign_2__v0 = 0U;
    this->__Vdlyvset__ram_sign_3__v0 = 0U;
    this->__Vdlyvset__ram_sign_4__v0 = 0U;
    this->__Vdlyvset__ram_sign_5__v0 = 0U;
    this->__Vdlyvset__ram_sign_6__v0 = 0U;
    this->__Vdlyvset__ram_sign_7__v0 = 0U;
    this->__Vdlyvset__ram_sign_8__v0 = 0U;
    this->__Vdlyvset__ram_sign_9__v0 = 0U;
    this->__Vdlyvset__ram_sign_10__v0 = 0U;
    this->__Vdlyvset__ram_sign_11__v0 = 0U;
    this->__Vdlyvset__ram_sign_12__v0 = 0U;
    this->__Vdlyvset__ram_sign_13__v0 = 0U;
    this->__Vdlyvset__ram_sign_14__v0 = 0U;
    this->__Vdlyvset__ram_sign_15__v0 = 0U;
    this->__Vdlyvset__ram_sign_16__v0 = 0U;
    this->__Vdlyvset__ram_sign_17__v0 = 0U;
    this->__Vdlyvset__ram_sign_18__v0 = 0U;
    this->__Vdlyvset__ram_sign_19__v0 = 0U;
    this->__Vdlyvset__ram_sign_20__v0 = 0U;
    this->__Vdlyvset__ram_sign_21__v0 = 0U;
    this->__Vdlyvset__ram_sign_22__v0 = 0U;
    this->__Vdlyvset__ram_sign_23__v0 = 0U;
    this->__Vdlyvset__ram_sign_24__v0 = 0U;
    this->__Vdlyvset__ram_sign_25__v0 = 0U;
    this->__Vdlyvset__ram_sign_26__v0 = 0U;
    this->__Vdlyvset__ram_man_31__v0 = 0U;
    this->__Vdlyvset__ram_man_30__v0 = 0U;
    this->__Vdlyvset__ram_man_29__v0 = 0U;
    this->__Vdlyvset__ram_man_28__v0 = 0U;
    this->__Vdlyvset__ram_man_27__v0 = 0U;
    this->__Vdlyvset__ram_man_26__v0 = 0U;
    this->__Vdlyvset__ram_man_25__v0 = 0U;
    this->__Vdlyvset__ram_man_24__v0 = 0U;
    this->__Vdlyvset__ram_man_23__v0 = 0U;
    this->__Vdlyvset__ram_man_22__v0 = 0U;
    this->__Vdlyvset__ram_man_21__v0 = 0U;
    this->__Vdlyvset__ram_man_20__v0 = 0U;
    this->__Vdlyvset__ram_man_19__v0 = 0U;
    this->__Vdlyvset__ram_man_7__v0 = 0U;
    this->__Vdlyvset__ram_man_10__v0 = 0U;
    this->__Vdlyvset__ram_man_6__v0 = 0U;
    this->__Vdlyvset__ram_man_9__v0 = 0U;
    this->__Vdlyvset__ram_man_5__v0 = 0U;
    this->__Vdlyvset__ram_man_8__v0 = 0U;
    this->__Vdlyvset__ram_man_4__v0 = 0U;
    this->__Vdlyvset__ram_man_11__v0 = 0U;
    this->__Vdlyvset__ram_man_12__v0 = 0U;
    this->__Vdlyvset__ram_man_13__v0 = 0U;
    this->__Vdlyvset__ram_man_14__v0 = 0U;
    this->__Vdlyvset__ram_man_15__v0 = 0U;
    this->__Vdlyvset__ram_man_16__v0 = 0U;
    this->__Vdlyvset__ram_man_17__v0 = 0U;
    this->__Vdlyvset__ram_man_18__v0 = 0U;
    this->__Vdlyvset__ram_man_0__v0 = 0U;
    this->__Vdlyvset__ram_man_1__v0 = 0U;
    this->__Vdlyvset__ram_man_2__v0 = 0U;
    this->__Vdlyvset__ram_man_3__v0 = 0U;
    if (vlTOPp->reset) {
        this->__PVT__maybe_full = 0U;
    } else {
        if (((1U & (~ (IData)(this->__PVT__full))) 
             != (IData)(this->__PVT__do_deq))) {
            this->__PVT__maybe_full = (1U & (~ (IData)(this->__PVT__full)));
        }
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_exp__v0 = vlTOPp->io_in_ver_6_bits_exp;
        this->__Vdlyvset__ram_exp__v0 = 1U;
        this->__Vdlyvdim0__ram_exp__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_28__v0 = vlTOPp->io_in_ver_6_bits_sign_28;
        this->__Vdlyvset__ram_sign_28__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_28__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_27__v0 = vlTOPp->io_in_ver_6_bits_sign_27;
        this->__Vdlyvset__ram_sign_27__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_27__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_29__v0 = vlTOPp->io_in_ver_6_bits_sign_29;
        this->__Vdlyvset__ram_sign_29__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_29__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_30__v0 = vlTOPp->io_in_ver_6_bits_sign_30;
        this->__Vdlyvset__ram_sign_30__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_30__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_31__v0 = vlTOPp->io_in_ver_6_bits_sign_31;
        this->__Vdlyvset__ram_sign_31__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_31__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_0__v0 = vlTOPp->io_in_ver_6_bits_sign_0;
        this->__Vdlyvset__ram_sign_0__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_0__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_1__v0 = vlTOPp->io_in_ver_6_bits_sign_1;
        this->__Vdlyvset__ram_sign_1__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_1__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_2__v0 = vlTOPp->io_in_ver_6_bits_sign_2;
        this->__Vdlyvset__ram_sign_2__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_2__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_3__v0 = vlTOPp->io_in_ver_6_bits_sign_3;
        this->__Vdlyvset__ram_sign_3__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_3__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_4__v0 = vlTOPp->io_in_ver_6_bits_sign_4;
        this->__Vdlyvset__ram_sign_4__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_4__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_5__v0 = vlTOPp->io_in_ver_6_bits_sign_5;
        this->__Vdlyvset__ram_sign_5__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_5__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_6__v0 = vlTOPp->io_in_ver_6_bits_sign_6;
        this->__Vdlyvset__ram_sign_6__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_6__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_7__v0 = vlTOPp->io_in_ver_6_bits_sign_7;
        this->__Vdlyvset__ram_sign_7__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_7__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_8__v0 = vlTOPp->io_in_ver_6_bits_sign_8;
        this->__Vdlyvset__ram_sign_8__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_8__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_9__v0 = vlTOPp->io_in_ver_6_bits_sign_9;
        this->__Vdlyvset__ram_sign_9__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_9__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_10__v0 = vlTOPp->io_in_ver_6_bits_sign_10;
        this->__Vdlyvset__ram_sign_10__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_10__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_11__v0 = vlTOPp->io_in_ver_6_bits_sign_11;
        this->__Vdlyvset__ram_sign_11__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_11__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_12__v0 = vlTOPp->io_in_ver_6_bits_sign_12;
        this->__Vdlyvset__ram_sign_12__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_12__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_13__v0 = vlTOPp->io_in_ver_6_bits_sign_13;
        this->__Vdlyvset__ram_sign_13__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_13__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_14__v0 = vlTOPp->io_in_ver_6_bits_sign_14;
        this->__Vdlyvset__ram_sign_14__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_14__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_15__v0 = vlTOPp->io_in_ver_6_bits_sign_15;
        this->__Vdlyvset__ram_sign_15__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_15__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_16__v0 = vlTOPp->io_in_ver_6_bits_sign_16;
        this->__Vdlyvset__ram_sign_16__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_16__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_17__v0 = vlTOPp->io_in_ver_6_bits_sign_17;
        this->__Vdlyvset__ram_sign_17__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_17__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_18__v0 = vlTOPp->io_in_ver_6_bits_sign_18;
        this->__Vdlyvset__ram_sign_18__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_18__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_19__v0 = vlTOPp->io_in_ver_6_bits_sign_19;
        this->__Vdlyvset__ram_sign_19__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_19__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_20__v0 = vlTOPp->io_in_ver_6_bits_sign_20;
        this->__Vdlyvset__ram_sign_20__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_20__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_21__v0 = vlTOPp->io_in_ver_6_bits_sign_21;
        this->__Vdlyvset__ram_sign_21__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_21__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_22__v0 = vlTOPp->io_in_ver_6_bits_sign_22;
        this->__Vdlyvset__ram_sign_22__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_22__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_23__v0 = vlTOPp->io_in_ver_6_bits_sign_23;
        this->__Vdlyvset__ram_sign_23__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_23__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_24__v0 = vlTOPp->io_in_ver_6_bits_sign_24;
        this->__Vdlyvset__ram_sign_24__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_24__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_25__v0 = vlTOPp->io_in_ver_6_bits_sign_25;
        this->__Vdlyvset__ram_sign_25__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_25__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_26__v0 = vlTOPp->io_in_ver_6_bits_sign_26;
        this->__Vdlyvset__ram_sign_26__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_26__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_31__v0 = vlTOPp->io_in_ver_6_bits_man_31;
        this->__Vdlyvset__ram_man_31__v0 = 1U;
        this->__Vdlyvdim0__ram_man_31__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_30__v0 = vlTOPp->io_in_ver_6_bits_man_30;
        this->__Vdlyvset__ram_man_30__v0 = 1U;
        this->__Vdlyvdim0__ram_man_30__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_29__v0 = vlTOPp->io_in_ver_6_bits_man_29;
        this->__Vdlyvset__ram_man_29__v0 = 1U;
        this->__Vdlyvdim0__ram_man_29__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_28__v0 = vlTOPp->io_in_ver_6_bits_man_28;
        this->__Vdlyvset__ram_man_28__v0 = 1U;
        this->__Vdlyvdim0__ram_man_28__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_27__v0 = vlTOPp->io_in_ver_6_bits_man_27;
        this->__Vdlyvset__ram_man_27__v0 = 1U;
        this->__Vdlyvdim0__ram_man_27__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_26__v0 = vlTOPp->io_in_ver_6_bits_man_26;
        this->__Vdlyvset__ram_man_26__v0 = 1U;
        this->__Vdlyvdim0__ram_man_26__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_25__v0 = vlTOPp->io_in_ver_6_bits_man_25;
        this->__Vdlyvset__ram_man_25__v0 = 1U;
        this->__Vdlyvdim0__ram_man_25__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_24__v0 = vlTOPp->io_in_ver_6_bits_man_24;
        this->__Vdlyvset__ram_man_24__v0 = 1U;
        this->__Vdlyvdim0__ram_man_24__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_23__v0 = vlTOPp->io_in_ver_6_bits_man_23;
        this->__Vdlyvset__ram_man_23__v0 = 1U;
        this->__Vdlyvdim0__ram_man_23__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_22__v0 = vlTOPp->io_in_ver_6_bits_man_22;
        this->__Vdlyvset__ram_man_22__v0 = 1U;
        this->__Vdlyvdim0__ram_man_22__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_21__v0 = vlTOPp->io_in_ver_6_bits_man_21;
        this->__Vdlyvset__ram_man_21__v0 = 1U;
        this->__Vdlyvdim0__ram_man_21__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_20__v0 = vlTOPp->io_in_ver_6_bits_man_20;
        this->__Vdlyvset__ram_man_20__v0 = 1U;
        this->__Vdlyvdim0__ram_man_20__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_19__v0 = vlTOPp->io_in_ver_6_bits_man_19;
        this->__Vdlyvset__ram_man_19__v0 = 1U;
        this->__Vdlyvdim0__ram_man_19__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_7__v0 = vlTOPp->io_in_ver_6_bits_man_7;
        this->__Vdlyvset__ram_man_7__v0 = 1U;
        this->__Vdlyvdim0__ram_man_7__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_10__v0 = vlTOPp->io_in_ver_6_bits_man_10;
        this->__Vdlyvset__ram_man_10__v0 = 1U;
        this->__Vdlyvdim0__ram_man_10__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_6__v0 = vlTOPp->io_in_ver_6_bits_man_6;
        this->__Vdlyvset__ram_man_6__v0 = 1U;
        this->__Vdlyvdim0__ram_man_6__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_9__v0 = vlTOPp->io_in_ver_6_bits_man_9;
        this->__Vdlyvset__ram_man_9__v0 = 1U;
        this->__Vdlyvdim0__ram_man_9__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_5__v0 = vlTOPp->io_in_ver_6_bits_man_5;
        this->__Vdlyvset__ram_man_5__v0 = 1U;
        this->__Vdlyvdim0__ram_man_5__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_8__v0 = vlTOPp->io_in_ver_6_bits_man_8;
        this->__Vdlyvset__ram_man_8__v0 = 1U;
        this->__Vdlyvdim0__ram_man_8__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_4__v0 = vlTOPp->io_in_ver_6_bits_man_4;
        this->__Vdlyvset__ram_man_4__v0 = 1U;
        this->__Vdlyvdim0__ram_man_4__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_11__v0 = vlTOPp->io_in_ver_6_bits_man_11;
        this->__Vdlyvset__ram_man_11__v0 = 1U;
        this->__Vdlyvdim0__ram_man_11__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_12__v0 = vlTOPp->io_in_ver_6_bits_man_12;
        this->__Vdlyvset__ram_man_12__v0 = 1U;
        this->__Vdlyvdim0__ram_man_12__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_13__v0 = vlTOPp->io_in_ver_6_bits_man_13;
        this->__Vdlyvset__ram_man_13__v0 = 1U;
        this->__Vdlyvdim0__ram_man_13__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_14__v0 = vlTOPp->io_in_ver_6_bits_man_14;
        this->__Vdlyvset__ram_man_14__v0 = 1U;
        this->__Vdlyvdim0__ram_man_14__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_15__v0 = vlTOPp->io_in_ver_6_bits_man_15;
        this->__Vdlyvset__ram_man_15__v0 = 1U;
        this->__Vdlyvdim0__ram_man_15__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_16__v0 = vlTOPp->io_in_ver_6_bits_man_16;
        this->__Vdlyvset__ram_man_16__v0 = 1U;
        this->__Vdlyvdim0__ram_man_16__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_17__v0 = vlTOPp->io_in_ver_6_bits_man_17;
        this->__Vdlyvset__ram_man_17__v0 = 1U;
        this->__Vdlyvdim0__ram_man_17__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_18__v0 = vlTOPp->io_in_ver_6_bits_man_18;
        this->__Vdlyvset__ram_man_18__v0 = 1U;
        this->__Vdlyvdim0__ram_man_18__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_0__v0 = vlTOPp->io_in_ver_6_bits_man_0;
        this->__Vdlyvset__ram_man_0__v0 = 1U;
        this->__Vdlyvdim0__ram_man_0__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_1__v0 = vlTOPp->io_in_ver_6_bits_man_1;
        this->__Vdlyvset__ram_man_1__v0 = 1U;
        this->__Vdlyvdim0__ram_man_1__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_2__v0 = vlTOPp->io_in_ver_6_bits_man_2;
        this->__Vdlyvset__ram_man_2__v0 = 1U;
        this->__Vdlyvdim0__ram_man_2__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_3__v0 = vlTOPp->io_in_ver_6_bits_man_3;
        this->__Vdlyvset__ram_man_3__v0 = 1U;
        this->__Vdlyvdim0__ram_man_3__v0 = this->__PVT__enq_ptr_value;
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
    if (this->__Vdlyvset__ram_sign_28__v0) {
        this->__PVT__ram_sign_28[this->__Vdlyvdim0__ram_sign_28__v0] 
            = this->__Vdlyvval__ram_sign_28__v0;
    }
    if (this->__Vdlyvset__ram_sign_27__v0) {
        this->__PVT__ram_sign_27[this->__Vdlyvdim0__ram_sign_27__v0] 
            = this->__Vdlyvval__ram_sign_27__v0;
    }
    if (this->__Vdlyvset__ram_sign_29__v0) {
        this->__PVT__ram_sign_29[this->__Vdlyvdim0__ram_sign_29__v0] 
            = this->__Vdlyvval__ram_sign_29__v0;
    }
    if (this->__Vdlyvset__ram_sign_30__v0) {
        this->__PVT__ram_sign_30[this->__Vdlyvdim0__ram_sign_30__v0] 
            = this->__Vdlyvval__ram_sign_30__v0;
    }
    if (this->__Vdlyvset__ram_sign_31__v0) {
        this->__PVT__ram_sign_31[this->__Vdlyvdim0__ram_sign_31__v0] 
            = this->__Vdlyvval__ram_sign_31__v0;
    }
    if (this->__Vdlyvset__ram_sign_0__v0) {
        this->__PVT__ram_sign_0[this->__Vdlyvdim0__ram_sign_0__v0] 
            = this->__Vdlyvval__ram_sign_0__v0;
    }
    if (this->__Vdlyvset__ram_sign_1__v0) {
        this->__PVT__ram_sign_1[this->__Vdlyvdim0__ram_sign_1__v0] 
            = this->__Vdlyvval__ram_sign_1__v0;
    }
    if (this->__Vdlyvset__ram_sign_2__v0) {
        this->__PVT__ram_sign_2[this->__Vdlyvdim0__ram_sign_2__v0] 
            = this->__Vdlyvval__ram_sign_2__v0;
    }
    if (this->__Vdlyvset__ram_sign_3__v0) {
        this->__PVT__ram_sign_3[this->__Vdlyvdim0__ram_sign_3__v0] 
            = this->__Vdlyvval__ram_sign_3__v0;
    }
    if (this->__Vdlyvset__ram_sign_4__v0) {
        this->__PVT__ram_sign_4[this->__Vdlyvdim0__ram_sign_4__v0] 
            = this->__Vdlyvval__ram_sign_4__v0;
    }
    if (this->__Vdlyvset__ram_sign_5__v0) {
        this->__PVT__ram_sign_5[this->__Vdlyvdim0__ram_sign_5__v0] 
            = this->__Vdlyvval__ram_sign_5__v0;
    }
    if (this->__Vdlyvset__ram_sign_6__v0) {
        this->__PVT__ram_sign_6[this->__Vdlyvdim0__ram_sign_6__v0] 
            = this->__Vdlyvval__ram_sign_6__v0;
    }
    if (this->__Vdlyvset__ram_sign_7__v0) {
        this->__PVT__ram_sign_7[this->__Vdlyvdim0__ram_sign_7__v0] 
            = this->__Vdlyvval__ram_sign_7__v0;
    }
    if (this->__Vdlyvset__ram_sign_8__v0) {
        this->__PVT__ram_sign_8[this->__Vdlyvdim0__ram_sign_8__v0] 
            = this->__Vdlyvval__ram_sign_8__v0;
    }
    if (this->__Vdlyvset__ram_sign_9__v0) {
        this->__PVT__ram_sign_9[this->__Vdlyvdim0__ram_sign_9__v0] 
            = this->__Vdlyvval__ram_sign_9__v0;
    }
    if (this->__Vdlyvset__ram_sign_10__v0) {
        this->__PVT__ram_sign_10[this->__Vdlyvdim0__ram_sign_10__v0] 
            = this->__Vdlyvval__ram_sign_10__v0;
    }
    if (this->__Vdlyvset__ram_sign_11__v0) {
        this->__PVT__ram_sign_11[this->__Vdlyvdim0__ram_sign_11__v0] 
            = this->__Vdlyvval__ram_sign_11__v0;
    }
    if (this->__Vdlyvset__ram_sign_12__v0) {
        this->__PVT__ram_sign_12[this->__Vdlyvdim0__ram_sign_12__v0] 
            = this->__Vdlyvval__ram_sign_12__v0;
    }
    if (this->__Vdlyvset__ram_sign_13__v0) {
        this->__PVT__ram_sign_13[this->__Vdlyvdim0__ram_sign_13__v0] 
            = this->__Vdlyvval__ram_sign_13__v0;
    }
    if (this->__Vdlyvset__ram_sign_14__v0) {
        this->__PVT__ram_sign_14[this->__Vdlyvdim0__ram_sign_14__v0] 
            = this->__Vdlyvval__ram_sign_14__v0;
    }
    if (this->__Vdlyvset__ram_sign_15__v0) {
        this->__PVT__ram_sign_15[this->__Vdlyvdim0__ram_sign_15__v0] 
            = this->__Vdlyvval__ram_sign_15__v0;
    }
    if (this->__Vdlyvset__ram_sign_16__v0) {
        this->__PVT__ram_sign_16[this->__Vdlyvdim0__ram_sign_16__v0] 
            = this->__Vdlyvval__ram_sign_16__v0;
    }
    if (this->__Vdlyvset__ram_sign_17__v0) {
        this->__PVT__ram_sign_17[this->__Vdlyvdim0__ram_sign_17__v0] 
            = this->__Vdlyvval__ram_sign_17__v0;
    }
    if (this->__Vdlyvset__ram_sign_18__v0) {
        this->__PVT__ram_sign_18[this->__Vdlyvdim0__ram_sign_18__v0] 
            = this->__Vdlyvval__ram_sign_18__v0;
    }
    if (this->__Vdlyvset__ram_sign_19__v0) {
        this->__PVT__ram_sign_19[this->__Vdlyvdim0__ram_sign_19__v0] 
            = this->__Vdlyvval__ram_sign_19__v0;
    }
    if (this->__Vdlyvset__ram_sign_20__v0) {
        this->__PVT__ram_sign_20[this->__Vdlyvdim0__ram_sign_20__v0] 
            = this->__Vdlyvval__ram_sign_20__v0;
    }
    if (this->__Vdlyvset__ram_sign_21__v0) {
        this->__PVT__ram_sign_21[this->__Vdlyvdim0__ram_sign_21__v0] 
            = this->__Vdlyvval__ram_sign_21__v0;
    }
    if (this->__Vdlyvset__ram_sign_22__v0) {
        this->__PVT__ram_sign_22[this->__Vdlyvdim0__ram_sign_22__v0] 
            = this->__Vdlyvval__ram_sign_22__v0;
    }
    if (this->__Vdlyvset__ram_sign_23__v0) {
        this->__PVT__ram_sign_23[this->__Vdlyvdim0__ram_sign_23__v0] 
            = this->__Vdlyvval__ram_sign_23__v0;
    }
    if (this->__Vdlyvset__ram_sign_24__v0) {
        this->__PVT__ram_sign_24[this->__Vdlyvdim0__ram_sign_24__v0] 
            = this->__Vdlyvval__ram_sign_24__v0;
    }
    if (this->__Vdlyvset__ram_sign_25__v0) {
        this->__PVT__ram_sign_25[this->__Vdlyvdim0__ram_sign_25__v0] 
            = this->__Vdlyvval__ram_sign_25__v0;
    }
    if (this->__Vdlyvset__ram_sign_26__v0) {
        this->__PVT__ram_sign_26[this->__Vdlyvdim0__ram_sign_26__v0] 
            = this->__Vdlyvval__ram_sign_26__v0;
    }
    if (this->__Vdlyvset__ram_man_31__v0) {
        this->__PVT__ram_man_31[this->__Vdlyvdim0__ram_man_31__v0] 
            = this->__Vdlyvval__ram_man_31__v0;
    }
    if (this->__Vdlyvset__ram_man_30__v0) {
        this->__PVT__ram_man_30[this->__Vdlyvdim0__ram_man_30__v0] 
            = this->__Vdlyvval__ram_man_30__v0;
    }
    if (this->__Vdlyvset__ram_man_29__v0) {
        this->__PVT__ram_man_29[this->__Vdlyvdim0__ram_man_29__v0] 
            = this->__Vdlyvval__ram_man_29__v0;
    }
    if (this->__Vdlyvset__ram_man_28__v0) {
        this->__PVT__ram_man_28[this->__Vdlyvdim0__ram_man_28__v0] 
            = this->__Vdlyvval__ram_man_28__v0;
    }
    if (this->__Vdlyvset__ram_man_27__v0) {
        this->__PVT__ram_man_27[this->__Vdlyvdim0__ram_man_27__v0] 
            = this->__Vdlyvval__ram_man_27__v0;
    }
    if (this->__Vdlyvset__ram_man_26__v0) {
        this->__PVT__ram_man_26[this->__Vdlyvdim0__ram_man_26__v0] 
            = this->__Vdlyvval__ram_man_26__v0;
    }
    if (this->__Vdlyvset__ram_man_25__v0) {
        this->__PVT__ram_man_25[this->__Vdlyvdim0__ram_man_25__v0] 
            = this->__Vdlyvval__ram_man_25__v0;
    }
    if (this->__Vdlyvset__ram_man_24__v0) {
        this->__PVT__ram_man_24[this->__Vdlyvdim0__ram_man_24__v0] 
            = this->__Vdlyvval__ram_man_24__v0;
    }
    if (this->__Vdlyvset__ram_man_23__v0) {
        this->__PVT__ram_man_23[this->__Vdlyvdim0__ram_man_23__v0] 
            = this->__Vdlyvval__ram_man_23__v0;
    }
    if (this->__Vdlyvset__ram_man_22__v0) {
        this->__PVT__ram_man_22[this->__Vdlyvdim0__ram_man_22__v0] 
            = this->__Vdlyvval__ram_man_22__v0;
    }
    if (this->__Vdlyvset__ram_man_21__v0) {
        this->__PVT__ram_man_21[this->__Vdlyvdim0__ram_man_21__v0] 
            = this->__Vdlyvval__ram_man_21__v0;
    }
    if (this->__Vdlyvset__ram_man_20__v0) {
        this->__PVT__ram_man_20[this->__Vdlyvdim0__ram_man_20__v0] 
            = this->__Vdlyvval__ram_man_20__v0;
    }
    if (this->__Vdlyvset__ram_man_19__v0) {
        this->__PVT__ram_man_19[this->__Vdlyvdim0__ram_man_19__v0] 
            = this->__Vdlyvval__ram_man_19__v0;
    }
    if (this->__Vdlyvset__ram_man_7__v0) {
        this->__PVT__ram_man_7[this->__Vdlyvdim0__ram_man_7__v0] 
            = this->__Vdlyvval__ram_man_7__v0;
    }
    if (this->__Vdlyvset__ram_man_10__v0) {
        this->__PVT__ram_man_10[this->__Vdlyvdim0__ram_man_10__v0] 
            = this->__Vdlyvval__ram_man_10__v0;
    }
    if (this->__Vdlyvset__ram_man_6__v0) {
        this->__PVT__ram_man_6[this->__Vdlyvdim0__ram_man_6__v0] 
            = this->__Vdlyvval__ram_man_6__v0;
    }
    if (this->__Vdlyvset__ram_man_9__v0) {
        this->__PVT__ram_man_9[this->__Vdlyvdim0__ram_man_9__v0] 
            = this->__Vdlyvval__ram_man_9__v0;
    }
    if (this->__Vdlyvset__ram_man_5__v0) {
        this->__PVT__ram_man_5[this->__Vdlyvdim0__ram_man_5__v0] 
            = this->__Vdlyvval__ram_man_5__v0;
    }
    if (this->__Vdlyvset__ram_man_8__v0) {
        this->__PVT__ram_man_8[this->__Vdlyvdim0__ram_man_8__v0] 
            = this->__Vdlyvval__ram_man_8__v0;
    }
    if (this->__Vdlyvset__ram_man_4__v0) {
        this->__PVT__ram_man_4[this->__Vdlyvdim0__ram_man_4__v0] 
            = this->__Vdlyvval__ram_man_4__v0;
    }
    if (this->__Vdlyvset__ram_man_11__v0) {
        this->__PVT__ram_man_11[this->__Vdlyvdim0__ram_man_11__v0] 
            = this->__Vdlyvval__ram_man_11__v0;
    }
    if (this->__Vdlyvset__ram_man_12__v0) {
        this->__PVT__ram_man_12[this->__Vdlyvdim0__ram_man_12__v0] 
            = this->__Vdlyvval__ram_man_12__v0;
    }
    if (this->__Vdlyvset__ram_man_13__v0) {
        this->__PVT__ram_man_13[this->__Vdlyvdim0__ram_man_13__v0] 
            = this->__Vdlyvval__ram_man_13__v0;
    }
    if (this->__Vdlyvset__ram_man_14__v0) {
        this->__PVT__ram_man_14[this->__Vdlyvdim0__ram_man_14__v0] 
            = this->__Vdlyvval__ram_man_14__v0;
    }
    if (this->__Vdlyvset__ram_man_15__v0) {
        this->__PVT__ram_man_15[this->__Vdlyvdim0__ram_man_15__v0] 
            = this->__Vdlyvval__ram_man_15__v0;
    }
    if (this->__Vdlyvset__ram_man_16__v0) {
        this->__PVT__ram_man_16[this->__Vdlyvdim0__ram_man_16__v0] 
            = this->__Vdlyvval__ram_man_16__v0;
    }
    if (this->__Vdlyvset__ram_man_17__v0) {
        this->__PVT__ram_man_17[this->__Vdlyvdim0__ram_man_17__v0] 
            = this->__Vdlyvval__ram_man_17__v0;
    }
    if (this->__Vdlyvset__ram_man_18__v0) {
        this->__PVT__ram_man_18[this->__Vdlyvdim0__ram_man_18__v0] 
            = this->__Vdlyvval__ram_man_18__v0;
    }
    if (this->__Vdlyvset__ram_man_0__v0) {
        this->__PVT__ram_man_0[this->__Vdlyvdim0__ram_man_0__v0] 
            = this->__Vdlyvval__ram_man_0__v0;
    }
    if (this->__Vdlyvset__ram_man_1__v0) {
        this->__PVT__ram_man_1[this->__Vdlyvdim0__ram_man_1__v0] 
            = this->__Vdlyvval__ram_man_1__v0;
    }
    if (this->__Vdlyvset__ram_man_2__v0) {
        this->__PVT__ram_man_2[this->__Vdlyvdim0__ram_man_2__v0] 
            = this->__Vdlyvval__ram_man_2__v0;
    }
    if (this->__Vdlyvset__ram_man_3__v0) {
        this->__PVT__ram_man_3[this->__Vdlyvdim0__ram_man_3__v0] 
            = this->__Vdlyvval__ram_man_3__v0;
    }
    if (vlTOPp->reset) {
        this->__PVT__enq_ptr_value = 0U;
    } else {
        if ((1U & (~ (IData)(this->__PVT__full)))) {
            this->__PVT__enq_ptr_value = this->__PVT___value_T_1;
        }
    }
    this->__PVT___value_T_3 = (0xfU & ((IData)(1U) 
                                       + (IData)(this->__PVT__deq_ptr_value)));
    this->__PVT___value_T_1 = (0xfU & ((IData)(1U) 
                                       + (IData)(this->__PVT__enq_ptr_value)));
    this->__PVT__ptr_match = ((IData)(this->__PVT__enq_ptr_value) 
                              == (IData)(this->__PVT__deq_ptr_value));
    this->__PVT__full = ((IData)(this->__PVT__ptr_match) 
                         & (IData)(this->__PVT__maybe_full));
    this->__PVT__empty = ((IData)(this->__PVT__ptr_match) 
                          & (~ (IData)(this->__PVT__maybe_full)));
    this->__PVT__do_deq = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_6_io_deq_ready_r_6) 
                           & (~ (IData)(this->__PVT__empty)));
}

VL_INLINE_OPT void VSystolicArray_HBFP_forTesting_Queue::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_7__24(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_Queue::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_7__24\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vdlyvset__ram_exp__v0 = 0U;
    this->__Vdlyvset__ram_sign_28__v0 = 0U;
    this->__Vdlyvset__ram_sign_27__v0 = 0U;
    this->__Vdlyvset__ram_sign_29__v0 = 0U;
    this->__Vdlyvset__ram_sign_30__v0 = 0U;
    this->__Vdlyvset__ram_sign_31__v0 = 0U;
    this->__Vdlyvset__ram_sign_0__v0 = 0U;
    this->__Vdlyvset__ram_sign_1__v0 = 0U;
    this->__Vdlyvset__ram_sign_2__v0 = 0U;
    this->__Vdlyvset__ram_sign_3__v0 = 0U;
    this->__Vdlyvset__ram_sign_4__v0 = 0U;
    this->__Vdlyvset__ram_sign_5__v0 = 0U;
    this->__Vdlyvset__ram_sign_6__v0 = 0U;
    this->__Vdlyvset__ram_sign_7__v0 = 0U;
    this->__Vdlyvset__ram_sign_8__v0 = 0U;
    this->__Vdlyvset__ram_sign_9__v0 = 0U;
    this->__Vdlyvset__ram_sign_10__v0 = 0U;
    this->__Vdlyvset__ram_sign_11__v0 = 0U;
    this->__Vdlyvset__ram_sign_12__v0 = 0U;
    this->__Vdlyvset__ram_sign_13__v0 = 0U;
    this->__Vdlyvset__ram_sign_14__v0 = 0U;
    this->__Vdlyvset__ram_sign_15__v0 = 0U;
    this->__Vdlyvset__ram_sign_16__v0 = 0U;
    this->__Vdlyvset__ram_sign_17__v0 = 0U;
    this->__Vdlyvset__ram_sign_18__v0 = 0U;
    this->__Vdlyvset__ram_sign_19__v0 = 0U;
    this->__Vdlyvset__ram_sign_20__v0 = 0U;
    this->__Vdlyvset__ram_sign_21__v0 = 0U;
    this->__Vdlyvset__ram_sign_22__v0 = 0U;
    this->__Vdlyvset__ram_sign_23__v0 = 0U;
    this->__Vdlyvset__ram_sign_24__v0 = 0U;
    this->__Vdlyvset__ram_sign_25__v0 = 0U;
    this->__Vdlyvset__ram_sign_26__v0 = 0U;
    this->__Vdlyvset__ram_man_31__v0 = 0U;
    this->__Vdlyvset__ram_man_30__v0 = 0U;
    this->__Vdlyvset__ram_man_29__v0 = 0U;
    this->__Vdlyvset__ram_man_28__v0 = 0U;
    this->__Vdlyvset__ram_man_27__v0 = 0U;
    this->__Vdlyvset__ram_man_26__v0 = 0U;
    this->__Vdlyvset__ram_man_25__v0 = 0U;
    this->__Vdlyvset__ram_man_24__v0 = 0U;
    this->__Vdlyvset__ram_man_23__v0 = 0U;
    this->__Vdlyvset__ram_man_22__v0 = 0U;
    this->__Vdlyvset__ram_man_21__v0 = 0U;
    this->__Vdlyvset__ram_man_20__v0 = 0U;
    this->__Vdlyvset__ram_man_19__v0 = 0U;
    this->__Vdlyvset__ram_man_7__v0 = 0U;
    this->__Vdlyvset__ram_man_10__v0 = 0U;
    this->__Vdlyvset__ram_man_6__v0 = 0U;
    this->__Vdlyvset__ram_man_9__v0 = 0U;
    this->__Vdlyvset__ram_man_5__v0 = 0U;
    this->__Vdlyvset__ram_man_8__v0 = 0U;
    this->__Vdlyvset__ram_man_4__v0 = 0U;
    this->__Vdlyvset__ram_man_11__v0 = 0U;
    this->__Vdlyvset__ram_man_12__v0 = 0U;
    this->__Vdlyvset__ram_man_13__v0 = 0U;
    this->__Vdlyvset__ram_man_14__v0 = 0U;
    this->__Vdlyvset__ram_man_15__v0 = 0U;
    this->__Vdlyvset__ram_man_16__v0 = 0U;
    this->__Vdlyvset__ram_man_17__v0 = 0U;
    this->__Vdlyvset__ram_man_18__v0 = 0U;
    this->__Vdlyvset__ram_man_0__v0 = 0U;
    this->__Vdlyvset__ram_man_1__v0 = 0U;
    this->__Vdlyvset__ram_man_2__v0 = 0U;
    this->__Vdlyvset__ram_man_3__v0 = 0U;
    if (vlTOPp->reset) {
        this->__PVT__maybe_full = 0U;
    } else {
        if (((1U & (~ (IData)(this->__PVT__full))) 
             != (IData)(this->__PVT__do_deq))) {
            this->__PVT__maybe_full = (1U & (~ (IData)(this->__PVT__full)));
        }
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_exp__v0 = vlTOPp->io_in_ver_7_bits_exp;
        this->__Vdlyvset__ram_exp__v0 = 1U;
        this->__Vdlyvdim0__ram_exp__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_28__v0 = vlTOPp->io_in_ver_7_bits_sign_28;
        this->__Vdlyvset__ram_sign_28__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_28__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_27__v0 = vlTOPp->io_in_ver_7_bits_sign_27;
        this->__Vdlyvset__ram_sign_27__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_27__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_29__v0 = vlTOPp->io_in_ver_7_bits_sign_29;
        this->__Vdlyvset__ram_sign_29__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_29__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_30__v0 = vlTOPp->io_in_ver_7_bits_sign_30;
        this->__Vdlyvset__ram_sign_30__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_30__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_31__v0 = vlTOPp->io_in_ver_7_bits_sign_31;
        this->__Vdlyvset__ram_sign_31__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_31__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_0__v0 = vlTOPp->io_in_ver_7_bits_sign_0;
        this->__Vdlyvset__ram_sign_0__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_0__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_1__v0 = vlTOPp->io_in_ver_7_bits_sign_1;
        this->__Vdlyvset__ram_sign_1__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_1__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_2__v0 = vlTOPp->io_in_ver_7_bits_sign_2;
        this->__Vdlyvset__ram_sign_2__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_2__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_3__v0 = vlTOPp->io_in_ver_7_bits_sign_3;
        this->__Vdlyvset__ram_sign_3__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_3__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_4__v0 = vlTOPp->io_in_ver_7_bits_sign_4;
        this->__Vdlyvset__ram_sign_4__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_4__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_5__v0 = vlTOPp->io_in_ver_7_bits_sign_5;
        this->__Vdlyvset__ram_sign_5__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_5__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_6__v0 = vlTOPp->io_in_ver_7_bits_sign_6;
        this->__Vdlyvset__ram_sign_6__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_6__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_7__v0 = vlTOPp->io_in_ver_7_bits_sign_7;
        this->__Vdlyvset__ram_sign_7__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_7__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_8__v0 = vlTOPp->io_in_ver_7_bits_sign_8;
        this->__Vdlyvset__ram_sign_8__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_8__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_9__v0 = vlTOPp->io_in_ver_7_bits_sign_9;
        this->__Vdlyvset__ram_sign_9__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_9__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_10__v0 = vlTOPp->io_in_ver_7_bits_sign_10;
        this->__Vdlyvset__ram_sign_10__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_10__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_11__v0 = vlTOPp->io_in_ver_7_bits_sign_11;
        this->__Vdlyvset__ram_sign_11__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_11__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_12__v0 = vlTOPp->io_in_ver_7_bits_sign_12;
        this->__Vdlyvset__ram_sign_12__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_12__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_13__v0 = vlTOPp->io_in_ver_7_bits_sign_13;
        this->__Vdlyvset__ram_sign_13__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_13__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_14__v0 = vlTOPp->io_in_ver_7_bits_sign_14;
        this->__Vdlyvset__ram_sign_14__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_14__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_15__v0 = vlTOPp->io_in_ver_7_bits_sign_15;
        this->__Vdlyvset__ram_sign_15__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_15__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_16__v0 = vlTOPp->io_in_ver_7_bits_sign_16;
        this->__Vdlyvset__ram_sign_16__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_16__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_17__v0 = vlTOPp->io_in_ver_7_bits_sign_17;
        this->__Vdlyvset__ram_sign_17__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_17__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_18__v0 = vlTOPp->io_in_ver_7_bits_sign_18;
        this->__Vdlyvset__ram_sign_18__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_18__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_19__v0 = vlTOPp->io_in_ver_7_bits_sign_19;
        this->__Vdlyvset__ram_sign_19__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_19__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_20__v0 = vlTOPp->io_in_ver_7_bits_sign_20;
        this->__Vdlyvset__ram_sign_20__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_20__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_21__v0 = vlTOPp->io_in_ver_7_bits_sign_21;
        this->__Vdlyvset__ram_sign_21__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_21__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_22__v0 = vlTOPp->io_in_ver_7_bits_sign_22;
        this->__Vdlyvset__ram_sign_22__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_22__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_23__v0 = vlTOPp->io_in_ver_7_bits_sign_23;
        this->__Vdlyvset__ram_sign_23__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_23__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_24__v0 = vlTOPp->io_in_ver_7_bits_sign_24;
        this->__Vdlyvset__ram_sign_24__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_24__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_25__v0 = vlTOPp->io_in_ver_7_bits_sign_25;
        this->__Vdlyvset__ram_sign_25__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_25__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_26__v0 = vlTOPp->io_in_ver_7_bits_sign_26;
        this->__Vdlyvset__ram_sign_26__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_26__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_31__v0 = vlTOPp->io_in_ver_7_bits_man_31;
        this->__Vdlyvset__ram_man_31__v0 = 1U;
        this->__Vdlyvdim0__ram_man_31__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_30__v0 = vlTOPp->io_in_ver_7_bits_man_30;
        this->__Vdlyvset__ram_man_30__v0 = 1U;
        this->__Vdlyvdim0__ram_man_30__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_29__v0 = vlTOPp->io_in_ver_7_bits_man_29;
        this->__Vdlyvset__ram_man_29__v0 = 1U;
        this->__Vdlyvdim0__ram_man_29__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_28__v0 = vlTOPp->io_in_ver_7_bits_man_28;
        this->__Vdlyvset__ram_man_28__v0 = 1U;
        this->__Vdlyvdim0__ram_man_28__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_27__v0 = vlTOPp->io_in_ver_7_bits_man_27;
        this->__Vdlyvset__ram_man_27__v0 = 1U;
        this->__Vdlyvdim0__ram_man_27__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_26__v0 = vlTOPp->io_in_ver_7_bits_man_26;
        this->__Vdlyvset__ram_man_26__v0 = 1U;
        this->__Vdlyvdim0__ram_man_26__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_25__v0 = vlTOPp->io_in_ver_7_bits_man_25;
        this->__Vdlyvset__ram_man_25__v0 = 1U;
        this->__Vdlyvdim0__ram_man_25__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_24__v0 = vlTOPp->io_in_ver_7_bits_man_24;
        this->__Vdlyvset__ram_man_24__v0 = 1U;
        this->__Vdlyvdim0__ram_man_24__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_23__v0 = vlTOPp->io_in_ver_7_bits_man_23;
        this->__Vdlyvset__ram_man_23__v0 = 1U;
        this->__Vdlyvdim0__ram_man_23__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_22__v0 = vlTOPp->io_in_ver_7_bits_man_22;
        this->__Vdlyvset__ram_man_22__v0 = 1U;
        this->__Vdlyvdim0__ram_man_22__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_21__v0 = vlTOPp->io_in_ver_7_bits_man_21;
        this->__Vdlyvset__ram_man_21__v0 = 1U;
        this->__Vdlyvdim0__ram_man_21__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_20__v0 = vlTOPp->io_in_ver_7_bits_man_20;
        this->__Vdlyvset__ram_man_20__v0 = 1U;
        this->__Vdlyvdim0__ram_man_20__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_19__v0 = vlTOPp->io_in_ver_7_bits_man_19;
        this->__Vdlyvset__ram_man_19__v0 = 1U;
        this->__Vdlyvdim0__ram_man_19__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_7__v0 = vlTOPp->io_in_ver_7_bits_man_7;
        this->__Vdlyvset__ram_man_7__v0 = 1U;
        this->__Vdlyvdim0__ram_man_7__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_10__v0 = vlTOPp->io_in_ver_7_bits_man_10;
        this->__Vdlyvset__ram_man_10__v0 = 1U;
        this->__Vdlyvdim0__ram_man_10__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_6__v0 = vlTOPp->io_in_ver_7_bits_man_6;
        this->__Vdlyvset__ram_man_6__v0 = 1U;
        this->__Vdlyvdim0__ram_man_6__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_9__v0 = vlTOPp->io_in_ver_7_bits_man_9;
        this->__Vdlyvset__ram_man_9__v0 = 1U;
        this->__Vdlyvdim0__ram_man_9__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_5__v0 = vlTOPp->io_in_ver_7_bits_man_5;
        this->__Vdlyvset__ram_man_5__v0 = 1U;
        this->__Vdlyvdim0__ram_man_5__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_8__v0 = vlTOPp->io_in_ver_7_bits_man_8;
        this->__Vdlyvset__ram_man_8__v0 = 1U;
        this->__Vdlyvdim0__ram_man_8__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_4__v0 = vlTOPp->io_in_ver_7_bits_man_4;
        this->__Vdlyvset__ram_man_4__v0 = 1U;
        this->__Vdlyvdim0__ram_man_4__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_11__v0 = vlTOPp->io_in_ver_7_bits_man_11;
        this->__Vdlyvset__ram_man_11__v0 = 1U;
        this->__Vdlyvdim0__ram_man_11__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_12__v0 = vlTOPp->io_in_ver_7_bits_man_12;
        this->__Vdlyvset__ram_man_12__v0 = 1U;
        this->__Vdlyvdim0__ram_man_12__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_13__v0 = vlTOPp->io_in_ver_7_bits_man_13;
        this->__Vdlyvset__ram_man_13__v0 = 1U;
        this->__Vdlyvdim0__ram_man_13__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_14__v0 = vlTOPp->io_in_ver_7_bits_man_14;
        this->__Vdlyvset__ram_man_14__v0 = 1U;
        this->__Vdlyvdim0__ram_man_14__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_15__v0 = vlTOPp->io_in_ver_7_bits_man_15;
        this->__Vdlyvset__ram_man_15__v0 = 1U;
        this->__Vdlyvdim0__ram_man_15__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_16__v0 = vlTOPp->io_in_ver_7_bits_man_16;
        this->__Vdlyvset__ram_man_16__v0 = 1U;
        this->__Vdlyvdim0__ram_man_16__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_17__v0 = vlTOPp->io_in_ver_7_bits_man_17;
        this->__Vdlyvset__ram_man_17__v0 = 1U;
        this->__Vdlyvdim0__ram_man_17__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_18__v0 = vlTOPp->io_in_ver_7_bits_man_18;
        this->__Vdlyvset__ram_man_18__v0 = 1U;
        this->__Vdlyvdim0__ram_man_18__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_0__v0 = vlTOPp->io_in_ver_7_bits_man_0;
        this->__Vdlyvset__ram_man_0__v0 = 1U;
        this->__Vdlyvdim0__ram_man_0__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_1__v0 = vlTOPp->io_in_ver_7_bits_man_1;
        this->__Vdlyvset__ram_man_1__v0 = 1U;
        this->__Vdlyvdim0__ram_man_1__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_2__v0 = vlTOPp->io_in_ver_7_bits_man_2;
        this->__Vdlyvset__ram_man_2__v0 = 1U;
        this->__Vdlyvdim0__ram_man_2__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_3__v0 = vlTOPp->io_in_ver_7_bits_man_3;
        this->__Vdlyvset__ram_man_3__v0 = 1U;
        this->__Vdlyvdim0__ram_man_3__v0 = this->__PVT__enq_ptr_value;
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
    if (this->__Vdlyvset__ram_sign_28__v0) {
        this->__PVT__ram_sign_28[this->__Vdlyvdim0__ram_sign_28__v0] 
            = this->__Vdlyvval__ram_sign_28__v0;
    }
    if (this->__Vdlyvset__ram_sign_27__v0) {
        this->__PVT__ram_sign_27[this->__Vdlyvdim0__ram_sign_27__v0] 
            = this->__Vdlyvval__ram_sign_27__v0;
    }
    if (this->__Vdlyvset__ram_sign_29__v0) {
        this->__PVT__ram_sign_29[this->__Vdlyvdim0__ram_sign_29__v0] 
            = this->__Vdlyvval__ram_sign_29__v0;
    }
    if (this->__Vdlyvset__ram_sign_30__v0) {
        this->__PVT__ram_sign_30[this->__Vdlyvdim0__ram_sign_30__v0] 
            = this->__Vdlyvval__ram_sign_30__v0;
    }
    if (this->__Vdlyvset__ram_sign_31__v0) {
        this->__PVT__ram_sign_31[this->__Vdlyvdim0__ram_sign_31__v0] 
            = this->__Vdlyvval__ram_sign_31__v0;
    }
    if (this->__Vdlyvset__ram_sign_0__v0) {
        this->__PVT__ram_sign_0[this->__Vdlyvdim0__ram_sign_0__v0] 
            = this->__Vdlyvval__ram_sign_0__v0;
    }
    if (this->__Vdlyvset__ram_sign_1__v0) {
        this->__PVT__ram_sign_1[this->__Vdlyvdim0__ram_sign_1__v0] 
            = this->__Vdlyvval__ram_sign_1__v0;
    }
    if (this->__Vdlyvset__ram_sign_2__v0) {
        this->__PVT__ram_sign_2[this->__Vdlyvdim0__ram_sign_2__v0] 
            = this->__Vdlyvval__ram_sign_2__v0;
    }
    if (this->__Vdlyvset__ram_sign_3__v0) {
        this->__PVT__ram_sign_3[this->__Vdlyvdim0__ram_sign_3__v0] 
            = this->__Vdlyvval__ram_sign_3__v0;
    }
    if (this->__Vdlyvset__ram_sign_4__v0) {
        this->__PVT__ram_sign_4[this->__Vdlyvdim0__ram_sign_4__v0] 
            = this->__Vdlyvval__ram_sign_4__v0;
    }
    if (this->__Vdlyvset__ram_sign_5__v0) {
        this->__PVT__ram_sign_5[this->__Vdlyvdim0__ram_sign_5__v0] 
            = this->__Vdlyvval__ram_sign_5__v0;
    }
    if (this->__Vdlyvset__ram_sign_6__v0) {
        this->__PVT__ram_sign_6[this->__Vdlyvdim0__ram_sign_6__v0] 
            = this->__Vdlyvval__ram_sign_6__v0;
    }
    if (this->__Vdlyvset__ram_sign_7__v0) {
        this->__PVT__ram_sign_7[this->__Vdlyvdim0__ram_sign_7__v0] 
            = this->__Vdlyvval__ram_sign_7__v0;
    }
    if (this->__Vdlyvset__ram_sign_8__v0) {
        this->__PVT__ram_sign_8[this->__Vdlyvdim0__ram_sign_8__v0] 
            = this->__Vdlyvval__ram_sign_8__v0;
    }
    if (this->__Vdlyvset__ram_sign_9__v0) {
        this->__PVT__ram_sign_9[this->__Vdlyvdim0__ram_sign_9__v0] 
            = this->__Vdlyvval__ram_sign_9__v0;
    }
    if (this->__Vdlyvset__ram_sign_10__v0) {
        this->__PVT__ram_sign_10[this->__Vdlyvdim0__ram_sign_10__v0] 
            = this->__Vdlyvval__ram_sign_10__v0;
    }
    if (this->__Vdlyvset__ram_sign_11__v0) {
        this->__PVT__ram_sign_11[this->__Vdlyvdim0__ram_sign_11__v0] 
            = this->__Vdlyvval__ram_sign_11__v0;
    }
    if (this->__Vdlyvset__ram_sign_12__v0) {
        this->__PVT__ram_sign_12[this->__Vdlyvdim0__ram_sign_12__v0] 
            = this->__Vdlyvval__ram_sign_12__v0;
    }
    if (this->__Vdlyvset__ram_sign_13__v0) {
        this->__PVT__ram_sign_13[this->__Vdlyvdim0__ram_sign_13__v0] 
            = this->__Vdlyvval__ram_sign_13__v0;
    }
    if (this->__Vdlyvset__ram_sign_14__v0) {
        this->__PVT__ram_sign_14[this->__Vdlyvdim0__ram_sign_14__v0] 
            = this->__Vdlyvval__ram_sign_14__v0;
    }
    if (this->__Vdlyvset__ram_sign_15__v0) {
        this->__PVT__ram_sign_15[this->__Vdlyvdim0__ram_sign_15__v0] 
            = this->__Vdlyvval__ram_sign_15__v0;
    }
    if (this->__Vdlyvset__ram_sign_16__v0) {
        this->__PVT__ram_sign_16[this->__Vdlyvdim0__ram_sign_16__v0] 
            = this->__Vdlyvval__ram_sign_16__v0;
    }
    if (this->__Vdlyvset__ram_sign_17__v0) {
        this->__PVT__ram_sign_17[this->__Vdlyvdim0__ram_sign_17__v0] 
            = this->__Vdlyvval__ram_sign_17__v0;
    }
    if (this->__Vdlyvset__ram_sign_18__v0) {
        this->__PVT__ram_sign_18[this->__Vdlyvdim0__ram_sign_18__v0] 
            = this->__Vdlyvval__ram_sign_18__v0;
    }
    if (this->__Vdlyvset__ram_sign_19__v0) {
        this->__PVT__ram_sign_19[this->__Vdlyvdim0__ram_sign_19__v0] 
            = this->__Vdlyvval__ram_sign_19__v0;
    }
    if (this->__Vdlyvset__ram_sign_20__v0) {
        this->__PVT__ram_sign_20[this->__Vdlyvdim0__ram_sign_20__v0] 
            = this->__Vdlyvval__ram_sign_20__v0;
    }
    if (this->__Vdlyvset__ram_sign_21__v0) {
        this->__PVT__ram_sign_21[this->__Vdlyvdim0__ram_sign_21__v0] 
            = this->__Vdlyvval__ram_sign_21__v0;
    }
    if (this->__Vdlyvset__ram_sign_22__v0) {
        this->__PVT__ram_sign_22[this->__Vdlyvdim0__ram_sign_22__v0] 
            = this->__Vdlyvval__ram_sign_22__v0;
    }
    if (this->__Vdlyvset__ram_sign_23__v0) {
        this->__PVT__ram_sign_23[this->__Vdlyvdim0__ram_sign_23__v0] 
            = this->__Vdlyvval__ram_sign_23__v0;
    }
    if (this->__Vdlyvset__ram_sign_24__v0) {
        this->__PVT__ram_sign_24[this->__Vdlyvdim0__ram_sign_24__v0] 
            = this->__Vdlyvval__ram_sign_24__v0;
    }
    if (this->__Vdlyvset__ram_sign_25__v0) {
        this->__PVT__ram_sign_25[this->__Vdlyvdim0__ram_sign_25__v0] 
            = this->__Vdlyvval__ram_sign_25__v0;
    }
    if (this->__Vdlyvset__ram_sign_26__v0) {
        this->__PVT__ram_sign_26[this->__Vdlyvdim0__ram_sign_26__v0] 
            = this->__Vdlyvval__ram_sign_26__v0;
    }
    if (this->__Vdlyvset__ram_man_31__v0) {
        this->__PVT__ram_man_31[this->__Vdlyvdim0__ram_man_31__v0] 
            = this->__Vdlyvval__ram_man_31__v0;
    }
    if (this->__Vdlyvset__ram_man_30__v0) {
        this->__PVT__ram_man_30[this->__Vdlyvdim0__ram_man_30__v0] 
            = this->__Vdlyvval__ram_man_30__v0;
    }
    if (this->__Vdlyvset__ram_man_29__v0) {
        this->__PVT__ram_man_29[this->__Vdlyvdim0__ram_man_29__v0] 
            = this->__Vdlyvval__ram_man_29__v0;
    }
    if (this->__Vdlyvset__ram_man_28__v0) {
        this->__PVT__ram_man_28[this->__Vdlyvdim0__ram_man_28__v0] 
            = this->__Vdlyvval__ram_man_28__v0;
    }
    if (this->__Vdlyvset__ram_man_27__v0) {
        this->__PVT__ram_man_27[this->__Vdlyvdim0__ram_man_27__v0] 
            = this->__Vdlyvval__ram_man_27__v0;
    }
    if (this->__Vdlyvset__ram_man_26__v0) {
        this->__PVT__ram_man_26[this->__Vdlyvdim0__ram_man_26__v0] 
            = this->__Vdlyvval__ram_man_26__v0;
    }
    if (this->__Vdlyvset__ram_man_25__v0) {
        this->__PVT__ram_man_25[this->__Vdlyvdim0__ram_man_25__v0] 
            = this->__Vdlyvval__ram_man_25__v0;
    }
    if (this->__Vdlyvset__ram_man_24__v0) {
        this->__PVT__ram_man_24[this->__Vdlyvdim0__ram_man_24__v0] 
            = this->__Vdlyvval__ram_man_24__v0;
    }
    if (this->__Vdlyvset__ram_man_23__v0) {
        this->__PVT__ram_man_23[this->__Vdlyvdim0__ram_man_23__v0] 
            = this->__Vdlyvval__ram_man_23__v0;
    }
    if (this->__Vdlyvset__ram_man_22__v0) {
        this->__PVT__ram_man_22[this->__Vdlyvdim0__ram_man_22__v0] 
            = this->__Vdlyvval__ram_man_22__v0;
    }
    if (this->__Vdlyvset__ram_man_21__v0) {
        this->__PVT__ram_man_21[this->__Vdlyvdim0__ram_man_21__v0] 
            = this->__Vdlyvval__ram_man_21__v0;
    }
    if (this->__Vdlyvset__ram_man_20__v0) {
        this->__PVT__ram_man_20[this->__Vdlyvdim0__ram_man_20__v0] 
            = this->__Vdlyvval__ram_man_20__v0;
    }
    if (this->__Vdlyvset__ram_man_19__v0) {
        this->__PVT__ram_man_19[this->__Vdlyvdim0__ram_man_19__v0] 
            = this->__Vdlyvval__ram_man_19__v0;
    }
    if (this->__Vdlyvset__ram_man_7__v0) {
        this->__PVT__ram_man_7[this->__Vdlyvdim0__ram_man_7__v0] 
            = this->__Vdlyvval__ram_man_7__v0;
    }
    if (this->__Vdlyvset__ram_man_10__v0) {
        this->__PVT__ram_man_10[this->__Vdlyvdim0__ram_man_10__v0] 
            = this->__Vdlyvval__ram_man_10__v0;
    }
    if (this->__Vdlyvset__ram_man_6__v0) {
        this->__PVT__ram_man_6[this->__Vdlyvdim0__ram_man_6__v0] 
            = this->__Vdlyvval__ram_man_6__v0;
    }
    if (this->__Vdlyvset__ram_man_9__v0) {
        this->__PVT__ram_man_9[this->__Vdlyvdim0__ram_man_9__v0] 
            = this->__Vdlyvval__ram_man_9__v0;
    }
    if (this->__Vdlyvset__ram_man_5__v0) {
        this->__PVT__ram_man_5[this->__Vdlyvdim0__ram_man_5__v0] 
            = this->__Vdlyvval__ram_man_5__v0;
    }
    if (this->__Vdlyvset__ram_man_8__v0) {
        this->__PVT__ram_man_8[this->__Vdlyvdim0__ram_man_8__v0] 
            = this->__Vdlyvval__ram_man_8__v0;
    }
    if (this->__Vdlyvset__ram_man_4__v0) {
        this->__PVT__ram_man_4[this->__Vdlyvdim0__ram_man_4__v0] 
            = this->__Vdlyvval__ram_man_4__v0;
    }
    if (this->__Vdlyvset__ram_man_11__v0) {
        this->__PVT__ram_man_11[this->__Vdlyvdim0__ram_man_11__v0] 
            = this->__Vdlyvval__ram_man_11__v0;
    }
    if (this->__Vdlyvset__ram_man_12__v0) {
        this->__PVT__ram_man_12[this->__Vdlyvdim0__ram_man_12__v0] 
            = this->__Vdlyvval__ram_man_12__v0;
    }
    if (this->__Vdlyvset__ram_man_13__v0) {
        this->__PVT__ram_man_13[this->__Vdlyvdim0__ram_man_13__v0] 
            = this->__Vdlyvval__ram_man_13__v0;
    }
    if (this->__Vdlyvset__ram_man_14__v0) {
        this->__PVT__ram_man_14[this->__Vdlyvdim0__ram_man_14__v0] 
            = this->__Vdlyvval__ram_man_14__v0;
    }
    if (this->__Vdlyvset__ram_man_15__v0) {
        this->__PVT__ram_man_15[this->__Vdlyvdim0__ram_man_15__v0] 
            = this->__Vdlyvval__ram_man_15__v0;
    }
    if (this->__Vdlyvset__ram_man_16__v0) {
        this->__PVT__ram_man_16[this->__Vdlyvdim0__ram_man_16__v0] 
            = this->__Vdlyvval__ram_man_16__v0;
    }
    if (this->__Vdlyvset__ram_man_17__v0) {
        this->__PVT__ram_man_17[this->__Vdlyvdim0__ram_man_17__v0] 
            = this->__Vdlyvval__ram_man_17__v0;
    }
    if (this->__Vdlyvset__ram_man_18__v0) {
        this->__PVT__ram_man_18[this->__Vdlyvdim0__ram_man_18__v0] 
            = this->__Vdlyvval__ram_man_18__v0;
    }
    if (this->__Vdlyvset__ram_man_0__v0) {
        this->__PVT__ram_man_0[this->__Vdlyvdim0__ram_man_0__v0] 
            = this->__Vdlyvval__ram_man_0__v0;
    }
    if (this->__Vdlyvset__ram_man_1__v0) {
        this->__PVT__ram_man_1[this->__Vdlyvdim0__ram_man_1__v0] 
            = this->__Vdlyvval__ram_man_1__v0;
    }
    if (this->__Vdlyvset__ram_man_2__v0) {
        this->__PVT__ram_man_2[this->__Vdlyvdim0__ram_man_2__v0] 
            = this->__Vdlyvval__ram_man_2__v0;
    }
    if (this->__Vdlyvset__ram_man_3__v0) {
        this->__PVT__ram_man_3[this->__Vdlyvdim0__ram_man_3__v0] 
            = this->__Vdlyvval__ram_man_3__v0;
    }
    if (vlTOPp->reset) {
        this->__PVT__enq_ptr_value = 0U;
    } else {
        if ((1U & (~ (IData)(this->__PVT__full)))) {
            this->__PVT__enq_ptr_value = this->__PVT___value_T_1;
        }
    }
    this->__PVT___value_T_3 = (0xfU & ((IData)(1U) 
                                       + (IData)(this->__PVT__deq_ptr_value)));
    this->__PVT___value_T_1 = (0xfU & ((IData)(1U) 
                                       + (IData)(this->__PVT__enq_ptr_value)));
    this->__PVT__ptr_match = ((IData)(this->__PVT__enq_ptr_value) 
                              == (IData)(this->__PVT__deq_ptr_value));
    this->__PVT__full = ((IData)(this->__PVT__ptr_match) 
                         & (IData)(this->__PVT__maybe_full));
    this->__PVT__empty = ((IData)(this->__PVT__ptr_match) 
                          & (~ (IData)(this->__PVT__maybe_full)));
    this->__PVT__do_deq = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_7_io_deq_ready_r_7) 
                           & (~ (IData)(this->__PVT__empty)));
}

VL_INLINE_OPT void VSystolicArray_HBFP_forTesting_Queue::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_8__25(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_Queue::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_8__25\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vdlyvset__ram_exp__v0 = 0U;
    this->__Vdlyvset__ram_sign_28__v0 = 0U;
    this->__Vdlyvset__ram_sign_27__v0 = 0U;
    this->__Vdlyvset__ram_sign_29__v0 = 0U;
    this->__Vdlyvset__ram_sign_30__v0 = 0U;
    this->__Vdlyvset__ram_sign_31__v0 = 0U;
    this->__Vdlyvset__ram_sign_0__v0 = 0U;
    this->__Vdlyvset__ram_sign_1__v0 = 0U;
    this->__Vdlyvset__ram_sign_2__v0 = 0U;
    this->__Vdlyvset__ram_sign_3__v0 = 0U;
    this->__Vdlyvset__ram_sign_4__v0 = 0U;
    this->__Vdlyvset__ram_sign_5__v0 = 0U;
    this->__Vdlyvset__ram_sign_6__v0 = 0U;
    this->__Vdlyvset__ram_sign_7__v0 = 0U;
    this->__Vdlyvset__ram_sign_8__v0 = 0U;
    this->__Vdlyvset__ram_sign_9__v0 = 0U;
    this->__Vdlyvset__ram_sign_10__v0 = 0U;
    this->__Vdlyvset__ram_sign_11__v0 = 0U;
    this->__Vdlyvset__ram_sign_12__v0 = 0U;
    this->__Vdlyvset__ram_sign_13__v0 = 0U;
    this->__Vdlyvset__ram_sign_14__v0 = 0U;
    this->__Vdlyvset__ram_sign_15__v0 = 0U;
    this->__Vdlyvset__ram_sign_16__v0 = 0U;
    this->__Vdlyvset__ram_sign_17__v0 = 0U;
    this->__Vdlyvset__ram_sign_18__v0 = 0U;
    this->__Vdlyvset__ram_sign_19__v0 = 0U;
    this->__Vdlyvset__ram_sign_20__v0 = 0U;
    this->__Vdlyvset__ram_sign_21__v0 = 0U;
    this->__Vdlyvset__ram_sign_22__v0 = 0U;
    this->__Vdlyvset__ram_sign_23__v0 = 0U;
    this->__Vdlyvset__ram_sign_24__v0 = 0U;
    this->__Vdlyvset__ram_sign_25__v0 = 0U;
    this->__Vdlyvset__ram_sign_26__v0 = 0U;
    this->__Vdlyvset__ram_man_31__v0 = 0U;
    this->__Vdlyvset__ram_man_30__v0 = 0U;
    this->__Vdlyvset__ram_man_29__v0 = 0U;
    this->__Vdlyvset__ram_man_28__v0 = 0U;
    this->__Vdlyvset__ram_man_27__v0 = 0U;
    this->__Vdlyvset__ram_man_26__v0 = 0U;
    this->__Vdlyvset__ram_man_25__v0 = 0U;
    this->__Vdlyvset__ram_man_24__v0 = 0U;
    this->__Vdlyvset__ram_man_23__v0 = 0U;
    this->__Vdlyvset__ram_man_22__v0 = 0U;
    this->__Vdlyvset__ram_man_21__v0 = 0U;
    this->__Vdlyvset__ram_man_20__v0 = 0U;
    this->__Vdlyvset__ram_man_19__v0 = 0U;
    this->__Vdlyvset__ram_man_7__v0 = 0U;
    this->__Vdlyvset__ram_man_10__v0 = 0U;
    this->__Vdlyvset__ram_man_6__v0 = 0U;
    this->__Vdlyvset__ram_man_9__v0 = 0U;
    this->__Vdlyvset__ram_man_5__v0 = 0U;
    this->__Vdlyvset__ram_man_8__v0 = 0U;
    this->__Vdlyvset__ram_man_4__v0 = 0U;
    this->__Vdlyvset__ram_man_11__v0 = 0U;
    this->__Vdlyvset__ram_man_12__v0 = 0U;
    this->__Vdlyvset__ram_man_13__v0 = 0U;
    this->__Vdlyvset__ram_man_14__v0 = 0U;
    this->__Vdlyvset__ram_man_15__v0 = 0U;
    this->__Vdlyvset__ram_man_16__v0 = 0U;
    this->__Vdlyvset__ram_man_17__v0 = 0U;
    this->__Vdlyvset__ram_man_18__v0 = 0U;
    this->__Vdlyvset__ram_man_0__v0 = 0U;
    this->__Vdlyvset__ram_man_1__v0 = 0U;
    this->__Vdlyvset__ram_man_2__v0 = 0U;
    this->__Vdlyvset__ram_man_3__v0 = 0U;
    if (vlTOPp->reset) {
        this->__PVT__maybe_full = 0U;
    } else {
        if (((1U & (~ (IData)(this->__PVT__full))) 
             != (IData)(this->__PVT__do_deq))) {
            this->__PVT__maybe_full = (1U & (~ (IData)(this->__PVT__full)));
        }
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_exp__v0 = vlTOPp->io_in_ver_8_bits_exp;
        this->__Vdlyvset__ram_exp__v0 = 1U;
        this->__Vdlyvdim0__ram_exp__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_28__v0 = vlTOPp->io_in_ver_8_bits_sign_28;
        this->__Vdlyvset__ram_sign_28__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_28__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_27__v0 = vlTOPp->io_in_ver_8_bits_sign_27;
        this->__Vdlyvset__ram_sign_27__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_27__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_29__v0 = vlTOPp->io_in_ver_8_bits_sign_29;
        this->__Vdlyvset__ram_sign_29__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_29__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_30__v0 = vlTOPp->io_in_ver_8_bits_sign_30;
        this->__Vdlyvset__ram_sign_30__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_30__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_31__v0 = vlTOPp->io_in_ver_8_bits_sign_31;
        this->__Vdlyvset__ram_sign_31__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_31__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_0__v0 = vlTOPp->io_in_ver_8_bits_sign_0;
        this->__Vdlyvset__ram_sign_0__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_0__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_1__v0 = vlTOPp->io_in_ver_8_bits_sign_1;
        this->__Vdlyvset__ram_sign_1__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_1__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_2__v0 = vlTOPp->io_in_ver_8_bits_sign_2;
        this->__Vdlyvset__ram_sign_2__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_2__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_3__v0 = vlTOPp->io_in_ver_8_bits_sign_3;
        this->__Vdlyvset__ram_sign_3__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_3__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_4__v0 = vlTOPp->io_in_ver_8_bits_sign_4;
        this->__Vdlyvset__ram_sign_4__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_4__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_5__v0 = vlTOPp->io_in_ver_8_bits_sign_5;
        this->__Vdlyvset__ram_sign_5__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_5__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_6__v0 = vlTOPp->io_in_ver_8_bits_sign_6;
        this->__Vdlyvset__ram_sign_6__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_6__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_7__v0 = vlTOPp->io_in_ver_8_bits_sign_7;
        this->__Vdlyvset__ram_sign_7__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_7__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_8__v0 = vlTOPp->io_in_ver_8_bits_sign_8;
        this->__Vdlyvset__ram_sign_8__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_8__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_9__v0 = vlTOPp->io_in_ver_8_bits_sign_9;
        this->__Vdlyvset__ram_sign_9__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_9__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_10__v0 = vlTOPp->io_in_ver_8_bits_sign_10;
        this->__Vdlyvset__ram_sign_10__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_10__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_11__v0 = vlTOPp->io_in_ver_8_bits_sign_11;
        this->__Vdlyvset__ram_sign_11__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_11__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_12__v0 = vlTOPp->io_in_ver_8_bits_sign_12;
        this->__Vdlyvset__ram_sign_12__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_12__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_13__v0 = vlTOPp->io_in_ver_8_bits_sign_13;
        this->__Vdlyvset__ram_sign_13__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_13__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_14__v0 = vlTOPp->io_in_ver_8_bits_sign_14;
        this->__Vdlyvset__ram_sign_14__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_14__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_15__v0 = vlTOPp->io_in_ver_8_bits_sign_15;
        this->__Vdlyvset__ram_sign_15__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_15__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_16__v0 = vlTOPp->io_in_ver_8_bits_sign_16;
        this->__Vdlyvset__ram_sign_16__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_16__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_17__v0 = vlTOPp->io_in_ver_8_bits_sign_17;
        this->__Vdlyvset__ram_sign_17__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_17__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_18__v0 = vlTOPp->io_in_ver_8_bits_sign_18;
        this->__Vdlyvset__ram_sign_18__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_18__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_19__v0 = vlTOPp->io_in_ver_8_bits_sign_19;
        this->__Vdlyvset__ram_sign_19__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_19__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_20__v0 = vlTOPp->io_in_ver_8_bits_sign_20;
        this->__Vdlyvset__ram_sign_20__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_20__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_21__v0 = vlTOPp->io_in_ver_8_bits_sign_21;
        this->__Vdlyvset__ram_sign_21__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_21__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_22__v0 = vlTOPp->io_in_ver_8_bits_sign_22;
        this->__Vdlyvset__ram_sign_22__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_22__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_23__v0 = vlTOPp->io_in_ver_8_bits_sign_23;
        this->__Vdlyvset__ram_sign_23__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_23__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_24__v0 = vlTOPp->io_in_ver_8_bits_sign_24;
        this->__Vdlyvset__ram_sign_24__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_24__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_25__v0 = vlTOPp->io_in_ver_8_bits_sign_25;
        this->__Vdlyvset__ram_sign_25__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_25__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_26__v0 = vlTOPp->io_in_ver_8_bits_sign_26;
        this->__Vdlyvset__ram_sign_26__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_26__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_31__v0 = vlTOPp->io_in_ver_8_bits_man_31;
        this->__Vdlyvset__ram_man_31__v0 = 1U;
        this->__Vdlyvdim0__ram_man_31__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_30__v0 = vlTOPp->io_in_ver_8_bits_man_30;
        this->__Vdlyvset__ram_man_30__v0 = 1U;
        this->__Vdlyvdim0__ram_man_30__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_29__v0 = vlTOPp->io_in_ver_8_bits_man_29;
        this->__Vdlyvset__ram_man_29__v0 = 1U;
        this->__Vdlyvdim0__ram_man_29__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_28__v0 = vlTOPp->io_in_ver_8_bits_man_28;
        this->__Vdlyvset__ram_man_28__v0 = 1U;
        this->__Vdlyvdim0__ram_man_28__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_27__v0 = vlTOPp->io_in_ver_8_bits_man_27;
        this->__Vdlyvset__ram_man_27__v0 = 1U;
        this->__Vdlyvdim0__ram_man_27__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_26__v0 = vlTOPp->io_in_ver_8_bits_man_26;
        this->__Vdlyvset__ram_man_26__v0 = 1U;
        this->__Vdlyvdim0__ram_man_26__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_25__v0 = vlTOPp->io_in_ver_8_bits_man_25;
        this->__Vdlyvset__ram_man_25__v0 = 1U;
        this->__Vdlyvdim0__ram_man_25__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_24__v0 = vlTOPp->io_in_ver_8_bits_man_24;
        this->__Vdlyvset__ram_man_24__v0 = 1U;
        this->__Vdlyvdim0__ram_man_24__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_23__v0 = vlTOPp->io_in_ver_8_bits_man_23;
        this->__Vdlyvset__ram_man_23__v0 = 1U;
        this->__Vdlyvdim0__ram_man_23__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_22__v0 = vlTOPp->io_in_ver_8_bits_man_22;
        this->__Vdlyvset__ram_man_22__v0 = 1U;
        this->__Vdlyvdim0__ram_man_22__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_21__v0 = vlTOPp->io_in_ver_8_bits_man_21;
        this->__Vdlyvset__ram_man_21__v0 = 1U;
        this->__Vdlyvdim0__ram_man_21__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_20__v0 = vlTOPp->io_in_ver_8_bits_man_20;
        this->__Vdlyvset__ram_man_20__v0 = 1U;
        this->__Vdlyvdim0__ram_man_20__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_19__v0 = vlTOPp->io_in_ver_8_bits_man_19;
        this->__Vdlyvset__ram_man_19__v0 = 1U;
        this->__Vdlyvdim0__ram_man_19__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_7__v0 = vlTOPp->io_in_ver_8_bits_man_7;
        this->__Vdlyvset__ram_man_7__v0 = 1U;
        this->__Vdlyvdim0__ram_man_7__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_10__v0 = vlTOPp->io_in_ver_8_bits_man_10;
        this->__Vdlyvset__ram_man_10__v0 = 1U;
        this->__Vdlyvdim0__ram_man_10__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_6__v0 = vlTOPp->io_in_ver_8_bits_man_6;
        this->__Vdlyvset__ram_man_6__v0 = 1U;
        this->__Vdlyvdim0__ram_man_6__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_9__v0 = vlTOPp->io_in_ver_8_bits_man_9;
        this->__Vdlyvset__ram_man_9__v0 = 1U;
        this->__Vdlyvdim0__ram_man_9__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_5__v0 = vlTOPp->io_in_ver_8_bits_man_5;
        this->__Vdlyvset__ram_man_5__v0 = 1U;
        this->__Vdlyvdim0__ram_man_5__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_8__v0 = vlTOPp->io_in_ver_8_bits_man_8;
        this->__Vdlyvset__ram_man_8__v0 = 1U;
        this->__Vdlyvdim0__ram_man_8__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_4__v0 = vlTOPp->io_in_ver_8_bits_man_4;
        this->__Vdlyvset__ram_man_4__v0 = 1U;
        this->__Vdlyvdim0__ram_man_4__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_11__v0 = vlTOPp->io_in_ver_8_bits_man_11;
        this->__Vdlyvset__ram_man_11__v0 = 1U;
        this->__Vdlyvdim0__ram_man_11__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_12__v0 = vlTOPp->io_in_ver_8_bits_man_12;
        this->__Vdlyvset__ram_man_12__v0 = 1U;
        this->__Vdlyvdim0__ram_man_12__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_13__v0 = vlTOPp->io_in_ver_8_bits_man_13;
        this->__Vdlyvset__ram_man_13__v0 = 1U;
        this->__Vdlyvdim0__ram_man_13__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_14__v0 = vlTOPp->io_in_ver_8_bits_man_14;
        this->__Vdlyvset__ram_man_14__v0 = 1U;
        this->__Vdlyvdim0__ram_man_14__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_15__v0 = vlTOPp->io_in_ver_8_bits_man_15;
        this->__Vdlyvset__ram_man_15__v0 = 1U;
        this->__Vdlyvdim0__ram_man_15__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_16__v0 = vlTOPp->io_in_ver_8_bits_man_16;
        this->__Vdlyvset__ram_man_16__v0 = 1U;
        this->__Vdlyvdim0__ram_man_16__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_17__v0 = vlTOPp->io_in_ver_8_bits_man_17;
        this->__Vdlyvset__ram_man_17__v0 = 1U;
        this->__Vdlyvdim0__ram_man_17__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_18__v0 = vlTOPp->io_in_ver_8_bits_man_18;
        this->__Vdlyvset__ram_man_18__v0 = 1U;
        this->__Vdlyvdim0__ram_man_18__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_0__v0 = vlTOPp->io_in_ver_8_bits_man_0;
        this->__Vdlyvset__ram_man_0__v0 = 1U;
        this->__Vdlyvdim0__ram_man_0__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_1__v0 = vlTOPp->io_in_ver_8_bits_man_1;
        this->__Vdlyvset__ram_man_1__v0 = 1U;
        this->__Vdlyvdim0__ram_man_1__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_2__v0 = vlTOPp->io_in_ver_8_bits_man_2;
        this->__Vdlyvset__ram_man_2__v0 = 1U;
        this->__Vdlyvdim0__ram_man_2__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_3__v0 = vlTOPp->io_in_ver_8_bits_man_3;
        this->__Vdlyvset__ram_man_3__v0 = 1U;
        this->__Vdlyvdim0__ram_man_3__v0 = this->__PVT__enq_ptr_value;
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
    if (this->__Vdlyvset__ram_sign_28__v0) {
        this->__PVT__ram_sign_28[this->__Vdlyvdim0__ram_sign_28__v0] 
            = this->__Vdlyvval__ram_sign_28__v0;
    }
    if (this->__Vdlyvset__ram_sign_27__v0) {
        this->__PVT__ram_sign_27[this->__Vdlyvdim0__ram_sign_27__v0] 
            = this->__Vdlyvval__ram_sign_27__v0;
    }
    if (this->__Vdlyvset__ram_sign_29__v0) {
        this->__PVT__ram_sign_29[this->__Vdlyvdim0__ram_sign_29__v0] 
            = this->__Vdlyvval__ram_sign_29__v0;
    }
    if (this->__Vdlyvset__ram_sign_30__v0) {
        this->__PVT__ram_sign_30[this->__Vdlyvdim0__ram_sign_30__v0] 
            = this->__Vdlyvval__ram_sign_30__v0;
    }
    if (this->__Vdlyvset__ram_sign_31__v0) {
        this->__PVT__ram_sign_31[this->__Vdlyvdim0__ram_sign_31__v0] 
            = this->__Vdlyvval__ram_sign_31__v0;
    }
    if (this->__Vdlyvset__ram_sign_0__v0) {
        this->__PVT__ram_sign_0[this->__Vdlyvdim0__ram_sign_0__v0] 
            = this->__Vdlyvval__ram_sign_0__v0;
    }
    if (this->__Vdlyvset__ram_sign_1__v0) {
        this->__PVT__ram_sign_1[this->__Vdlyvdim0__ram_sign_1__v0] 
            = this->__Vdlyvval__ram_sign_1__v0;
    }
    if (this->__Vdlyvset__ram_sign_2__v0) {
        this->__PVT__ram_sign_2[this->__Vdlyvdim0__ram_sign_2__v0] 
            = this->__Vdlyvval__ram_sign_2__v0;
    }
    if (this->__Vdlyvset__ram_sign_3__v0) {
        this->__PVT__ram_sign_3[this->__Vdlyvdim0__ram_sign_3__v0] 
            = this->__Vdlyvval__ram_sign_3__v0;
    }
    if (this->__Vdlyvset__ram_sign_4__v0) {
        this->__PVT__ram_sign_4[this->__Vdlyvdim0__ram_sign_4__v0] 
            = this->__Vdlyvval__ram_sign_4__v0;
    }
    if (this->__Vdlyvset__ram_sign_5__v0) {
        this->__PVT__ram_sign_5[this->__Vdlyvdim0__ram_sign_5__v0] 
            = this->__Vdlyvval__ram_sign_5__v0;
    }
    if (this->__Vdlyvset__ram_sign_6__v0) {
        this->__PVT__ram_sign_6[this->__Vdlyvdim0__ram_sign_6__v0] 
            = this->__Vdlyvval__ram_sign_6__v0;
    }
    if (this->__Vdlyvset__ram_sign_7__v0) {
        this->__PVT__ram_sign_7[this->__Vdlyvdim0__ram_sign_7__v0] 
            = this->__Vdlyvval__ram_sign_7__v0;
    }
    if (this->__Vdlyvset__ram_sign_8__v0) {
        this->__PVT__ram_sign_8[this->__Vdlyvdim0__ram_sign_8__v0] 
            = this->__Vdlyvval__ram_sign_8__v0;
    }
    if (this->__Vdlyvset__ram_sign_9__v0) {
        this->__PVT__ram_sign_9[this->__Vdlyvdim0__ram_sign_9__v0] 
            = this->__Vdlyvval__ram_sign_9__v0;
    }
    if (this->__Vdlyvset__ram_sign_10__v0) {
        this->__PVT__ram_sign_10[this->__Vdlyvdim0__ram_sign_10__v0] 
            = this->__Vdlyvval__ram_sign_10__v0;
    }
    if (this->__Vdlyvset__ram_sign_11__v0) {
        this->__PVT__ram_sign_11[this->__Vdlyvdim0__ram_sign_11__v0] 
            = this->__Vdlyvval__ram_sign_11__v0;
    }
    if (this->__Vdlyvset__ram_sign_12__v0) {
        this->__PVT__ram_sign_12[this->__Vdlyvdim0__ram_sign_12__v0] 
            = this->__Vdlyvval__ram_sign_12__v0;
    }
    if (this->__Vdlyvset__ram_sign_13__v0) {
        this->__PVT__ram_sign_13[this->__Vdlyvdim0__ram_sign_13__v0] 
            = this->__Vdlyvval__ram_sign_13__v0;
    }
    if (this->__Vdlyvset__ram_sign_14__v0) {
        this->__PVT__ram_sign_14[this->__Vdlyvdim0__ram_sign_14__v0] 
            = this->__Vdlyvval__ram_sign_14__v0;
    }
    if (this->__Vdlyvset__ram_sign_15__v0) {
        this->__PVT__ram_sign_15[this->__Vdlyvdim0__ram_sign_15__v0] 
            = this->__Vdlyvval__ram_sign_15__v0;
    }
    if (this->__Vdlyvset__ram_sign_16__v0) {
        this->__PVT__ram_sign_16[this->__Vdlyvdim0__ram_sign_16__v0] 
            = this->__Vdlyvval__ram_sign_16__v0;
    }
    if (this->__Vdlyvset__ram_sign_17__v0) {
        this->__PVT__ram_sign_17[this->__Vdlyvdim0__ram_sign_17__v0] 
            = this->__Vdlyvval__ram_sign_17__v0;
    }
    if (this->__Vdlyvset__ram_sign_18__v0) {
        this->__PVT__ram_sign_18[this->__Vdlyvdim0__ram_sign_18__v0] 
            = this->__Vdlyvval__ram_sign_18__v0;
    }
    if (this->__Vdlyvset__ram_sign_19__v0) {
        this->__PVT__ram_sign_19[this->__Vdlyvdim0__ram_sign_19__v0] 
            = this->__Vdlyvval__ram_sign_19__v0;
    }
    if (this->__Vdlyvset__ram_sign_20__v0) {
        this->__PVT__ram_sign_20[this->__Vdlyvdim0__ram_sign_20__v0] 
            = this->__Vdlyvval__ram_sign_20__v0;
    }
    if (this->__Vdlyvset__ram_sign_21__v0) {
        this->__PVT__ram_sign_21[this->__Vdlyvdim0__ram_sign_21__v0] 
            = this->__Vdlyvval__ram_sign_21__v0;
    }
    if (this->__Vdlyvset__ram_sign_22__v0) {
        this->__PVT__ram_sign_22[this->__Vdlyvdim0__ram_sign_22__v0] 
            = this->__Vdlyvval__ram_sign_22__v0;
    }
    if (this->__Vdlyvset__ram_sign_23__v0) {
        this->__PVT__ram_sign_23[this->__Vdlyvdim0__ram_sign_23__v0] 
            = this->__Vdlyvval__ram_sign_23__v0;
    }
    if (this->__Vdlyvset__ram_sign_24__v0) {
        this->__PVT__ram_sign_24[this->__Vdlyvdim0__ram_sign_24__v0] 
            = this->__Vdlyvval__ram_sign_24__v0;
    }
    if (this->__Vdlyvset__ram_sign_25__v0) {
        this->__PVT__ram_sign_25[this->__Vdlyvdim0__ram_sign_25__v0] 
            = this->__Vdlyvval__ram_sign_25__v0;
    }
    if (this->__Vdlyvset__ram_sign_26__v0) {
        this->__PVT__ram_sign_26[this->__Vdlyvdim0__ram_sign_26__v0] 
            = this->__Vdlyvval__ram_sign_26__v0;
    }
    if (this->__Vdlyvset__ram_man_31__v0) {
        this->__PVT__ram_man_31[this->__Vdlyvdim0__ram_man_31__v0] 
            = this->__Vdlyvval__ram_man_31__v0;
    }
    if (this->__Vdlyvset__ram_man_30__v0) {
        this->__PVT__ram_man_30[this->__Vdlyvdim0__ram_man_30__v0] 
            = this->__Vdlyvval__ram_man_30__v0;
    }
    if (this->__Vdlyvset__ram_man_29__v0) {
        this->__PVT__ram_man_29[this->__Vdlyvdim0__ram_man_29__v0] 
            = this->__Vdlyvval__ram_man_29__v0;
    }
    if (this->__Vdlyvset__ram_man_28__v0) {
        this->__PVT__ram_man_28[this->__Vdlyvdim0__ram_man_28__v0] 
            = this->__Vdlyvval__ram_man_28__v0;
    }
    if (this->__Vdlyvset__ram_man_27__v0) {
        this->__PVT__ram_man_27[this->__Vdlyvdim0__ram_man_27__v0] 
            = this->__Vdlyvval__ram_man_27__v0;
    }
    if (this->__Vdlyvset__ram_man_26__v0) {
        this->__PVT__ram_man_26[this->__Vdlyvdim0__ram_man_26__v0] 
            = this->__Vdlyvval__ram_man_26__v0;
    }
    if (this->__Vdlyvset__ram_man_25__v0) {
        this->__PVT__ram_man_25[this->__Vdlyvdim0__ram_man_25__v0] 
            = this->__Vdlyvval__ram_man_25__v0;
    }
    if (this->__Vdlyvset__ram_man_24__v0) {
        this->__PVT__ram_man_24[this->__Vdlyvdim0__ram_man_24__v0] 
            = this->__Vdlyvval__ram_man_24__v0;
    }
    if (this->__Vdlyvset__ram_man_23__v0) {
        this->__PVT__ram_man_23[this->__Vdlyvdim0__ram_man_23__v0] 
            = this->__Vdlyvval__ram_man_23__v0;
    }
    if (this->__Vdlyvset__ram_man_22__v0) {
        this->__PVT__ram_man_22[this->__Vdlyvdim0__ram_man_22__v0] 
            = this->__Vdlyvval__ram_man_22__v0;
    }
    if (this->__Vdlyvset__ram_man_21__v0) {
        this->__PVT__ram_man_21[this->__Vdlyvdim0__ram_man_21__v0] 
            = this->__Vdlyvval__ram_man_21__v0;
    }
    if (this->__Vdlyvset__ram_man_20__v0) {
        this->__PVT__ram_man_20[this->__Vdlyvdim0__ram_man_20__v0] 
            = this->__Vdlyvval__ram_man_20__v0;
    }
    if (this->__Vdlyvset__ram_man_19__v0) {
        this->__PVT__ram_man_19[this->__Vdlyvdim0__ram_man_19__v0] 
            = this->__Vdlyvval__ram_man_19__v0;
    }
    if (this->__Vdlyvset__ram_man_7__v0) {
        this->__PVT__ram_man_7[this->__Vdlyvdim0__ram_man_7__v0] 
            = this->__Vdlyvval__ram_man_7__v0;
    }
    if (this->__Vdlyvset__ram_man_10__v0) {
        this->__PVT__ram_man_10[this->__Vdlyvdim0__ram_man_10__v0] 
            = this->__Vdlyvval__ram_man_10__v0;
    }
    if (this->__Vdlyvset__ram_man_6__v0) {
        this->__PVT__ram_man_6[this->__Vdlyvdim0__ram_man_6__v0] 
            = this->__Vdlyvval__ram_man_6__v0;
    }
    if (this->__Vdlyvset__ram_man_9__v0) {
        this->__PVT__ram_man_9[this->__Vdlyvdim0__ram_man_9__v0] 
            = this->__Vdlyvval__ram_man_9__v0;
    }
    if (this->__Vdlyvset__ram_man_5__v0) {
        this->__PVT__ram_man_5[this->__Vdlyvdim0__ram_man_5__v0] 
            = this->__Vdlyvval__ram_man_5__v0;
    }
    if (this->__Vdlyvset__ram_man_8__v0) {
        this->__PVT__ram_man_8[this->__Vdlyvdim0__ram_man_8__v0] 
            = this->__Vdlyvval__ram_man_8__v0;
    }
    if (this->__Vdlyvset__ram_man_4__v0) {
        this->__PVT__ram_man_4[this->__Vdlyvdim0__ram_man_4__v0] 
            = this->__Vdlyvval__ram_man_4__v0;
    }
    if (this->__Vdlyvset__ram_man_11__v0) {
        this->__PVT__ram_man_11[this->__Vdlyvdim0__ram_man_11__v0] 
            = this->__Vdlyvval__ram_man_11__v0;
    }
    if (this->__Vdlyvset__ram_man_12__v0) {
        this->__PVT__ram_man_12[this->__Vdlyvdim0__ram_man_12__v0] 
            = this->__Vdlyvval__ram_man_12__v0;
    }
    if (this->__Vdlyvset__ram_man_13__v0) {
        this->__PVT__ram_man_13[this->__Vdlyvdim0__ram_man_13__v0] 
            = this->__Vdlyvval__ram_man_13__v0;
    }
    if (this->__Vdlyvset__ram_man_14__v0) {
        this->__PVT__ram_man_14[this->__Vdlyvdim0__ram_man_14__v0] 
            = this->__Vdlyvval__ram_man_14__v0;
    }
    if (this->__Vdlyvset__ram_man_15__v0) {
        this->__PVT__ram_man_15[this->__Vdlyvdim0__ram_man_15__v0] 
            = this->__Vdlyvval__ram_man_15__v0;
    }
    if (this->__Vdlyvset__ram_man_16__v0) {
        this->__PVT__ram_man_16[this->__Vdlyvdim0__ram_man_16__v0] 
            = this->__Vdlyvval__ram_man_16__v0;
    }
    if (this->__Vdlyvset__ram_man_17__v0) {
        this->__PVT__ram_man_17[this->__Vdlyvdim0__ram_man_17__v0] 
            = this->__Vdlyvval__ram_man_17__v0;
    }
    if (this->__Vdlyvset__ram_man_18__v0) {
        this->__PVT__ram_man_18[this->__Vdlyvdim0__ram_man_18__v0] 
            = this->__Vdlyvval__ram_man_18__v0;
    }
    if (this->__Vdlyvset__ram_man_0__v0) {
        this->__PVT__ram_man_0[this->__Vdlyvdim0__ram_man_0__v0] 
            = this->__Vdlyvval__ram_man_0__v0;
    }
    if (this->__Vdlyvset__ram_man_1__v0) {
        this->__PVT__ram_man_1[this->__Vdlyvdim0__ram_man_1__v0] 
            = this->__Vdlyvval__ram_man_1__v0;
    }
    if (this->__Vdlyvset__ram_man_2__v0) {
        this->__PVT__ram_man_2[this->__Vdlyvdim0__ram_man_2__v0] 
            = this->__Vdlyvval__ram_man_2__v0;
    }
    if (this->__Vdlyvset__ram_man_3__v0) {
        this->__PVT__ram_man_3[this->__Vdlyvdim0__ram_man_3__v0] 
            = this->__Vdlyvval__ram_man_3__v0;
    }
    if (vlTOPp->reset) {
        this->__PVT__enq_ptr_value = 0U;
    } else {
        if ((1U & (~ (IData)(this->__PVT__full)))) {
            this->__PVT__enq_ptr_value = this->__PVT___value_T_1;
        }
    }
    this->__PVT___value_T_3 = (0xfU & ((IData)(1U) 
                                       + (IData)(this->__PVT__deq_ptr_value)));
    this->__PVT___value_T_1 = (0xfU & ((IData)(1U) 
                                       + (IData)(this->__PVT__enq_ptr_value)));
    this->__PVT__ptr_match = ((IData)(this->__PVT__enq_ptr_value) 
                              == (IData)(this->__PVT__deq_ptr_value));
    this->__PVT__full = ((IData)(this->__PVT__ptr_match) 
                         & (IData)(this->__PVT__maybe_full));
    this->__PVT__empty = ((IData)(this->__PVT__ptr_match) 
                          & (~ (IData)(this->__PVT__maybe_full)));
    this->__PVT__do_deq = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_8_io_deq_ready_r_8) 
                           & (~ (IData)(this->__PVT__empty)));
}

VL_INLINE_OPT void VSystolicArray_HBFP_forTesting_Queue::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_9__26(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_Queue::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_9__26\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vdlyvset__ram_exp__v0 = 0U;
    this->__Vdlyvset__ram_sign_28__v0 = 0U;
    this->__Vdlyvset__ram_sign_27__v0 = 0U;
    this->__Vdlyvset__ram_sign_29__v0 = 0U;
    this->__Vdlyvset__ram_sign_30__v0 = 0U;
    this->__Vdlyvset__ram_sign_31__v0 = 0U;
    this->__Vdlyvset__ram_sign_0__v0 = 0U;
    this->__Vdlyvset__ram_sign_1__v0 = 0U;
    this->__Vdlyvset__ram_sign_2__v0 = 0U;
    this->__Vdlyvset__ram_sign_3__v0 = 0U;
    this->__Vdlyvset__ram_sign_4__v0 = 0U;
    this->__Vdlyvset__ram_sign_5__v0 = 0U;
    this->__Vdlyvset__ram_sign_6__v0 = 0U;
    this->__Vdlyvset__ram_sign_7__v0 = 0U;
    this->__Vdlyvset__ram_sign_8__v0 = 0U;
    this->__Vdlyvset__ram_sign_9__v0 = 0U;
    this->__Vdlyvset__ram_sign_10__v0 = 0U;
    this->__Vdlyvset__ram_sign_11__v0 = 0U;
    this->__Vdlyvset__ram_sign_12__v0 = 0U;
    this->__Vdlyvset__ram_sign_13__v0 = 0U;
    this->__Vdlyvset__ram_sign_14__v0 = 0U;
    this->__Vdlyvset__ram_sign_15__v0 = 0U;
    this->__Vdlyvset__ram_sign_16__v0 = 0U;
    this->__Vdlyvset__ram_sign_17__v0 = 0U;
    this->__Vdlyvset__ram_sign_18__v0 = 0U;
    this->__Vdlyvset__ram_sign_19__v0 = 0U;
    this->__Vdlyvset__ram_sign_20__v0 = 0U;
    this->__Vdlyvset__ram_sign_21__v0 = 0U;
    this->__Vdlyvset__ram_sign_22__v0 = 0U;
    this->__Vdlyvset__ram_sign_23__v0 = 0U;
    this->__Vdlyvset__ram_sign_24__v0 = 0U;
    this->__Vdlyvset__ram_sign_25__v0 = 0U;
    this->__Vdlyvset__ram_sign_26__v0 = 0U;
    this->__Vdlyvset__ram_man_31__v0 = 0U;
    this->__Vdlyvset__ram_man_30__v0 = 0U;
    this->__Vdlyvset__ram_man_29__v0 = 0U;
    this->__Vdlyvset__ram_man_28__v0 = 0U;
    this->__Vdlyvset__ram_man_27__v0 = 0U;
    this->__Vdlyvset__ram_man_26__v0 = 0U;
    this->__Vdlyvset__ram_man_25__v0 = 0U;
    this->__Vdlyvset__ram_man_24__v0 = 0U;
    this->__Vdlyvset__ram_man_23__v0 = 0U;
    this->__Vdlyvset__ram_man_22__v0 = 0U;
    this->__Vdlyvset__ram_man_21__v0 = 0U;
    this->__Vdlyvset__ram_man_20__v0 = 0U;
    this->__Vdlyvset__ram_man_19__v0 = 0U;
    this->__Vdlyvset__ram_man_7__v0 = 0U;
    this->__Vdlyvset__ram_man_10__v0 = 0U;
    this->__Vdlyvset__ram_man_6__v0 = 0U;
    this->__Vdlyvset__ram_man_9__v0 = 0U;
    this->__Vdlyvset__ram_man_5__v0 = 0U;
    this->__Vdlyvset__ram_man_8__v0 = 0U;
    this->__Vdlyvset__ram_man_4__v0 = 0U;
    this->__Vdlyvset__ram_man_11__v0 = 0U;
    this->__Vdlyvset__ram_man_12__v0 = 0U;
    this->__Vdlyvset__ram_man_13__v0 = 0U;
    this->__Vdlyvset__ram_man_14__v0 = 0U;
    this->__Vdlyvset__ram_man_15__v0 = 0U;
    this->__Vdlyvset__ram_man_16__v0 = 0U;
    this->__Vdlyvset__ram_man_17__v0 = 0U;
    this->__Vdlyvset__ram_man_18__v0 = 0U;
    this->__Vdlyvset__ram_man_0__v0 = 0U;
    this->__Vdlyvset__ram_man_1__v0 = 0U;
    this->__Vdlyvset__ram_man_2__v0 = 0U;
    this->__Vdlyvset__ram_man_3__v0 = 0U;
    if (vlTOPp->reset) {
        this->__PVT__maybe_full = 0U;
    } else {
        if (((1U & (~ (IData)(this->__PVT__full))) 
             != (IData)(this->__PVT__do_deq))) {
            this->__PVT__maybe_full = (1U & (~ (IData)(this->__PVT__full)));
        }
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_exp__v0 = vlTOPp->io_in_ver_9_bits_exp;
        this->__Vdlyvset__ram_exp__v0 = 1U;
        this->__Vdlyvdim0__ram_exp__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_28__v0 = vlTOPp->io_in_ver_9_bits_sign_28;
        this->__Vdlyvset__ram_sign_28__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_28__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_27__v0 = vlTOPp->io_in_ver_9_bits_sign_27;
        this->__Vdlyvset__ram_sign_27__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_27__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_29__v0 = vlTOPp->io_in_ver_9_bits_sign_29;
        this->__Vdlyvset__ram_sign_29__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_29__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_30__v0 = vlTOPp->io_in_ver_9_bits_sign_30;
        this->__Vdlyvset__ram_sign_30__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_30__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_31__v0 = vlTOPp->io_in_ver_9_bits_sign_31;
        this->__Vdlyvset__ram_sign_31__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_31__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_0__v0 = vlTOPp->io_in_ver_9_bits_sign_0;
        this->__Vdlyvset__ram_sign_0__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_0__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_1__v0 = vlTOPp->io_in_ver_9_bits_sign_1;
        this->__Vdlyvset__ram_sign_1__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_1__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_2__v0 = vlTOPp->io_in_ver_9_bits_sign_2;
        this->__Vdlyvset__ram_sign_2__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_2__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_3__v0 = vlTOPp->io_in_ver_9_bits_sign_3;
        this->__Vdlyvset__ram_sign_3__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_3__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_4__v0 = vlTOPp->io_in_ver_9_bits_sign_4;
        this->__Vdlyvset__ram_sign_4__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_4__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_5__v0 = vlTOPp->io_in_ver_9_bits_sign_5;
        this->__Vdlyvset__ram_sign_5__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_5__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_6__v0 = vlTOPp->io_in_ver_9_bits_sign_6;
        this->__Vdlyvset__ram_sign_6__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_6__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_7__v0 = vlTOPp->io_in_ver_9_bits_sign_7;
        this->__Vdlyvset__ram_sign_7__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_7__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_8__v0 = vlTOPp->io_in_ver_9_bits_sign_8;
        this->__Vdlyvset__ram_sign_8__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_8__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_9__v0 = vlTOPp->io_in_ver_9_bits_sign_9;
        this->__Vdlyvset__ram_sign_9__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_9__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_10__v0 = vlTOPp->io_in_ver_9_bits_sign_10;
        this->__Vdlyvset__ram_sign_10__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_10__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_11__v0 = vlTOPp->io_in_ver_9_bits_sign_11;
        this->__Vdlyvset__ram_sign_11__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_11__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_12__v0 = vlTOPp->io_in_ver_9_bits_sign_12;
        this->__Vdlyvset__ram_sign_12__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_12__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_13__v0 = vlTOPp->io_in_ver_9_bits_sign_13;
        this->__Vdlyvset__ram_sign_13__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_13__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_14__v0 = vlTOPp->io_in_ver_9_bits_sign_14;
        this->__Vdlyvset__ram_sign_14__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_14__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_15__v0 = vlTOPp->io_in_ver_9_bits_sign_15;
        this->__Vdlyvset__ram_sign_15__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_15__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_16__v0 = vlTOPp->io_in_ver_9_bits_sign_16;
        this->__Vdlyvset__ram_sign_16__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_16__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_17__v0 = vlTOPp->io_in_ver_9_bits_sign_17;
        this->__Vdlyvset__ram_sign_17__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_17__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_18__v0 = vlTOPp->io_in_ver_9_bits_sign_18;
        this->__Vdlyvset__ram_sign_18__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_18__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_19__v0 = vlTOPp->io_in_ver_9_bits_sign_19;
        this->__Vdlyvset__ram_sign_19__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_19__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_20__v0 = vlTOPp->io_in_ver_9_bits_sign_20;
        this->__Vdlyvset__ram_sign_20__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_20__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_21__v0 = vlTOPp->io_in_ver_9_bits_sign_21;
        this->__Vdlyvset__ram_sign_21__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_21__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_22__v0 = vlTOPp->io_in_ver_9_bits_sign_22;
        this->__Vdlyvset__ram_sign_22__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_22__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_23__v0 = vlTOPp->io_in_ver_9_bits_sign_23;
        this->__Vdlyvset__ram_sign_23__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_23__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_24__v0 = vlTOPp->io_in_ver_9_bits_sign_24;
        this->__Vdlyvset__ram_sign_24__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_24__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_25__v0 = vlTOPp->io_in_ver_9_bits_sign_25;
        this->__Vdlyvset__ram_sign_25__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_25__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_26__v0 = vlTOPp->io_in_ver_9_bits_sign_26;
        this->__Vdlyvset__ram_sign_26__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_26__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_31__v0 = vlTOPp->io_in_ver_9_bits_man_31;
        this->__Vdlyvset__ram_man_31__v0 = 1U;
        this->__Vdlyvdim0__ram_man_31__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_30__v0 = vlTOPp->io_in_ver_9_bits_man_30;
        this->__Vdlyvset__ram_man_30__v0 = 1U;
        this->__Vdlyvdim0__ram_man_30__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_29__v0 = vlTOPp->io_in_ver_9_bits_man_29;
        this->__Vdlyvset__ram_man_29__v0 = 1U;
        this->__Vdlyvdim0__ram_man_29__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_28__v0 = vlTOPp->io_in_ver_9_bits_man_28;
        this->__Vdlyvset__ram_man_28__v0 = 1U;
        this->__Vdlyvdim0__ram_man_28__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_27__v0 = vlTOPp->io_in_ver_9_bits_man_27;
        this->__Vdlyvset__ram_man_27__v0 = 1U;
        this->__Vdlyvdim0__ram_man_27__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_26__v0 = vlTOPp->io_in_ver_9_bits_man_26;
        this->__Vdlyvset__ram_man_26__v0 = 1U;
        this->__Vdlyvdim0__ram_man_26__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_25__v0 = vlTOPp->io_in_ver_9_bits_man_25;
        this->__Vdlyvset__ram_man_25__v0 = 1U;
        this->__Vdlyvdim0__ram_man_25__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_24__v0 = vlTOPp->io_in_ver_9_bits_man_24;
        this->__Vdlyvset__ram_man_24__v0 = 1U;
        this->__Vdlyvdim0__ram_man_24__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_23__v0 = vlTOPp->io_in_ver_9_bits_man_23;
        this->__Vdlyvset__ram_man_23__v0 = 1U;
        this->__Vdlyvdim0__ram_man_23__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_22__v0 = vlTOPp->io_in_ver_9_bits_man_22;
        this->__Vdlyvset__ram_man_22__v0 = 1U;
        this->__Vdlyvdim0__ram_man_22__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_21__v0 = vlTOPp->io_in_ver_9_bits_man_21;
        this->__Vdlyvset__ram_man_21__v0 = 1U;
        this->__Vdlyvdim0__ram_man_21__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_20__v0 = vlTOPp->io_in_ver_9_bits_man_20;
        this->__Vdlyvset__ram_man_20__v0 = 1U;
        this->__Vdlyvdim0__ram_man_20__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_19__v0 = vlTOPp->io_in_ver_9_bits_man_19;
        this->__Vdlyvset__ram_man_19__v0 = 1U;
        this->__Vdlyvdim0__ram_man_19__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_7__v0 = vlTOPp->io_in_ver_9_bits_man_7;
        this->__Vdlyvset__ram_man_7__v0 = 1U;
        this->__Vdlyvdim0__ram_man_7__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_10__v0 = vlTOPp->io_in_ver_9_bits_man_10;
        this->__Vdlyvset__ram_man_10__v0 = 1U;
        this->__Vdlyvdim0__ram_man_10__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_6__v0 = vlTOPp->io_in_ver_9_bits_man_6;
        this->__Vdlyvset__ram_man_6__v0 = 1U;
        this->__Vdlyvdim0__ram_man_6__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_9__v0 = vlTOPp->io_in_ver_9_bits_man_9;
        this->__Vdlyvset__ram_man_9__v0 = 1U;
        this->__Vdlyvdim0__ram_man_9__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_5__v0 = vlTOPp->io_in_ver_9_bits_man_5;
        this->__Vdlyvset__ram_man_5__v0 = 1U;
        this->__Vdlyvdim0__ram_man_5__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_8__v0 = vlTOPp->io_in_ver_9_bits_man_8;
        this->__Vdlyvset__ram_man_8__v0 = 1U;
        this->__Vdlyvdim0__ram_man_8__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_4__v0 = vlTOPp->io_in_ver_9_bits_man_4;
        this->__Vdlyvset__ram_man_4__v0 = 1U;
        this->__Vdlyvdim0__ram_man_4__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_11__v0 = vlTOPp->io_in_ver_9_bits_man_11;
        this->__Vdlyvset__ram_man_11__v0 = 1U;
        this->__Vdlyvdim0__ram_man_11__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_12__v0 = vlTOPp->io_in_ver_9_bits_man_12;
        this->__Vdlyvset__ram_man_12__v0 = 1U;
        this->__Vdlyvdim0__ram_man_12__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_13__v0 = vlTOPp->io_in_ver_9_bits_man_13;
        this->__Vdlyvset__ram_man_13__v0 = 1U;
        this->__Vdlyvdim0__ram_man_13__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_14__v0 = vlTOPp->io_in_ver_9_bits_man_14;
        this->__Vdlyvset__ram_man_14__v0 = 1U;
        this->__Vdlyvdim0__ram_man_14__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_15__v0 = vlTOPp->io_in_ver_9_bits_man_15;
        this->__Vdlyvset__ram_man_15__v0 = 1U;
        this->__Vdlyvdim0__ram_man_15__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_16__v0 = vlTOPp->io_in_ver_9_bits_man_16;
        this->__Vdlyvset__ram_man_16__v0 = 1U;
        this->__Vdlyvdim0__ram_man_16__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_17__v0 = vlTOPp->io_in_ver_9_bits_man_17;
        this->__Vdlyvset__ram_man_17__v0 = 1U;
        this->__Vdlyvdim0__ram_man_17__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_18__v0 = vlTOPp->io_in_ver_9_bits_man_18;
        this->__Vdlyvset__ram_man_18__v0 = 1U;
        this->__Vdlyvdim0__ram_man_18__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_0__v0 = vlTOPp->io_in_ver_9_bits_man_0;
        this->__Vdlyvset__ram_man_0__v0 = 1U;
        this->__Vdlyvdim0__ram_man_0__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_1__v0 = vlTOPp->io_in_ver_9_bits_man_1;
        this->__Vdlyvset__ram_man_1__v0 = 1U;
        this->__Vdlyvdim0__ram_man_1__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_2__v0 = vlTOPp->io_in_ver_9_bits_man_2;
        this->__Vdlyvset__ram_man_2__v0 = 1U;
        this->__Vdlyvdim0__ram_man_2__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_3__v0 = vlTOPp->io_in_ver_9_bits_man_3;
        this->__Vdlyvset__ram_man_3__v0 = 1U;
        this->__Vdlyvdim0__ram_man_3__v0 = this->__PVT__enq_ptr_value;
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
    if (this->__Vdlyvset__ram_sign_28__v0) {
        this->__PVT__ram_sign_28[this->__Vdlyvdim0__ram_sign_28__v0] 
            = this->__Vdlyvval__ram_sign_28__v0;
    }
    if (this->__Vdlyvset__ram_sign_27__v0) {
        this->__PVT__ram_sign_27[this->__Vdlyvdim0__ram_sign_27__v0] 
            = this->__Vdlyvval__ram_sign_27__v0;
    }
    if (this->__Vdlyvset__ram_sign_29__v0) {
        this->__PVT__ram_sign_29[this->__Vdlyvdim0__ram_sign_29__v0] 
            = this->__Vdlyvval__ram_sign_29__v0;
    }
    if (this->__Vdlyvset__ram_sign_30__v0) {
        this->__PVT__ram_sign_30[this->__Vdlyvdim0__ram_sign_30__v0] 
            = this->__Vdlyvval__ram_sign_30__v0;
    }
    if (this->__Vdlyvset__ram_sign_31__v0) {
        this->__PVT__ram_sign_31[this->__Vdlyvdim0__ram_sign_31__v0] 
            = this->__Vdlyvval__ram_sign_31__v0;
    }
    if (this->__Vdlyvset__ram_sign_0__v0) {
        this->__PVT__ram_sign_0[this->__Vdlyvdim0__ram_sign_0__v0] 
            = this->__Vdlyvval__ram_sign_0__v0;
    }
    if (this->__Vdlyvset__ram_sign_1__v0) {
        this->__PVT__ram_sign_1[this->__Vdlyvdim0__ram_sign_1__v0] 
            = this->__Vdlyvval__ram_sign_1__v0;
    }
    if (this->__Vdlyvset__ram_sign_2__v0) {
        this->__PVT__ram_sign_2[this->__Vdlyvdim0__ram_sign_2__v0] 
            = this->__Vdlyvval__ram_sign_2__v0;
    }
    if (this->__Vdlyvset__ram_sign_3__v0) {
        this->__PVT__ram_sign_3[this->__Vdlyvdim0__ram_sign_3__v0] 
            = this->__Vdlyvval__ram_sign_3__v0;
    }
    if (this->__Vdlyvset__ram_sign_4__v0) {
        this->__PVT__ram_sign_4[this->__Vdlyvdim0__ram_sign_4__v0] 
            = this->__Vdlyvval__ram_sign_4__v0;
    }
    if (this->__Vdlyvset__ram_sign_5__v0) {
        this->__PVT__ram_sign_5[this->__Vdlyvdim0__ram_sign_5__v0] 
            = this->__Vdlyvval__ram_sign_5__v0;
    }
    if (this->__Vdlyvset__ram_sign_6__v0) {
        this->__PVT__ram_sign_6[this->__Vdlyvdim0__ram_sign_6__v0] 
            = this->__Vdlyvval__ram_sign_6__v0;
    }
    if (this->__Vdlyvset__ram_sign_7__v0) {
        this->__PVT__ram_sign_7[this->__Vdlyvdim0__ram_sign_7__v0] 
            = this->__Vdlyvval__ram_sign_7__v0;
    }
    if (this->__Vdlyvset__ram_sign_8__v0) {
        this->__PVT__ram_sign_8[this->__Vdlyvdim0__ram_sign_8__v0] 
            = this->__Vdlyvval__ram_sign_8__v0;
    }
    if (this->__Vdlyvset__ram_sign_9__v0) {
        this->__PVT__ram_sign_9[this->__Vdlyvdim0__ram_sign_9__v0] 
            = this->__Vdlyvval__ram_sign_9__v0;
    }
    if (this->__Vdlyvset__ram_sign_10__v0) {
        this->__PVT__ram_sign_10[this->__Vdlyvdim0__ram_sign_10__v0] 
            = this->__Vdlyvval__ram_sign_10__v0;
    }
    if (this->__Vdlyvset__ram_sign_11__v0) {
        this->__PVT__ram_sign_11[this->__Vdlyvdim0__ram_sign_11__v0] 
            = this->__Vdlyvval__ram_sign_11__v0;
    }
    if (this->__Vdlyvset__ram_sign_12__v0) {
        this->__PVT__ram_sign_12[this->__Vdlyvdim0__ram_sign_12__v0] 
            = this->__Vdlyvval__ram_sign_12__v0;
    }
    if (this->__Vdlyvset__ram_sign_13__v0) {
        this->__PVT__ram_sign_13[this->__Vdlyvdim0__ram_sign_13__v0] 
            = this->__Vdlyvval__ram_sign_13__v0;
    }
    if (this->__Vdlyvset__ram_sign_14__v0) {
        this->__PVT__ram_sign_14[this->__Vdlyvdim0__ram_sign_14__v0] 
            = this->__Vdlyvval__ram_sign_14__v0;
    }
    if (this->__Vdlyvset__ram_sign_15__v0) {
        this->__PVT__ram_sign_15[this->__Vdlyvdim0__ram_sign_15__v0] 
            = this->__Vdlyvval__ram_sign_15__v0;
    }
    if (this->__Vdlyvset__ram_sign_16__v0) {
        this->__PVT__ram_sign_16[this->__Vdlyvdim0__ram_sign_16__v0] 
            = this->__Vdlyvval__ram_sign_16__v0;
    }
    if (this->__Vdlyvset__ram_sign_17__v0) {
        this->__PVT__ram_sign_17[this->__Vdlyvdim0__ram_sign_17__v0] 
            = this->__Vdlyvval__ram_sign_17__v0;
    }
    if (this->__Vdlyvset__ram_sign_18__v0) {
        this->__PVT__ram_sign_18[this->__Vdlyvdim0__ram_sign_18__v0] 
            = this->__Vdlyvval__ram_sign_18__v0;
    }
    if (this->__Vdlyvset__ram_sign_19__v0) {
        this->__PVT__ram_sign_19[this->__Vdlyvdim0__ram_sign_19__v0] 
            = this->__Vdlyvval__ram_sign_19__v0;
    }
    if (this->__Vdlyvset__ram_sign_20__v0) {
        this->__PVT__ram_sign_20[this->__Vdlyvdim0__ram_sign_20__v0] 
            = this->__Vdlyvval__ram_sign_20__v0;
    }
    if (this->__Vdlyvset__ram_sign_21__v0) {
        this->__PVT__ram_sign_21[this->__Vdlyvdim0__ram_sign_21__v0] 
            = this->__Vdlyvval__ram_sign_21__v0;
    }
    if (this->__Vdlyvset__ram_sign_22__v0) {
        this->__PVT__ram_sign_22[this->__Vdlyvdim0__ram_sign_22__v0] 
            = this->__Vdlyvval__ram_sign_22__v0;
    }
    if (this->__Vdlyvset__ram_sign_23__v0) {
        this->__PVT__ram_sign_23[this->__Vdlyvdim0__ram_sign_23__v0] 
            = this->__Vdlyvval__ram_sign_23__v0;
    }
    if (this->__Vdlyvset__ram_sign_24__v0) {
        this->__PVT__ram_sign_24[this->__Vdlyvdim0__ram_sign_24__v0] 
            = this->__Vdlyvval__ram_sign_24__v0;
    }
    if (this->__Vdlyvset__ram_sign_25__v0) {
        this->__PVT__ram_sign_25[this->__Vdlyvdim0__ram_sign_25__v0] 
            = this->__Vdlyvval__ram_sign_25__v0;
    }
    if (this->__Vdlyvset__ram_sign_26__v0) {
        this->__PVT__ram_sign_26[this->__Vdlyvdim0__ram_sign_26__v0] 
            = this->__Vdlyvval__ram_sign_26__v0;
    }
    if (this->__Vdlyvset__ram_man_31__v0) {
        this->__PVT__ram_man_31[this->__Vdlyvdim0__ram_man_31__v0] 
            = this->__Vdlyvval__ram_man_31__v0;
    }
    if (this->__Vdlyvset__ram_man_30__v0) {
        this->__PVT__ram_man_30[this->__Vdlyvdim0__ram_man_30__v0] 
            = this->__Vdlyvval__ram_man_30__v0;
    }
    if (this->__Vdlyvset__ram_man_29__v0) {
        this->__PVT__ram_man_29[this->__Vdlyvdim0__ram_man_29__v0] 
            = this->__Vdlyvval__ram_man_29__v0;
    }
    if (this->__Vdlyvset__ram_man_28__v0) {
        this->__PVT__ram_man_28[this->__Vdlyvdim0__ram_man_28__v0] 
            = this->__Vdlyvval__ram_man_28__v0;
    }
    if (this->__Vdlyvset__ram_man_27__v0) {
        this->__PVT__ram_man_27[this->__Vdlyvdim0__ram_man_27__v0] 
            = this->__Vdlyvval__ram_man_27__v0;
    }
    if (this->__Vdlyvset__ram_man_26__v0) {
        this->__PVT__ram_man_26[this->__Vdlyvdim0__ram_man_26__v0] 
            = this->__Vdlyvval__ram_man_26__v0;
    }
    if (this->__Vdlyvset__ram_man_25__v0) {
        this->__PVT__ram_man_25[this->__Vdlyvdim0__ram_man_25__v0] 
            = this->__Vdlyvval__ram_man_25__v0;
    }
    if (this->__Vdlyvset__ram_man_24__v0) {
        this->__PVT__ram_man_24[this->__Vdlyvdim0__ram_man_24__v0] 
            = this->__Vdlyvval__ram_man_24__v0;
    }
    if (this->__Vdlyvset__ram_man_23__v0) {
        this->__PVT__ram_man_23[this->__Vdlyvdim0__ram_man_23__v0] 
            = this->__Vdlyvval__ram_man_23__v0;
    }
    if (this->__Vdlyvset__ram_man_22__v0) {
        this->__PVT__ram_man_22[this->__Vdlyvdim0__ram_man_22__v0] 
            = this->__Vdlyvval__ram_man_22__v0;
    }
    if (this->__Vdlyvset__ram_man_21__v0) {
        this->__PVT__ram_man_21[this->__Vdlyvdim0__ram_man_21__v0] 
            = this->__Vdlyvval__ram_man_21__v0;
    }
    if (this->__Vdlyvset__ram_man_20__v0) {
        this->__PVT__ram_man_20[this->__Vdlyvdim0__ram_man_20__v0] 
            = this->__Vdlyvval__ram_man_20__v0;
    }
    if (this->__Vdlyvset__ram_man_19__v0) {
        this->__PVT__ram_man_19[this->__Vdlyvdim0__ram_man_19__v0] 
            = this->__Vdlyvval__ram_man_19__v0;
    }
    if (this->__Vdlyvset__ram_man_7__v0) {
        this->__PVT__ram_man_7[this->__Vdlyvdim0__ram_man_7__v0] 
            = this->__Vdlyvval__ram_man_7__v0;
    }
    if (this->__Vdlyvset__ram_man_10__v0) {
        this->__PVT__ram_man_10[this->__Vdlyvdim0__ram_man_10__v0] 
            = this->__Vdlyvval__ram_man_10__v0;
    }
    if (this->__Vdlyvset__ram_man_6__v0) {
        this->__PVT__ram_man_6[this->__Vdlyvdim0__ram_man_6__v0] 
            = this->__Vdlyvval__ram_man_6__v0;
    }
    if (this->__Vdlyvset__ram_man_9__v0) {
        this->__PVT__ram_man_9[this->__Vdlyvdim0__ram_man_9__v0] 
            = this->__Vdlyvval__ram_man_9__v0;
    }
    if (this->__Vdlyvset__ram_man_5__v0) {
        this->__PVT__ram_man_5[this->__Vdlyvdim0__ram_man_5__v0] 
            = this->__Vdlyvval__ram_man_5__v0;
    }
    if (this->__Vdlyvset__ram_man_8__v0) {
        this->__PVT__ram_man_8[this->__Vdlyvdim0__ram_man_8__v0] 
            = this->__Vdlyvval__ram_man_8__v0;
    }
    if (this->__Vdlyvset__ram_man_4__v0) {
        this->__PVT__ram_man_4[this->__Vdlyvdim0__ram_man_4__v0] 
            = this->__Vdlyvval__ram_man_4__v0;
    }
    if (this->__Vdlyvset__ram_man_11__v0) {
        this->__PVT__ram_man_11[this->__Vdlyvdim0__ram_man_11__v0] 
            = this->__Vdlyvval__ram_man_11__v0;
    }
    if (this->__Vdlyvset__ram_man_12__v0) {
        this->__PVT__ram_man_12[this->__Vdlyvdim0__ram_man_12__v0] 
            = this->__Vdlyvval__ram_man_12__v0;
    }
    if (this->__Vdlyvset__ram_man_13__v0) {
        this->__PVT__ram_man_13[this->__Vdlyvdim0__ram_man_13__v0] 
            = this->__Vdlyvval__ram_man_13__v0;
    }
    if (this->__Vdlyvset__ram_man_14__v0) {
        this->__PVT__ram_man_14[this->__Vdlyvdim0__ram_man_14__v0] 
            = this->__Vdlyvval__ram_man_14__v0;
    }
    if (this->__Vdlyvset__ram_man_15__v0) {
        this->__PVT__ram_man_15[this->__Vdlyvdim0__ram_man_15__v0] 
            = this->__Vdlyvval__ram_man_15__v0;
    }
    if (this->__Vdlyvset__ram_man_16__v0) {
        this->__PVT__ram_man_16[this->__Vdlyvdim0__ram_man_16__v0] 
            = this->__Vdlyvval__ram_man_16__v0;
    }
    if (this->__Vdlyvset__ram_man_17__v0) {
        this->__PVT__ram_man_17[this->__Vdlyvdim0__ram_man_17__v0] 
            = this->__Vdlyvval__ram_man_17__v0;
    }
    if (this->__Vdlyvset__ram_man_18__v0) {
        this->__PVT__ram_man_18[this->__Vdlyvdim0__ram_man_18__v0] 
            = this->__Vdlyvval__ram_man_18__v0;
    }
    if (this->__Vdlyvset__ram_man_0__v0) {
        this->__PVT__ram_man_0[this->__Vdlyvdim0__ram_man_0__v0] 
            = this->__Vdlyvval__ram_man_0__v0;
    }
    if (this->__Vdlyvset__ram_man_1__v0) {
        this->__PVT__ram_man_1[this->__Vdlyvdim0__ram_man_1__v0] 
            = this->__Vdlyvval__ram_man_1__v0;
    }
    if (this->__Vdlyvset__ram_man_2__v0) {
        this->__PVT__ram_man_2[this->__Vdlyvdim0__ram_man_2__v0] 
            = this->__Vdlyvval__ram_man_2__v0;
    }
    if (this->__Vdlyvset__ram_man_3__v0) {
        this->__PVT__ram_man_3[this->__Vdlyvdim0__ram_man_3__v0] 
            = this->__Vdlyvval__ram_man_3__v0;
    }
    if (vlTOPp->reset) {
        this->__PVT__enq_ptr_value = 0U;
    } else {
        if ((1U & (~ (IData)(this->__PVT__full)))) {
            this->__PVT__enq_ptr_value = this->__PVT___value_T_1;
        }
    }
    this->__PVT___value_T_3 = (0xfU & ((IData)(1U) 
                                       + (IData)(this->__PVT__deq_ptr_value)));
    this->__PVT___value_T_1 = (0xfU & ((IData)(1U) 
                                       + (IData)(this->__PVT__enq_ptr_value)));
    this->__PVT__ptr_match = ((IData)(this->__PVT__enq_ptr_value) 
                              == (IData)(this->__PVT__deq_ptr_value));
    this->__PVT__full = ((IData)(this->__PVT__ptr_match) 
                         & (IData)(this->__PVT__maybe_full));
    this->__PVT__empty = ((IData)(this->__PVT__ptr_match) 
                          & (~ (IData)(this->__PVT__maybe_full)));
    this->__PVT__do_deq = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_9_io_deq_ready_r_9) 
                           & (~ (IData)(this->__PVT__empty)));
}

VL_INLINE_OPT void VSystolicArray_HBFP_forTesting_Queue::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_10__27(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_Queue::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_10__27\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vdlyvset__ram_exp__v0 = 0U;
    this->__Vdlyvset__ram_sign_28__v0 = 0U;
    this->__Vdlyvset__ram_sign_27__v0 = 0U;
    this->__Vdlyvset__ram_sign_29__v0 = 0U;
    this->__Vdlyvset__ram_sign_30__v0 = 0U;
    this->__Vdlyvset__ram_sign_31__v0 = 0U;
    this->__Vdlyvset__ram_sign_0__v0 = 0U;
    this->__Vdlyvset__ram_sign_1__v0 = 0U;
    this->__Vdlyvset__ram_sign_2__v0 = 0U;
    this->__Vdlyvset__ram_sign_3__v0 = 0U;
    this->__Vdlyvset__ram_sign_4__v0 = 0U;
    this->__Vdlyvset__ram_sign_5__v0 = 0U;
    this->__Vdlyvset__ram_sign_6__v0 = 0U;
    this->__Vdlyvset__ram_sign_7__v0 = 0U;
    this->__Vdlyvset__ram_sign_8__v0 = 0U;
    this->__Vdlyvset__ram_sign_9__v0 = 0U;
    this->__Vdlyvset__ram_sign_10__v0 = 0U;
    this->__Vdlyvset__ram_sign_11__v0 = 0U;
    this->__Vdlyvset__ram_sign_12__v0 = 0U;
    this->__Vdlyvset__ram_sign_13__v0 = 0U;
    this->__Vdlyvset__ram_sign_14__v0 = 0U;
    this->__Vdlyvset__ram_sign_15__v0 = 0U;
    this->__Vdlyvset__ram_sign_16__v0 = 0U;
    this->__Vdlyvset__ram_sign_17__v0 = 0U;
    this->__Vdlyvset__ram_sign_18__v0 = 0U;
    this->__Vdlyvset__ram_sign_19__v0 = 0U;
    this->__Vdlyvset__ram_sign_20__v0 = 0U;
    this->__Vdlyvset__ram_sign_21__v0 = 0U;
    this->__Vdlyvset__ram_sign_22__v0 = 0U;
    this->__Vdlyvset__ram_sign_23__v0 = 0U;
    this->__Vdlyvset__ram_sign_24__v0 = 0U;
    this->__Vdlyvset__ram_sign_25__v0 = 0U;
    this->__Vdlyvset__ram_sign_26__v0 = 0U;
    this->__Vdlyvset__ram_man_31__v0 = 0U;
    this->__Vdlyvset__ram_man_30__v0 = 0U;
    this->__Vdlyvset__ram_man_29__v0 = 0U;
    this->__Vdlyvset__ram_man_28__v0 = 0U;
    this->__Vdlyvset__ram_man_27__v0 = 0U;
    this->__Vdlyvset__ram_man_26__v0 = 0U;
    this->__Vdlyvset__ram_man_25__v0 = 0U;
    this->__Vdlyvset__ram_man_24__v0 = 0U;
    this->__Vdlyvset__ram_man_23__v0 = 0U;
    this->__Vdlyvset__ram_man_22__v0 = 0U;
    this->__Vdlyvset__ram_man_21__v0 = 0U;
    this->__Vdlyvset__ram_man_20__v0 = 0U;
    this->__Vdlyvset__ram_man_19__v0 = 0U;
    this->__Vdlyvset__ram_man_7__v0 = 0U;
    this->__Vdlyvset__ram_man_10__v0 = 0U;
    this->__Vdlyvset__ram_man_6__v0 = 0U;
    this->__Vdlyvset__ram_man_9__v0 = 0U;
    this->__Vdlyvset__ram_man_5__v0 = 0U;
    this->__Vdlyvset__ram_man_8__v0 = 0U;
    this->__Vdlyvset__ram_man_4__v0 = 0U;
    this->__Vdlyvset__ram_man_11__v0 = 0U;
    this->__Vdlyvset__ram_man_12__v0 = 0U;
    this->__Vdlyvset__ram_man_13__v0 = 0U;
    this->__Vdlyvset__ram_man_14__v0 = 0U;
    this->__Vdlyvset__ram_man_15__v0 = 0U;
    this->__Vdlyvset__ram_man_16__v0 = 0U;
    this->__Vdlyvset__ram_man_17__v0 = 0U;
    this->__Vdlyvset__ram_man_18__v0 = 0U;
    this->__Vdlyvset__ram_man_0__v0 = 0U;
    this->__Vdlyvset__ram_man_1__v0 = 0U;
    this->__Vdlyvset__ram_man_2__v0 = 0U;
    this->__Vdlyvset__ram_man_3__v0 = 0U;
    if (vlTOPp->reset) {
        this->__PVT__maybe_full = 0U;
    } else {
        if (((1U & (~ (IData)(this->__PVT__full))) 
             != (IData)(this->__PVT__do_deq))) {
            this->__PVT__maybe_full = (1U & (~ (IData)(this->__PVT__full)));
        }
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_exp__v0 = vlTOPp->io_in_ver_10_bits_exp;
        this->__Vdlyvset__ram_exp__v0 = 1U;
        this->__Vdlyvdim0__ram_exp__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_28__v0 = vlTOPp->io_in_ver_10_bits_sign_28;
        this->__Vdlyvset__ram_sign_28__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_28__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_27__v0 = vlTOPp->io_in_ver_10_bits_sign_27;
        this->__Vdlyvset__ram_sign_27__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_27__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_29__v0 = vlTOPp->io_in_ver_10_bits_sign_29;
        this->__Vdlyvset__ram_sign_29__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_29__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_30__v0 = vlTOPp->io_in_ver_10_bits_sign_30;
        this->__Vdlyvset__ram_sign_30__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_30__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_31__v0 = vlTOPp->io_in_ver_10_bits_sign_31;
        this->__Vdlyvset__ram_sign_31__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_31__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_0__v0 = vlTOPp->io_in_ver_10_bits_sign_0;
        this->__Vdlyvset__ram_sign_0__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_0__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_1__v0 = vlTOPp->io_in_ver_10_bits_sign_1;
        this->__Vdlyvset__ram_sign_1__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_1__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_2__v0 = vlTOPp->io_in_ver_10_bits_sign_2;
        this->__Vdlyvset__ram_sign_2__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_2__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_3__v0 = vlTOPp->io_in_ver_10_bits_sign_3;
        this->__Vdlyvset__ram_sign_3__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_3__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_4__v0 = vlTOPp->io_in_ver_10_bits_sign_4;
        this->__Vdlyvset__ram_sign_4__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_4__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_5__v0 = vlTOPp->io_in_ver_10_bits_sign_5;
        this->__Vdlyvset__ram_sign_5__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_5__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_6__v0 = vlTOPp->io_in_ver_10_bits_sign_6;
        this->__Vdlyvset__ram_sign_6__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_6__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_7__v0 = vlTOPp->io_in_ver_10_bits_sign_7;
        this->__Vdlyvset__ram_sign_7__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_7__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_8__v0 = vlTOPp->io_in_ver_10_bits_sign_8;
        this->__Vdlyvset__ram_sign_8__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_8__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_9__v0 = vlTOPp->io_in_ver_10_bits_sign_9;
        this->__Vdlyvset__ram_sign_9__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_9__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_10__v0 = vlTOPp->io_in_ver_10_bits_sign_10;
        this->__Vdlyvset__ram_sign_10__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_10__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_11__v0 = vlTOPp->io_in_ver_10_bits_sign_11;
        this->__Vdlyvset__ram_sign_11__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_11__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_12__v0 = vlTOPp->io_in_ver_10_bits_sign_12;
        this->__Vdlyvset__ram_sign_12__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_12__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_13__v0 = vlTOPp->io_in_ver_10_bits_sign_13;
        this->__Vdlyvset__ram_sign_13__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_13__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_14__v0 = vlTOPp->io_in_ver_10_bits_sign_14;
        this->__Vdlyvset__ram_sign_14__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_14__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_15__v0 = vlTOPp->io_in_ver_10_bits_sign_15;
        this->__Vdlyvset__ram_sign_15__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_15__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_16__v0 = vlTOPp->io_in_ver_10_bits_sign_16;
        this->__Vdlyvset__ram_sign_16__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_16__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_17__v0 = vlTOPp->io_in_ver_10_bits_sign_17;
        this->__Vdlyvset__ram_sign_17__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_17__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_18__v0 = vlTOPp->io_in_ver_10_bits_sign_18;
        this->__Vdlyvset__ram_sign_18__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_18__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_19__v0 = vlTOPp->io_in_ver_10_bits_sign_19;
        this->__Vdlyvset__ram_sign_19__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_19__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_20__v0 = vlTOPp->io_in_ver_10_bits_sign_20;
        this->__Vdlyvset__ram_sign_20__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_20__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_21__v0 = vlTOPp->io_in_ver_10_bits_sign_21;
        this->__Vdlyvset__ram_sign_21__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_21__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_22__v0 = vlTOPp->io_in_ver_10_bits_sign_22;
        this->__Vdlyvset__ram_sign_22__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_22__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_23__v0 = vlTOPp->io_in_ver_10_bits_sign_23;
        this->__Vdlyvset__ram_sign_23__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_23__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_24__v0 = vlTOPp->io_in_ver_10_bits_sign_24;
        this->__Vdlyvset__ram_sign_24__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_24__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_25__v0 = vlTOPp->io_in_ver_10_bits_sign_25;
        this->__Vdlyvset__ram_sign_25__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_25__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_26__v0 = vlTOPp->io_in_ver_10_bits_sign_26;
        this->__Vdlyvset__ram_sign_26__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_26__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_31__v0 = vlTOPp->io_in_ver_10_bits_man_31;
        this->__Vdlyvset__ram_man_31__v0 = 1U;
        this->__Vdlyvdim0__ram_man_31__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_30__v0 = vlTOPp->io_in_ver_10_bits_man_30;
        this->__Vdlyvset__ram_man_30__v0 = 1U;
        this->__Vdlyvdim0__ram_man_30__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_29__v0 = vlTOPp->io_in_ver_10_bits_man_29;
        this->__Vdlyvset__ram_man_29__v0 = 1U;
        this->__Vdlyvdim0__ram_man_29__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_28__v0 = vlTOPp->io_in_ver_10_bits_man_28;
        this->__Vdlyvset__ram_man_28__v0 = 1U;
        this->__Vdlyvdim0__ram_man_28__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_27__v0 = vlTOPp->io_in_ver_10_bits_man_27;
        this->__Vdlyvset__ram_man_27__v0 = 1U;
        this->__Vdlyvdim0__ram_man_27__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_26__v0 = vlTOPp->io_in_ver_10_bits_man_26;
        this->__Vdlyvset__ram_man_26__v0 = 1U;
        this->__Vdlyvdim0__ram_man_26__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_25__v0 = vlTOPp->io_in_ver_10_bits_man_25;
        this->__Vdlyvset__ram_man_25__v0 = 1U;
        this->__Vdlyvdim0__ram_man_25__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_24__v0 = vlTOPp->io_in_ver_10_bits_man_24;
        this->__Vdlyvset__ram_man_24__v0 = 1U;
        this->__Vdlyvdim0__ram_man_24__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_23__v0 = vlTOPp->io_in_ver_10_bits_man_23;
        this->__Vdlyvset__ram_man_23__v0 = 1U;
        this->__Vdlyvdim0__ram_man_23__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_22__v0 = vlTOPp->io_in_ver_10_bits_man_22;
        this->__Vdlyvset__ram_man_22__v0 = 1U;
        this->__Vdlyvdim0__ram_man_22__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_21__v0 = vlTOPp->io_in_ver_10_bits_man_21;
        this->__Vdlyvset__ram_man_21__v0 = 1U;
        this->__Vdlyvdim0__ram_man_21__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_20__v0 = vlTOPp->io_in_ver_10_bits_man_20;
        this->__Vdlyvset__ram_man_20__v0 = 1U;
        this->__Vdlyvdim0__ram_man_20__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_19__v0 = vlTOPp->io_in_ver_10_bits_man_19;
        this->__Vdlyvset__ram_man_19__v0 = 1U;
        this->__Vdlyvdim0__ram_man_19__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_7__v0 = vlTOPp->io_in_ver_10_bits_man_7;
        this->__Vdlyvset__ram_man_7__v0 = 1U;
        this->__Vdlyvdim0__ram_man_7__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_10__v0 = vlTOPp->io_in_ver_10_bits_man_10;
        this->__Vdlyvset__ram_man_10__v0 = 1U;
        this->__Vdlyvdim0__ram_man_10__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_6__v0 = vlTOPp->io_in_ver_10_bits_man_6;
        this->__Vdlyvset__ram_man_6__v0 = 1U;
        this->__Vdlyvdim0__ram_man_6__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_9__v0 = vlTOPp->io_in_ver_10_bits_man_9;
        this->__Vdlyvset__ram_man_9__v0 = 1U;
        this->__Vdlyvdim0__ram_man_9__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_5__v0 = vlTOPp->io_in_ver_10_bits_man_5;
        this->__Vdlyvset__ram_man_5__v0 = 1U;
        this->__Vdlyvdim0__ram_man_5__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_8__v0 = vlTOPp->io_in_ver_10_bits_man_8;
        this->__Vdlyvset__ram_man_8__v0 = 1U;
        this->__Vdlyvdim0__ram_man_8__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_4__v0 = vlTOPp->io_in_ver_10_bits_man_4;
        this->__Vdlyvset__ram_man_4__v0 = 1U;
        this->__Vdlyvdim0__ram_man_4__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_11__v0 = vlTOPp->io_in_ver_10_bits_man_11;
        this->__Vdlyvset__ram_man_11__v0 = 1U;
        this->__Vdlyvdim0__ram_man_11__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_12__v0 = vlTOPp->io_in_ver_10_bits_man_12;
        this->__Vdlyvset__ram_man_12__v0 = 1U;
        this->__Vdlyvdim0__ram_man_12__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_13__v0 = vlTOPp->io_in_ver_10_bits_man_13;
        this->__Vdlyvset__ram_man_13__v0 = 1U;
        this->__Vdlyvdim0__ram_man_13__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_14__v0 = vlTOPp->io_in_ver_10_bits_man_14;
        this->__Vdlyvset__ram_man_14__v0 = 1U;
        this->__Vdlyvdim0__ram_man_14__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_15__v0 = vlTOPp->io_in_ver_10_bits_man_15;
        this->__Vdlyvset__ram_man_15__v0 = 1U;
        this->__Vdlyvdim0__ram_man_15__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_16__v0 = vlTOPp->io_in_ver_10_bits_man_16;
        this->__Vdlyvset__ram_man_16__v0 = 1U;
        this->__Vdlyvdim0__ram_man_16__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_17__v0 = vlTOPp->io_in_ver_10_bits_man_17;
        this->__Vdlyvset__ram_man_17__v0 = 1U;
        this->__Vdlyvdim0__ram_man_17__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_18__v0 = vlTOPp->io_in_ver_10_bits_man_18;
        this->__Vdlyvset__ram_man_18__v0 = 1U;
        this->__Vdlyvdim0__ram_man_18__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_0__v0 = vlTOPp->io_in_ver_10_bits_man_0;
        this->__Vdlyvset__ram_man_0__v0 = 1U;
        this->__Vdlyvdim0__ram_man_0__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_1__v0 = vlTOPp->io_in_ver_10_bits_man_1;
        this->__Vdlyvset__ram_man_1__v0 = 1U;
        this->__Vdlyvdim0__ram_man_1__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_2__v0 = vlTOPp->io_in_ver_10_bits_man_2;
        this->__Vdlyvset__ram_man_2__v0 = 1U;
        this->__Vdlyvdim0__ram_man_2__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_3__v0 = vlTOPp->io_in_ver_10_bits_man_3;
        this->__Vdlyvset__ram_man_3__v0 = 1U;
        this->__Vdlyvdim0__ram_man_3__v0 = this->__PVT__enq_ptr_value;
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
    if (this->__Vdlyvset__ram_sign_28__v0) {
        this->__PVT__ram_sign_28[this->__Vdlyvdim0__ram_sign_28__v0] 
            = this->__Vdlyvval__ram_sign_28__v0;
    }
    if (this->__Vdlyvset__ram_sign_27__v0) {
        this->__PVT__ram_sign_27[this->__Vdlyvdim0__ram_sign_27__v0] 
            = this->__Vdlyvval__ram_sign_27__v0;
    }
    if (this->__Vdlyvset__ram_sign_29__v0) {
        this->__PVT__ram_sign_29[this->__Vdlyvdim0__ram_sign_29__v0] 
            = this->__Vdlyvval__ram_sign_29__v0;
    }
    if (this->__Vdlyvset__ram_sign_30__v0) {
        this->__PVT__ram_sign_30[this->__Vdlyvdim0__ram_sign_30__v0] 
            = this->__Vdlyvval__ram_sign_30__v0;
    }
    if (this->__Vdlyvset__ram_sign_31__v0) {
        this->__PVT__ram_sign_31[this->__Vdlyvdim0__ram_sign_31__v0] 
            = this->__Vdlyvval__ram_sign_31__v0;
    }
    if (this->__Vdlyvset__ram_sign_0__v0) {
        this->__PVT__ram_sign_0[this->__Vdlyvdim0__ram_sign_0__v0] 
            = this->__Vdlyvval__ram_sign_0__v0;
    }
    if (this->__Vdlyvset__ram_sign_1__v0) {
        this->__PVT__ram_sign_1[this->__Vdlyvdim0__ram_sign_1__v0] 
            = this->__Vdlyvval__ram_sign_1__v0;
    }
    if (this->__Vdlyvset__ram_sign_2__v0) {
        this->__PVT__ram_sign_2[this->__Vdlyvdim0__ram_sign_2__v0] 
            = this->__Vdlyvval__ram_sign_2__v0;
    }
    if (this->__Vdlyvset__ram_sign_3__v0) {
        this->__PVT__ram_sign_3[this->__Vdlyvdim0__ram_sign_3__v0] 
            = this->__Vdlyvval__ram_sign_3__v0;
    }
    if (this->__Vdlyvset__ram_sign_4__v0) {
        this->__PVT__ram_sign_4[this->__Vdlyvdim0__ram_sign_4__v0] 
            = this->__Vdlyvval__ram_sign_4__v0;
    }
    if (this->__Vdlyvset__ram_sign_5__v0) {
        this->__PVT__ram_sign_5[this->__Vdlyvdim0__ram_sign_5__v0] 
            = this->__Vdlyvval__ram_sign_5__v0;
    }
    if (this->__Vdlyvset__ram_sign_6__v0) {
        this->__PVT__ram_sign_6[this->__Vdlyvdim0__ram_sign_6__v0] 
            = this->__Vdlyvval__ram_sign_6__v0;
    }
    if (this->__Vdlyvset__ram_sign_7__v0) {
        this->__PVT__ram_sign_7[this->__Vdlyvdim0__ram_sign_7__v0] 
            = this->__Vdlyvval__ram_sign_7__v0;
    }
    if (this->__Vdlyvset__ram_sign_8__v0) {
        this->__PVT__ram_sign_8[this->__Vdlyvdim0__ram_sign_8__v0] 
            = this->__Vdlyvval__ram_sign_8__v0;
    }
    if (this->__Vdlyvset__ram_sign_9__v0) {
        this->__PVT__ram_sign_9[this->__Vdlyvdim0__ram_sign_9__v0] 
            = this->__Vdlyvval__ram_sign_9__v0;
    }
    if (this->__Vdlyvset__ram_sign_10__v0) {
        this->__PVT__ram_sign_10[this->__Vdlyvdim0__ram_sign_10__v0] 
            = this->__Vdlyvval__ram_sign_10__v0;
    }
    if (this->__Vdlyvset__ram_sign_11__v0) {
        this->__PVT__ram_sign_11[this->__Vdlyvdim0__ram_sign_11__v0] 
            = this->__Vdlyvval__ram_sign_11__v0;
    }
    if (this->__Vdlyvset__ram_sign_12__v0) {
        this->__PVT__ram_sign_12[this->__Vdlyvdim0__ram_sign_12__v0] 
            = this->__Vdlyvval__ram_sign_12__v0;
    }
    if (this->__Vdlyvset__ram_sign_13__v0) {
        this->__PVT__ram_sign_13[this->__Vdlyvdim0__ram_sign_13__v0] 
            = this->__Vdlyvval__ram_sign_13__v0;
    }
    if (this->__Vdlyvset__ram_sign_14__v0) {
        this->__PVT__ram_sign_14[this->__Vdlyvdim0__ram_sign_14__v0] 
            = this->__Vdlyvval__ram_sign_14__v0;
    }
    if (this->__Vdlyvset__ram_sign_15__v0) {
        this->__PVT__ram_sign_15[this->__Vdlyvdim0__ram_sign_15__v0] 
            = this->__Vdlyvval__ram_sign_15__v0;
    }
    if (this->__Vdlyvset__ram_sign_16__v0) {
        this->__PVT__ram_sign_16[this->__Vdlyvdim0__ram_sign_16__v0] 
            = this->__Vdlyvval__ram_sign_16__v0;
    }
    if (this->__Vdlyvset__ram_sign_17__v0) {
        this->__PVT__ram_sign_17[this->__Vdlyvdim0__ram_sign_17__v0] 
            = this->__Vdlyvval__ram_sign_17__v0;
    }
    if (this->__Vdlyvset__ram_sign_18__v0) {
        this->__PVT__ram_sign_18[this->__Vdlyvdim0__ram_sign_18__v0] 
            = this->__Vdlyvval__ram_sign_18__v0;
    }
    if (this->__Vdlyvset__ram_sign_19__v0) {
        this->__PVT__ram_sign_19[this->__Vdlyvdim0__ram_sign_19__v0] 
            = this->__Vdlyvval__ram_sign_19__v0;
    }
    if (this->__Vdlyvset__ram_sign_20__v0) {
        this->__PVT__ram_sign_20[this->__Vdlyvdim0__ram_sign_20__v0] 
            = this->__Vdlyvval__ram_sign_20__v0;
    }
    if (this->__Vdlyvset__ram_sign_21__v0) {
        this->__PVT__ram_sign_21[this->__Vdlyvdim0__ram_sign_21__v0] 
            = this->__Vdlyvval__ram_sign_21__v0;
    }
    if (this->__Vdlyvset__ram_sign_22__v0) {
        this->__PVT__ram_sign_22[this->__Vdlyvdim0__ram_sign_22__v0] 
            = this->__Vdlyvval__ram_sign_22__v0;
    }
    if (this->__Vdlyvset__ram_sign_23__v0) {
        this->__PVT__ram_sign_23[this->__Vdlyvdim0__ram_sign_23__v0] 
            = this->__Vdlyvval__ram_sign_23__v0;
    }
    if (this->__Vdlyvset__ram_sign_24__v0) {
        this->__PVT__ram_sign_24[this->__Vdlyvdim0__ram_sign_24__v0] 
            = this->__Vdlyvval__ram_sign_24__v0;
    }
    if (this->__Vdlyvset__ram_sign_25__v0) {
        this->__PVT__ram_sign_25[this->__Vdlyvdim0__ram_sign_25__v0] 
            = this->__Vdlyvval__ram_sign_25__v0;
    }
    if (this->__Vdlyvset__ram_sign_26__v0) {
        this->__PVT__ram_sign_26[this->__Vdlyvdim0__ram_sign_26__v0] 
            = this->__Vdlyvval__ram_sign_26__v0;
    }
    if (this->__Vdlyvset__ram_man_31__v0) {
        this->__PVT__ram_man_31[this->__Vdlyvdim0__ram_man_31__v0] 
            = this->__Vdlyvval__ram_man_31__v0;
    }
    if (this->__Vdlyvset__ram_man_30__v0) {
        this->__PVT__ram_man_30[this->__Vdlyvdim0__ram_man_30__v0] 
            = this->__Vdlyvval__ram_man_30__v0;
    }
    if (this->__Vdlyvset__ram_man_29__v0) {
        this->__PVT__ram_man_29[this->__Vdlyvdim0__ram_man_29__v0] 
            = this->__Vdlyvval__ram_man_29__v0;
    }
    if (this->__Vdlyvset__ram_man_28__v0) {
        this->__PVT__ram_man_28[this->__Vdlyvdim0__ram_man_28__v0] 
            = this->__Vdlyvval__ram_man_28__v0;
    }
    if (this->__Vdlyvset__ram_man_27__v0) {
        this->__PVT__ram_man_27[this->__Vdlyvdim0__ram_man_27__v0] 
            = this->__Vdlyvval__ram_man_27__v0;
    }
    if (this->__Vdlyvset__ram_man_26__v0) {
        this->__PVT__ram_man_26[this->__Vdlyvdim0__ram_man_26__v0] 
            = this->__Vdlyvval__ram_man_26__v0;
    }
    if (this->__Vdlyvset__ram_man_25__v0) {
        this->__PVT__ram_man_25[this->__Vdlyvdim0__ram_man_25__v0] 
            = this->__Vdlyvval__ram_man_25__v0;
    }
    if (this->__Vdlyvset__ram_man_24__v0) {
        this->__PVT__ram_man_24[this->__Vdlyvdim0__ram_man_24__v0] 
            = this->__Vdlyvval__ram_man_24__v0;
    }
    if (this->__Vdlyvset__ram_man_23__v0) {
        this->__PVT__ram_man_23[this->__Vdlyvdim0__ram_man_23__v0] 
            = this->__Vdlyvval__ram_man_23__v0;
    }
    if (this->__Vdlyvset__ram_man_22__v0) {
        this->__PVT__ram_man_22[this->__Vdlyvdim0__ram_man_22__v0] 
            = this->__Vdlyvval__ram_man_22__v0;
    }
    if (this->__Vdlyvset__ram_man_21__v0) {
        this->__PVT__ram_man_21[this->__Vdlyvdim0__ram_man_21__v0] 
            = this->__Vdlyvval__ram_man_21__v0;
    }
    if (this->__Vdlyvset__ram_man_20__v0) {
        this->__PVT__ram_man_20[this->__Vdlyvdim0__ram_man_20__v0] 
            = this->__Vdlyvval__ram_man_20__v0;
    }
    if (this->__Vdlyvset__ram_man_19__v0) {
        this->__PVT__ram_man_19[this->__Vdlyvdim0__ram_man_19__v0] 
            = this->__Vdlyvval__ram_man_19__v0;
    }
    if (this->__Vdlyvset__ram_man_7__v0) {
        this->__PVT__ram_man_7[this->__Vdlyvdim0__ram_man_7__v0] 
            = this->__Vdlyvval__ram_man_7__v0;
    }
    if (this->__Vdlyvset__ram_man_10__v0) {
        this->__PVT__ram_man_10[this->__Vdlyvdim0__ram_man_10__v0] 
            = this->__Vdlyvval__ram_man_10__v0;
    }
    if (this->__Vdlyvset__ram_man_6__v0) {
        this->__PVT__ram_man_6[this->__Vdlyvdim0__ram_man_6__v0] 
            = this->__Vdlyvval__ram_man_6__v0;
    }
    if (this->__Vdlyvset__ram_man_9__v0) {
        this->__PVT__ram_man_9[this->__Vdlyvdim0__ram_man_9__v0] 
            = this->__Vdlyvval__ram_man_9__v0;
    }
    if (this->__Vdlyvset__ram_man_5__v0) {
        this->__PVT__ram_man_5[this->__Vdlyvdim0__ram_man_5__v0] 
            = this->__Vdlyvval__ram_man_5__v0;
    }
    if (this->__Vdlyvset__ram_man_8__v0) {
        this->__PVT__ram_man_8[this->__Vdlyvdim0__ram_man_8__v0] 
            = this->__Vdlyvval__ram_man_8__v0;
    }
    if (this->__Vdlyvset__ram_man_4__v0) {
        this->__PVT__ram_man_4[this->__Vdlyvdim0__ram_man_4__v0] 
            = this->__Vdlyvval__ram_man_4__v0;
    }
    if (this->__Vdlyvset__ram_man_11__v0) {
        this->__PVT__ram_man_11[this->__Vdlyvdim0__ram_man_11__v0] 
            = this->__Vdlyvval__ram_man_11__v0;
    }
    if (this->__Vdlyvset__ram_man_12__v0) {
        this->__PVT__ram_man_12[this->__Vdlyvdim0__ram_man_12__v0] 
            = this->__Vdlyvval__ram_man_12__v0;
    }
    if (this->__Vdlyvset__ram_man_13__v0) {
        this->__PVT__ram_man_13[this->__Vdlyvdim0__ram_man_13__v0] 
            = this->__Vdlyvval__ram_man_13__v0;
    }
    if (this->__Vdlyvset__ram_man_14__v0) {
        this->__PVT__ram_man_14[this->__Vdlyvdim0__ram_man_14__v0] 
            = this->__Vdlyvval__ram_man_14__v0;
    }
    if (this->__Vdlyvset__ram_man_15__v0) {
        this->__PVT__ram_man_15[this->__Vdlyvdim0__ram_man_15__v0] 
            = this->__Vdlyvval__ram_man_15__v0;
    }
    if (this->__Vdlyvset__ram_man_16__v0) {
        this->__PVT__ram_man_16[this->__Vdlyvdim0__ram_man_16__v0] 
            = this->__Vdlyvval__ram_man_16__v0;
    }
    if (this->__Vdlyvset__ram_man_17__v0) {
        this->__PVT__ram_man_17[this->__Vdlyvdim0__ram_man_17__v0] 
            = this->__Vdlyvval__ram_man_17__v0;
    }
    if (this->__Vdlyvset__ram_man_18__v0) {
        this->__PVT__ram_man_18[this->__Vdlyvdim0__ram_man_18__v0] 
            = this->__Vdlyvval__ram_man_18__v0;
    }
    if (this->__Vdlyvset__ram_man_0__v0) {
        this->__PVT__ram_man_0[this->__Vdlyvdim0__ram_man_0__v0] 
            = this->__Vdlyvval__ram_man_0__v0;
    }
    if (this->__Vdlyvset__ram_man_1__v0) {
        this->__PVT__ram_man_1[this->__Vdlyvdim0__ram_man_1__v0] 
            = this->__Vdlyvval__ram_man_1__v0;
    }
    if (this->__Vdlyvset__ram_man_2__v0) {
        this->__PVT__ram_man_2[this->__Vdlyvdim0__ram_man_2__v0] 
            = this->__Vdlyvval__ram_man_2__v0;
    }
    if (this->__Vdlyvset__ram_man_3__v0) {
        this->__PVT__ram_man_3[this->__Vdlyvdim0__ram_man_3__v0] 
            = this->__Vdlyvval__ram_man_3__v0;
    }
    if (vlTOPp->reset) {
        this->__PVT__enq_ptr_value = 0U;
    } else {
        if ((1U & (~ (IData)(this->__PVT__full)))) {
            this->__PVT__enq_ptr_value = this->__PVT___value_T_1;
        }
    }
    this->__PVT___value_T_3 = (0xfU & ((IData)(1U) 
                                       + (IData)(this->__PVT__deq_ptr_value)));
    this->__PVT___value_T_1 = (0xfU & ((IData)(1U) 
                                       + (IData)(this->__PVT__enq_ptr_value)));
    this->__PVT__ptr_match = ((IData)(this->__PVT__enq_ptr_value) 
                              == (IData)(this->__PVT__deq_ptr_value));
    this->__PVT__full = ((IData)(this->__PVT__ptr_match) 
                         & (IData)(this->__PVT__maybe_full));
    this->__PVT__empty = ((IData)(this->__PVT__ptr_match) 
                          & (~ (IData)(this->__PVT__maybe_full)));
    this->__PVT__do_deq = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_10_io_deq_ready_r_10) 
                           & (~ (IData)(this->__PVT__empty)));
}

VL_INLINE_OPT void VSystolicArray_HBFP_forTesting_Queue::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_11__28(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_Queue::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_11__28\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vdlyvset__ram_exp__v0 = 0U;
    this->__Vdlyvset__ram_sign_28__v0 = 0U;
    this->__Vdlyvset__ram_sign_27__v0 = 0U;
    this->__Vdlyvset__ram_sign_29__v0 = 0U;
    this->__Vdlyvset__ram_sign_30__v0 = 0U;
    this->__Vdlyvset__ram_sign_31__v0 = 0U;
    this->__Vdlyvset__ram_sign_0__v0 = 0U;
    this->__Vdlyvset__ram_sign_1__v0 = 0U;
    this->__Vdlyvset__ram_sign_2__v0 = 0U;
    this->__Vdlyvset__ram_sign_3__v0 = 0U;
    this->__Vdlyvset__ram_sign_4__v0 = 0U;
    this->__Vdlyvset__ram_sign_5__v0 = 0U;
    this->__Vdlyvset__ram_sign_6__v0 = 0U;
    this->__Vdlyvset__ram_sign_7__v0 = 0U;
    this->__Vdlyvset__ram_sign_8__v0 = 0U;
    this->__Vdlyvset__ram_sign_9__v0 = 0U;
    this->__Vdlyvset__ram_sign_10__v0 = 0U;
    this->__Vdlyvset__ram_sign_11__v0 = 0U;
    this->__Vdlyvset__ram_sign_12__v0 = 0U;
    this->__Vdlyvset__ram_sign_13__v0 = 0U;
    this->__Vdlyvset__ram_sign_14__v0 = 0U;
    this->__Vdlyvset__ram_sign_15__v0 = 0U;
    this->__Vdlyvset__ram_sign_16__v0 = 0U;
    this->__Vdlyvset__ram_sign_17__v0 = 0U;
    this->__Vdlyvset__ram_sign_18__v0 = 0U;
    this->__Vdlyvset__ram_sign_19__v0 = 0U;
    this->__Vdlyvset__ram_sign_20__v0 = 0U;
    this->__Vdlyvset__ram_sign_21__v0 = 0U;
    this->__Vdlyvset__ram_sign_22__v0 = 0U;
    this->__Vdlyvset__ram_sign_23__v0 = 0U;
    this->__Vdlyvset__ram_sign_24__v0 = 0U;
    this->__Vdlyvset__ram_sign_25__v0 = 0U;
    this->__Vdlyvset__ram_sign_26__v0 = 0U;
    this->__Vdlyvset__ram_man_31__v0 = 0U;
    this->__Vdlyvset__ram_man_30__v0 = 0U;
    this->__Vdlyvset__ram_man_29__v0 = 0U;
    this->__Vdlyvset__ram_man_28__v0 = 0U;
    this->__Vdlyvset__ram_man_27__v0 = 0U;
    this->__Vdlyvset__ram_man_26__v0 = 0U;
    this->__Vdlyvset__ram_man_25__v0 = 0U;
    this->__Vdlyvset__ram_man_24__v0 = 0U;
    this->__Vdlyvset__ram_man_23__v0 = 0U;
    this->__Vdlyvset__ram_man_22__v0 = 0U;
    this->__Vdlyvset__ram_man_21__v0 = 0U;
    this->__Vdlyvset__ram_man_20__v0 = 0U;
    this->__Vdlyvset__ram_man_19__v0 = 0U;
    this->__Vdlyvset__ram_man_7__v0 = 0U;
    this->__Vdlyvset__ram_man_10__v0 = 0U;
    this->__Vdlyvset__ram_man_6__v0 = 0U;
    this->__Vdlyvset__ram_man_9__v0 = 0U;
    this->__Vdlyvset__ram_man_5__v0 = 0U;
    this->__Vdlyvset__ram_man_8__v0 = 0U;
    this->__Vdlyvset__ram_man_4__v0 = 0U;
    this->__Vdlyvset__ram_man_11__v0 = 0U;
    this->__Vdlyvset__ram_man_12__v0 = 0U;
    this->__Vdlyvset__ram_man_13__v0 = 0U;
    this->__Vdlyvset__ram_man_14__v0 = 0U;
    this->__Vdlyvset__ram_man_15__v0 = 0U;
    this->__Vdlyvset__ram_man_16__v0 = 0U;
    this->__Vdlyvset__ram_man_17__v0 = 0U;
    this->__Vdlyvset__ram_man_18__v0 = 0U;
    this->__Vdlyvset__ram_man_0__v0 = 0U;
    this->__Vdlyvset__ram_man_1__v0 = 0U;
    this->__Vdlyvset__ram_man_2__v0 = 0U;
    this->__Vdlyvset__ram_man_3__v0 = 0U;
    if (vlTOPp->reset) {
        this->__PVT__maybe_full = 0U;
    } else {
        if (((1U & (~ (IData)(this->__PVT__full))) 
             != (IData)(this->__PVT__do_deq))) {
            this->__PVT__maybe_full = (1U & (~ (IData)(this->__PVT__full)));
        }
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_exp__v0 = vlTOPp->io_in_ver_11_bits_exp;
        this->__Vdlyvset__ram_exp__v0 = 1U;
        this->__Vdlyvdim0__ram_exp__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_28__v0 = vlTOPp->io_in_ver_11_bits_sign_28;
        this->__Vdlyvset__ram_sign_28__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_28__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_27__v0 = vlTOPp->io_in_ver_11_bits_sign_27;
        this->__Vdlyvset__ram_sign_27__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_27__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_29__v0 = vlTOPp->io_in_ver_11_bits_sign_29;
        this->__Vdlyvset__ram_sign_29__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_29__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_30__v0 = vlTOPp->io_in_ver_11_bits_sign_30;
        this->__Vdlyvset__ram_sign_30__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_30__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_31__v0 = vlTOPp->io_in_ver_11_bits_sign_31;
        this->__Vdlyvset__ram_sign_31__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_31__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_0__v0 = vlTOPp->io_in_ver_11_bits_sign_0;
        this->__Vdlyvset__ram_sign_0__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_0__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_1__v0 = vlTOPp->io_in_ver_11_bits_sign_1;
        this->__Vdlyvset__ram_sign_1__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_1__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_2__v0 = vlTOPp->io_in_ver_11_bits_sign_2;
        this->__Vdlyvset__ram_sign_2__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_2__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_3__v0 = vlTOPp->io_in_ver_11_bits_sign_3;
        this->__Vdlyvset__ram_sign_3__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_3__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_4__v0 = vlTOPp->io_in_ver_11_bits_sign_4;
        this->__Vdlyvset__ram_sign_4__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_4__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_5__v0 = vlTOPp->io_in_ver_11_bits_sign_5;
        this->__Vdlyvset__ram_sign_5__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_5__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_6__v0 = vlTOPp->io_in_ver_11_bits_sign_6;
        this->__Vdlyvset__ram_sign_6__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_6__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_7__v0 = vlTOPp->io_in_ver_11_bits_sign_7;
        this->__Vdlyvset__ram_sign_7__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_7__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_8__v0 = vlTOPp->io_in_ver_11_bits_sign_8;
        this->__Vdlyvset__ram_sign_8__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_8__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_9__v0 = vlTOPp->io_in_ver_11_bits_sign_9;
        this->__Vdlyvset__ram_sign_9__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_9__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_10__v0 = vlTOPp->io_in_ver_11_bits_sign_10;
        this->__Vdlyvset__ram_sign_10__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_10__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_11__v0 = vlTOPp->io_in_ver_11_bits_sign_11;
        this->__Vdlyvset__ram_sign_11__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_11__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_12__v0 = vlTOPp->io_in_ver_11_bits_sign_12;
        this->__Vdlyvset__ram_sign_12__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_12__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_13__v0 = vlTOPp->io_in_ver_11_bits_sign_13;
        this->__Vdlyvset__ram_sign_13__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_13__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_14__v0 = vlTOPp->io_in_ver_11_bits_sign_14;
        this->__Vdlyvset__ram_sign_14__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_14__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_15__v0 = vlTOPp->io_in_ver_11_bits_sign_15;
        this->__Vdlyvset__ram_sign_15__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_15__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_16__v0 = vlTOPp->io_in_ver_11_bits_sign_16;
        this->__Vdlyvset__ram_sign_16__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_16__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_17__v0 = vlTOPp->io_in_ver_11_bits_sign_17;
        this->__Vdlyvset__ram_sign_17__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_17__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_18__v0 = vlTOPp->io_in_ver_11_bits_sign_18;
        this->__Vdlyvset__ram_sign_18__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_18__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_19__v0 = vlTOPp->io_in_ver_11_bits_sign_19;
        this->__Vdlyvset__ram_sign_19__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_19__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_20__v0 = vlTOPp->io_in_ver_11_bits_sign_20;
        this->__Vdlyvset__ram_sign_20__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_20__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_21__v0 = vlTOPp->io_in_ver_11_bits_sign_21;
        this->__Vdlyvset__ram_sign_21__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_21__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_22__v0 = vlTOPp->io_in_ver_11_bits_sign_22;
        this->__Vdlyvset__ram_sign_22__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_22__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_23__v0 = vlTOPp->io_in_ver_11_bits_sign_23;
        this->__Vdlyvset__ram_sign_23__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_23__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_24__v0 = vlTOPp->io_in_ver_11_bits_sign_24;
        this->__Vdlyvset__ram_sign_24__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_24__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_25__v0 = vlTOPp->io_in_ver_11_bits_sign_25;
        this->__Vdlyvset__ram_sign_25__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_25__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_26__v0 = vlTOPp->io_in_ver_11_bits_sign_26;
        this->__Vdlyvset__ram_sign_26__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_26__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_31__v0 = vlTOPp->io_in_ver_11_bits_man_31;
        this->__Vdlyvset__ram_man_31__v0 = 1U;
        this->__Vdlyvdim0__ram_man_31__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_30__v0 = vlTOPp->io_in_ver_11_bits_man_30;
        this->__Vdlyvset__ram_man_30__v0 = 1U;
        this->__Vdlyvdim0__ram_man_30__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_29__v0 = vlTOPp->io_in_ver_11_bits_man_29;
        this->__Vdlyvset__ram_man_29__v0 = 1U;
        this->__Vdlyvdim0__ram_man_29__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_28__v0 = vlTOPp->io_in_ver_11_bits_man_28;
        this->__Vdlyvset__ram_man_28__v0 = 1U;
        this->__Vdlyvdim0__ram_man_28__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_27__v0 = vlTOPp->io_in_ver_11_bits_man_27;
        this->__Vdlyvset__ram_man_27__v0 = 1U;
        this->__Vdlyvdim0__ram_man_27__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_26__v0 = vlTOPp->io_in_ver_11_bits_man_26;
        this->__Vdlyvset__ram_man_26__v0 = 1U;
        this->__Vdlyvdim0__ram_man_26__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_25__v0 = vlTOPp->io_in_ver_11_bits_man_25;
        this->__Vdlyvset__ram_man_25__v0 = 1U;
        this->__Vdlyvdim0__ram_man_25__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_24__v0 = vlTOPp->io_in_ver_11_bits_man_24;
        this->__Vdlyvset__ram_man_24__v0 = 1U;
        this->__Vdlyvdim0__ram_man_24__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_23__v0 = vlTOPp->io_in_ver_11_bits_man_23;
        this->__Vdlyvset__ram_man_23__v0 = 1U;
        this->__Vdlyvdim0__ram_man_23__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_22__v0 = vlTOPp->io_in_ver_11_bits_man_22;
        this->__Vdlyvset__ram_man_22__v0 = 1U;
        this->__Vdlyvdim0__ram_man_22__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_21__v0 = vlTOPp->io_in_ver_11_bits_man_21;
        this->__Vdlyvset__ram_man_21__v0 = 1U;
        this->__Vdlyvdim0__ram_man_21__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_20__v0 = vlTOPp->io_in_ver_11_bits_man_20;
        this->__Vdlyvset__ram_man_20__v0 = 1U;
        this->__Vdlyvdim0__ram_man_20__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_19__v0 = vlTOPp->io_in_ver_11_bits_man_19;
        this->__Vdlyvset__ram_man_19__v0 = 1U;
        this->__Vdlyvdim0__ram_man_19__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_7__v0 = vlTOPp->io_in_ver_11_bits_man_7;
        this->__Vdlyvset__ram_man_7__v0 = 1U;
        this->__Vdlyvdim0__ram_man_7__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_10__v0 = vlTOPp->io_in_ver_11_bits_man_10;
        this->__Vdlyvset__ram_man_10__v0 = 1U;
        this->__Vdlyvdim0__ram_man_10__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_6__v0 = vlTOPp->io_in_ver_11_bits_man_6;
        this->__Vdlyvset__ram_man_6__v0 = 1U;
        this->__Vdlyvdim0__ram_man_6__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_9__v0 = vlTOPp->io_in_ver_11_bits_man_9;
        this->__Vdlyvset__ram_man_9__v0 = 1U;
        this->__Vdlyvdim0__ram_man_9__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_5__v0 = vlTOPp->io_in_ver_11_bits_man_5;
        this->__Vdlyvset__ram_man_5__v0 = 1U;
        this->__Vdlyvdim0__ram_man_5__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_8__v0 = vlTOPp->io_in_ver_11_bits_man_8;
        this->__Vdlyvset__ram_man_8__v0 = 1U;
        this->__Vdlyvdim0__ram_man_8__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_4__v0 = vlTOPp->io_in_ver_11_bits_man_4;
        this->__Vdlyvset__ram_man_4__v0 = 1U;
        this->__Vdlyvdim0__ram_man_4__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_11__v0 = vlTOPp->io_in_ver_11_bits_man_11;
        this->__Vdlyvset__ram_man_11__v0 = 1U;
        this->__Vdlyvdim0__ram_man_11__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_12__v0 = vlTOPp->io_in_ver_11_bits_man_12;
        this->__Vdlyvset__ram_man_12__v0 = 1U;
        this->__Vdlyvdim0__ram_man_12__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_13__v0 = vlTOPp->io_in_ver_11_bits_man_13;
        this->__Vdlyvset__ram_man_13__v0 = 1U;
        this->__Vdlyvdim0__ram_man_13__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_14__v0 = vlTOPp->io_in_ver_11_bits_man_14;
        this->__Vdlyvset__ram_man_14__v0 = 1U;
        this->__Vdlyvdim0__ram_man_14__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_15__v0 = vlTOPp->io_in_ver_11_bits_man_15;
        this->__Vdlyvset__ram_man_15__v0 = 1U;
        this->__Vdlyvdim0__ram_man_15__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_16__v0 = vlTOPp->io_in_ver_11_bits_man_16;
        this->__Vdlyvset__ram_man_16__v0 = 1U;
        this->__Vdlyvdim0__ram_man_16__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_17__v0 = vlTOPp->io_in_ver_11_bits_man_17;
        this->__Vdlyvset__ram_man_17__v0 = 1U;
        this->__Vdlyvdim0__ram_man_17__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_18__v0 = vlTOPp->io_in_ver_11_bits_man_18;
        this->__Vdlyvset__ram_man_18__v0 = 1U;
        this->__Vdlyvdim0__ram_man_18__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_0__v0 = vlTOPp->io_in_ver_11_bits_man_0;
        this->__Vdlyvset__ram_man_0__v0 = 1U;
        this->__Vdlyvdim0__ram_man_0__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_1__v0 = vlTOPp->io_in_ver_11_bits_man_1;
        this->__Vdlyvset__ram_man_1__v0 = 1U;
        this->__Vdlyvdim0__ram_man_1__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_2__v0 = vlTOPp->io_in_ver_11_bits_man_2;
        this->__Vdlyvset__ram_man_2__v0 = 1U;
        this->__Vdlyvdim0__ram_man_2__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_3__v0 = vlTOPp->io_in_ver_11_bits_man_3;
        this->__Vdlyvset__ram_man_3__v0 = 1U;
        this->__Vdlyvdim0__ram_man_3__v0 = this->__PVT__enq_ptr_value;
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
    if (this->__Vdlyvset__ram_sign_28__v0) {
        this->__PVT__ram_sign_28[this->__Vdlyvdim0__ram_sign_28__v0] 
            = this->__Vdlyvval__ram_sign_28__v0;
    }
    if (this->__Vdlyvset__ram_sign_27__v0) {
        this->__PVT__ram_sign_27[this->__Vdlyvdim0__ram_sign_27__v0] 
            = this->__Vdlyvval__ram_sign_27__v0;
    }
    if (this->__Vdlyvset__ram_sign_29__v0) {
        this->__PVT__ram_sign_29[this->__Vdlyvdim0__ram_sign_29__v0] 
            = this->__Vdlyvval__ram_sign_29__v0;
    }
    if (this->__Vdlyvset__ram_sign_30__v0) {
        this->__PVT__ram_sign_30[this->__Vdlyvdim0__ram_sign_30__v0] 
            = this->__Vdlyvval__ram_sign_30__v0;
    }
    if (this->__Vdlyvset__ram_sign_31__v0) {
        this->__PVT__ram_sign_31[this->__Vdlyvdim0__ram_sign_31__v0] 
            = this->__Vdlyvval__ram_sign_31__v0;
    }
    if (this->__Vdlyvset__ram_sign_0__v0) {
        this->__PVT__ram_sign_0[this->__Vdlyvdim0__ram_sign_0__v0] 
            = this->__Vdlyvval__ram_sign_0__v0;
    }
    if (this->__Vdlyvset__ram_sign_1__v0) {
        this->__PVT__ram_sign_1[this->__Vdlyvdim0__ram_sign_1__v0] 
            = this->__Vdlyvval__ram_sign_1__v0;
    }
    if (this->__Vdlyvset__ram_sign_2__v0) {
        this->__PVT__ram_sign_2[this->__Vdlyvdim0__ram_sign_2__v0] 
            = this->__Vdlyvval__ram_sign_2__v0;
    }
    if (this->__Vdlyvset__ram_sign_3__v0) {
        this->__PVT__ram_sign_3[this->__Vdlyvdim0__ram_sign_3__v0] 
            = this->__Vdlyvval__ram_sign_3__v0;
    }
    if (this->__Vdlyvset__ram_sign_4__v0) {
        this->__PVT__ram_sign_4[this->__Vdlyvdim0__ram_sign_4__v0] 
            = this->__Vdlyvval__ram_sign_4__v0;
    }
    if (this->__Vdlyvset__ram_sign_5__v0) {
        this->__PVT__ram_sign_5[this->__Vdlyvdim0__ram_sign_5__v0] 
            = this->__Vdlyvval__ram_sign_5__v0;
    }
    if (this->__Vdlyvset__ram_sign_6__v0) {
        this->__PVT__ram_sign_6[this->__Vdlyvdim0__ram_sign_6__v0] 
            = this->__Vdlyvval__ram_sign_6__v0;
    }
    if (this->__Vdlyvset__ram_sign_7__v0) {
        this->__PVT__ram_sign_7[this->__Vdlyvdim0__ram_sign_7__v0] 
            = this->__Vdlyvval__ram_sign_7__v0;
    }
    if (this->__Vdlyvset__ram_sign_8__v0) {
        this->__PVT__ram_sign_8[this->__Vdlyvdim0__ram_sign_8__v0] 
            = this->__Vdlyvval__ram_sign_8__v0;
    }
    if (this->__Vdlyvset__ram_sign_9__v0) {
        this->__PVT__ram_sign_9[this->__Vdlyvdim0__ram_sign_9__v0] 
            = this->__Vdlyvval__ram_sign_9__v0;
    }
    if (this->__Vdlyvset__ram_sign_10__v0) {
        this->__PVT__ram_sign_10[this->__Vdlyvdim0__ram_sign_10__v0] 
            = this->__Vdlyvval__ram_sign_10__v0;
    }
    if (this->__Vdlyvset__ram_sign_11__v0) {
        this->__PVT__ram_sign_11[this->__Vdlyvdim0__ram_sign_11__v0] 
            = this->__Vdlyvval__ram_sign_11__v0;
    }
    if (this->__Vdlyvset__ram_sign_12__v0) {
        this->__PVT__ram_sign_12[this->__Vdlyvdim0__ram_sign_12__v0] 
            = this->__Vdlyvval__ram_sign_12__v0;
    }
    if (this->__Vdlyvset__ram_sign_13__v0) {
        this->__PVT__ram_sign_13[this->__Vdlyvdim0__ram_sign_13__v0] 
            = this->__Vdlyvval__ram_sign_13__v0;
    }
    if (this->__Vdlyvset__ram_sign_14__v0) {
        this->__PVT__ram_sign_14[this->__Vdlyvdim0__ram_sign_14__v0] 
            = this->__Vdlyvval__ram_sign_14__v0;
    }
    if (this->__Vdlyvset__ram_sign_15__v0) {
        this->__PVT__ram_sign_15[this->__Vdlyvdim0__ram_sign_15__v0] 
            = this->__Vdlyvval__ram_sign_15__v0;
    }
    if (this->__Vdlyvset__ram_sign_16__v0) {
        this->__PVT__ram_sign_16[this->__Vdlyvdim0__ram_sign_16__v0] 
            = this->__Vdlyvval__ram_sign_16__v0;
    }
    if (this->__Vdlyvset__ram_sign_17__v0) {
        this->__PVT__ram_sign_17[this->__Vdlyvdim0__ram_sign_17__v0] 
            = this->__Vdlyvval__ram_sign_17__v0;
    }
    if (this->__Vdlyvset__ram_sign_18__v0) {
        this->__PVT__ram_sign_18[this->__Vdlyvdim0__ram_sign_18__v0] 
            = this->__Vdlyvval__ram_sign_18__v0;
    }
    if (this->__Vdlyvset__ram_sign_19__v0) {
        this->__PVT__ram_sign_19[this->__Vdlyvdim0__ram_sign_19__v0] 
            = this->__Vdlyvval__ram_sign_19__v0;
    }
    if (this->__Vdlyvset__ram_sign_20__v0) {
        this->__PVT__ram_sign_20[this->__Vdlyvdim0__ram_sign_20__v0] 
            = this->__Vdlyvval__ram_sign_20__v0;
    }
    if (this->__Vdlyvset__ram_sign_21__v0) {
        this->__PVT__ram_sign_21[this->__Vdlyvdim0__ram_sign_21__v0] 
            = this->__Vdlyvval__ram_sign_21__v0;
    }
    if (this->__Vdlyvset__ram_sign_22__v0) {
        this->__PVT__ram_sign_22[this->__Vdlyvdim0__ram_sign_22__v0] 
            = this->__Vdlyvval__ram_sign_22__v0;
    }
    if (this->__Vdlyvset__ram_sign_23__v0) {
        this->__PVT__ram_sign_23[this->__Vdlyvdim0__ram_sign_23__v0] 
            = this->__Vdlyvval__ram_sign_23__v0;
    }
    if (this->__Vdlyvset__ram_sign_24__v0) {
        this->__PVT__ram_sign_24[this->__Vdlyvdim0__ram_sign_24__v0] 
            = this->__Vdlyvval__ram_sign_24__v0;
    }
    if (this->__Vdlyvset__ram_sign_25__v0) {
        this->__PVT__ram_sign_25[this->__Vdlyvdim0__ram_sign_25__v0] 
            = this->__Vdlyvval__ram_sign_25__v0;
    }
    if (this->__Vdlyvset__ram_sign_26__v0) {
        this->__PVT__ram_sign_26[this->__Vdlyvdim0__ram_sign_26__v0] 
            = this->__Vdlyvval__ram_sign_26__v0;
    }
    if (this->__Vdlyvset__ram_man_31__v0) {
        this->__PVT__ram_man_31[this->__Vdlyvdim0__ram_man_31__v0] 
            = this->__Vdlyvval__ram_man_31__v0;
    }
    if (this->__Vdlyvset__ram_man_30__v0) {
        this->__PVT__ram_man_30[this->__Vdlyvdim0__ram_man_30__v0] 
            = this->__Vdlyvval__ram_man_30__v0;
    }
    if (this->__Vdlyvset__ram_man_29__v0) {
        this->__PVT__ram_man_29[this->__Vdlyvdim0__ram_man_29__v0] 
            = this->__Vdlyvval__ram_man_29__v0;
    }
    if (this->__Vdlyvset__ram_man_28__v0) {
        this->__PVT__ram_man_28[this->__Vdlyvdim0__ram_man_28__v0] 
            = this->__Vdlyvval__ram_man_28__v0;
    }
    if (this->__Vdlyvset__ram_man_27__v0) {
        this->__PVT__ram_man_27[this->__Vdlyvdim0__ram_man_27__v0] 
            = this->__Vdlyvval__ram_man_27__v0;
    }
    if (this->__Vdlyvset__ram_man_26__v0) {
        this->__PVT__ram_man_26[this->__Vdlyvdim0__ram_man_26__v0] 
            = this->__Vdlyvval__ram_man_26__v0;
    }
    if (this->__Vdlyvset__ram_man_25__v0) {
        this->__PVT__ram_man_25[this->__Vdlyvdim0__ram_man_25__v0] 
            = this->__Vdlyvval__ram_man_25__v0;
    }
    if (this->__Vdlyvset__ram_man_24__v0) {
        this->__PVT__ram_man_24[this->__Vdlyvdim0__ram_man_24__v0] 
            = this->__Vdlyvval__ram_man_24__v0;
    }
    if (this->__Vdlyvset__ram_man_23__v0) {
        this->__PVT__ram_man_23[this->__Vdlyvdim0__ram_man_23__v0] 
            = this->__Vdlyvval__ram_man_23__v0;
    }
    if (this->__Vdlyvset__ram_man_22__v0) {
        this->__PVT__ram_man_22[this->__Vdlyvdim0__ram_man_22__v0] 
            = this->__Vdlyvval__ram_man_22__v0;
    }
    if (this->__Vdlyvset__ram_man_21__v0) {
        this->__PVT__ram_man_21[this->__Vdlyvdim0__ram_man_21__v0] 
            = this->__Vdlyvval__ram_man_21__v0;
    }
    if (this->__Vdlyvset__ram_man_20__v0) {
        this->__PVT__ram_man_20[this->__Vdlyvdim0__ram_man_20__v0] 
            = this->__Vdlyvval__ram_man_20__v0;
    }
    if (this->__Vdlyvset__ram_man_19__v0) {
        this->__PVT__ram_man_19[this->__Vdlyvdim0__ram_man_19__v0] 
            = this->__Vdlyvval__ram_man_19__v0;
    }
    if (this->__Vdlyvset__ram_man_7__v0) {
        this->__PVT__ram_man_7[this->__Vdlyvdim0__ram_man_7__v0] 
            = this->__Vdlyvval__ram_man_7__v0;
    }
    if (this->__Vdlyvset__ram_man_10__v0) {
        this->__PVT__ram_man_10[this->__Vdlyvdim0__ram_man_10__v0] 
            = this->__Vdlyvval__ram_man_10__v0;
    }
    if (this->__Vdlyvset__ram_man_6__v0) {
        this->__PVT__ram_man_6[this->__Vdlyvdim0__ram_man_6__v0] 
            = this->__Vdlyvval__ram_man_6__v0;
    }
    if (this->__Vdlyvset__ram_man_9__v0) {
        this->__PVT__ram_man_9[this->__Vdlyvdim0__ram_man_9__v0] 
            = this->__Vdlyvval__ram_man_9__v0;
    }
    if (this->__Vdlyvset__ram_man_5__v0) {
        this->__PVT__ram_man_5[this->__Vdlyvdim0__ram_man_5__v0] 
            = this->__Vdlyvval__ram_man_5__v0;
    }
    if (this->__Vdlyvset__ram_man_8__v0) {
        this->__PVT__ram_man_8[this->__Vdlyvdim0__ram_man_8__v0] 
            = this->__Vdlyvval__ram_man_8__v0;
    }
    if (this->__Vdlyvset__ram_man_4__v0) {
        this->__PVT__ram_man_4[this->__Vdlyvdim0__ram_man_4__v0] 
            = this->__Vdlyvval__ram_man_4__v0;
    }
    if (this->__Vdlyvset__ram_man_11__v0) {
        this->__PVT__ram_man_11[this->__Vdlyvdim0__ram_man_11__v0] 
            = this->__Vdlyvval__ram_man_11__v0;
    }
    if (this->__Vdlyvset__ram_man_12__v0) {
        this->__PVT__ram_man_12[this->__Vdlyvdim0__ram_man_12__v0] 
            = this->__Vdlyvval__ram_man_12__v0;
    }
    if (this->__Vdlyvset__ram_man_13__v0) {
        this->__PVT__ram_man_13[this->__Vdlyvdim0__ram_man_13__v0] 
            = this->__Vdlyvval__ram_man_13__v0;
    }
    if (this->__Vdlyvset__ram_man_14__v0) {
        this->__PVT__ram_man_14[this->__Vdlyvdim0__ram_man_14__v0] 
            = this->__Vdlyvval__ram_man_14__v0;
    }
    if (this->__Vdlyvset__ram_man_15__v0) {
        this->__PVT__ram_man_15[this->__Vdlyvdim0__ram_man_15__v0] 
            = this->__Vdlyvval__ram_man_15__v0;
    }
    if (this->__Vdlyvset__ram_man_16__v0) {
        this->__PVT__ram_man_16[this->__Vdlyvdim0__ram_man_16__v0] 
            = this->__Vdlyvval__ram_man_16__v0;
    }
    if (this->__Vdlyvset__ram_man_17__v0) {
        this->__PVT__ram_man_17[this->__Vdlyvdim0__ram_man_17__v0] 
            = this->__Vdlyvval__ram_man_17__v0;
    }
    if (this->__Vdlyvset__ram_man_18__v0) {
        this->__PVT__ram_man_18[this->__Vdlyvdim0__ram_man_18__v0] 
            = this->__Vdlyvval__ram_man_18__v0;
    }
    if (this->__Vdlyvset__ram_man_0__v0) {
        this->__PVT__ram_man_0[this->__Vdlyvdim0__ram_man_0__v0] 
            = this->__Vdlyvval__ram_man_0__v0;
    }
    if (this->__Vdlyvset__ram_man_1__v0) {
        this->__PVT__ram_man_1[this->__Vdlyvdim0__ram_man_1__v0] 
            = this->__Vdlyvval__ram_man_1__v0;
    }
    if (this->__Vdlyvset__ram_man_2__v0) {
        this->__PVT__ram_man_2[this->__Vdlyvdim0__ram_man_2__v0] 
            = this->__Vdlyvval__ram_man_2__v0;
    }
    if (this->__Vdlyvset__ram_man_3__v0) {
        this->__PVT__ram_man_3[this->__Vdlyvdim0__ram_man_3__v0] 
            = this->__Vdlyvval__ram_man_3__v0;
    }
    if (vlTOPp->reset) {
        this->__PVT__enq_ptr_value = 0U;
    } else {
        if ((1U & (~ (IData)(this->__PVT__full)))) {
            this->__PVT__enq_ptr_value = this->__PVT___value_T_1;
        }
    }
    this->__PVT___value_T_3 = (0xfU & ((IData)(1U) 
                                       + (IData)(this->__PVT__deq_ptr_value)));
    this->__PVT___value_T_1 = (0xfU & ((IData)(1U) 
                                       + (IData)(this->__PVT__enq_ptr_value)));
    this->__PVT__ptr_match = ((IData)(this->__PVT__enq_ptr_value) 
                              == (IData)(this->__PVT__deq_ptr_value));
    this->__PVT__full = ((IData)(this->__PVT__ptr_match) 
                         & (IData)(this->__PVT__maybe_full));
    this->__PVT__empty = ((IData)(this->__PVT__ptr_match) 
                          & (~ (IData)(this->__PVT__maybe_full)));
    this->__PVT__do_deq = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_11_io_deq_ready_r_11) 
                           & (~ (IData)(this->__PVT__empty)));
}

VL_INLINE_OPT void VSystolicArray_HBFP_forTesting_Queue::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_12__29(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_Queue::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_12__29\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vdlyvset__ram_exp__v0 = 0U;
    this->__Vdlyvset__ram_sign_28__v0 = 0U;
    this->__Vdlyvset__ram_sign_27__v0 = 0U;
    this->__Vdlyvset__ram_sign_29__v0 = 0U;
    this->__Vdlyvset__ram_sign_30__v0 = 0U;
    this->__Vdlyvset__ram_sign_31__v0 = 0U;
    this->__Vdlyvset__ram_sign_0__v0 = 0U;
    this->__Vdlyvset__ram_sign_1__v0 = 0U;
    this->__Vdlyvset__ram_sign_2__v0 = 0U;
    this->__Vdlyvset__ram_sign_3__v0 = 0U;
    this->__Vdlyvset__ram_sign_4__v0 = 0U;
    this->__Vdlyvset__ram_sign_5__v0 = 0U;
    this->__Vdlyvset__ram_sign_6__v0 = 0U;
    this->__Vdlyvset__ram_sign_7__v0 = 0U;
    this->__Vdlyvset__ram_sign_8__v0 = 0U;
    this->__Vdlyvset__ram_sign_9__v0 = 0U;
    this->__Vdlyvset__ram_sign_10__v0 = 0U;
    this->__Vdlyvset__ram_sign_11__v0 = 0U;
    this->__Vdlyvset__ram_sign_12__v0 = 0U;
    this->__Vdlyvset__ram_sign_13__v0 = 0U;
    this->__Vdlyvset__ram_sign_14__v0 = 0U;
    this->__Vdlyvset__ram_sign_15__v0 = 0U;
    this->__Vdlyvset__ram_sign_16__v0 = 0U;
    this->__Vdlyvset__ram_sign_17__v0 = 0U;
    this->__Vdlyvset__ram_sign_18__v0 = 0U;
    this->__Vdlyvset__ram_sign_19__v0 = 0U;
    this->__Vdlyvset__ram_sign_20__v0 = 0U;
    this->__Vdlyvset__ram_sign_21__v0 = 0U;
    this->__Vdlyvset__ram_sign_22__v0 = 0U;
    this->__Vdlyvset__ram_sign_23__v0 = 0U;
    this->__Vdlyvset__ram_sign_24__v0 = 0U;
    this->__Vdlyvset__ram_sign_25__v0 = 0U;
    this->__Vdlyvset__ram_sign_26__v0 = 0U;
    this->__Vdlyvset__ram_man_31__v0 = 0U;
    this->__Vdlyvset__ram_man_30__v0 = 0U;
    this->__Vdlyvset__ram_man_29__v0 = 0U;
    this->__Vdlyvset__ram_man_28__v0 = 0U;
    this->__Vdlyvset__ram_man_27__v0 = 0U;
    this->__Vdlyvset__ram_man_26__v0 = 0U;
    this->__Vdlyvset__ram_man_25__v0 = 0U;
    this->__Vdlyvset__ram_man_24__v0 = 0U;
    this->__Vdlyvset__ram_man_23__v0 = 0U;
    this->__Vdlyvset__ram_man_22__v0 = 0U;
    this->__Vdlyvset__ram_man_21__v0 = 0U;
    this->__Vdlyvset__ram_man_20__v0 = 0U;
    this->__Vdlyvset__ram_man_19__v0 = 0U;
    this->__Vdlyvset__ram_man_7__v0 = 0U;
    this->__Vdlyvset__ram_man_10__v0 = 0U;
    this->__Vdlyvset__ram_man_6__v0 = 0U;
    this->__Vdlyvset__ram_man_9__v0 = 0U;
    this->__Vdlyvset__ram_man_5__v0 = 0U;
    this->__Vdlyvset__ram_man_8__v0 = 0U;
    this->__Vdlyvset__ram_man_4__v0 = 0U;
    this->__Vdlyvset__ram_man_11__v0 = 0U;
    this->__Vdlyvset__ram_man_12__v0 = 0U;
    this->__Vdlyvset__ram_man_13__v0 = 0U;
    this->__Vdlyvset__ram_man_14__v0 = 0U;
    this->__Vdlyvset__ram_man_15__v0 = 0U;
    this->__Vdlyvset__ram_man_16__v0 = 0U;
    this->__Vdlyvset__ram_man_17__v0 = 0U;
    this->__Vdlyvset__ram_man_18__v0 = 0U;
    this->__Vdlyvset__ram_man_0__v0 = 0U;
    this->__Vdlyvset__ram_man_1__v0 = 0U;
    this->__Vdlyvset__ram_man_2__v0 = 0U;
    this->__Vdlyvset__ram_man_3__v0 = 0U;
    if (vlTOPp->reset) {
        this->__PVT__maybe_full = 0U;
    } else {
        if (((1U & (~ (IData)(this->__PVT__full))) 
             != (IData)(this->__PVT__do_deq))) {
            this->__PVT__maybe_full = (1U & (~ (IData)(this->__PVT__full)));
        }
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_exp__v0 = vlTOPp->io_in_ver_12_bits_exp;
        this->__Vdlyvset__ram_exp__v0 = 1U;
        this->__Vdlyvdim0__ram_exp__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_28__v0 = vlTOPp->io_in_ver_12_bits_sign_28;
        this->__Vdlyvset__ram_sign_28__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_28__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_27__v0 = vlTOPp->io_in_ver_12_bits_sign_27;
        this->__Vdlyvset__ram_sign_27__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_27__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_29__v0 = vlTOPp->io_in_ver_12_bits_sign_29;
        this->__Vdlyvset__ram_sign_29__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_29__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_30__v0 = vlTOPp->io_in_ver_12_bits_sign_30;
        this->__Vdlyvset__ram_sign_30__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_30__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_31__v0 = vlTOPp->io_in_ver_12_bits_sign_31;
        this->__Vdlyvset__ram_sign_31__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_31__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_0__v0 = vlTOPp->io_in_ver_12_bits_sign_0;
        this->__Vdlyvset__ram_sign_0__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_0__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_1__v0 = vlTOPp->io_in_ver_12_bits_sign_1;
        this->__Vdlyvset__ram_sign_1__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_1__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_2__v0 = vlTOPp->io_in_ver_12_bits_sign_2;
        this->__Vdlyvset__ram_sign_2__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_2__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_3__v0 = vlTOPp->io_in_ver_12_bits_sign_3;
        this->__Vdlyvset__ram_sign_3__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_3__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_4__v0 = vlTOPp->io_in_ver_12_bits_sign_4;
        this->__Vdlyvset__ram_sign_4__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_4__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_5__v0 = vlTOPp->io_in_ver_12_bits_sign_5;
        this->__Vdlyvset__ram_sign_5__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_5__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_6__v0 = vlTOPp->io_in_ver_12_bits_sign_6;
        this->__Vdlyvset__ram_sign_6__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_6__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_7__v0 = vlTOPp->io_in_ver_12_bits_sign_7;
        this->__Vdlyvset__ram_sign_7__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_7__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_8__v0 = vlTOPp->io_in_ver_12_bits_sign_8;
        this->__Vdlyvset__ram_sign_8__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_8__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_9__v0 = vlTOPp->io_in_ver_12_bits_sign_9;
        this->__Vdlyvset__ram_sign_9__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_9__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_10__v0 = vlTOPp->io_in_ver_12_bits_sign_10;
        this->__Vdlyvset__ram_sign_10__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_10__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_11__v0 = vlTOPp->io_in_ver_12_bits_sign_11;
        this->__Vdlyvset__ram_sign_11__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_11__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_12__v0 = vlTOPp->io_in_ver_12_bits_sign_12;
        this->__Vdlyvset__ram_sign_12__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_12__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_13__v0 = vlTOPp->io_in_ver_12_bits_sign_13;
        this->__Vdlyvset__ram_sign_13__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_13__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_14__v0 = vlTOPp->io_in_ver_12_bits_sign_14;
        this->__Vdlyvset__ram_sign_14__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_14__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_15__v0 = vlTOPp->io_in_ver_12_bits_sign_15;
        this->__Vdlyvset__ram_sign_15__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_15__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_16__v0 = vlTOPp->io_in_ver_12_bits_sign_16;
        this->__Vdlyvset__ram_sign_16__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_16__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_17__v0 = vlTOPp->io_in_ver_12_bits_sign_17;
        this->__Vdlyvset__ram_sign_17__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_17__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_18__v0 = vlTOPp->io_in_ver_12_bits_sign_18;
        this->__Vdlyvset__ram_sign_18__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_18__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_19__v0 = vlTOPp->io_in_ver_12_bits_sign_19;
        this->__Vdlyvset__ram_sign_19__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_19__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_20__v0 = vlTOPp->io_in_ver_12_bits_sign_20;
        this->__Vdlyvset__ram_sign_20__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_20__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_21__v0 = vlTOPp->io_in_ver_12_bits_sign_21;
        this->__Vdlyvset__ram_sign_21__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_21__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_22__v0 = vlTOPp->io_in_ver_12_bits_sign_22;
        this->__Vdlyvset__ram_sign_22__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_22__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_23__v0 = vlTOPp->io_in_ver_12_bits_sign_23;
        this->__Vdlyvset__ram_sign_23__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_23__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_24__v0 = vlTOPp->io_in_ver_12_bits_sign_24;
        this->__Vdlyvset__ram_sign_24__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_24__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_25__v0 = vlTOPp->io_in_ver_12_bits_sign_25;
        this->__Vdlyvset__ram_sign_25__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_25__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_26__v0 = vlTOPp->io_in_ver_12_bits_sign_26;
        this->__Vdlyvset__ram_sign_26__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_26__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_31__v0 = vlTOPp->io_in_ver_12_bits_man_31;
        this->__Vdlyvset__ram_man_31__v0 = 1U;
        this->__Vdlyvdim0__ram_man_31__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_30__v0 = vlTOPp->io_in_ver_12_bits_man_30;
        this->__Vdlyvset__ram_man_30__v0 = 1U;
        this->__Vdlyvdim0__ram_man_30__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_29__v0 = vlTOPp->io_in_ver_12_bits_man_29;
        this->__Vdlyvset__ram_man_29__v0 = 1U;
        this->__Vdlyvdim0__ram_man_29__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_28__v0 = vlTOPp->io_in_ver_12_bits_man_28;
        this->__Vdlyvset__ram_man_28__v0 = 1U;
        this->__Vdlyvdim0__ram_man_28__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_27__v0 = vlTOPp->io_in_ver_12_bits_man_27;
        this->__Vdlyvset__ram_man_27__v0 = 1U;
        this->__Vdlyvdim0__ram_man_27__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_26__v0 = vlTOPp->io_in_ver_12_bits_man_26;
        this->__Vdlyvset__ram_man_26__v0 = 1U;
        this->__Vdlyvdim0__ram_man_26__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_25__v0 = vlTOPp->io_in_ver_12_bits_man_25;
        this->__Vdlyvset__ram_man_25__v0 = 1U;
        this->__Vdlyvdim0__ram_man_25__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_24__v0 = vlTOPp->io_in_ver_12_bits_man_24;
        this->__Vdlyvset__ram_man_24__v0 = 1U;
        this->__Vdlyvdim0__ram_man_24__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_23__v0 = vlTOPp->io_in_ver_12_bits_man_23;
        this->__Vdlyvset__ram_man_23__v0 = 1U;
        this->__Vdlyvdim0__ram_man_23__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_22__v0 = vlTOPp->io_in_ver_12_bits_man_22;
        this->__Vdlyvset__ram_man_22__v0 = 1U;
        this->__Vdlyvdim0__ram_man_22__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_21__v0 = vlTOPp->io_in_ver_12_bits_man_21;
        this->__Vdlyvset__ram_man_21__v0 = 1U;
        this->__Vdlyvdim0__ram_man_21__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_20__v0 = vlTOPp->io_in_ver_12_bits_man_20;
        this->__Vdlyvset__ram_man_20__v0 = 1U;
        this->__Vdlyvdim0__ram_man_20__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_19__v0 = vlTOPp->io_in_ver_12_bits_man_19;
        this->__Vdlyvset__ram_man_19__v0 = 1U;
        this->__Vdlyvdim0__ram_man_19__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_7__v0 = vlTOPp->io_in_ver_12_bits_man_7;
        this->__Vdlyvset__ram_man_7__v0 = 1U;
        this->__Vdlyvdim0__ram_man_7__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_10__v0 = vlTOPp->io_in_ver_12_bits_man_10;
        this->__Vdlyvset__ram_man_10__v0 = 1U;
        this->__Vdlyvdim0__ram_man_10__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_6__v0 = vlTOPp->io_in_ver_12_bits_man_6;
        this->__Vdlyvset__ram_man_6__v0 = 1U;
        this->__Vdlyvdim0__ram_man_6__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_9__v0 = vlTOPp->io_in_ver_12_bits_man_9;
        this->__Vdlyvset__ram_man_9__v0 = 1U;
        this->__Vdlyvdim0__ram_man_9__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_5__v0 = vlTOPp->io_in_ver_12_bits_man_5;
        this->__Vdlyvset__ram_man_5__v0 = 1U;
        this->__Vdlyvdim0__ram_man_5__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_8__v0 = vlTOPp->io_in_ver_12_bits_man_8;
        this->__Vdlyvset__ram_man_8__v0 = 1U;
        this->__Vdlyvdim0__ram_man_8__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_4__v0 = vlTOPp->io_in_ver_12_bits_man_4;
        this->__Vdlyvset__ram_man_4__v0 = 1U;
        this->__Vdlyvdim0__ram_man_4__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_11__v0 = vlTOPp->io_in_ver_12_bits_man_11;
        this->__Vdlyvset__ram_man_11__v0 = 1U;
        this->__Vdlyvdim0__ram_man_11__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_12__v0 = vlTOPp->io_in_ver_12_bits_man_12;
        this->__Vdlyvset__ram_man_12__v0 = 1U;
        this->__Vdlyvdim0__ram_man_12__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_13__v0 = vlTOPp->io_in_ver_12_bits_man_13;
        this->__Vdlyvset__ram_man_13__v0 = 1U;
        this->__Vdlyvdim0__ram_man_13__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_14__v0 = vlTOPp->io_in_ver_12_bits_man_14;
        this->__Vdlyvset__ram_man_14__v0 = 1U;
        this->__Vdlyvdim0__ram_man_14__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_15__v0 = vlTOPp->io_in_ver_12_bits_man_15;
        this->__Vdlyvset__ram_man_15__v0 = 1U;
        this->__Vdlyvdim0__ram_man_15__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_16__v0 = vlTOPp->io_in_ver_12_bits_man_16;
        this->__Vdlyvset__ram_man_16__v0 = 1U;
        this->__Vdlyvdim0__ram_man_16__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_17__v0 = vlTOPp->io_in_ver_12_bits_man_17;
        this->__Vdlyvset__ram_man_17__v0 = 1U;
        this->__Vdlyvdim0__ram_man_17__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_18__v0 = vlTOPp->io_in_ver_12_bits_man_18;
        this->__Vdlyvset__ram_man_18__v0 = 1U;
        this->__Vdlyvdim0__ram_man_18__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_0__v0 = vlTOPp->io_in_ver_12_bits_man_0;
        this->__Vdlyvset__ram_man_0__v0 = 1U;
        this->__Vdlyvdim0__ram_man_0__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_1__v0 = vlTOPp->io_in_ver_12_bits_man_1;
        this->__Vdlyvset__ram_man_1__v0 = 1U;
        this->__Vdlyvdim0__ram_man_1__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_2__v0 = vlTOPp->io_in_ver_12_bits_man_2;
        this->__Vdlyvset__ram_man_2__v0 = 1U;
        this->__Vdlyvdim0__ram_man_2__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_3__v0 = vlTOPp->io_in_ver_12_bits_man_3;
        this->__Vdlyvset__ram_man_3__v0 = 1U;
        this->__Vdlyvdim0__ram_man_3__v0 = this->__PVT__enq_ptr_value;
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
    if (this->__Vdlyvset__ram_sign_28__v0) {
        this->__PVT__ram_sign_28[this->__Vdlyvdim0__ram_sign_28__v0] 
            = this->__Vdlyvval__ram_sign_28__v0;
    }
    if (this->__Vdlyvset__ram_sign_27__v0) {
        this->__PVT__ram_sign_27[this->__Vdlyvdim0__ram_sign_27__v0] 
            = this->__Vdlyvval__ram_sign_27__v0;
    }
    if (this->__Vdlyvset__ram_sign_29__v0) {
        this->__PVT__ram_sign_29[this->__Vdlyvdim0__ram_sign_29__v0] 
            = this->__Vdlyvval__ram_sign_29__v0;
    }
    if (this->__Vdlyvset__ram_sign_30__v0) {
        this->__PVT__ram_sign_30[this->__Vdlyvdim0__ram_sign_30__v0] 
            = this->__Vdlyvval__ram_sign_30__v0;
    }
    if (this->__Vdlyvset__ram_sign_31__v0) {
        this->__PVT__ram_sign_31[this->__Vdlyvdim0__ram_sign_31__v0] 
            = this->__Vdlyvval__ram_sign_31__v0;
    }
    if (this->__Vdlyvset__ram_sign_0__v0) {
        this->__PVT__ram_sign_0[this->__Vdlyvdim0__ram_sign_0__v0] 
            = this->__Vdlyvval__ram_sign_0__v0;
    }
    if (this->__Vdlyvset__ram_sign_1__v0) {
        this->__PVT__ram_sign_1[this->__Vdlyvdim0__ram_sign_1__v0] 
            = this->__Vdlyvval__ram_sign_1__v0;
    }
    if (this->__Vdlyvset__ram_sign_2__v0) {
        this->__PVT__ram_sign_2[this->__Vdlyvdim0__ram_sign_2__v0] 
            = this->__Vdlyvval__ram_sign_2__v0;
    }
    if (this->__Vdlyvset__ram_sign_3__v0) {
        this->__PVT__ram_sign_3[this->__Vdlyvdim0__ram_sign_3__v0] 
            = this->__Vdlyvval__ram_sign_3__v0;
    }
    if (this->__Vdlyvset__ram_sign_4__v0) {
        this->__PVT__ram_sign_4[this->__Vdlyvdim0__ram_sign_4__v0] 
            = this->__Vdlyvval__ram_sign_4__v0;
    }
    if (this->__Vdlyvset__ram_sign_5__v0) {
        this->__PVT__ram_sign_5[this->__Vdlyvdim0__ram_sign_5__v0] 
            = this->__Vdlyvval__ram_sign_5__v0;
    }
    if (this->__Vdlyvset__ram_sign_6__v0) {
        this->__PVT__ram_sign_6[this->__Vdlyvdim0__ram_sign_6__v0] 
            = this->__Vdlyvval__ram_sign_6__v0;
    }
    if (this->__Vdlyvset__ram_sign_7__v0) {
        this->__PVT__ram_sign_7[this->__Vdlyvdim0__ram_sign_7__v0] 
            = this->__Vdlyvval__ram_sign_7__v0;
    }
    if (this->__Vdlyvset__ram_sign_8__v0) {
        this->__PVT__ram_sign_8[this->__Vdlyvdim0__ram_sign_8__v0] 
            = this->__Vdlyvval__ram_sign_8__v0;
    }
    if (this->__Vdlyvset__ram_sign_9__v0) {
        this->__PVT__ram_sign_9[this->__Vdlyvdim0__ram_sign_9__v0] 
            = this->__Vdlyvval__ram_sign_9__v0;
    }
    if (this->__Vdlyvset__ram_sign_10__v0) {
        this->__PVT__ram_sign_10[this->__Vdlyvdim0__ram_sign_10__v0] 
            = this->__Vdlyvval__ram_sign_10__v0;
    }
    if (this->__Vdlyvset__ram_sign_11__v0) {
        this->__PVT__ram_sign_11[this->__Vdlyvdim0__ram_sign_11__v0] 
            = this->__Vdlyvval__ram_sign_11__v0;
    }
    if (this->__Vdlyvset__ram_sign_12__v0) {
        this->__PVT__ram_sign_12[this->__Vdlyvdim0__ram_sign_12__v0] 
            = this->__Vdlyvval__ram_sign_12__v0;
    }
    if (this->__Vdlyvset__ram_sign_13__v0) {
        this->__PVT__ram_sign_13[this->__Vdlyvdim0__ram_sign_13__v0] 
            = this->__Vdlyvval__ram_sign_13__v0;
    }
    if (this->__Vdlyvset__ram_sign_14__v0) {
        this->__PVT__ram_sign_14[this->__Vdlyvdim0__ram_sign_14__v0] 
            = this->__Vdlyvval__ram_sign_14__v0;
    }
    if (this->__Vdlyvset__ram_sign_15__v0) {
        this->__PVT__ram_sign_15[this->__Vdlyvdim0__ram_sign_15__v0] 
            = this->__Vdlyvval__ram_sign_15__v0;
    }
    if (this->__Vdlyvset__ram_sign_16__v0) {
        this->__PVT__ram_sign_16[this->__Vdlyvdim0__ram_sign_16__v0] 
            = this->__Vdlyvval__ram_sign_16__v0;
    }
    if (this->__Vdlyvset__ram_sign_17__v0) {
        this->__PVT__ram_sign_17[this->__Vdlyvdim0__ram_sign_17__v0] 
            = this->__Vdlyvval__ram_sign_17__v0;
    }
    if (this->__Vdlyvset__ram_sign_18__v0) {
        this->__PVT__ram_sign_18[this->__Vdlyvdim0__ram_sign_18__v0] 
            = this->__Vdlyvval__ram_sign_18__v0;
    }
    if (this->__Vdlyvset__ram_sign_19__v0) {
        this->__PVT__ram_sign_19[this->__Vdlyvdim0__ram_sign_19__v0] 
            = this->__Vdlyvval__ram_sign_19__v0;
    }
    if (this->__Vdlyvset__ram_sign_20__v0) {
        this->__PVT__ram_sign_20[this->__Vdlyvdim0__ram_sign_20__v0] 
            = this->__Vdlyvval__ram_sign_20__v0;
    }
    if (this->__Vdlyvset__ram_sign_21__v0) {
        this->__PVT__ram_sign_21[this->__Vdlyvdim0__ram_sign_21__v0] 
            = this->__Vdlyvval__ram_sign_21__v0;
    }
    if (this->__Vdlyvset__ram_sign_22__v0) {
        this->__PVT__ram_sign_22[this->__Vdlyvdim0__ram_sign_22__v0] 
            = this->__Vdlyvval__ram_sign_22__v0;
    }
    if (this->__Vdlyvset__ram_sign_23__v0) {
        this->__PVT__ram_sign_23[this->__Vdlyvdim0__ram_sign_23__v0] 
            = this->__Vdlyvval__ram_sign_23__v0;
    }
    if (this->__Vdlyvset__ram_sign_24__v0) {
        this->__PVT__ram_sign_24[this->__Vdlyvdim0__ram_sign_24__v0] 
            = this->__Vdlyvval__ram_sign_24__v0;
    }
    if (this->__Vdlyvset__ram_sign_25__v0) {
        this->__PVT__ram_sign_25[this->__Vdlyvdim0__ram_sign_25__v0] 
            = this->__Vdlyvval__ram_sign_25__v0;
    }
    if (this->__Vdlyvset__ram_sign_26__v0) {
        this->__PVT__ram_sign_26[this->__Vdlyvdim0__ram_sign_26__v0] 
            = this->__Vdlyvval__ram_sign_26__v0;
    }
    if (this->__Vdlyvset__ram_man_31__v0) {
        this->__PVT__ram_man_31[this->__Vdlyvdim0__ram_man_31__v0] 
            = this->__Vdlyvval__ram_man_31__v0;
    }
    if (this->__Vdlyvset__ram_man_30__v0) {
        this->__PVT__ram_man_30[this->__Vdlyvdim0__ram_man_30__v0] 
            = this->__Vdlyvval__ram_man_30__v0;
    }
    if (this->__Vdlyvset__ram_man_29__v0) {
        this->__PVT__ram_man_29[this->__Vdlyvdim0__ram_man_29__v0] 
            = this->__Vdlyvval__ram_man_29__v0;
    }
    if (this->__Vdlyvset__ram_man_28__v0) {
        this->__PVT__ram_man_28[this->__Vdlyvdim0__ram_man_28__v0] 
            = this->__Vdlyvval__ram_man_28__v0;
    }
    if (this->__Vdlyvset__ram_man_27__v0) {
        this->__PVT__ram_man_27[this->__Vdlyvdim0__ram_man_27__v0] 
            = this->__Vdlyvval__ram_man_27__v0;
    }
    if (this->__Vdlyvset__ram_man_26__v0) {
        this->__PVT__ram_man_26[this->__Vdlyvdim0__ram_man_26__v0] 
            = this->__Vdlyvval__ram_man_26__v0;
    }
    if (this->__Vdlyvset__ram_man_25__v0) {
        this->__PVT__ram_man_25[this->__Vdlyvdim0__ram_man_25__v0] 
            = this->__Vdlyvval__ram_man_25__v0;
    }
    if (this->__Vdlyvset__ram_man_24__v0) {
        this->__PVT__ram_man_24[this->__Vdlyvdim0__ram_man_24__v0] 
            = this->__Vdlyvval__ram_man_24__v0;
    }
    if (this->__Vdlyvset__ram_man_23__v0) {
        this->__PVT__ram_man_23[this->__Vdlyvdim0__ram_man_23__v0] 
            = this->__Vdlyvval__ram_man_23__v0;
    }
    if (this->__Vdlyvset__ram_man_22__v0) {
        this->__PVT__ram_man_22[this->__Vdlyvdim0__ram_man_22__v0] 
            = this->__Vdlyvval__ram_man_22__v0;
    }
    if (this->__Vdlyvset__ram_man_21__v0) {
        this->__PVT__ram_man_21[this->__Vdlyvdim0__ram_man_21__v0] 
            = this->__Vdlyvval__ram_man_21__v0;
    }
    if (this->__Vdlyvset__ram_man_20__v0) {
        this->__PVT__ram_man_20[this->__Vdlyvdim0__ram_man_20__v0] 
            = this->__Vdlyvval__ram_man_20__v0;
    }
    if (this->__Vdlyvset__ram_man_19__v0) {
        this->__PVT__ram_man_19[this->__Vdlyvdim0__ram_man_19__v0] 
            = this->__Vdlyvval__ram_man_19__v0;
    }
    if (this->__Vdlyvset__ram_man_7__v0) {
        this->__PVT__ram_man_7[this->__Vdlyvdim0__ram_man_7__v0] 
            = this->__Vdlyvval__ram_man_7__v0;
    }
    if (this->__Vdlyvset__ram_man_10__v0) {
        this->__PVT__ram_man_10[this->__Vdlyvdim0__ram_man_10__v0] 
            = this->__Vdlyvval__ram_man_10__v0;
    }
    if (this->__Vdlyvset__ram_man_6__v0) {
        this->__PVT__ram_man_6[this->__Vdlyvdim0__ram_man_6__v0] 
            = this->__Vdlyvval__ram_man_6__v0;
    }
    if (this->__Vdlyvset__ram_man_9__v0) {
        this->__PVT__ram_man_9[this->__Vdlyvdim0__ram_man_9__v0] 
            = this->__Vdlyvval__ram_man_9__v0;
    }
    if (this->__Vdlyvset__ram_man_5__v0) {
        this->__PVT__ram_man_5[this->__Vdlyvdim0__ram_man_5__v0] 
            = this->__Vdlyvval__ram_man_5__v0;
    }
    if (this->__Vdlyvset__ram_man_8__v0) {
        this->__PVT__ram_man_8[this->__Vdlyvdim0__ram_man_8__v0] 
            = this->__Vdlyvval__ram_man_8__v0;
    }
    if (this->__Vdlyvset__ram_man_4__v0) {
        this->__PVT__ram_man_4[this->__Vdlyvdim0__ram_man_4__v0] 
            = this->__Vdlyvval__ram_man_4__v0;
    }
    if (this->__Vdlyvset__ram_man_11__v0) {
        this->__PVT__ram_man_11[this->__Vdlyvdim0__ram_man_11__v0] 
            = this->__Vdlyvval__ram_man_11__v0;
    }
    if (this->__Vdlyvset__ram_man_12__v0) {
        this->__PVT__ram_man_12[this->__Vdlyvdim0__ram_man_12__v0] 
            = this->__Vdlyvval__ram_man_12__v0;
    }
    if (this->__Vdlyvset__ram_man_13__v0) {
        this->__PVT__ram_man_13[this->__Vdlyvdim0__ram_man_13__v0] 
            = this->__Vdlyvval__ram_man_13__v0;
    }
    if (this->__Vdlyvset__ram_man_14__v0) {
        this->__PVT__ram_man_14[this->__Vdlyvdim0__ram_man_14__v0] 
            = this->__Vdlyvval__ram_man_14__v0;
    }
    if (this->__Vdlyvset__ram_man_15__v0) {
        this->__PVT__ram_man_15[this->__Vdlyvdim0__ram_man_15__v0] 
            = this->__Vdlyvval__ram_man_15__v0;
    }
    if (this->__Vdlyvset__ram_man_16__v0) {
        this->__PVT__ram_man_16[this->__Vdlyvdim0__ram_man_16__v0] 
            = this->__Vdlyvval__ram_man_16__v0;
    }
    if (this->__Vdlyvset__ram_man_17__v0) {
        this->__PVT__ram_man_17[this->__Vdlyvdim0__ram_man_17__v0] 
            = this->__Vdlyvval__ram_man_17__v0;
    }
    if (this->__Vdlyvset__ram_man_18__v0) {
        this->__PVT__ram_man_18[this->__Vdlyvdim0__ram_man_18__v0] 
            = this->__Vdlyvval__ram_man_18__v0;
    }
    if (this->__Vdlyvset__ram_man_0__v0) {
        this->__PVT__ram_man_0[this->__Vdlyvdim0__ram_man_0__v0] 
            = this->__Vdlyvval__ram_man_0__v0;
    }
    if (this->__Vdlyvset__ram_man_1__v0) {
        this->__PVT__ram_man_1[this->__Vdlyvdim0__ram_man_1__v0] 
            = this->__Vdlyvval__ram_man_1__v0;
    }
    if (this->__Vdlyvset__ram_man_2__v0) {
        this->__PVT__ram_man_2[this->__Vdlyvdim0__ram_man_2__v0] 
            = this->__Vdlyvval__ram_man_2__v0;
    }
    if (this->__Vdlyvset__ram_man_3__v0) {
        this->__PVT__ram_man_3[this->__Vdlyvdim0__ram_man_3__v0] 
            = this->__Vdlyvval__ram_man_3__v0;
    }
    if (vlTOPp->reset) {
        this->__PVT__enq_ptr_value = 0U;
    } else {
        if ((1U & (~ (IData)(this->__PVT__full)))) {
            this->__PVT__enq_ptr_value = this->__PVT___value_T_1;
        }
    }
    this->__PVT___value_T_3 = (0xfU & ((IData)(1U) 
                                       + (IData)(this->__PVT__deq_ptr_value)));
    this->__PVT___value_T_1 = (0xfU & ((IData)(1U) 
                                       + (IData)(this->__PVT__enq_ptr_value)));
    this->__PVT__ptr_match = ((IData)(this->__PVT__enq_ptr_value) 
                              == (IData)(this->__PVT__deq_ptr_value));
    this->__PVT__full = ((IData)(this->__PVT__ptr_match) 
                         & (IData)(this->__PVT__maybe_full));
    this->__PVT__empty = ((IData)(this->__PVT__ptr_match) 
                          & (~ (IData)(this->__PVT__maybe_full)));
    this->__PVT__do_deq = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_12_io_deq_ready_r_12) 
                           & (~ (IData)(this->__PVT__empty)));
}

VL_INLINE_OPT void VSystolicArray_HBFP_forTesting_Queue::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_13__30(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_Queue::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_13__30\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vdlyvset__ram_exp__v0 = 0U;
    this->__Vdlyvset__ram_sign_28__v0 = 0U;
    this->__Vdlyvset__ram_sign_27__v0 = 0U;
    this->__Vdlyvset__ram_sign_29__v0 = 0U;
    this->__Vdlyvset__ram_sign_30__v0 = 0U;
    this->__Vdlyvset__ram_sign_31__v0 = 0U;
    this->__Vdlyvset__ram_sign_0__v0 = 0U;
    this->__Vdlyvset__ram_sign_1__v0 = 0U;
    this->__Vdlyvset__ram_sign_2__v0 = 0U;
    this->__Vdlyvset__ram_sign_3__v0 = 0U;
    this->__Vdlyvset__ram_sign_4__v0 = 0U;
    this->__Vdlyvset__ram_sign_5__v0 = 0U;
    this->__Vdlyvset__ram_sign_6__v0 = 0U;
    this->__Vdlyvset__ram_sign_7__v0 = 0U;
    this->__Vdlyvset__ram_sign_8__v0 = 0U;
    this->__Vdlyvset__ram_sign_9__v0 = 0U;
    this->__Vdlyvset__ram_sign_10__v0 = 0U;
    this->__Vdlyvset__ram_sign_11__v0 = 0U;
    this->__Vdlyvset__ram_sign_12__v0 = 0U;
    this->__Vdlyvset__ram_sign_13__v0 = 0U;
    this->__Vdlyvset__ram_sign_14__v0 = 0U;
    this->__Vdlyvset__ram_sign_15__v0 = 0U;
    this->__Vdlyvset__ram_sign_16__v0 = 0U;
    this->__Vdlyvset__ram_sign_17__v0 = 0U;
    this->__Vdlyvset__ram_sign_18__v0 = 0U;
    this->__Vdlyvset__ram_sign_19__v0 = 0U;
    this->__Vdlyvset__ram_sign_20__v0 = 0U;
    this->__Vdlyvset__ram_sign_21__v0 = 0U;
    this->__Vdlyvset__ram_sign_22__v0 = 0U;
    this->__Vdlyvset__ram_sign_23__v0 = 0U;
    this->__Vdlyvset__ram_sign_24__v0 = 0U;
    this->__Vdlyvset__ram_sign_25__v0 = 0U;
    this->__Vdlyvset__ram_sign_26__v0 = 0U;
    this->__Vdlyvset__ram_man_31__v0 = 0U;
    this->__Vdlyvset__ram_man_30__v0 = 0U;
    this->__Vdlyvset__ram_man_29__v0 = 0U;
    this->__Vdlyvset__ram_man_28__v0 = 0U;
    this->__Vdlyvset__ram_man_27__v0 = 0U;
    this->__Vdlyvset__ram_man_26__v0 = 0U;
    this->__Vdlyvset__ram_man_25__v0 = 0U;
    this->__Vdlyvset__ram_man_24__v0 = 0U;
    this->__Vdlyvset__ram_man_23__v0 = 0U;
    this->__Vdlyvset__ram_man_22__v0 = 0U;
    this->__Vdlyvset__ram_man_21__v0 = 0U;
    this->__Vdlyvset__ram_man_20__v0 = 0U;
    this->__Vdlyvset__ram_man_19__v0 = 0U;
    this->__Vdlyvset__ram_man_7__v0 = 0U;
    this->__Vdlyvset__ram_man_10__v0 = 0U;
    this->__Vdlyvset__ram_man_6__v0 = 0U;
    this->__Vdlyvset__ram_man_9__v0 = 0U;
    this->__Vdlyvset__ram_man_5__v0 = 0U;
    this->__Vdlyvset__ram_man_8__v0 = 0U;
    this->__Vdlyvset__ram_man_4__v0 = 0U;
    this->__Vdlyvset__ram_man_11__v0 = 0U;
    this->__Vdlyvset__ram_man_12__v0 = 0U;
    this->__Vdlyvset__ram_man_13__v0 = 0U;
    this->__Vdlyvset__ram_man_14__v0 = 0U;
    this->__Vdlyvset__ram_man_15__v0 = 0U;
    this->__Vdlyvset__ram_man_16__v0 = 0U;
    this->__Vdlyvset__ram_man_17__v0 = 0U;
    this->__Vdlyvset__ram_man_18__v0 = 0U;
    this->__Vdlyvset__ram_man_0__v0 = 0U;
    this->__Vdlyvset__ram_man_1__v0 = 0U;
    this->__Vdlyvset__ram_man_2__v0 = 0U;
    this->__Vdlyvset__ram_man_3__v0 = 0U;
    if (vlTOPp->reset) {
        this->__PVT__maybe_full = 0U;
    } else {
        if (((1U & (~ (IData)(this->__PVT__full))) 
             != (IData)(this->__PVT__do_deq))) {
            this->__PVT__maybe_full = (1U & (~ (IData)(this->__PVT__full)));
        }
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_exp__v0 = vlTOPp->io_in_ver_13_bits_exp;
        this->__Vdlyvset__ram_exp__v0 = 1U;
        this->__Vdlyvdim0__ram_exp__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_28__v0 = vlTOPp->io_in_ver_13_bits_sign_28;
        this->__Vdlyvset__ram_sign_28__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_28__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_27__v0 = vlTOPp->io_in_ver_13_bits_sign_27;
        this->__Vdlyvset__ram_sign_27__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_27__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_29__v0 = vlTOPp->io_in_ver_13_bits_sign_29;
        this->__Vdlyvset__ram_sign_29__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_29__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_30__v0 = vlTOPp->io_in_ver_13_bits_sign_30;
        this->__Vdlyvset__ram_sign_30__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_30__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_31__v0 = vlTOPp->io_in_ver_13_bits_sign_31;
        this->__Vdlyvset__ram_sign_31__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_31__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_0__v0 = vlTOPp->io_in_ver_13_bits_sign_0;
        this->__Vdlyvset__ram_sign_0__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_0__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_1__v0 = vlTOPp->io_in_ver_13_bits_sign_1;
        this->__Vdlyvset__ram_sign_1__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_1__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_2__v0 = vlTOPp->io_in_ver_13_bits_sign_2;
        this->__Vdlyvset__ram_sign_2__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_2__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_3__v0 = vlTOPp->io_in_ver_13_bits_sign_3;
        this->__Vdlyvset__ram_sign_3__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_3__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_4__v0 = vlTOPp->io_in_ver_13_bits_sign_4;
        this->__Vdlyvset__ram_sign_4__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_4__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_5__v0 = vlTOPp->io_in_ver_13_bits_sign_5;
        this->__Vdlyvset__ram_sign_5__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_5__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_6__v0 = vlTOPp->io_in_ver_13_bits_sign_6;
        this->__Vdlyvset__ram_sign_6__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_6__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_7__v0 = vlTOPp->io_in_ver_13_bits_sign_7;
        this->__Vdlyvset__ram_sign_7__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_7__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_8__v0 = vlTOPp->io_in_ver_13_bits_sign_8;
        this->__Vdlyvset__ram_sign_8__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_8__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_9__v0 = vlTOPp->io_in_ver_13_bits_sign_9;
        this->__Vdlyvset__ram_sign_9__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_9__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_10__v0 = vlTOPp->io_in_ver_13_bits_sign_10;
        this->__Vdlyvset__ram_sign_10__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_10__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_11__v0 = vlTOPp->io_in_ver_13_bits_sign_11;
        this->__Vdlyvset__ram_sign_11__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_11__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_12__v0 = vlTOPp->io_in_ver_13_bits_sign_12;
        this->__Vdlyvset__ram_sign_12__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_12__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_13__v0 = vlTOPp->io_in_ver_13_bits_sign_13;
        this->__Vdlyvset__ram_sign_13__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_13__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_14__v0 = vlTOPp->io_in_ver_13_bits_sign_14;
        this->__Vdlyvset__ram_sign_14__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_14__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_15__v0 = vlTOPp->io_in_ver_13_bits_sign_15;
        this->__Vdlyvset__ram_sign_15__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_15__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_16__v0 = vlTOPp->io_in_ver_13_bits_sign_16;
        this->__Vdlyvset__ram_sign_16__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_16__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_17__v0 = vlTOPp->io_in_ver_13_bits_sign_17;
        this->__Vdlyvset__ram_sign_17__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_17__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_18__v0 = vlTOPp->io_in_ver_13_bits_sign_18;
        this->__Vdlyvset__ram_sign_18__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_18__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_19__v0 = vlTOPp->io_in_ver_13_bits_sign_19;
        this->__Vdlyvset__ram_sign_19__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_19__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_20__v0 = vlTOPp->io_in_ver_13_bits_sign_20;
        this->__Vdlyvset__ram_sign_20__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_20__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_21__v0 = vlTOPp->io_in_ver_13_bits_sign_21;
        this->__Vdlyvset__ram_sign_21__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_21__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_22__v0 = vlTOPp->io_in_ver_13_bits_sign_22;
        this->__Vdlyvset__ram_sign_22__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_22__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_23__v0 = vlTOPp->io_in_ver_13_bits_sign_23;
        this->__Vdlyvset__ram_sign_23__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_23__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_24__v0 = vlTOPp->io_in_ver_13_bits_sign_24;
        this->__Vdlyvset__ram_sign_24__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_24__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_25__v0 = vlTOPp->io_in_ver_13_bits_sign_25;
        this->__Vdlyvset__ram_sign_25__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_25__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_26__v0 = vlTOPp->io_in_ver_13_bits_sign_26;
        this->__Vdlyvset__ram_sign_26__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_26__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_31__v0 = vlTOPp->io_in_ver_13_bits_man_31;
        this->__Vdlyvset__ram_man_31__v0 = 1U;
        this->__Vdlyvdim0__ram_man_31__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_30__v0 = vlTOPp->io_in_ver_13_bits_man_30;
        this->__Vdlyvset__ram_man_30__v0 = 1U;
        this->__Vdlyvdim0__ram_man_30__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_29__v0 = vlTOPp->io_in_ver_13_bits_man_29;
        this->__Vdlyvset__ram_man_29__v0 = 1U;
        this->__Vdlyvdim0__ram_man_29__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_28__v0 = vlTOPp->io_in_ver_13_bits_man_28;
        this->__Vdlyvset__ram_man_28__v0 = 1U;
        this->__Vdlyvdim0__ram_man_28__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_27__v0 = vlTOPp->io_in_ver_13_bits_man_27;
        this->__Vdlyvset__ram_man_27__v0 = 1U;
        this->__Vdlyvdim0__ram_man_27__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_26__v0 = vlTOPp->io_in_ver_13_bits_man_26;
        this->__Vdlyvset__ram_man_26__v0 = 1U;
        this->__Vdlyvdim0__ram_man_26__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_25__v0 = vlTOPp->io_in_ver_13_bits_man_25;
        this->__Vdlyvset__ram_man_25__v0 = 1U;
        this->__Vdlyvdim0__ram_man_25__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_24__v0 = vlTOPp->io_in_ver_13_bits_man_24;
        this->__Vdlyvset__ram_man_24__v0 = 1U;
        this->__Vdlyvdim0__ram_man_24__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_23__v0 = vlTOPp->io_in_ver_13_bits_man_23;
        this->__Vdlyvset__ram_man_23__v0 = 1U;
        this->__Vdlyvdim0__ram_man_23__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_22__v0 = vlTOPp->io_in_ver_13_bits_man_22;
        this->__Vdlyvset__ram_man_22__v0 = 1U;
        this->__Vdlyvdim0__ram_man_22__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_21__v0 = vlTOPp->io_in_ver_13_bits_man_21;
        this->__Vdlyvset__ram_man_21__v0 = 1U;
        this->__Vdlyvdim0__ram_man_21__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_20__v0 = vlTOPp->io_in_ver_13_bits_man_20;
        this->__Vdlyvset__ram_man_20__v0 = 1U;
        this->__Vdlyvdim0__ram_man_20__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_19__v0 = vlTOPp->io_in_ver_13_bits_man_19;
        this->__Vdlyvset__ram_man_19__v0 = 1U;
        this->__Vdlyvdim0__ram_man_19__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_7__v0 = vlTOPp->io_in_ver_13_bits_man_7;
        this->__Vdlyvset__ram_man_7__v0 = 1U;
        this->__Vdlyvdim0__ram_man_7__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_10__v0 = vlTOPp->io_in_ver_13_bits_man_10;
        this->__Vdlyvset__ram_man_10__v0 = 1U;
        this->__Vdlyvdim0__ram_man_10__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_6__v0 = vlTOPp->io_in_ver_13_bits_man_6;
        this->__Vdlyvset__ram_man_6__v0 = 1U;
        this->__Vdlyvdim0__ram_man_6__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_9__v0 = vlTOPp->io_in_ver_13_bits_man_9;
        this->__Vdlyvset__ram_man_9__v0 = 1U;
        this->__Vdlyvdim0__ram_man_9__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_5__v0 = vlTOPp->io_in_ver_13_bits_man_5;
        this->__Vdlyvset__ram_man_5__v0 = 1U;
        this->__Vdlyvdim0__ram_man_5__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_8__v0 = vlTOPp->io_in_ver_13_bits_man_8;
        this->__Vdlyvset__ram_man_8__v0 = 1U;
        this->__Vdlyvdim0__ram_man_8__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_4__v0 = vlTOPp->io_in_ver_13_bits_man_4;
        this->__Vdlyvset__ram_man_4__v0 = 1U;
        this->__Vdlyvdim0__ram_man_4__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_11__v0 = vlTOPp->io_in_ver_13_bits_man_11;
        this->__Vdlyvset__ram_man_11__v0 = 1U;
        this->__Vdlyvdim0__ram_man_11__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_12__v0 = vlTOPp->io_in_ver_13_bits_man_12;
        this->__Vdlyvset__ram_man_12__v0 = 1U;
        this->__Vdlyvdim0__ram_man_12__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_13__v0 = vlTOPp->io_in_ver_13_bits_man_13;
        this->__Vdlyvset__ram_man_13__v0 = 1U;
        this->__Vdlyvdim0__ram_man_13__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_14__v0 = vlTOPp->io_in_ver_13_bits_man_14;
        this->__Vdlyvset__ram_man_14__v0 = 1U;
        this->__Vdlyvdim0__ram_man_14__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_15__v0 = vlTOPp->io_in_ver_13_bits_man_15;
        this->__Vdlyvset__ram_man_15__v0 = 1U;
        this->__Vdlyvdim0__ram_man_15__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_16__v0 = vlTOPp->io_in_ver_13_bits_man_16;
        this->__Vdlyvset__ram_man_16__v0 = 1U;
        this->__Vdlyvdim0__ram_man_16__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_17__v0 = vlTOPp->io_in_ver_13_bits_man_17;
        this->__Vdlyvset__ram_man_17__v0 = 1U;
        this->__Vdlyvdim0__ram_man_17__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_18__v0 = vlTOPp->io_in_ver_13_bits_man_18;
        this->__Vdlyvset__ram_man_18__v0 = 1U;
        this->__Vdlyvdim0__ram_man_18__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_0__v0 = vlTOPp->io_in_ver_13_bits_man_0;
        this->__Vdlyvset__ram_man_0__v0 = 1U;
        this->__Vdlyvdim0__ram_man_0__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_1__v0 = vlTOPp->io_in_ver_13_bits_man_1;
        this->__Vdlyvset__ram_man_1__v0 = 1U;
        this->__Vdlyvdim0__ram_man_1__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_2__v0 = vlTOPp->io_in_ver_13_bits_man_2;
        this->__Vdlyvset__ram_man_2__v0 = 1U;
        this->__Vdlyvdim0__ram_man_2__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_3__v0 = vlTOPp->io_in_ver_13_bits_man_3;
        this->__Vdlyvset__ram_man_3__v0 = 1U;
        this->__Vdlyvdim0__ram_man_3__v0 = this->__PVT__enq_ptr_value;
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
    if (this->__Vdlyvset__ram_sign_28__v0) {
        this->__PVT__ram_sign_28[this->__Vdlyvdim0__ram_sign_28__v0] 
            = this->__Vdlyvval__ram_sign_28__v0;
    }
    if (this->__Vdlyvset__ram_sign_27__v0) {
        this->__PVT__ram_sign_27[this->__Vdlyvdim0__ram_sign_27__v0] 
            = this->__Vdlyvval__ram_sign_27__v0;
    }
    if (this->__Vdlyvset__ram_sign_29__v0) {
        this->__PVT__ram_sign_29[this->__Vdlyvdim0__ram_sign_29__v0] 
            = this->__Vdlyvval__ram_sign_29__v0;
    }
    if (this->__Vdlyvset__ram_sign_30__v0) {
        this->__PVT__ram_sign_30[this->__Vdlyvdim0__ram_sign_30__v0] 
            = this->__Vdlyvval__ram_sign_30__v0;
    }
    if (this->__Vdlyvset__ram_sign_31__v0) {
        this->__PVT__ram_sign_31[this->__Vdlyvdim0__ram_sign_31__v0] 
            = this->__Vdlyvval__ram_sign_31__v0;
    }
    if (this->__Vdlyvset__ram_sign_0__v0) {
        this->__PVT__ram_sign_0[this->__Vdlyvdim0__ram_sign_0__v0] 
            = this->__Vdlyvval__ram_sign_0__v0;
    }
    if (this->__Vdlyvset__ram_sign_1__v0) {
        this->__PVT__ram_sign_1[this->__Vdlyvdim0__ram_sign_1__v0] 
            = this->__Vdlyvval__ram_sign_1__v0;
    }
    if (this->__Vdlyvset__ram_sign_2__v0) {
        this->__PVT__ram_sign_2[this->__Vdlyvdim0__ram_sign_2__v0] 
            = this->__Vdlyvval__ram_sign_2__v0;
    }
    if (this->__Vdlyvset__ram_sign_3__v0) {
        this->__PVT__ram_sign_3[this->__Vdlyvdim0__ram_sign_3__v0] 
            = this->__Vdlyvval__ram_sign_3__v0;
    }
    if (this->__Vdlyvset__ram_sign_4__v0) {
        this->__PVT__ram_sign_4[this->__Vdlyvdim0__ram_sign_4__v0] 
            = this->__Vdlyvval__ram_sign_4__v0;
    }
    if (this->__Vdlyvset__ram_sign_5__v0) {
        this->__PVT__ram_sign_5[this->__Vdlyvdim0__ram_sign_5__v0] 
            = this->__Vdlyvval__ram_sign_5__v0;
    }
    if (this->__Vdlyvset__ram_sign_6__v0) {
        this->__PVT__ram_sign_6[this->__Vdlyvdim0__ram_sign_6__v0] 
            = this->__Vdlyvval__ram_sign_6__v0;
    }
    if (this->__Vdlyvset__ram_sign_7__v0) {
        this->__PVT__ram_sign_7[this->__Vdlyvdim0__ram_sign_7__v0] 
            = this->__Vdlyvval__ram_sign_7__v0;
    }
    if (this->__Vdlyvset__ram_sign_8__v0) {
        this->__PVT__ram_sign_8[this->__Vdlyvdim0__ram_sign_8__v0] 
            = this->__Vdlyvval__ram_sign_8__v0;
    }
    if (this->__Vdlyvset__ram_sign_9__v0) {
        this->__PVT__ram_sign_9[this->__Vdlyvdim0__ram_sign_9__v0] 
            = this->__Vdlyvval__ram_sign_9__v0;
    }
    if (this->__Vdlyvset__ram_sign_10__v0) {
        this->__PVT__ram_sign_10[this->__Vdlyvdim0__ram_sign_10__v0] 
            = this->__Vdlyvval__ram_sign_10__v0;
    }
    if (this->__Vdlyvset__ram_sign_11__v0) {
        this->__PVT__ram_sign_11[this->__Vdlyvdim0__ram_sign_11__v0] 
            = this->__Vdlyvval__ram_sign_11__v0;
    }
    if (this->__Vdlyvset__ram_sign_12__v0) {
        this->__PVT__ram_sign_12[this->__Vdlyvdim0__ram_sign_12__v0] 
            = this->__Vdlyvval__ram_sign_12__v0;
    }
    if (this->__Vdlyvset__ram_sign_13__v0) {
        this->__PVT__ram_sign_13[this->__Vdlyvdim0__ram_sign_13__v0] 
            = this->__Vdlyvval__ram_sign_13__v0;
    }
    if (this->__Vdlyvset__ram_sign_14__v0) {
        this->__PVT__ram_sign_14[this->__Vdlyvdim0__ram_sign_14__v0] 
            = this->__Vdlyvval__ram_sign_14__v0;
    }
    if (this->__Vdlyvset__ram_sign_15__v0) {
        this->__PVT__ram_sign_15[this->__Vdlyvdim0__ram_sign_15__v0] 
            = this->__Vdlyvval__ram_sign_15__v0;
    }
    if (this->__Vdlyvset__ram_sign_16__v0) {
        this->__PVT__ram_sign_16[this->__Vdlyvdim0__ram_sign_16__v0] 
            = this->__Vdlyvval__ram_sign_16__v0;
    }
    if (this->__Vdlyvset__ram_sign_17__v0) {
        this->__PVT__ram_sign_17[this->__Vdlyvdim0__ram_sign_17__v0] 
            = this->__Vdlyvval__ram_sign_17__v0;
    }
    if (this->__Vdlyvset__ram_sign_18__v0) {
        this->__PVT__ram_sign_18[this->__Vdlyvdim0__ram_sign_18__v0] 
            = this->__Vdlyvval__ram_sign_18__v0;
    }
    if (this->__Vdlyvset__ram_sign_19__v0) {
        this->__PVT__ram_sign_19[this->__Vdlyvdim0__ram_sign_19__v0] 
            = this->__Vdlyvval__ram_sign_19__v0;
    }
    if (this->__Vdlyvset__ram_sign_20__v0) {
        this->__PVT__ram_sign_20[this->__Vdlyvdim0__ram_sign_20__v0] 
            = this->__Vdlyvval__ram_sign_20__v0;
    }
    if (this->__Vdlyvset__ram_sign_21__v0) {
        this->__PVT__ram_sign_21[this->__Vdlyvdim0__ram_sign_21__v0] 
            = this->__Vdlyvval__ram_sign_21__v0;
    }
    if (this->__Vdlyvset__ram_sign_22__v0) {
        this->__PVT__ram_sign_22[this->__Vdlyvdim0__ram_sign_22__v0] 
            = this->__Vdlyvval__ram_sign_22__v0;
    }
    if (this->__Vdlyvset__ram_sign_23__v0) {
        this->__PVT__ram_sign_23[this->__Vdlyvdim0__ram_sign_23__v0] 
            = this->__Vdlyvval__ram_sign_23__v0;
    }
    if (this->__Vdlyvset__ram_sign_24__v0) {
        this->__PVT__ram_sign_24[this->__Vdlyvdim0__ram_sign_24__v0] 
            = this->__Vdlyvval__ram_sign_24__v0;
    }
    if (this->__Vdlyvset__ram_sign_25__v0) {
        this->__PVT__ram_sign_25[this->__Vdlyvdim0__ram_sign_25__v0] 
            = this->__Vdlyvval__ram_sign_25__v0;
    }
    if (this->__Vdlyvset__ram_sign_26__v0) {
        this->__PVT__ram_sign_26[this->__Vdlyvdim0__ram_sign_26__v0] 
            = this->__Vdlyvval__ram_sign_26__v0;
    }
    if (this->__Vdlyvset__ram_man_31__v0) {
        this->__PVT__ram_man_31[this->__Vdlyvdim0__ram_man_31__v0] 
            = this->__Vdlyvval__ram_man_31__v0;
    }
    if (this->__Vdlyvset__ram_man_30__v0) {
        this->__PVT__ram_man_30[this->__Vdlyvdim0__ram_man_30__v0] 
            = this->__Vdlyvval__ram_man_30__v0;
    }
    if (this->__Vdlyvset__ram_man_29__v0) {
        this->__PVT__ram_man_29[this->__Vdlyvdim0__ram_man_29__v0] 
            = this->__Vdlyvval__ram_man_29__v0;
    }
    if (this->__Vdlyvset__ram_man_28__v0) {
        this->__PVT__ram_man_28[this->__Vdlyvdim0__ram_man_28__v0] 
            = this->__Vdlyvval__ram_man_28__v0;
    }
    if (this->__Vdlyvset__ram_man_27__v0) {
        this->__PVT__ram_man_27[this->__Vdlyvdim0__ram_man_27__v0] 
            = this->__Vdlyvval__ram_man_27__v0;
    }
    if (this->__Vdlyvset__ram_man_26__v0) {
        this->__PVT__ram_man_26[this->__Vdlyvdim0__ram_man_26__v0] 
            = this->__Vdlyvval__ram_man_26__v0;
    }
    if (this->__Vdlyvset__ram_man_25__v0) {
        this->__PVT__ram_man_25[this->__Vdlyvdim0__ram_man_25__v0] 
            = this->__Vdlyvval__ram_man_25__v0;
    }
    if (this->__Vdlyvset__ram_man_24__v0) {
        this->__PVT__ram_man_24[this->__Vdlyvdim0__ram_man_24__v0] 
            = this->__Vdlyvval__ram_man_24__v0;
    }
    if (this->__Vdlyvset__ram_man_23__v0) {
        this->__PVT__ram_man_23[this->__Vdlyvdim0__ram_man_23__v0] 
            = this->__Vdlyvval__ram_man_23__v0;
    }
    if (this->__Vdlyvset__ram_man_22__v0) {
        this->__PVT__ram_man_22[this->__Vdlyvdim0__ram_man_22__v0] 
            = this->__Vdlyvval__ram_man_22__v0;
    }
    if (this->__Vdlyvset__ram_man_21__v0) {
        this->__PVT__ram_man_21[this->__Vdlyvdim0__ram_man_21__v0] 
            = this->__Vdlyvval__ram_man_21__v0;
    }
    if (this->__Vdlyvset__ram_man_20__v0) {
        this->__PVT__ram_man_20[this->__Vdlyvdim0__ram_man_20__v0] 
            = this->__Vdlyvval__ram_man_20__v0;
    }
    if (this->__Vdlyvset__ram_man_19__v0) {
        this->__PVT__ram_man_19[this->__Vdlyvdim0__ram_man_19__v0] 
            = this->__Vdlyvval__ram_man_19__v0;
    }
    if (this->__Vdlyvset__ram_man_7__v0) {
        this->__PVT__ram_man_7[this->__Vdlyvdim0__ram_man_7__v0] 
            = this->__Vdlyvval__ram_man_7__v0;
    }
    if (this->__Vdlyvset__ram_man_10__v0) {
        this->__PVT__ram_man_10[this->__Vdlyvdim0__ram_man_10__v0] 
            = this->__Vdlyvval__ram_man_10__v0;
    }
    if (this->__Vdlyvset__ram_man_6__v0) {
        this->__PVT__ram_man_6[this->__Vdlyvdim0__ram_man_6__v0] 
            = this->__Vdlyvval__ram_man_6__v0;
    }
    if (this->__Vdlyvset__ram_man_9__v0) {
        this->__PVT__ram_man_9[this->__Vdlyvdim0__ram_man_9__v0] 
            = this->__Vdlyvval__ram_man_9__v0;
    }
    if (this->__Vdlyvset__ram_man_5__v0) {
        this->__PVT__ram_man_5[this->__Vdlyvdim0__ram_man_5__v0] 
            = this->__Vdlyvval__ram_man_5__v0;
    }
    if (this->__Vdlyvset__ram_man_8__v0) {
        this->__PVT__ram_man_8[this->__Vdlyvdim0__ram_man_8__v0] 
            = this->__Vdlyvval__ram_man_8__v0;
    }
    if (this->__Vdlyvset__ram_man_4__v0) {
        this->__PVT__ram_man_4[this->__Vdlyvdim0__ram_man_4__v0] 
            = this->__Vdlyvval__ram_man_4__v0;
    }
    if (this->__Vdlyvset__ram_man_11__v0) {
        this->__PVT__ram_man_11[this->__Vdlyvdim0__ram_man_11__v0] 
            = this->__Vdlyvval__ram_man_11__v0;
    }
    if (this->__Vdlyvset__ram_man_12__v0) {
        this->__PVT__ram_man_12[this->__Vdlyvdim0__ram_man_12__v0] 
            = this->__Vdlyvval__ram_man_12__v0;
    }
    if (this->__Vdlyvset__ram_man_13__v0) {
        this->__PVT__ram_man_13[this->__Vdlyvdim0__ram_man_13__v0] 
            = this->__Vdlyvval__ram_man_13__v0;
    }
    if (this->__Vdlyvset__ram_man_14__v0) {
        this->__PVT__ram_man_14[this->__Vdlyvdim0__ram_man_14__v0] 
            = this->__Vdlyvval__ram_man_14__v0;
    }
    if (this->__Vdlyvset__ram_man_15__v0) {
        this->__PVT__ram_man_15[this->__Vdlyvdim0__ram_man_15__v0] 
            = this->__Vdlyvval__ram_man_15__v0;
    }
    if (this->__Vdlyvset__ram_man_16__v0) {
        this->__PVT__ram_man_16[this->__Vdlyvdim0__ram_man_16__v0] 
            = this->__Vdlyvval__ram_man_16__v0;
    }
    if (this->__Vdlyvset__ram_man_17__v0) {
        this->__PVT__ram_man_17[this->__Vdlyvdim0__ram_man_17__v0] 
            = this->__Vdlyvval__ram_man_17__v0;
    }
    if (this->__Vdlyvset__ram_man_18__v0) {
        this->__PVT__ram_man_18[this->__Vdlyvdim0__ram_man_18__v0] 
            = this->__Vdlyvval__ram_man_18__v0;
    }
    if (this->__Vdlyvset__ram_man_0__v0) {
        this->__PVT__ram_man_0[this->__Vdlyvdim0__ram_man_0__v0] 
            = this->__Vdlyvval__ram_man_0__v0;
    }
    if (this->__Vdlyvset__ram_man_1__v0) {
        this->__PVT__ram_man_1[this->__Vdlyvdim0__ram_man_1__v0] 
            = this->__Vdlyvval__ram_man_1__v0;
    }
    if (this->__Vdlyvset__ram_man_2__v0) {
        this->__PVT__ram_man_2[this->__Vdlyvdim0__ram_man_2__v0] 
            = this->__Vdlyvval__ram_man_2__v0;
    }
    if (this->__Vdlyvset__ram_man_3__v0) {
        this->__PVT__ram_man_3[this->__Vdlyvdim0__ram_man_3__v0] 
            = this->__Vdlyvval__ram_man_3__v0;
    }
    if (vlTOPp->reset) {
        this->__PVT__enq_ptr_value = 0U;
    } else {
        if ((1U & (~ (IData)(this->__PVT__full)))) {
            this->__PVT__enq_ptr_value = this->__PVT___value_T_1;
        }
    }
    this->__PVT___value_T_3 = (0xfU & ((IData)(1U) 
                                       + (IData)(this->__PVT__deq_ptr_value)));
    this->__PVT___value_T_1 = (0xfU & ((IData)(1U) 
                                       + (IData)(this->__PVT__enq_ptr_value)));
    this->__PVT__ptr_match = ((IData)(this->__PVT__enq_ptr_value) 
                              == (IData)(this->__PVT__deq_ptr_value));
    this->__PVT__full = ((IData)(this->__PVT__ptr_match) 
                         & (IData)(this->__PVT__maybe_full));
    this->__PVT__empty = ((IData)(this->__PVT__ptr_match) 
                          & (~ (IData)(this->__PVT__maybe_full)));
    this->__PVT__do_deq = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_13_io_deq_ready_r_13) 
                           & (~ (IData)(this->__PVT__empty)));
}

VL_INLINE_OPT void VSystolicArray_HBFP_forTesting_Queue::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_14__31(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_Queue::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_14__31\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vdlyvset__ram_exp__v0 = 0U;
    this->__Vdlyvset__ram_sign_28__v0 = 0U;
    this->__Vdlyvset__ram_sign_27__v0 = 0U;
    this->__Vdlyvset__ram_sign_29__v0 = 0U;
    this->__Vdlyvset__ram_sign_30__v0 = 0U;
    this->__Vdlyvset__ram_sign_31__v0 = 0U;
    this->__Vdlyvset__ram_sign_0__v0 = 0U;
    this->__Vdlyvset__ram_sign_1__v0 = 0U;
    this->__Vdlyvset__ram_sign_2__v0 = 0U;
    this->__Vdlyvset__ram_sign_3__v0 = 0U;
    this->__Vdlyvset__ram_sign_4__v0 = 0U;
    this->__Vdlyvset__ram_sign_5__v0 = 0U;
    this->__Vdlyvset__ram_sign_6__v0 = 0U;
    this->__Vdlyvset__ram_sign_7__v0 = 0U;
    this->__Vdlyvset__ram_sign_8__v0 = 0U;
    this->__Vdlyvset__ram_sign_9__v0 = 0U;
    this->__Vdlyvset__ram_sign_10__v0 = 0U;
    this->__Vdlyvset__ram_sign_11__v0 = 0U;
    this->__Vdlyvset__ram_sign_12__v0 = 0U;
    this->__Vdlyvset__ram_sign_13__v0 = 0U;
    this->__Vdlyvset__ram_sign_14__v0 = 0U;
    this->__Vdlyvset__ram_sign_15__v0 = 0U;
    this->__Vdlyvset__ram_sign_16__v0 = 0U;
    this->__Vdlyvset__ram_sign_17__v0 = 0U;
    this->__Vdlyvset__ram_sign_18__v0 = 0U;
    this->__Vdlyvset__ram_sign_19__v0 = 0U;
    this->__Vdlyvset__ram_sign_20__v0 = 0U;
    this->__Vdlyvset__ram_sign_21__v0 = 0U;
    this->__Vdlyvset__ram_sign_22__v0 = 0U;
    this->__Vdlyvset__ram_sign_23__v0 = 0U;
    this->__Vdlyvset__ram_sign_24__v0 = 0U;
    this->__Vdlyvset__ram_sign_25__v0 = 0U;
    this->__Vdlyvset__ram_sign_26__v0 = 0U;
    this->__Vdlyvset__ram_man_31__v0 = 0U;
    this->__Vdlyvset__ram_man_30__v0 = 0U;
    this->__Vdlyvset__ram_man_29__v0 = 0U;
    this->__Vdlyvset__ram_man_28__v0 = 0U;
    this->__Vdlyvset__ram_man_27__v0 = 0U;
    this->__Vdlyvset__ram_man_26__v0 = 0U;
    this->__Vdlyvset__ram_man_25__v0 = 0U;
    this->__Vdlyvset__ram_man_24__v0 = 0U;
    this->__Vdlyvset__ram_man_23__v0 = 0U;
    this->__Vdlyvset__ram_man_22__v0 = 0U;
    this->__Vdlyvset__ram_man_21__v0 = 0U;
    this->__Vdlyvset__ram_man_20__v0 = 0U;
    this->__Vdlyvset__ram_man_19__v0 = 0U;
    this->__Vdlyvset__ram_man_7__v0 = 0U;
    this->__Vdlyvset__ram_man_10__v0 = 0U;
    this->__Vdlyvset__ram_man_6__v0 = 0U;
    this->__Vdlyvset__ram_man_9__v0 = 0U;
    this->__Vdlyvset__ram_man_5__v0 = 0U;
    this->__Vdlyvset__ram_man_8__v0 = 0U;
    this->__Vdlyvset__ram_man_4__v0 = 0U;
    this->__Vdlyvset__ram_man_11__v0 = 0U;
    this->__Vdlyvset__ram_man_12__v0 = 0U;
    this->__Vdlyvset__ram_man_13__v0 = 0U;
    this->__Vdlyvset__ram_man_14__v0 = 0U;
    this->__Vdlyvset__ram_man_15__v0 = 0U;
    this->__Vdlyvset__ram_man_16__v0 = 0U;
    this->__Vdlyvset__ram_man_17__v0 = 0U;
    this->__Vdlyvset__ram_man_18__v0 = 0U;
    this->__Vdlyvset__ram_man_0__v0 = 0U;
    this->__Vdlyvset__ram_man_1__v0 = 0U;
    this->__Vdlyvset__ram_man_2__v0 = 0U;
    this->__Vdlyvset__ram_man_3__v0 = 0U;
    if (vlTOPp->reset) {
        this->__PVT__maybe_full = 0U;
    } else {
        if (((1U & (~ (IData)(this->__PVT__full))) 
             != (IData)(this->__PVT__do_deq))) {
            this->__PVT__maybe_full = (1U & (~ (IData)(this->__PVT__full)));
        }
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_exp__v0 = vlTOPp->io_in_ver_14_bits_exp;
        this->__Vdlyvset__ram_exp__v0 = 1U;
        this->__Vdlyvdim0__ram_exp__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_28__v0 = vlTOPp->io_in_ver_14_bits_sign_28;
        this->__Vdlyvset__ram_sign_28__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_28__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_27__v0 = vlTOPp->io_in_ver_14_bits_sign_27;
        this->__Vdlyvset__ram_sign_27__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_27__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_29__v0 = vlTOPp->io_in_ver_14_bits_sign_29;
        this->__Vdlyvset__ram_sign_29__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_29__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_30__v0 = vlTOPp->io_in_ver_14_bits_sign_30;
        this->__Vdlyvset__ram_sign_30__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_30__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_31__v0 = vlTOPp->io_in_ver_14_bits_sign_31;
        this->__Vdlyvset__ram_sign_31__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_31__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_0__v0 = vlTOPp->io_in_ver_14_bits_sign_0;
        this->__Vdlyvset__ram_sign_0__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_0__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_1__v0 = vlTOPp->io_in_ver_14_bits_sign_1;
        this->__Vdlyvset__ram_sign_1__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_1__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_2__v0 = vlTOPp->io_in_ver_14_bits_sign_2;
        this->__Vdlyvset__ram_sign_2__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_2__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_3__v0 = vlTOPp->io_in_ver_14_bits_sign_3;
        this->__Vdlyvset__ram_sign_3__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_3__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_4__v0 = vlTOPp->io_in_ver_14_bits_sign_4;
        this->__Vdlyvset__ram_sign_4__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_4__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_5__v0 = vlTOPp->io_in_ver_14_bits_sign_5;
        this->__Vdlyvset__ram_sign_5__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_5__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_6__v0 = vlTOPp->io_in_ver_14_bits_sign_6;
        this->__Vdlyvset__ram_sign_6__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_6__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_7__v0 = vlTOPp->io_in_ver_14_bits_sign_7;
        this->__Vdlyvset__ram_sign_7__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_7__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_8__v0 = vlTOPp->io_in_ver_14_bits_sign_8;
        this->__Vdlyvset__ram_sign_8__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_8__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_9__v0 = vlTOPp->io_in_ver_14_bits_sign_9;
        this->__Vdlyvset__ram_sign_9__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_9__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_10__v0 = vlTOPp->io_in_ver_14_bits_sign_10;
        this->__Vdlyvset__ram_sign_10__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_10__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_11__v0 = vlTOPp->io_in_ver_14_bits_sign_11;
        this->__Vdlyvset__ram_sign_11__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_11__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_12__v0 = vlTOPp->io_in_ver_14_bits_sign_12;
        this->__Vdlyvset__ram_sign_12__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_12__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_13__v0 = vlTOPp->io_in_ver_14_bits_sign_13;
        this->__Vdlyvset__ram_sign_13__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_13__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_14__v0 = vlTOPp->io_in_ver_14_bits_sign_14;
        this->__Vdlyvset__ram_sign_14__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_14__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_15__v0 = vlTOPp->io_in_ver_14_bits_sign_15;
        this->__Vdlyvset__ram_sign_15__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_15__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_16__v0 = vlTOPp->io_in_ver_14_bits_sign_16;
        this->__Vdlyvset__ram_sign_16__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_16__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_17__v0 = vlTOPp->io_in_ver_14_bits_sign_17;
        this->__Vdlyvset__ram_sign_17__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_17__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_18__v0 = vlTOPp->io_in_ver_14_bits_sign_18;
        this->__Vdlyvset__ram_sign_18__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_18__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_19__v0 = vlTOPp->io_in_ver_14_bits_sign_19;
        this->__Vdlyvset__ram_sign_19__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_19__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_20__v0 = vlTOPp->io_in_ver_14_bits_sign_20;
        this->__Vdlyvset__ram_sign_20__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_20__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_21__v0 = vlTOPp->io_in_ver_14_bits_sign_21;
        this->__Vdlyvset__ram_sign_21__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_21__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_22__v0 = vlTOPp->io_in_ver_14_bits_sign_22;
        this->__Vdlyvset__ram_sign_22__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_22__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_23__v0 = vlTOPp->io_in_ver_14_bits_sign_23;
        this->__Vdlyvset__ram_sign_23__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_23__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_24__v0 = vlTOPp->io_in_ver_14_bits_sign_24;
        this->__Vdlyvset__ram_sign_24__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_24__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_25__v0 = vlTOPp->io_in_ver_14_bits_sign_25;
        this->__Vdlyvset__ram_sign_25__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_25__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_26__v0 = vlTOPp->io_in_ver_14_bits_sign_26;
        this->__Vdlyvset__ram_sign_26__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_26__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_31__v0 = vlTOPp->io_in_ver_14_bits_man_31;
        this->__Vdlyvset__ram_man_31__v0 = 1U;
        this->__Vdlyvdim0__ram_man_31__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_30__v0 = vlTOPp->io_in_ver_14_bits_man_30;
        this->__Vdlyvset__ram_man_30__v0 = 1U;
        this->__Vdlyvdim0__ram_man_30__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_29__v0 = vlTOPp->io_in_ver_14_bits_man_29;
        this->__Vdlyvset__ram_man_29__v0 = 1U;
        this->__Vdlyvdim0__ram_man_29__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_28__v0 = vlTOPp->io_in_ver_14_bits_man_28;
        this->__Vdlyvset__ram_man_28__v0 = 1U;
        this->__Vdlyvdim0__ram_man_28__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_27__v0 = vlTOPp->io_in_ver_14_bits_man_27;
        this->__Vdlyvset__ram_man_27__v0 = 1U;
        this->__Vdlyvdim0__ram_man_27__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_26__v0 = vlTOPp->io_in_ver_14_bits_man_26;
        this->__Vdlyvset__ram_man_26__v0 = 1U;
        this->__Vdlyvdim0__ram_man_26__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_25__v0 = vlTOPp->io_in_ver_14_bits_man_25;
        this->__Vdlyvset__ram_man_25__v0 = 1U;
        this->__Vdlyvdim0__ram_man_25__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_24__v0 = vlTOPp->io_in_ver_14_bits_man_24;
        this->__Vdlyvset__ram_man_24__v0 = 1U;
        this->__Vdlyvdim0__ram_man_24__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_23__v0 = vlTOPp->io_in_ver_14_bits_man_23;
        this->__Vdlyvset__ram_man_23__v0 = 1U;
        this->__Vdlyvdim0__ram_man_23__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_22__v0 = vlTOPp->io_in_ver_14_bits_man_22;
        this->__Vdlyvset__ram_man_22__v0 = 1U;
        this->__Vdlyvdim0__ram_man_22__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_21__v0 = vlTOPp->io_in_ver_14_bits_man_21;
        this->__Vdlyvset__ram_man_21__v0 = 1U;
        this->__Vdlyvdim0__ram_man_21__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_20__v0 = vlTOPp->io_in_ver_14_bits_man_20;
        this->__Vdlyvset__ram_man_20__v0 = 1U;
        this->__Vdlyvdim0__ram_man_20__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_19__v0 = vlTOPp->io_in_ver_14_bits_man_19;
        this->__Vdlyvset__ram_man_19__v0 = 1U;
        this->__Vdlyvdim0__ram_man_19__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_7__v0 = vlTOPp->io_in_ver_14_bits_man_7;
        this->__Vdlyvset__ram_man_7__v0 = 1U;
        this->__Vdlyvdim0__ram_man_7__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_10__v0 = vlTOPp->io_in_ver_14_bits_man_10;
        this->__Vdlyvset__ram_man_10__v0 = 1U;
        this->__Vdlyvdim0__ram_man_10__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_6__v0 = vlTOPp->io_in_ver_14_bits_man_6;
        this->__Vdlyvset__ram_man_6__v0 = 1U;
        this->__Vdlyvdim0__ram_man_6__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_9__v0 = vlTOPp->io_in_ver_14_bits_man_9;
        this->__Vdlyvset__ram_man_9__v0 = 1U;
        this->__Vdlyvdim0__ram_man_9__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_5__v0 = vlTOPp->io_in_ver_14_bits_man_5;
        this->__Vdlyvset__ram_man_5__v0 = 1U;
        this->__Vdlyvdim0__ram_man_5__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_8__v0 = vlTOPp->io_in_ver_14_bits_man_8;
        this->__Vdlyvset__ram_man_8__v0 = 1U;
        this->__Vdlyvdim0__ram_man_8__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_4__v0 = vlTOPp->io_in_ver_14_bits_man_4;
        this->__Vdlyvset__ram_man_4__v0 = 1U;
        this->__Vdlyvdim0__ram_man_4__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_11__v0 = vlTOPp->io_in_ver_14_bits_man_11;
        this->__Vdlyvset__ram_man_11__v0 = 1U;
        this->__Vdlyvdim0__ram_man_11__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_12__v0 = vlTOPp->io_in_ver_14_bits_man_12;
        this->__Vdlyvset__ram_man_12__v0 = 1U;
        this->__Vdlyvdim0__ram_man_12__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_13__v0 = vlTOPp->io_in_ver_14_bits_man_13;
        this->__Vdlyvset__ram_man_13__v0 = 1U;
        this->__Vdlyvdim0__ram_man_13__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_14__v0 = vlTOPp->io_in_ver_14_bits_man_14;
        this->__Vdlyvset__ram_man_14__v0 = 1U;
        this->__Vdlyvdim0__ram_man_14__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_15__v0 = vlTOPp->io_in_ver_14_bits_man_15;
        this->__Vdlyvset__ram_man_15__v0 = 1U;
        this->__Vdlyvdim0__ram_man_15__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_16__v0 = vlTOPp->io_in_ver_14_bits_man_16;
        this->__Vdlyvset__ram_man_16__v0 = 1U;
        this->__Vdlyvdim0__ram_man_16__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_17__v0 = vlTOPp->io_in_ver_14_bits_man_17;
        this->__Vdlyvset__ram_man_17__v0 = 1U;
        this->__Vdlyvdim0__ram_man_17__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_18__v0 = vlTOPp->io_in_ver_14_bits_man_18;
        this->__Vdlyvset__ram_man_18__v0 = 1U;
        this->__Vdlyvdim0__ram_man_18__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_0__v0 = vlTOPp->io_in_ver_14_bits_man_0;
        this->__Vdlyvset__ram_man_0__v0 = 1U;
        this->__Vdlyvdim0__ram_man_0__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_1__v0 = vlTOPp->io_in_ver_14_bits_man_1;
        this->__Vdlyvset__ram_man_1__v0 = 1U;
        this->__Vdlyvdim0__ram_man_1__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_2__v0 = vlTOPp->io_in_ver_14_bits_man_2;
        this->__Vdlyvset__ram_man_2__v0 = 1U;
        this->__Vdlyvdim0__ram_man_2__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_3__v0 = vlTOPp->io_in_ver_14_bits_man_3;
        this->__Vdlyvset__ram_man_3__v0 = 1U;
        this->__Vdlyvdim0__ram_man_3__v0 = this->__PVT__enq_ptr_value;
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
    if (this->__Vdlyvset__ram_sign_28__v0) {
        this->__PVT__ram_sign_28[this->__Vdlyvdim0__ram_sign_28__v0] 
            = this->__Vdlyvval__ram_sign_28__v0;
    }
    if (this->__Vdlyvset__ram_sign_27__v0) {
        this->__PVT__ram_sign_27[this->__Vdlyvdim0__ram_sign_27__v0] 
            = this->__Vdlyvval__ram_sign_27__v0;
    }
    if (this->__Vdlyvset__ram_sign_29__v0) {
        this->__PVT__ram_sign_29[this->__Vdlyvdim0__ram_sign_29__v0] 
            = this->__Vdlyvval__ram_sign_29__v0;
    }
    if (this->__Vdlyvset__ram_sign_30__v0) {
        this->__PVT__ram_sign_30[this->__Vdlyvdim0__ram_sign_30__v0] 
            = this->__Vdlyvval__ram_sign_30__v0;
    }
    if (this->__Vdlyvset__ram_sign_31__v0) {
        this->__PVT__ram_sign_31[this->__Vdlyvdim0__ram_sign_31__v0] 
            = this->__Vdlyvval__ram_sign_31__v0;
    }
    if (this->__Vdlyvset__ram_sign_0__v0) {
        this->__PVT__ram_sign_0[this->__Vdlyvdim0__ram_sign_0__v0] 
            = this->__Vdlyvval__ram_sign_0__v0;
    }
    if (this->__Vdlyvset__ram_sign_1__v0) {
        this->__PVT__ram_sign_1[this->__Vdlyvdim0__ram_sign_1__v0] 
            = this->__Vdlyvval__ram_sign_1__v0;
    }
    if (this->__Vdlyvset__ram_sign_2__v0) {
        this->__PVT__ram_sign_2[this->__Vdlyvdim0__ram_sign_2__v0] 
            = this->__Vdlyvval__ram_sign_2__v0;
    }
    if (this->__Vdlyvset__ram_sign_3__v0) {
        this->__PVT__ram_sign_3[this->__Vdlyvdim0__ram_sign_3__v0] 
            = this->__Vdlyvval__ram_sign_3__v0;
    }
    if (this->__Vdlyvset__ram_sign_4__v0) {
        this->__PVT__ram_sign_4[this->__Vdlyvdim0__ram_sign_4__v0] 
            = this->__Vdlyvval__ram_sign_4__v0;
    }
    if (this->__Vdlyvset__ram_sign_5__v0) {
        this->__PVT__ram_sign_5[this->__Vdlyvdim0__ram_sign_5__v0] 
            = this->__Vdlyvval__ram_sign_5__v0;
    }
    if (this->__Vdlyvset__ram_sign_6__v0) {
        this->__PVT__ram_sign_6[this->__Vdlyvdim0__ram_sign_6__v0] 
            = this->__Vdlyvval__ram_sign_6__v0;
    }
    if (this->__Vdlyvset__ram_sign_7__v0) {
        this->__PVT__ram_sign_7[this->__Vdlyvdim0__ram_sign_7__v0] 
            = this->__Vdlyvval__ram_sign_7__v0;
    }
    if (this->__Vdlyvset__ram_sign_8__v0) {
        this->__PVT__ram_sign_8[this->__Vdlyvdim0__ram_sign_8__v0] 
            = this->__Vdlyvval__ram_sign_8__v0;
    }
    if (this->__Vdlyvset__ram_sign_9__v0) {
        this->__PVT__ram_sign_9[this->__Vdlyvdim0__ram_sign_9__v0] 
            = this->__Vdlyvval__ram_sign_9__v0;
    }
    if (this->__Vdlyvset__ram_sign_10__v0) {
        this->__PVT__ram_sign_10[this->__Vdlyvdim0__ram_sign_10__v0] 
            = this->__Vdlyvval__ram_sign_10__v0;
    }
    if (this->__Vdlyvset__ram_sign_11__v0) {
        this->__PVT__ram_sign_11[this->__Vdlyvdim0__ram_sign_11__v0] 
            = this->__Vdlyvval__ram_sign_11__v0;
    }
    if (this->__Vdlyvset__ram_sign_12__v0) {
        this->__PVT__ram_sign_12[this->__Vdlyvdim0__ram_sign_12__v0] 
            = this->__Vdlyvval__ram_sign_12__v0;
    }
    if (this->__Vdlyvset__ram_sign_13__v0) {
        this->__PVT__ram_sign_13[this->__Vdlyvdim0__ram_sign_13__v0] 
            = this->__Vdlyvval__ram_sign_13__v0;
    }
    if (this->__Vdlyvset__ram_sign_14__v0) {
        this->__PVT__ram_sign_14[this->__Vdlyvdim0__ram_sign_14__v0] 
            = this->__Vdlyvval__ram_sign_14__v0;
    }
    if (this->__Vdlyvset__ram_sign_15__v0) {
        this->__PVT__ram_sign_15[this->__Vdlyvdim0__ram_sign_15__v0] 
            = this->__Vdlyvval__ram_sign_15__v0;
    }
    if (this->__Vdlyvset__ram_sign_16__v0) {
        this->__PVT__ram_sign_16[this->__Vdlyvdim0__ram_sign_16__v0] 
            = this->__Vdlyvval__ram_sign_16__v0;
    }
    if (this->__Vdlyvset__ram_sign_17__v0) {
        this->__PVT__ram_sign_17[this->__Vdlyvdim0__ram_sign_17__v0] 
            = this->__Vdlyvval__ram_sign_17__v0;
    }
    if (this->__Vdlyvset__ram_sign_18__v0) {
        this->__PVT__ram_sign_18[this->__Vdlyvdim0__ram_sign_18__v0] 
            = this->__Vdlyvval__ram_sign_18__v0;
    }
    if (this->__Vdlyvset__ram_sign_19__v0) {
        this->__PVT__ram_sign_19[this->__Vdlyvdim0__ram_sign_19__v0] 
            = this->__Vdlyvval__ram_sign_19__v0;
    }
    if (this->__Vdlyvset__ram_sign_20__v0) {
        this->__PVT__ram_sign_20[this->__Vdlyvdim0__ram_sign_20__v0] 
            = this->__Vdlyvval__ram_sign_20__v0;
    }
    if (this->__Vdlyvset__ram_sign_21__v0) {
        this->__PVT__ram_sign_21[this->__Vdlyvdim0__ram_sign_21__v0] 
            = this->__Vdlyvval__ram_sign_21__v0;
    }
    if (this->__Vdlyvset__ram_sign_22__v0) {
        this->__PVT__ram_sign_22[this->__Vdlyvdim0__ram_sign_22__v0] 
            = this->__Vdlyvval__ram_sign_22__v0;
    }
    if (this->__Vdlyvset__ram_sign_23__v0) {
        this->__PVT__ram_sign_23[this->__Vdlyvdim0__ram_sign_23__v0] 
            = this->__Vdlyvval__ram_sign_23__v0;
    }
    if (this->__Vdlyvset__ram_sign_24__v0) {
        this->__PVT__ram_sign_24[this->__Vdlyvdim0__ram_sign_24__v0] 
            = this->__Vdlyvval__ram_sign_24__v0;
    }
    if (this->__Vdlyvset__ram_sign_25__v0) {
        this->__PVT__ram_sign_25[this->__Vdlyvdim0__ram_sign_25__v0] 
            = this->__Vdlyvval__ram_sign_25__v0;
    }
    if (this->__Vdlyvset__ram_sign_26__v0) {
        this->__PVT__ram_sign_26[this->__Vdlyvdim0__ram_sign_26__v0] 
            = this->__Vdlyvval__ram_sign_26__v0;
    }
    if (this->__Vdlyvset__ram_man_31__v0) {
        this->__PVT__ram_man_31[this->__Vdlyvdim0__ram_man_31__v0] 
            = this->__Vdlyvval__ram_man_31__v0;
    }
    if (this->__Vdlyvset__ram_man_30__v0) {
        this->__PVT__ram_man_30[this->__Vdlyvdim0__ram_man_30__v0] 
            = this->__Vdlyvval__ram_man_30__v0;
    }
    if (this->__Vdlyvset__ram_man_29__v0) {
        this->__PVT__ram_man_29[this->__Vdlyvdim0__ram_man_29__v0] 
            = this->__Vdlyvval__ram_man_29__v0;
    }
    if (this->__Vdlyvset__ram_man_28__v0) {
        this->__PVT__ram_man_28[this->__Vdlyvdim0__ram_man_28__v0] 
            = this->__Vdlyvval__ram_man_28__v0;
    }
    if (this->__Vdlyvset__ram_man_27__v0) {
        this->__PVT__ram_man_27[this->__Vdlyvdim0__ram_man_27__v0] 
            = this->__Vdlyvval__ram_man_27__v0;
    }
    if (this->__Vdlyvset__ram_man_26__v0) {
        this->__PVT__ram_man_26[this->__Vdlyvdim0__ram_man_26__v0] 
            = this->__Vdlyvval__ram_man_26__v0;
    }
    if (this->__Vdlyvset__ram_man_25__v0) {
        this->__PVT__ram_man_25[this->__Vdlyvdim0__ram_man_25__v0] 
            = this->__Vdlyvval__ram_man_25__v0;
    }
    if (this->__Vdlyvset__ram_man_24__v0) {
        this->__PVT__ram_man_24[this->__Vdlyvdim0__ram_man_24__v0] 
            = this->__Vdlyvval__ram_man_24__v0;
    }
    if (this->__Vdlyvset__ram_man_23__v0) {
        this->__PVT__ram_man_23[this->__Vdlyvdim0__ram_man_23__v0] 
            = this->__Vdlyvval__ram_man_23__v0;
    }
    if (this->__Vdlyvset__ram_man_22__v0) {
        this->__PVT__ram_man_22[this->__Vdlyvdim0__ram_man_22__v0] 
            = this->__Vdlyvval__ram_man_22__v0;
    }
    if (this->__Vdlyvset__ram_man_21__v0) {
        this->__PVT__ram_man_21[this->__Vdlyvdim0__ram_man_21__v0] 
            = this->__Vdlyvval__ram_man_21__v0;
    }
    if (this->__Vdlyvset__ram_man_20__v0) {
        this->__PVT__ram_man_20[this->__Vdlyvdim0__ram_man_20__v0] 
            = this->__Vdlyvval__ram_man_20__v0;
    }
    if (this->__Vdlyvset__ram_man_19__v0) {
        this->__PVT__ram_man_19[this->__Vdlyvdim0__ram_man_19__v0] 
            = this->__Vdlyvval__ram_man_19__v0;
    }
    if (this->__Vdlyvset__ram_man_7__v0) {
        this->__PVT__ram_man_7[this->__Vdlyvdim0__ram_man_7__v0] 
            = this->__Vdlyvval__ram_man_7__v0;
    }
    if (this->__Vdlyvset__ram_man_10__v0) {
        this->__PVT__ram_man_10[this->__Vdlyvdim0__ram_man_10__v0] 
            = this->__Vdlyvval__ram_man_10__v0;
    }
    if (this->__Vdlyvset__ram_man_6__v0) {
        this->__PVT__ram_man_6[this->__Vdlyvdim0__ram_man_6__v0] 
            = this->__Vdlyvval__ram_man_6__v0;
    }
    if (this->__Vdlyvset__ram_man_9__v0) {
        this->__PVT__ram_man_9[this->__Vdlyvdim0__ram_man_9__v0] 
            = this->__Vdlyvval__ram_man_9__v0;
    }
    if (this->__Vdlyvset__ram_man_5__v0) {
        this->__PVT__ram_man_5[this->__Vdlyvdim0__ram_man_5__v0] 
            = this->__Vdlyvval__ram_man_5__v0;
    }
    if (this->__Vdlyvset__ram_man_8__v0) {
        this->__PVT__ram_man_8[this->__Vdlyvdim0__ram_man_8__v0] 
            = this->__Vdlyvval__ram_man_8__v0;
    }
    if (this->__Vdlyvset__ram_man_4__v0) {
        this->__PVT__ram_man_4[this->__Vdlyvdim0__ram_man_4__v0] 
            = this->__Vdlyvval__ram_man_4__v0;
    }
    if (this->__Vdlyvset__ram_man_11__v0) {
        this->__PVT__ram_man_11[this->__Vdlyvdim0__ram_man_11__v0] 
            = this->__Vdlyvval__ram_man_11__v0;
    }
    if (this->__Vdlyvset__ram_man_12__v0) {
        this->__PVT__ram_man_12[this->__Vdlyvdim0__ram_man_12__v0] 
            = this->__Vdlyvval__ram_man_12__v0;
    }
    if (this->__Vdlyvset__ram_man_13__v0) {
        this->__PVT__ram_man_13[this->__Vdlyvdim0__ram_man_13__v0] 
            = this->__Vdlyvval__ram_man_13__v0;
    }
    if (this->__Vdlyvset__ram_man_14__v0) {
        this->__PVT__ram_man_14[this->__Vdlyvdim0__ram_man_14__v0] 
            = this->__Vdlyvval__ram_man_14__v0;
    }
    if (this->__Vdlyvset__ram_man_15__v0) {
        this->__PVT__ram_man_15[this->__Vdlyvdim0__ram_man_15__v0] 
            = this->__Vdlyvval__ram_man_15__v0;
    }
    if (this->__Vdlyvset__ram_man_16__v0) {
        this->__PVT__ram_man_16[this->__Vdlyvdim0__ram_man_16__v0] 
            = this->__Vdlyvval__ram_man_16__v0;
    }
    if (this->__Vdlyvset__ram_man_17__v0) {
        this->__PVT__ram_man_17[this->__Vdlyvdim0__ram_man_17__v0] 
            = this->__Vdlyvval__ram_man_17__v0;
    }
    if (this->__Vdlyvset__ram_man_18__v0) {
        this->__PVT__ram_man_18[this->__Vdlyvdim0__ram_man_18__v0] 
            = this->__Vdlyvval__ram_man_18__v0;
    }
    if (this->__Vdlyvset__ram_man_0__v0) {
        this->__PVT__ram_man_0[this->__Vdlyvdim0__ram_man_0__v0] 
            = this->__Vdlyvval__ram_man_0__v0;
    }
    if (this->__Vdlyvset__ram_man_1__v0) {
        this->__PVT__ram_man_1[this->__Vdlyvdim0__ram_man_1__v0] 
            = this->__Vdlyvval__ram_man_1__v0;
    }
    if (this->__Vdlyvset__ram_man_2__v0) {
        this->__PVT__ram_man_2[this->__Vdlyvdim0__ram_man_2__v0] 
            = this->__Vdlyvval__ram_man_2__v0;
    }
    if (this->__Vdlyvset__ram_man_3__v0) {
        this->__PVT__ram_man_3[this->__Vdlyvdim0__ram_man_3__v0] 
            = this->__Vdlyvval__ram_man_3__v0;
    }
    if (vlTOPp->reset) {
        this->__PVT__enq_ptr_value = 0U;
    } else {
        if ((1U & (~ (IData)(this->__PVT__full)))) {
            this->__PVT__enq_ptr_value = this->__PVT___value_T_1;
        }
    }
    this->__PVT___value_T_3 = (0xfU & ((IData)(1U) 
                                       + (IData)(this->__PVT__deq_ptr_value)));
    this->__PVT___value_T_1 = (0xfU & ((IData)(1U) 
                                       + (IData)(this->__PVT__enq_ptr_value)));
    this->__PVT__ptr_match = ((IData)(this->__PVT__enq_ptr_value) 
                              == (IData)(this->__PVT__deq_ptr_value));
    this->__PVT__full = ((IData)(this->__PVT__ptr_match) 
                         & (IData)(this->__PVT__maybe_full));
    this->__PVT__empty = ((IData)(this->__PVT__ptr_match) 
                          & (~ (IData)(this->__PVT__maybe_full)));
    this->__PVT__do_deq = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_14_io_deq_ready_r_14) 
                           & (~ (IData)(this->__PVT__empty)));
}

VL_INLINE_OPT void VSystolicArray_HBFP_forTesting_Queue::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_15__32(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_Queue::_sequent__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_15__32\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vdlyvset__ram_exp__v0 = 0U;
    this->__Vdlyvset__ram_sign_28__v0 = 0U;
    this->__Vdlyvset__ram_sign_27__v0 = 0U;
    this->__Vdlyvset__ram_sign_29__v0 = 0U;
    this->__Vdlyvset__ram_sign_30__v0 = 0U;
    this->__Vdlyvset__ram_sign_31__v0 = 0U;
    this->__Vdlyvset__ram_sign_0__v0 = 0U;
    this->__Vdlyvset__ram_sign_1__v0 = 0U;
    this->__Vdlyvset__ram_sign_2__v0 = 0U;
    this->__Vdlyvset__ram_sign_3__v0 = 0U;
    this->__Vdlyvset__ram_sign_4__v0 = 0U;
    this->__Vdlyvset__ram_sign_5__v0 = 0U;
    this->__Vdlyvset__ram_sign_6__v0 = 0U;
    this->__Vdlyvset__ram_sign_7__v0 = 0U;
    this->__Vdlyvset__ram_sign_8__v0 = 0U;
    this->__Vdlyvset__ram_sign_9__v0 = 0U;
    this->__Vdlyvset__ram_sign_10__v0 = 0U;
    this->__Vdlyvset__ram_sign_11__v0 = 0U;
    this->__Vdlyvset__ram_sign_12__v0 = 0U;
    this->__Vdlyvset__ram_sign_13__v0 = 0U;
    this->__Vdlyvset__ram_sign_14__v0 = 0U;
    this->__Vdlyvset__ram_sign_15__v0 = 0U;
    this->__Vdlyvset__ram_sign_16__v0 = 0U;
    this->__Vdlyvset__ram_sign_17__v0 = 0U;
    this->__Vdlyvset__ram_sign_18__v0 = 0U;
    this->__Vdlyvset__ram_sign_19__v0 = 0U;
    this->__Vdlyvset__ram_sign_20__v0 = 0U;
    this->__Vdlyvset__ram_sign_21__v0 = 0U;
    this->__Vdlyvset__ram_sign_22__v0 = 0U;
    this->__Vdlyvset__ram_sign_23__v0 = 0U;
    this->__Vdlyvset__ram_sign_24__v0 = 0U;
    this->__Vdlyvset__ram_sign_25__v0 = 0U;
    this->__Vdlyvset__ram_sign_26__v0 = 0U;
    this->__Vdlyvset__ram_man_31__v0 = 0U;
    this->__Vdlyvset__ram_man_30__v0 = 0U;
    this->__Vdlyvset__ram_man_29__v0 = 0U;
    this->__Vdlyvset__ram_man_28__v0 = 0U;
    this->__Vdlyvset__ram_man_27__v0 = 0U;
    this->__Vdlyvset__ram_man_26__v0 = 0U;
    this->__Vdlyvset__ram_man_25__v0 = 0U;
    this->__Vdlyvset__ram_man_24__v0 = 0U;
    this->__Vdlyvset__ram_man_23__v0 = 0U;
    this->__Vdlyvset__ram_man_22__v0 = 0U;
    this->__Vdlyvset__ram_man_21__v0 = 0U;
    this->__Vdlyvset__ram_man_20__v0 = 0U;
    this->__Vdlyvset__ram_man_19__v0 = 0U;
    this->__Vdlyvset__ram_man_7__v0 = 0U;
    this->__Vdlyvset__ram_man_10__v0 = 0U;
    this->__Vdlyvset__ram_man_6__v0 = 0U;
    this->__Vdlyvset__ram_man_9__v0 = 0U;
    this->__Vdlyvset__ram_man_5__v0 = 0U;
    this->__Vdlyvset__ram_man_8__v0 = 0U;
    this->__Vdlyvset__ram_man_4__v0 = 0U;
    this->__Vdlyvset__ram_man_11__v0 = 0U;
    this->__Vdlyvset__ram_man_12__v0 = 0U;
    this->__Vdlyvset__ram_man_13__v0 = 0U;
    this->__Vdlyvset__ram_man_14__v0 = 0U;
    this->__Vdlyvset__ram_man_15__v0 = 0U;
    this->__Vdlyvset__ram_man_16__v0 = 0U;
    this->__Vdlyvset__ram_man_17__v0 = 0U;
    this->__Vdlyvset__ram_man_18__v0 = 0U;
    this->__Vdlyvset__ram_man_0__v0 = 0U;
    this->__Vdlyvset__ram_man_1__v0 = 0U;
    this->__Vdlyvset__ram_man_2__v0 = 0U;
    this->__Vdlyvset__ram_man_3__v0 = 0U;
    if (vlTOPp->reset) {
        this->__PVT__maybe_full = 0U;
    } else {
        if (((1U & (~ (IData)(this->__PVT__full))) 
             != (IData)(this->__PVT__do_deq))) {
            this->__PVT__maybe_full = (1U & (~ (IData)(this->__PVT__full)));
        }
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_exp__v0 = vlTOPp->io_in_ver_15_bits_exp;
        this->__Vdlyvset__ram_exp__v0 = 1U;
        this->__Vdlyvdim0__ram_exp__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_28__v0 = vlTOPp->io_in_ver_15_bits_sign_28;
        this->__Vdlyvset__ram_sign_28__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_28__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_27__v0 = vlTOPp->io_in_ver_15_bits_sign_27;
        this->__Vdlyvset__ram_sign_27__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_27__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_29__v0 = vlTOPp->io_in_ver_15_bits_sign_29;
        this->__Vdlyvset__ram_sign_29__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_29__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_30__v0 = vlTOPp->io_in_ver_15_bits_sign_30;
        this->__Vdlyvset__ram_sign_30__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_30__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_31__v0 = vlTOPp->io_in_ver_15_bits_sign_31;
        this->__Vdlyvset__ram_sign_31__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_31__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_0__v0 = vlTOPp->io_in_ver_15_bits_sign_0;
        this->__Vdlyvset__ram_sign_0__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_0__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_1__v0 = vlTOPp->io_in_ver_15_bits_sign_1;
        this->__Vdlyvset__ram_sign_1__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_1__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_2__v0 = vlTOPp->io_in_ver_15_bits_sign_2;
        this->__Vdlyvset__ram_sign_2__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_2__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_3__v0 = vlTOPp->io_in_ver_15_bits_sign_3;
        this->__Vdlyvset__ram_sign_3__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_3__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_4__v0 = vlTOPp->io_in_ver_15_bits_sign_4;
        this->__Vdlyvset__ram_sign_4__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_4__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_5__v0 = vlTOPp->io_in_ver_15_bits_sign_5;
        this->__Vdlyvset__ram_sign_5__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_5__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_6__v0 = vlTOPp->io_in_ver_15_bits_sign_6;
        this->__Vdlyvset__ram_sign_6__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_6__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_7__v0 = vlTOPp->io_in_ver_15_bits_sign_7;
        this->__Vdlyvset__ram_sign_7__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_7__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_8__v0 = vlTOPp->io_in_ver_15_bits_sign_8;
        this->__Vdlyvset__ram_sign_8__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_8__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_9__v0 = vlTOPp->io_in_ver_15_bits_sign_9;
        this->__Vdlyvset__ram_sign_9__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_9__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_10__v0 = vlTOPp->io_in_ver_15_bits_sign_10;
        this->__Vdlyvset__ram_sign_10__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_10__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_11__v0 = vlTOPp->io_in_ver_15_bits_sign_11;
        this->__Vdlyvset__ram_sign_11__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_11__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_12__v0 = vlTOPp->io_in_ver_15_bits_sign_12;
        this->__Vdlyvset__ram_sign_12__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_12__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_13__v0 = vlTOPp->io_in_ver_15_bits_sign_13;
        this->__Vdlyvset__ram_sign_13__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_13__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_14__v0 = vlTOPp->io_in_ver_15_bits_sign_14;
        this->__Vdlyvset__ram_sign_14__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_14__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_15__v0 = vlTOPp->io_in_ver_15_bits_sign_15;
        this->__Vdlyvset__ram_sign_15__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_15__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_16__v0 = vlTOPp->io_in_ver_15_bits_sign_16;
        this->__Vdlyvset__ram_sign_16__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_16__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_17__v0 = vlTOPp->io_in_ver_15_bits_sign_17;
        this->__Vdlyvset__ram_sign_17__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_17__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_18__v0 = vlTOPp->io_in_ver_15_bits_sign_18;
        this->__Vdlyvset__ram_sign_18__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_18__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_19__v0 = vlTOPp->io_in_ver_15_bits_sign_19;
        this->__Vdlyvset__ram_sign_19__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_19__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_20__v0 = vlTOPp->io_in_ver_15_bits_sign_20;
        this->__Vdlyvset__ram_sign_20__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_20__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_21__v0 = vlTOPp->io_in_ver_15_bits_sign_21;
        this->__Vdlyvset__ram_sign_21__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_21__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_22__v0 = vlTOPp->io_in_ver_15_bits_sign_22;
        this->__Vdlyvset__ram_sign_22__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_22__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_23__v0 = vlTOPp->io_in_ver_15_bits_sign_23;
        this->__Vdlyvset__ram_sign_23__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_23__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_24__v0 = vlTOPp->io_in_ver_15_bits_sign_24;
        this->__Vdlyvset__ram_sign_24__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_24__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_25__v0 = vlTOPp->io_in_ver_15_bits_sign_25;
        this->__Vdlyvset__ram_sign_25__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_25__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_sign_26__v0 = vlTOPp->io_in_ver_15_bits_sign_26;
        this->__Vdlyvset__ram_sign_26__v0 = 1U;
        this->__Vdlyvdim0__ram_sign_26__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_31__v0 = vlTOPp->io_in_ver_15_bits_man_31;
        this->__Vdlyvset__ram_man_31__v0 = 1U;
        this->__Vdlyvdim0__ram_man_31__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_30__v0 = vlTOPp->io_in_ver_15_bits_man_30;
        this->__Vdlyvset__ram_man_30__v0 = 1U;
        this->__Vdlyvdim0__ram_man_30__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_29__v0 = vlTOPp->io_in_ver_15_bits_man_29;
        this->__Vdlyvset__ram_man_29__v0 = 1U;
        this->__Vdlyvdim0__ram_man_29__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_28__v0 = vlTOPp->io_in_ver_15_bits_man_28;
        this->__Vdlyvset__ram_man_28__v0 = 1U;
        this->__Vdlyvdim0__ram_man_28__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_27__v0 = vlTOPp->io_in_ver_15_bits_man_27;
        this->__Vdlyvset__ram_man_27__v0 = 1U;
        this->__Vdlyvdim0__ram_man_27__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_26__v0 = vlTOPp->io_in_ver_15_bits_man_26;
        this->__Vdlyvset__ram_man_26__v0 = 1U;
        this->__Vdlyvdim0__ram_man_26__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_25__v0 = vlTOPp->io_in_ver_15_bits_man_25;
        this->__Vdlyvset__ram_man_25__v0 = 1U;
        this->__Vdlyvdim0__ram_man_25__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_24__v0 = vlTOPp->io_in_ver_15_bits_man_24;
        this->__Vdlyvset__ram_man_24__v0 = 1U;
        this->__Vdlyvdim0__ram_man_24__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_23__v0 = vlTOPp->io_in_ver_15_bits_man_23;
        this->__Vdlyvset__ram_man_23__v0 = 1U;
        this->__Vdlyvdim0__ram_man_23__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_22__v0 = vlTOPp->io_in_ver_15_bits_man_22;
        this->__Vdlyvset__ram_man_22__v0 = 1U;
        this->__Vdlyvdim0__ram_man_22__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_21__v0 = vlTOPp->io_in_ver_15_bits_man_21;
        this->__Vdlyvset__ram_man_21__v0 = 1U;
        this->__Vdlyvdim0__ram_man_21__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_20__v0 = vlTOPp->io_in_ver_15_bits_man_20;
        this->__Vdlyvset__ram_man_20__v0 = 1U;
        this->__Vdlyvdim0__ram_man_20__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_19__v0 = vlTOPp->io_in_ver_15_bits_man_19;
        this->__Vdlyvset__ram_man_19__v0 = 1U;
        this->__Vdlyvdim0__ram_man_19__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_7__v0 = vlTOPp->io_in_ver_15_bits_man_7;
        this->__Vdlyvset__ram_man_7__v0 = 1U;
        this->__Vdlyvdim0__ram_man_7__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_10__v0 = vlTOPp->io_in_ver_15_bits_man_10;
        this->__Vdlyvset__ram_man_10__v0 = 1U;
        this->__Vdlyvdim0__ram_man_10__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_6__v0 = vlTOPp->io_in_ver_15_bits_man_6;
        this->__Vdlyvset__ram_man_6__v0 = 1U;
        this->__Vdlyvdim0__ram_man_6__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_9__v0 = vlTOPp->io_in_ver_15_bits_man_9;
        this->__Vdlyvset__ram_man_9__v0 = 1U;
        this->__Vdlyvdim0__ram_man_9__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_5__v0 = vlTOPp->io_in_ver_15_bits_man_5;
        this->__Vdlyvset__ram_man_5__v0 = 1U;
        this->__Vdlyvdim0__ram_man_5__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_8__v0 = vlTOPp->io_in_ver_15_bits_man_8;
        this->__Vdlyvset__ram_man_8__v0 = 1U;
        this->__Vdlyvdim0__ram_man_8__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_4__v0 = vlTOPp->io_in_ver_15_bits_man_4;
        this->__Vdlyvset__ram_man_4__v0 = 1U;
        this->__Vdlyvdim0__ram_man_4__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_11__v0 = vlTOPp->io_in_ver_15_bits_man_11;
        this->__Vdlyvset__ram_man_11__v0 = 1U;
        this->__Vdlyvdim0__ram_man_11__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_12__v0 = vlTOPp->io_in_ver_15_bits_man_12;
        this->__Vdlyvset__ram_man_12__v0 = 1U;
        this->__Vdlyvdim0__ram_man_12__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_13__v0 = vlTOPp->io_in_ver_15_bits_man_13;
        this->__Vdlyvset__ram_man_13__v0 = 1U;
        this->__Vdlyvdim0__ram_man_13__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_14__v0 = vlTOPp->io_in_ver_15_bits_man_14;
        this->__Vdlyvset__ram_man_14__v0 = 1U;
        this->__Vdlyvdim0__ram_man_14__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_15__v0 = vlTOPp->io_in_ver_15_bits_man_15;
        this->__Vdlyvset__ram_man_15__v0 = 1U;
        this->__Vdlyvdim0__ram_man_15__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_16__v0 = vlTOPp->io_in_ver_15_bits_man_16;
        this->__Vdlyvset__ram_man_16__v0 = 1U;
        this->__Vdlyvdim0__ram_man_16__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_17__v0 = vlTOPp->io_in_ver_15_bits_man_17;
        this->__Vdlyvset__ram_man_17__v0 = 1U;
        this->__Vdlyvdim0__ram_man_17__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_18__v0 = vlTOPp->io_in_ver_15_bits_man_18;
        this->__Vdlyvset__ram_man_18__v0 = 1U;
        this->__Vdlyvdim0__ram_man_18__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_0__v0 = vlTOPp->io_in_ver_15_bits_man_0;
        this->__Vdlyvset__ram_man_0__v0 = 1U;
        this->__Vdlyvdim0__ram_man_0__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_1__v0 = vlTOPp->io_in_ver_15_bits_man_1;
        this->__Vdlyvset__ram_man_1__v0 = 1U;
        this->__Vdlyvdim0__ram_man_1__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_2__v0 = vlTOPp->io_in_ver_15_bits_man_2;
        this->__Vdlyvset__ram_man_2__v0 = 1U;
        this->__Vdlyvdim0__ram_man_2__v0 = this->__PVT__enq_ptr_value;
    }
    if ((1U & (~ (IData)(this->__PVT__full)))) {
        this->__Vdlyvval__ram_man_3__v0 = vlTOPp->io_in_ver_15_bits_man_3;
        this->__Vdlyvset__ram_man_3__v0 = 1U;
        this->__Vdlyvdim0__ram_man_3__v0 = this->__PVT__enq_ptr_value;
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
    if (this->__Vdlyvset__ram_sign_28__v0) {
        this->__PVT__ram_sign_28[this->__Vdlyvdim0__ram_sign_28__v0] 
            = this->__Vdlyvval__ram_sign_28__v0;
    }
    if (this->__Vdlyvset__ram_sign_27__v0) {
        this->__PVT__ram_sign_27[this->__Vdlyvdim0__ram_sign_27__v0] 
            = this->__Vdlyvval__ram_sign_27__v0;
    }
    if (this->__Vdlyvset__ram_sign_29__v0) {
        this->__PVT__ram_sign_29[this->__Vdlyvdim0__ram_sign_29__v0] 
            = this->__Vdlyvval__ram_sign_29__v0;
    }
    if (this->__Vdlyvset__ram_sign_30__v0) {
        this->__PVT__ram_sign_30[this->__Vdlyvdim0__ram_sign_30__v0] 
            = this->__Vdlyvval__ram_sign_30__v0;
    }
    if (this->__Vdlyvset__ram_sign_31__v0) {
        this->__PVT__ram_sign_31[this->__Vdlyvdim0__ram_sign_31__v0] 
            = this->__Vdlyvval__ram_sign_31__v0;
    }
    if (this->__Vdlyvset__ram_sign_0__v0) {
        this->__PVT__ram_sign_0[this->__Vdlyvdim0__ram_sign_0__v0] 
            = this->__Vdlyvval__ram_sign_0__v0;
    }
    if (this->__Vdlyvset__ram_sign_1__v0) {
        this->__PVT__ram_sign_1[this->__Vdlyvdim0__ram_sign_1__v0] 
            = this->__Vdlyvval__ram_sign_1__v0;
    }
    if (this->__Vdlyvset__ram_sign_2__v0) {
        this->__PVT__ram_sign_2[this->__Vdlyvdim0__ram_sign_2__v0] 
            = this->__Vdlyvval__ram_sign_2__v0;
    }
    if (this->__Vdlyvset__ram_sign_3__v0) {
        this->__PVT__ram_sign_3[this->__Vdlyvdim0__ram_sign_3__v0] 
            = this->__Vdlyvval__ram_sign_3__v0;
    }
    if (this->__Vdlyvset__ram_sign_4__v0) {
        this->__PVT__ram_sign_4[this->__Vdlyvdim0__ram_sign_4__v0] 
            = this->__Vdlyvval__ram_sign_4__v0;
    }
    if (this->__Vdlyvset__ram_sign_5__v0) {
        this->__PVT__ram_sign_5[this->__Vdlyvdim0__ram_sign_5__v0] 
            = this->__Vdlyvval__ram_sign_5__v0;
    }
    if (this->__Vdlyvset__ram_sign_6__v0) {
        this->__PVT__ram_sign_6[this->__Vdlyvdim0__ram_sign_6__v0] 
            = this->__Vdlyvval__ram_sign_6__v0;
    }
    if (this->__Vdlyvset__ram_sign_7__v0) {
        this->__PVT__ram_sign_7[this->__Vdlyvdim0__ram_sign_7__v0] 
            = this->__Vdlyvval__ram_sign_7__v0;
    }
    if (this->__Vdlyvset__ram_sign_8__v0) {
        this->__PVT__ram_sign_8[this->__Vdlyvdim0__ram_sign_8__v0] 
            = this->__Vdlyvval__ram_sign_8__v0;
    }
    if (this->__Vdlyvset__ram_sign_9__v0) {
        this->__PVT__ram_sign_9[this->__Vdlyvdim0__ram_sign_9__v0] 
            = this->__Vdlyvval__ram_sign_9__v0;
    }
    if (this->__Vdlyvset__ram_sign_10__v0) {
        this->__PVT__ram_sign_10[this->__Vdlyvdim0__ram_sign_10__v0] 
            = this->__Vdlyvval__ram_sign_10__v0;
    }
    if (this->__Vdlyvset__ram_sign_11__v0) {
        this->__PVT__ram_sign_11[this->__Vdlyvdim0__ram_sign_11__v0] 
            = this->__Vdlyvval__ram_sign_11__v0;
    }
    if (this->__Vdlyvset__ram_sign_12__v0) {
        this->__PVT__ram_sign_12[this->__Vdlyvdim0__ram_sign_12__v0] 
            = this->__Vdlyvval__ram_sign_12__v0;
    }
    if (this->__Vdlyvset__ram_sign_13__v0) {
        this->__PVT__ram_sign_13[this->__Vdlyvdim0__ram_sign_13__v0] 
            = this->__Vdlyvval__ram_sign_13__v0;
    }
    if (this->__Vdlyvset__ram_sign_14__v0) {
        this->__PVT__ram_sign_14[this->__Vdlyvdim0__ram_sign_14__v0] 
            = this->__Vdlyvval__ram_sign_14__v0;
    }
    if (this->__Vdlyvset__ram_sign_15__v0) {
        this->__PVT__ram_sign_15[this->__Vdlyvdim0__ram_sign_15__v0] 
            = this->__Vdlyvval__ram_sign_15__v0;
    }
    if (this->__Vdlyvset__ram_sign_16__v0) {
        this->__PVT__ram_sign_16[this->__Vdlyvdim0__ram_sign_16__v0] 
            = this->__Vdlyvval__ram_sign_16__v0;
    }
    if (this->__Vdlyvset__ram_sign_17__v0) {
        this->__PVT__ram_sign_17[this->__Vdlyvdim0__ram_sign_17__v0] 
            = this->__Vdlyvval__ram_sign_17__v0;
    }
    if (this->__Vdlyvset__ram_sign_18__v0) {
        this->__PVT__ram_sign_18[this->__Vdlyvdim0__ram_sign_18__v0] 
            = this->__Vdlyvval__ram_sign_18__v0;
    }
    if (this->__Vdlyvset__ram_sign_19__v0) {
        this->__PVT__ram_sign_19[this->__Vdlyvdim0__ram_sign_19__v0] 
            = this->__Vdlyvval__ram_sign_19__v0;
    }
    if (this->__Vdlyvset__ram_sign_20__v0) {
        this->__PVT__ram_sign_20[this->__Vdlyvdim0__ram_sign_20__v0] 
            = this->__Vdlyvval__ram_sign_20__v0;
    }
    if (this->__Vdlyvset__ram_sign_21__v0) {
        this->__PVT__ram_sign_21[this->__Vdlyvdim0__ram_sign_21__v0] 
            = this->__Vdlyvval__ram_sign_21__v0;
    }
    if (this->__Vdlyvset__ram_sign_22__v0) {
        this->__PVT__ram_sign_22[this->__Vdlyvdim0__ram_sign_22__v0] 
            = this->__Vdlyvval__ram_sign_22__v0;
    }
    if (this->__Vdlyvset__ram_sign_23__v0) {
        this->__PVT__ram_sign_23[this->__Vdlyvdim0__ram_sign_23__v0] 
            = this->__Vdlyvval__ram_sign_23__v0;
    }
    if (this->__Vdlyvset__ram_sign_24__v0) {
        this->__PVT__ram_sign_24[this->__Vdlyvdim0__ram_sign_24__v0] 
            = this->__Vdlyvval__ram_sign_24__v0;
    }
    if (this->__Vdlyvset__ram_sign_25__v0) {
        this->__PVT__ram_sign_25[this->__Vdlyvdim0__ram_sign_25__v0] 
            = this->__Vdlyvval__ram_sign_25__v0;
    }
    if (this->__Vdlyvset__ram_sign_26__v0) {
        this->__PVT__ram_sign_26[this->__Vdlyvdim0__ram_sign_26__v0] 
            = this->__Vdlyvval__ram_sign_26__v0;
    }
    if (this->__Vdlyvset__ram_man_31__v0) {
        this->__PVT__ram_man_31[this->__Vdlyvdim0__ram_man_31__v0] 
            = this->__Vdlyvval__ram_man_31__v0;
    }
    if (this->__Vdlyvset__ram_man_30__v0) {
        this->__PVT__ram_man_30[this->__Vdlyvdim0__ram_man_30__v0] 
            = this->__Vdlyvval__ram_man_30__v0;
    }
    if (this->__Vdlyvset__ram_man_29__v0) {
        this->__PVT__ram_man_29[this->__Vdlyvdim0__ram_man_29__v0] 
            = this->__Vdlyvval__ram_man_29__v0;
    }
    if (this->__Vdlyvset__ram_man_28__v0) {
        this->__PVT__ram_man_28[this->__Vdlyvdim0__ram_man_28__v0] 
            = this->__Vdlyvval__ram_man_28__v0;
    }
    if (this->__Vdlyvset__ram_man_27__v0) {
        this->__PVT__ram_man_27[this->__Vdlyvdim0__ram_man_27__v0] 
            = this->__Vdlyvval__ram_man_27__v0;
    }
    if (this->__Vdlyvset__ram_man_26__v0) {
        this->__PVT__ram_man_26[this->__Vdlyvdim0__ram_man_26__v0] 
            = this->__Vdlyvval__ram_man_26__v0;
    }
    if (this->__Vdlyvset__ram_man_25__v0) {
        this->__PVT__ram_man_25[this->__Vdlyvdim0__ram_man_25__v0] 
            = this->__Vdlyvval__ram_man_25__v0;
    }
    if (this->__Vdlyvset__ram_man_24__v0) {
        this->__PVT__ram_man_24[this->__Vdlyvdim0__ram_man_24__v0] 
            = this->__Vdlyvval__ram_man_24__v0;
    }
    if (this->__Vdlyvset__ram_man_23__v0) {
        this->__PVT__ram_man_23[this->__Vdlyvdim0__ram_man_23__v0] 
            = this->__Vdlyvval__ram_man_23__v0;
    }
    if (this->__Vdlyvset__ram_man_22__v0) {
        this->__PVT__ram_man_22[this->__Vdlyvdim0__ram_man_22__v0] 
            = this->__Vdlyvval__ram_man_22__v0;
    }
    if (this->__Vdlyvset__ram_man_21__v0) {
        this->__PVT__ram_man_21[this->__Vdlyvdim0__ram_man_21__v0] 
            = this->__Vdlyvval__ram_man_21__v0;
    }
    if (this->__Vdlyvset__ram_man_20__v0) {
        this->__PVT__ram_man_20[this->__Vdlyvdim0__ram_man_20__v0] 
            = this->__Vdlyvval__ram_man_20__v0;
    }
    if (this->__Vdlyvset__ram_man_19__v0) {
        this->__PVT__ram_man_19[this->__Vdlyvdim0__ram_man_19__v0] 
            = this->__Vdlyvval__ram_man_19__v0;
    }
    if (this->__Vdlyvset__ram_man_7__v0) {
        this->__PVT__ram_man_7[this->__Vdlyvdim0__ram_man_7__v0] 
            = this->__Vdlyvval__ram_man_7__v0;
    }
    if (this->__Vdlyvset__ram_man_10__v0) {
        this->__PVT__ram_man_10[this->__Vdlyvdim0__ram_man_10__v0] 
            = this->__Vdlyvval__ram_man_10__v0;
    }
    if (this->__Vdlyvset__ram_man_6__v0) {
        this->__PVT__ram_man_6[this->__Vdlyvdim0__ram_man_6__v0] 
            = this->__Vdlyvval__ram_man_6__v0;
    }
    if (this->__Vdlyvset__ram_man_9__v0) {
        this->__PVT__ram_man_9[this->__Vdlyvdim0__ram_man_9__v0] 
            = this->__Vdlyvval__ram_man_9__v0;
    }
    if (this->__Vdlyvset__ram_man_5__v0) {
        this->__PVT__ram_man_5[this->__Vdlyvdim0__ram_man_5__v0] 
            = this->__Vdlyvval__ram_man_5__v0;
    }
    if (this->__Vdlyvset__ram_man_8__v0) {
        this->__PVT__ram_man_8[this->__Vdlyvdim0__ram_man_8__v0] 
            = this->__Vdlyvval__ram_man_8__v0;
    }
    if (this->__Vdlyvset__ram_man_4__v0) {
        this->__PVT__ram_man_4[this->__Vdlyvdim0__ram_man_4__v0] 
            = this->__Vdlyvval__ram_man_4__v0;
    }
    if (this->__Vdlyvset__ram_man_11__v0) {
        this->__PVT__ram_man_11[this->__Vdlyvdim0__ram_man_11__v0] 
            = this->__Vdlyvval__ram_man_11__v0;
    }
    if (this->__Vdlyvset__ram_man_12__v0) {
        this->__PVT__ram_man_12[this->__Vdlyvdim0__ram_man_12__v0] 
            = this->__Vdlyvval__ram_man_12__v0;
    }
    if (this->__Vdlyvset__ram_man_13__v0) {
        this->__PVT__ram_man_13[this->__Vdlyvdim0__ram_man_13__v0] 
            = this->__Vdlyvval__ram_man_13__v0;
    }
    if (this->__Vdlyvset__ram_man_14__v0) {
        this->__PVT__ram_man_14[this->__Vdlyvdim0__ram_man_14__v0] 
            = this->__Vdlyvval__ram_man_14__v0;
    }
    if (this->__Vdlyvset__ram_man_15__v0) {
        this->__PVT__ram_man_15[this->__Vdlyvdim0__ram_man_15__v0] 
            = this->__Vdlyvval__ram_man_15__v0;
    }
    if (this->__Vdlyvset__ram_man_16__v0) {
        this->__PVT__ram_man_16[this->__Vdlyvdim0__ram_man_16__v0] 
            = this->__Vdlyvval__ram_man_16__v0;
    }
    if (this->__Vdlyvset__ram_man_17__v0) {
        this->__PVT__ram_man_17[this->__Vdlyvdim0__ram_man_17__v0] 
            = this->__Vdlyvval__ram_man_17__v0;
    }
    if (this->__Vdlyvset__ram_man_18__v0) {
        this->__PVT__ram_man_18[this->__Vdlyvdim0__ram_man_18__v0] 
            = this->__Vdlyvval__ram_man_18__v0;
    }
    if (this->__Vdlyvset__ram_man_0__v0) {
        this->__PVT__ram_man_0[this->__Vdlyvdim0__ram_man_0__v0] 
            = this->__Vdlyvval__ram_man_0__v0;
    }
    if (this->__Vdlyvset__ram_man_1__v0) {
        this->__PVT__ram_man_1[this->__Vdlyvdim0__ram_man_1__v0] 
            = this->__Vdlyvval__ram_man_1__v0;
    }
    if (this->__Vdlyvset__ram_man_2__v0) {
        this->__PVT__ram_man_2[this->__Vdlyvdim0__ram_man_2__v0] 
            = this->__Vdlyvval__ram_man_2__v0;
    }
    if (this->__Vdlyvset__ram_man_3__v0) {
        this->__PVT__ram_man_3[this->__Vdlyvdim0__ram_man_3__v0] 
            = this->__Vdlyvval__ram_man_3__v0;
    }
    if (vlTOPp->reset) {
        this->__PVT__enq_ptr_value = 0U;
    } else {
        if ((1U & (~ (IData)(this->__PVT__full)))) {
            this->__PVT__enq_ptr_value = this->__PVT___value_T_1;
        }
    }
    this->__PVT___value_T_3 = (0xfU & ((IData)(1U) 
                                       + (IData)(this->__PVT__deq_ptr_value)));
    this->__PVT___value_T_1 = (0xfU & ((IData)(1U) 
                                       + (IData)(this->__PVT__enq_ptr_value)));
    this->__PVT__ptr_match = ((IData)(this->__PVT__enq_ptr_value) 
                              == (IData)(this->__PVT__deq_ptr_value));
    this->__PVT__full = ((IData)(this->__PVT__ptr_match) 
                         & (IData)(this->__PVT__maybe_full));
    this->__PVT__empty = ((IData)(this->__PVT__ptr_match) 
                          & (~ (IData)(this->__PVT__maybe_full)));
    this->__PVT__do_deq = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_15_io_deq_ready_r_15) 
                           & (~ (IData)(this->__PVT__empty)));
}
