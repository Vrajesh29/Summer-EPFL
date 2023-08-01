// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSystolicArray_HBFP_forTesting.h for the primary calling header

#include "VSystolicArray_HBFP_forTesting_Queue.h"
#include "VSystolicArray_HBFP_forTesting__Syms.h"

//==========

VL_CTOR_IMP(VSystolicArray_HBFP_forTesting_Queue) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void VSystolicArray_HBFP_forTesting_Queue::__Vconfigure(VSystolicArray_HBFP_forTesting__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    _configure_coverage(vlSymsp, first);
}

VSystolicArray_HBFP_forTesting_Queue::~VSystolicArray_HBFP_forTesting_Queue() {
}

// Coverage
#ifndef CHISEL_VL_COVER_INSERT
#define CHISEL_VL_COVER_INSERT(countp, ...) \
    VL_IF_COVER(VerilatedCov::_inserti(countp); VerilatedCov::_insertf(__FILE__, __LINE__); \
                chisel_insertp("hier", name(), __VA_ARGS__))

#ifdef VM_COVERAGE
static void chisel_insertp(
  const char* key0, const char* valp0, const char* key1, const char* valp1,
  const char* key2, int lineno, const char* key3, int column,
  const char* key4, const std::string& hier_str,
  const char* key5, const char* valp5, const char* key6, const char* valp6,
  const char* key7 = nullptr, const char* valp7 = nullptr) {

    std::string val2str = vlCovCvtToStr(lineno);
    std::string val3str = vlCovCvtToStr(column);
    VerilatedCov::_insertp(
        key0, valp0, key1, valp1, key2, val2str.c_str(),
        key3, val3str.c_str(), key4, hier_str.c_str(),
        key5, valp5, key6, valp6, key7, valp7,
        // turn on per instance cover points
        "per_instance", "1");
}
#endif // VM_COVERAGE
#endif // CHISEL_VL_COVER_INSERT


void VSystolicArray_HBFP_forTesting_Queue::__vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
    const char* hierp, const char* pagep, const char* commentp, const char* linescovp) {
    uint32_t* count32p = countp;
    static uint32_t fake_zero_count = 0;
    if (!enable) count32p = &fake_zero_count;
    *count32p = 0;
    CHISEL_VL_COVER_INSERT(count32p,  "filename",filenamep,  "lineno",lineno,  "column",column,
        "hier",std::string(name())+hierp,  "page",pagep,  "comment",commentp,  (linescovp[0] ? "linescov" : ""), linescovp);
}

void VSystolicArray_HBFP_forTesting_Queue::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_0__19(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_Queue::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_0__19\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT___value_T_3 = (0x3fU & ((IData)(1U) 
                                        + (IData)(this->__PVT__deq_ptr_value)));
    this->__PVT___value_T_1 = (0x3fU & ((IData)(1U) 
                                        + (IData)(this->__PVT__enq_ptr_value)));
    this->__PVT__ptr_match = ((IData)(this->__PVT__enq_ptr_value) 
                              == (IData)(this->__PVT__deq_ptr_value));
    this->__PVT__full = ((IData)(this->__PVT__ptr_match) 
                         & (IData)(this->__PVT__maybe_full));
    this->__PVT__empty = ((IData)(this->__PVT__ptr_match) 
                          & (~ (IData)(this->__PVT__maybe_full)));
    this->__PVT__do_enq = ((~ (IData)(this->__PVT__full)) 
                           & (IData)(vlTOPp->io_in_hor_0_valid));
}

void VSystolicArray_HBFP_forTesting_Queue::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_1__20(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_Queue::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_1__20\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT___value_T_3 = (0x3fU & ((IData)(1U) 
                                        + (IData)(this->__PVT__deq_ptr_value)));
    this->__PVT___value_T_1 = (0x3fU & ((IData)(1U) 
                                        + (IData)(this->__PVT__enq_ptr_value)));
    this->__PVT__ptr_match = ((IData)(this->__PVT__enq_ptr_value) 
                              == (IData)(this->__PVT__deq_ptr_value));
    this->__PVT__full = ((IData)(this->__PVT__ptr_match) 
                         & (IData)(this->__PVT__maybe_full));
    this->__PVT__empty = ((IData)(this->__PVT__ptr_match) 
                          & (~ (IData)(this->__PVT__maybe_full)));
    this->__PVT__do_enq = ((~ (IData)(this->__PVT__full)) 
                           & (IData)(vlTOPp->io_in_hor_1_valid));
}

void VSystolicArray_HBFP_forTesting_Queue::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_1__46(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_Queue::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_1__46\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__do_deq = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_1_io_deq_ready) 
                           & (~ (IData)(this->__PVT__empty)));
}

void VSystolicArray_HBFP_forTesting_Queue::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_2__21(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_Queue::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_2__21\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT___value_T_3 = (0x3fU & ((IData)(1U) 
                                        + (IData)(this->__PVT__deq_ptr_value)));
    this->__PVT___value_T_1 = (0x3fU & ((IData)(1U) 
                                        + (IData)(this->__PVT__enq_ptr_value)));
    this->__PVT__ptr_match = ((IData)(this->__PVT__enq_ptr_value) 
                              == (IData)(this->__PVT__deq_ptr_value));
    this->__PVT__full = ((IData)(this->__PVT__ptr_match) 
                         & (IData)(this->__PVT__maybe_full));
    this->__PVT__empty = ((IData)(this->__PVT__ptr_match) 
                          & (~ (IData)(this->__PVT__maybe_full)));
    this->__PVT__do_enq = ((~ (IData)(this->__PVT__full)) 
                           & (IData)(vlTOPp->io_in_hor_2_valid));
}

void VSystolicArray_HBFP_forTesting_Queue::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_2__44(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_Queue::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_2__44\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__do_deq = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_2_io_deq_ready) 
                           & (~ (IData)(this->__PVT__empty)));
}

void VSystolicArray_HBFP_forTesting_Queue::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_3__22(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_Queue::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_3__22\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT___value_T_3 = (0x3fU & ((IData)(1U) 
                                        + (IData)(this->__PVT__deq_ptr_value)));
    this->__PVT___value_T_1 = (0x3fU & ((IData)(1U) 
                                        + (IData)(this->__PVT__enq_ptr_value)));
    this->__PVT__ptr_match = ((IData)(this->__PVT__enq_ptr_value) 
                              == (IData)(this->__PVT__deq_ptr_value));
    this->__PVT__full = ((IData)(this->__PVT__ptr_match) 
                         & (IData)(this->__PVT__maybe_full));
    this->__PVT__empty = ((IData)(this->__PVT__ptr_match) 
                          & (~ (IData)(this->__PVT__maybe_full)));
    this->__PVT__do_enq = ((~ (IData)(this->__PVT__full)) 
                           & (IData)(vlTOPp->io_in_hor_3_valid));
}

void VSystolicArray_HBFP_forTesting_Queue::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_3__42(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_Queue::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_3__42\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__do_deq = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_3_io_deq_ready) 
                           & (~ (IData)(this->__PVT__empty)));
}

void VSystolicArray_HBFP_forTesting_Queue::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_4__23(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_Queue::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_4__23\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT___value_T_3 = (0x3fU & ((IData)(1U) 
                                        + (IData)(this->__PVT__deq_ptr_value)));
    this->__PVT___value_T_1 = (0x3fU & ((IData)(1U) 
                                        + (IData)(this->__PVT__enq_ptr_value)));
    this->__PVT__ptr_match = ((IData)(this->__PVT__enq_ptr_value) 
                              == (IData)(this->__PVT__deq_ptr_value));
    this->__PVT__full = ((IData)(this->__PVT__ptr_match) 
                         & (IData)(this->__PVT__maybe_full));
    this->__PVT__empty = ((IData)(this->__PVT__ptr_match) 
                          & (~ (IData)(this->__PVT__maybe_full)));
    this->__PVT__do_enq = ((~ (IData)(this->__PVT__full)) 
                           & (IData)(vlTOPp->io_in_hor_4_valid));
}

void VSystolicArray_HBFP_forTesting_Queue::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_4__40(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_Queue::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_4__40\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__do_deq = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_4_io_deq_ready) 
                           & (~ (IData)(this->__PVT__empty)));
}

void VSystolicArray_HBFP_forTesting_Queue::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_5__24(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_Queue::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_5__24\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT___value_T_3 = (0x3fU & ((IData)(1U) 
                                        + (IData)(this->__PVT__deq_ptr_value)));
    this->__PVT___value_T_1 = (0x3fU & ((IData)(1U) 
                                        + (IData)(this->__PVT__enq_ptr_value)));
    this->__PVT__ptr_match = ((IData)(this->__PVT__enq_ptr_value) 
                              == (IData)(this->__PVT__deq_ptr_value));
    this->__PVT__full = ((IData)(this->__PVT__ptr_match) 
                         & (IData)(this->__PVT__maybe_full));
    this->__PVT__empty = ((IData)(this->__PVT__ptr_match) 
                          & (~ (IData)(this->__PVT__maybe_full)));
    this->__PVT__do_enq = ((~ (IData)(this->__PVT__full)) 
                           & (IData)(vlTOPp->io_in_hor_5_valid));
}

void VSystolicArray_HBFP_forTesting_Queue::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_5__35(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_Queue::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_5__35\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__do_deq = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_5_io_deq_ready) 
                           & (~ (IData)(this->__PVT__empty)));
}

void VSystolicArray_HBFP_forTesting_Queue::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_6__25(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_Queue::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_6__25\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT___value_T_3 = (0x3fU & ((IData)(1U) 
                                        + (IData)(this->__PVT__deq_ptr_value)));
    this->__PVT___value_T_1 = (0x3fU & ((IData)(1U) 
                                        + (IData)(this->__PVT__enq_ptr_value)));
    this->__PVT__ptr_match = ((IData)(this->__PVT__enq_ptr_value) 
                              == (IData)(this->__PVT__deq_ptr_value));
    this->__PVT__full = ((IData)(this->__PVT__ptr_match) 
                         & (IData)(this->__PVT__maybe_full));
    this->__PVT__empty = ((IData)(this->__PVT__ptr_match) 
                          & (~ (IData)(this->__PVT__maybe_full)));
    this->__PVT__do_enq = ((~ (IData)(this->__PVT__full)) 
                           & (IData)(vlTOPp->io_in_hor_6_valid));
}

void VSystolicArray_HBFP_forTesting_Queue::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_6__36(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_Queue::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_6__36\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__do_deq = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_6_io_deq_ready) 
                           & (~ (IData)(this->__PVT__empty)));
}

void VSystolicArray_HBFP_forTesting_Queue::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_7__26(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_Queue::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_7__26\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT___value_T_3 = (0x3fU & ((IData)(1U) 
                                        + (IData)(this->__PVT__deq_ptr_value)));
    this->__PVT___value_T_1 = (0x3fU & ((IData)(1U) 
                                        + (IData)(this->__PVT__enq_ptr_value)));
    this->__PVT__ptr_match = ((IData)(this->__PVT__enq_ptr_value) 
                              == (IData)(this->__PVT__deq_ptr_value));
    this->__PVT__full = ((IData)(this->__PVT__ptr_match) 
                         & (IData)(this->__PVT__maybe_full));
    this->__PVT__empty = ((IData)(this->__PVT__ptr_match) 
                          & (~ (IData)(this->__PVT__maybe_full)));
    this->__PVT__do_enq = ((~ (IData)(this->__PVT__full)) 
                           & (IData)(vlTOPp->io_in_hor_7_valid));
}

void VSystolicArray_HBFP_forTesting_Queue::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_7__37(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_Queue::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_7__37\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__do_deq = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_7_io_deq_ready) 
                           & (~ (IData)(this->__PVT__empty)));
}

void VSystolicArray_HBFP_forTesting_Queue::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_0__27(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_Queue::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_0__27\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT___value_T_3 = (0x3fU & ((IData)(1U) 
                                        + (IData)(this->__PVT__deq_ptr_value)));
    this->__PVT___value_T_1 = (0x3fU & ((IData)(1U) 
                                        + (IData)(this->__PVT__enq_ptr_value)));
    this->__PVT__ptr_match = ((IData)(this->__PVT__enq_ptr_value) 
                              == (IData)(this->__PVT__deq_ptr_value));
    this->__PVT__full = ((IData)(this->__PVT__ptr_match) 
                         & (IData)(this->__PVT__maybe_full));
    this->__PVT__empty = ((IData)(this->__PVT__ptr_match) 
                          & (~ (IData)(this->__PVT__maybe_full)));
    this->__PVT__do_enq = ((~ (IData)(this->__PVT__full)) 
                           & (IData)(vlTOPp->io_in_ver_0_valid));
}

void VSystolicArray_HBFP_forTesting_Queue::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_1__28(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_Queue::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_1__28\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT___value_T_3 = (0x3fU & ((IData)(1U) 
                                        + (IData)(this->__PVT__deq_ptr_value)));
    this->__PVT___value_T_1 = (0x3fU & ((IData)(1U) 
                                        + (IData)(this->__PVT__enq_ptr_value)));
    this->__PVT__ptr_match = ((IData)(this->__PVT__enq_ptr_value) 
                              == (IData)(this->__PVT__deq_ptr_value));
    this->__PVT__full = ((IData)(this->__PVT__ptr_match) 
                         & (IData)(this->__PVT__maybe_full));
    this->__PVT__empty = ((IData)(this->__PVT__ptr_match) 
                          & (~ (IData)(this->__PVT__maybe_full)));
    this->__PVT__do_enq = ((~ (IData)(this->__PVT__full)) 
                           & (IData)(vlTOPp->io_in_ver_1_valid));
}

void VSystolicArray_HBFP_forTesting_Queue::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_1__48(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_Queue::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_1__48\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__do_deq = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_1_io_deq_ready) 
                           & (~ (IData)(this->__PVT__empty)));
}

void VSystolicArray_HBFP_forTesting_Queue::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_2__29(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_Queue::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_2__29\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT___value_T_3 = (0x3fU & ((IData)(1U) 
                                        + (IData)(this->__PVT__deq_ptr_value)));
    this->__PVT___value_T_1 = (0x3fU & ((IData)(1U) 
                                        + (IData)(this->__PVT__enq_ptr_value)));
    this->__PVT__ptr_match = ((IData)(this->__PVT__enq_ptr_value) 
                              == (IData)(this->__PVT__deq_ptr_value));
    this->__PVT__full = ((IData)(this->__PVT__ptr_match) 
                         & (IData)(this->__PVT__maybe_full));
    this->__PVT__empty = ((IData)(this->__PVT__ptr_match) 
                          & (~ (IData)(this->__PVT__maybe_full)));
    this->__PVT__do_enq = ((~ (IData)(this->__PVT__full)) 
                           & (IData)(vlTOPp->io_in_ver_2_valid));
}

void VSystolicArray_HBFP_forTesting_Queue::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_2__47(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_Queue::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_2__47\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__do_deq = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_2_io_deq_ready) 
                           & (~ (IData)(this->__PVT__empty)));
}

void VSystolicArray_HBFP_forTesting_Queue::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_3__30(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_Queue::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_3__30\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT___value_T_3 = (0x3fU & ((IData)(1U) 
                                        + (IData)(this->__PVT__deq_ptr_value)));
    this->__PVT___value_T_1 = (0x3fU & ((IData)(1U) 
                                        + (IData)(this->__PVT__enq_ptr_value)));
    this->__PVT__ptr_match = ((IData)(this->__PVT__enq_ptr_value) 
                              == (IData)(this->__PVT__deq_ptr_value));
    this->__PVT__full = ((IData)(this->__PVT__ptr_match) 
                         & (IData)(this->__PVT__maybe_full));
    this->__PVT__empty = ((IData)(this->__PVT__ptr_match) 
                          & (~ (IData)(this->__PVT__maybe_full)));
    this->__PVT__do_enq = ((~ (IData)(this->__PVT__full)) 
                           & (IData)(vlTOPp->io_in_ver_3_valid));
}

void VSystolicArray_HBFP_forTesting_Queue::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_3__45(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_Queue::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_3__45\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__do_deq = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_3_io_deq_ready) 
                           & (~ (IData)(this->__PVT__empty)));
}

void VSystolicArray_HBFP_forTesting_Queue::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_4__31(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_Queue::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_4__31\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT___value_T_3 = (0x3fU & ((IData)(1U) 
                                        + (IData)(this->__PVT__deq_ptr_value)));
    this->__PVT___value_T_1 = (0x3fU & ((IData)(1U) 
                                        + (IData)(this->__PVT__enq_ptr_value)));
    this->__PVT__ptr_match = ((IData)(this->__PVT__enq_ptr_value) 
                              == (IData)(this->__PVT__deq_ptr_value));
    this->__PVT__full = ((IData)(this->__PVT__ptr_match) 
                         & (IData)(this->__PVT__maybe_full));
    this->__PVT__empty = ((IData)(this->__PVT__ptr_match) 
                          & (~ (IData)(this->__PVT__maybe_full)));
    this->__PVT__do_enq = ((~ (IData)(this->__PVT__full)) 
                           & (IData)(vlTOPp->io_in_ver_4_valid));
}

void VSystolicArray_HBFP_forTesting_Queue::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_4__43(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_Queue::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_4__43\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__do_deq = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_4_io_deq_ready) 
                           & (~ (IData)(this->__PVT__empty)));
}

void VSystolicArray_HBFP_forTesting_Queue::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_5__32(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_Queue::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_5__32\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT___value_T_3 = (0x3fU & ((IData)(1U) 
                                        + (IData)(this->__PVT__deq_ptr_value)));
    this->__PVT___value_T_1 = (0x3fU & ((IData)(1U) 
                                        + (IData)(this->__PVT__enq_ptr_value)));
    this->__PVT__ptr_match = ((IData)(this->__PVT__enq_ptr_value) 
                              == (IData)(this->__PVT__deq_ptr_value));
    this->__PVT__full = ((IData)(this->__PVT__ptr_match) 
                         & (IData)(this->__PVT__maybe_full));
    this->__PVT__empty = ((IData)(this->__PVT__ptr_match) 
                          & (~ (IData)(this->__PVT__maybe_full)));
    this->__PVT__do_enq = ((~ (IData)(this->__PVT__full)) 
                           & (IData)(vlTOPp->io_in_ver_5_valid));
}

void VSystolicArray_HBFP_forTesting_Queue::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_5__41(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_Queue::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_5__41\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__do_deq = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_5_io_deq_ready) 
                           & (~ (IData)(this->__PVT__empty)));
}

void VSystolicArray_HBFP_forTesting_Queue::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_6__33(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_Queue::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_6__33\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT___value_T_3 = (0x3fU & ((IData)(1U) 
                                        + (IData)(this->__PVT__deq_ptr_value)));
    this->__PVT___value_T_1 = (0x3fU & ((IData)(1U) 
                                        + (IData)(this->__PVT__enq_ptr_value)));
    this->__PVT__ptr_match = ((IData)(this->__PVT__enq_ptr_value) 
                              == (IData)(this->__PVT__deq_ptr_value));
    this->__PVT__full = ((IData)(this->__PVT__ptr_match) 
                         & (IData)(this->__PVT__maybe_full));
    this->__PVT__empty = ((IData)(this->__PVT__ptr_match) 
                          & (~ (IData)(this->__PVT__maybe_full)));
    this->__PVT__do_enq = ((~ (IData)(this->__PVT__full)) 
                           & (IData)(vlTOPp->io_in_ver_6_valid));
}

void VSystolicArray_HBFP_forTesting_Queue::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_6__38(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_Queue::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_6__38\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__do_deq = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_6_io_deq_ready) 
                           & (~ (IData)(this->__PVT__empty)));
}

void VSystolicArray_HBFP_forTesting_Queue::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_7__34(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_Queue::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_7__34\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT___value_T_3 = (0x3fU & ((IData)(1U) 
                                        + (IData)(this->__PVT__deq_ptr_value)));
    this->__PVT___value_T_1 = (0x3fU & ((IData)(1U) 
                                        + (IData)(this->__PVT__enq_ptr_value)));
    this->__PVT__ptr_match = ((IData)(this->__PVT__enq_ptr_value) 
                              == (IData)(this->__PVT__deq_ptr_value));
    this->__PVT__full = ((IData)(this->__PVT__ptr_match) 
                         & (IData)(this->__PVT__maybe_full));
    this->__PVT__empty = ((IData)(this->__PVT__ptr_match) 
                          & (~ (IData)(this->__PVT__maybe_full)));
    this->__PVT__do_enq = ((~ (IData)(this->__PVT__full)) 
                           & (IData)(vlTOPp->io_in_ver_7_valid));
}

void VSystolicArray_HBFP_forTesting_Queue::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_7__39(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_Queue::_settle__TOP__SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_7__39\n"); );
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__do_deq = ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_7_io_deq_ready) 
                           & (~ (IData)(this->__PVT__empty)));
}

void VSystolicArray_HBFP_forTesting_Queue::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_Queue::_ctor_var_reset\n"); );
    // Body
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    io_enq_ready = VL_RAND_RESET_I(1);
    io_enq_valid = VL_RAND_RESET_I(1);
    io_enq_bits_sign_0 = VL_RAND_RESET_I(1);
    io_enq_bits_sign_1 = VL_RAND_RESET_I(1);
    io_enq_bits_sign_2 = VL_RAND_RESET_I(1);
    io_enq_bits_sign_3 = VL_RAND_RESET_I(1);
    io_enq_bits_sign_4 = VL_RAND_RESET_I(1);
    io_enq_bits_sign_5 = VL_RAND_RESET_I(1);
    io_enq_bits_sign_6 = VL_RAND_RESET_I(1);
    io_enq_bits_sign_7 = VL_RAND_RESET_I(1);
    io_enq_bits_man_0 = VL_RAND_RESET_I(6);
    io_enq_bits_man_1 = VL_RAND_RESET_I(6);
    io_enq_bits_man_2 = VL_RAND_RESET_I(6);
    io_enq_bits_man_3 = VL_RAND_RESET_I(6);
    io_enq_bits_man_4 = VL_RAND_RESET_I(6);
    io_enq_bits_man_5 = VL_RAND_RESET_I(6);
    io_enq_bits_man_6 = VL_RAND_RESET_I(6);
    io_enq_bits_man_7 = VL_RAND_RESET_I(6);
    io_enq_bits_exp = VL_RAND_RESET_I(8);
    io_deq_ready = VL_RAND_RESET_I(1);
    io_deq_valid = VL_RAND_RESET_I(1);
    io_deq_bits_sign_0 = VL_RAND_RESET_I(1);
    io_deq_bits_sign_1 = VL_RAND_RESET_I(1);
    io_deq_bits_sign_2 = VL_RAND_RESET_I(1);
    io_deq_bits_sign_3 = VL_RAND_RESET_I(1);
    io_deq_bits_sign_4 = VL_RAND_RESET_I(1);
    io_deq_bits_sign_5 = VL_RAND_RESET_I(1);
    io_deq_bits_sign_6 = VL_RAND_RESET_I(1);
    io_deq_bits_sign_7 = VL_RAND_RESET_I(1);
    io_deq_bits_man_0 = VL_RAND_RESET_I(6);
    io_deq_bits_man_1 = VL_RAND_RESET_I(6);
    io_deq_bits_man_2 = VL_RAND_RESET_I(6);
    io_deq_bits_man_3 = VL_RAND_RESET_I(6);
    io_deq_bits_man_4 = VL_RAND_RESET_I(6);
    io_deq_bits_man_5 = VL_RAND_RESET_I(6);
    io_deq_bits_man_6 = VL_RAND_RESET_I(6);
    io_deq_bits_man_7 = VL_RAND_RESET_I(6);
    io_deq_bits_exp = VL_RAND_RESET_I(8);
    { int __Vi0=0; for (; __Vi0<64; ++__Vi0) {
            __PVT__ram_sign_0[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<64; ++__Vi0) {
            __PVT__ram_sign_1[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<64; ++__Vi0) {
            __PVT__ram_sign_2[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<64; ++__Vi0) {
            __PVT__ram_sign_3[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<64; ++__Vi0) {
            __PVT__ram_sign_4[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<64; ++__Vi0) {
            __PVT__ram_sign_5[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<64; ++__Vi0) {
            __PVT__ram_sign_6[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<64; ++__Vi0) {
            __PVT__ram_sign_7[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<64; ++__Vi0) {
            __PVT__ram_man_0[__Vi0] = VL_RAND_RESET_I(6);
    }}
    { int __Vi0=0; for (; __Vi0<64; ++__Vi0) {
            __PVT__ram_man_1[__Vi0] = VL_RAND_RESET_I(6);
    }}
    { int __Vi0=0; for (; __Vi0<64; ++__Vi0) {
            __PVT__ram_man_2[__Vi0] = VL_RAND_RESET_I(6);
    }}
    { int __Vi0=0; for (; __Vi0<64; ++__Vi0) {
            __PVT__ram_man_3[__Vi0] = VL_RAND_RESET_I(6);
    }}
    { int __Vi0=0; for (; __Vi0<64; ++__Vi0) {
            __PVT__ram_man_4[__Vi0] = VL_RAND_RESET_I(6);
    }}
    { int __Vi0=0; for (; __Vi0<64; ++__Vi0) {
            __PVT__ram_man_5[__Vi0] = VL_RAND_RESET_I(6);
    }}
    { int __Vi0=0; for (; __Vi0<64; ++__Vi0) {
            __PVT__ram_man_6[__Vi0] = VL_RAND_RESET_I(6);
    }}
    { int __Vi0=0; for (; __Vi0<64; ++__Vi0) {
            __PVT__ram_man_7[__Vi0] = VL_RAND_RESET_I(6);
    }}
    { int __Vi0=0; for (; __Vi0<64; ++__Vi0) {
            __PVT__ram_exp[__Vi0] = VL_RAND_RESET_I(8);
    }}
    __PVT__enq_ptr_value = VL_RAND_RESET_I(6);
    __PVT__deq_ptr_value = VL_RAND_RESET_I(6);
    __PVT__maybe_full = VL_RAND_RESET_I(1);
    __PVT__ptr_match = VL_RAND_RESET_I(1);
    __PVT__empty = VL_RAND_RESET_I(1);
    __PVT__full = VL_RAND_RESET_I(1);
    __PVT__do_enq = VL_RAND_RESET_I(1);
    __PVT__do_deq = VL_RAND_RESET_I(1);
    __PVT___value_T_1 = VL_RAND_RESET_I(6);
    __PVT___value_T_3 = VL_RAND_RESET_I(6);
    __Vdlyvdim0__ram_sign_7__v0 = 0;
    __Vdlyvval__ram_sign_7__v0 = VL_RAND_RESET_I(1);
    __Vdlyvset__ram_sign_7__v0 = 0;
    __Vdlyvdim0__ram_sign_6__v0 = 0;
    __Vdlyvval__ram_sign_6__v0 = VL_RAND_RESET_I(1);
    __Vdlyvset__ram_sign_6__v0 = 0;
    __Vdlyvdim0__ram_man_0__v0 = 0;
    __Vdlyvval__ram_man_0__v0 = VL_RAND_RESET_I(6);
    __Vdlyvset__ram_man_0__v0 = 0;
    __Vdlyvdim0__ram_sign_0__v0 = 0;
    __Vdlyvval__ram_sign_0__v0 = VL_RAND_RESET_I(1);
    __Vdlyvset__ram_sign_0__v0 = 0;
    __Vdlyvdim0__ram_man_4__v0 = 0;
    __Vdlyvval__ram_man_4__v0 = VL_RAND_RESET_I(6);
    __Vdlyvset__ram_man_4__v0 = 0;
    __Vdlyvdim0__ram_man_1__v0 = 0;
    __Vdlyvval__ram_man_1__v0 = VL_RAND_RESET_I(6);
    __Vdlyvset__ram_man_1__v0 = 0;
    __Vdlyvdim0__ram_sign_1__v0 = 0;
    __Vdlyvval__ram_sign_1__v0 = VL_RAND_RESET_I(1);
    __Vdlyvset__ram_sign_1__v0 = 0;
    __Vdlyvdim0__ram_man_5__v0 = 0;
    __Vdlyvval__ram_man_5__v0 = VL_RAND_RESET_I(6);
    __Vdlyvset__ram_man_5__v0 = 0;
    __Vdlyvdim0__ram_man_2__v0 = 0;
    __Vdlyvval__ram_man_2__v0 = VL_RAND_RESET_I(6);
    __Vdlyvset__ram_man_2__v0 = 0;
    __Vdlyvdim0__ram_sign_2__v0 = 0;
    __Vdlyvval__ram_sign_2__v0 = VL_RAND_RESET_I(1);
    __Vdlyvset__ram_sign_2__v0 = 0;
    __Vdlyvdim0__ram_man_3__v0 = 0;
    __Vdlyvval__ram_man_3__v0 = VL_RAND_RESET_I(6);
    __Vdlyvset__ram_man_3__v0 = 0;
    __Vdlyvdim0__ram_sign_3__v0 = 0;
    __Vdlyvval__ram_sign_3__v0 = VL_RAND_RESET_I(1);
    __Vdlyvset__ram_sign_3__v0 = 0;
    __Vdlyvdim0__ram_sign_4__v0 = 0;
    __Vdlyvval__ram_sign_4__v0 = VL_RAND_RESET_I(1);
    __Vdlyvset__ram_sign_4__v0 = 0;
    __Vdlyvdim0__ram_sign_5__v0 = 0;
    __Vdlyvval__ram_sign_5__v0 = VL_RAND_RESET_I(1);
    __Vdlyvset__ram_sign_5__v0 = 0;
    __Vdlyvdim0__ram_man_6__v0 = 0;
    __Vdlyvval__ram_man_6__v0 = VL_RAND_RESET_I(6);
    __Vdlyvset__ram_man_6__v0 = 0;
    __Vdlyvdim0__ram_man_7__v0 = 0;
    __Vdlyvval__ram_man_7__v0 = VL_RAND_RESET_I(6);
    __Vdlyvset__ram_man_7__v0 = 0;
    __Vdlyvdim0__ram_exp__v0 = 0;
    __Vdlyvval__ram_exp__v0 = VL_RAND_RESET_I(8);
    __Vdlyvset__ram_exp__v0 = 0;
}

void VSystolicArray_HBFP_forTesting_Queue::_configure_coverage(VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VSystolicArray_HBFP_forTesting_Queue::_configure_coverage\n"); );
    // Body
    if (false && vlSymsp && first) {}  // Prevent unused
}