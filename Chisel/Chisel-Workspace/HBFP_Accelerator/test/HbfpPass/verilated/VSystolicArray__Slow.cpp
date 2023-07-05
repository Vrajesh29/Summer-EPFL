// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSystolicArray.h for the primary calling header

#include "VSystolicArray.h"
#include "VSystolicArray__Syms.h"

//==========

VL_CTOR_IMP(VSystolicArray) {
    VSystolicArray__Syms* __restrict vlSymsp = __VlSymsp = new VSystolicArray__Syms(this, name());
    VSystolicArray* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VSystolicArray::__Vconfigure(VSystolicArray__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    _configure_coverage(vlSymsp, first);
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

VSystolicArray::~VSystolicArray() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
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


void VSystolicArray::__vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
    const char* hierp, const char* pagep, const char* commentp, const char* linescovp) {
    uint32_t* count32p = countp;
    static uint32_t fake_zero_count = 0;
    if (!enable) count32p = &fake_zero_count;
    *count32p = 0;
    CHISEL_VL_COVER_INSERT(count32p,  "filename",filenamep,  "lineno",lineno,  "column",column,
        "hier",std::string(name())+hierp,  "page",pagep,  "comment",commentp,  (linescovp[0] ? "linescov" : ""), linescovp);
}

void VSystolicArray::_settle__TOP__2(VSystolicArray__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSystolicArray::_settle__TOP__2\n"); );
    VSystolicArray* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->io_out_0_0_result_sign = vlTOPp->SystolicArray__DOT__pes_0_0__DOT__result_buffer_sign;
    vlTOPp->io_out_0_0_result_man = vlTOPp->SystolicArray__DOT__pes_0_0__DOT__result_buffer_man;
    vlTOPp->io_out_0_0_result_exp = vlTOPp->SystolicArray__DOT__pes_0_0__DOT__result_buffer_exp;
    vlTOPp->io_out_0_1_hor_sign = vlTOPp->SystolicArray__DOT__pes_0_1_io_in_hor_r_sign;
    vlTOPp->io_out_0_1_hor_man = vlTOPp->SystolicArray__DOT__pes_0_1_io_in_hor_r_man;
    vlTOPp->io_out_0_1_hor_exp = vlTOPp->SystolicArray__DOT__pes_0_1_io_in_hor_r_exp;
    vlTOPp->io_out_0_1_result_sign = vlTOPp->SystolicArray__DOT__pes_0_1__DOT__result_buffer_sign;
    vlTOPp->io_out_0_1_result_man = vlTOPp->SystolicArray__DOT__pes_0_1__DOT__result_buffer_man;
    vlTOPp->io_out_0_1_result_exp = vlTOPp->SystolicArray__DOT__pes_0_1__DOT__result_buffer_exp;
    vlTOPp->io_out_1_0_ver_sign = vlTOPp->SystolicArray__DOT__pes_1_0_io_in_ver_r_sign;
    vlTOPp->io_out_1_0_ver_man = vlTOPp->SystolicArray__DOT__pes_1_0_io_in_ver_r_man;
    vlTOPp->io_out_1_0_ver_exp = vlTOPp->SystolicArray__DOT__pes_1_0_io_in_ver_r_exp;
    vlTOPp->io_out_1_0_result_sign = vlTOPp->SystolicArray__DOT__pes_1_0__DOT__result_buffer_sign;
    vlTOPp->io_out_1_0_result_man = vlTOPp->SystolicArray__DOT__pes_1_0__DOT__result_buffer_man;
    vlTOPp->io_out_1_0_result_exp = vlTOPp->SystolicArray__DOT__pes_1_0__DOT__result_buffer_exp;
    vlTOPp->io_out_1_1_hor_sign = vlTOPp->SystolicArray__DOT__pes_1_1_io_in_hor_r_sign;
    vlTOPp->io_out_1_1_hor_man = vlTOPp->SystolicArray__DOT__pes_1_1_io_in_hor_r_man;
    vlTOPp->io_out_1_1_hor_exp = vlTOPp->SystolicArray__DOT__pes_1_1_io_in_hor_r_exp;
    vlTOPp->io_out_1_1_ver_sign = vlTOPp->SystolicArray__DOT__pes_1_1_io_in_ver_r_sign;
    vlTOPp->io_out_1_1_ver_man = vlTOPp->SystolicArray__DOT__pes_1_1_io_in_ver_r_man;
    vlTOPp->io_out_1_1_ver_exp = vlTOPp->SystolicArray__DOT__pes_1_1_io_in_ver_r_exp;
    vlTOPp->io_out_1_1_result_sign = vlTOPp->SystolicArray__DOT__pes_1_1__DOT__result_buffer_sign;
    vlTOPp->io_out_1_1_result_man = vlTOPp->SystolicArray__DOT__pes_1_1__DOT__result_buffer_man;
    vlTOPp->io_out_1_1_result_exp = vlTOPp->SystolicArray__DOT__pes_1_1__DOT__result_buffer_exp;
    vlTOPp->SystolicArray__DOT__pes_0_1_io_in_ver_sign 
        = ((IData)(vlTOPp->SystolicArray__DOT__pes_0_1_io_in_ver_r) 
           & (IData)(vlTOPp->SystolicArray__DOT__pes_0_1_io_in_ver_r_1_sign));
    vlTOPp->SystolicArray__DOT__pes_1_0_io_in_hor_sign 
        = ((IData)(vlTOPp->SystolicArray__DOT__pes_0_1_io_in_ver_r) 
           & (IData)(vlTOPp->SystolicArray__DOT__pes_1_0_io_in_hor_r_1_sign));
    vlTOPp->SystolicArray__DOT__pes_1_1__DOT__fpmult__DOT___io_out_result_man_T 
        = (0xffU & ((IData)(vlTOPp->SystolicArray__DOT__pes_1_1_io_in_hor_r_man) 
                    * (IData)(vlTOPp->SystolicArray__DOT__pes_1_1_io_in_ver_r_man)));
    if (vlTOPp->SystolicArray__DOT__pes_0_1_io_in_ver_r) {
        vlTOPp->SystolicArray__DOT__pes_0_1_io_in_ver_man 
            = vlTOPp->SystolicArray__DOT__pes_0_1_io_in_ver_r_1_man;
        vlTOPp->SystolicArray__DOT__pes_1_0_io_in_hor_man 
            = vlTOPp->SystolicArray__DOT__pes_1_0_io_in_hor_r_1_man;
    } else {
        vlTOPp->SystolicArray__DOT__pes_0_1_io_in_ver_man = 0U;
        vlTOPp->SystolicArray__DOT__pes_1_0_io_in_hor_man = 0U;
    }
    vlTOPp->SystolicArray__DOT__pes_1_1__DOT__fpmult_io_out_result_exp 
        = (0xffU & ((IData)(vlTOPp->SystolicArray__DOT__pes_1_1_io_in_hor_r_exp) 
                    + (IData)(vlTOPp->SystolicArray__DOT__pes_1_1_io_in_ver_r_exp)));
    if (vlTOPp->SystolicArray__DOT__pes_0_1_io_in_ver_r) {
        vlTOPp->SystolicArray__DOT__pes_0_1_io_in_ver_exp 
            = vlTOPp->SystolicArray__DOT__pes_0_1_io_in_ver_r_1_exp;
        vlTOPp->SystolicArray__DOT__pes_1_0_io_in_hor_exp 
            = vlTOPp->SystolicArray__DOT__pes_1_0_io_in_hor_r_1_exp;
    } else {
        vlTOPp->SystolicArray__DOT__pes_0_1_io_in_ver_exp = 0U;
        vlTOPp->SystolicArray__DOT__pes_1_0_io_in_hor_exp = 0U;
    }
    vlTOPp->SystolicArray__DOT__inputQueue__DOT__ptr_match 
        = ((IData)(vlTOPp->SystolicArray__DOT__inputQueue__DOT__enq_ptr_value) 
           == (IData)(vlTOPp->SystolicArray__DOT__inputQueue__DOT__deq_ptr_value));
    vlTOPp->io_out_0_1_ver_sign = vlTOPp->SystolicArray__DOT__pes_0_1_io_in_ver_sign;
    vlTOPp->io_out_1_0_hor_sign = vlTOPp->SystolicArray__DOT__pes_1_0_io_in_hor_sign;
    vlTOPp->io_out_0_1_ver_man = vlTOPp->SystolicArray__DOT__pes_0_1_io_in_ver_man;
    vlTOPp->SystolicArray__DOT__pes_0_1__DOT__fpmult__DOT___io_out_result_man_T 
        = (0xffU & ((IData)(vlTOPp->SystolicArray__DOT__pes_0_1_io_in_hor_r_man) 
                    * (IData)(vlTOPp->SystolicArray__DOT__pes_0_1_io_in_ver_man)));
    vlTOPp->io_out_1_0_hor_man = vlTOPp->SystolicArray__DOT__pes_1_0_io_in_hor_man;
    vlTOPp->SystolicArray__DOT__pes_1_0__DOT__fpmult__DOT___io_out_result_man_T 
        = (0xffU & ((IData)(vlTOPp->SystolicArray__DOT__pes_1_0_io_in_hor_man) 
                    * (IData)(vlTOPp->SystolicArray__DOT__pes_1_0_io_in_ver_r_man)));
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
    vlTOPp->io_out_0_1_ver_exp = vlTOPp->SystolicArray__DOT__pes_0_1_io_in_ver_exp;
    vlTOPp->SystolicArray__DOT__pes_0_1__DOT__fpmult_io_out_result_exp 
        = (0xffU & ((IData)(vlTOPp->SystolicArray__DOT__pes_0_1_io_in_hor_r_exp) 
                    + (IData)(vlTOPp->SystolicArray__DOT__pes_0_1_io_in_ver_exp)));
    vlTOPp->io_out_1_0_hor_exp = vlTOPp->SystolicArray__DOT__pes_1_0_io_in_hor_exp;
    vlTOPp->SystolicArray__DOT__pes_1_0__DOT__fpmult_io_out_result_exp 
        = (0xffU & ((IData)(vlTOPp->SystolicArray__DOT__pes_1_0_io_in_hor_exp) 
                    + (IData)(vlTOPp->SystolicArray__DOT__pes_1_0_io_in_ver_r_exp)));
    vlTOPp->SystolicArray__DOT__inputQueue__DOT__full 
        = ((IData)(vlTOPp->SystolicArray__DOT__inputQueue__DOT__ptr_match) 
           & (IData)(vlTOPp->SystolicArray__DOT__inputQueue__DOT__maybe_full));
    vlTOPp->SystolicArray__DOT__inputQueue__DOT__empty 
        = ((IData)(vlTOPp->SystolicArray__DOT__inputQueue__DOT__ptr_match) 
           & (~ (IData)(vlTOPp->SystolicArray__DOT__inputQueue__DOT__maybe_full)));
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
            = ((IData)(vlTOPp->SystolicArray__DOT__pes_1_1_io_in_hor_r_sign) 
               ^ (IData)(vlTOPp->SystolicArray__DOT__pes_1_1_io_in_ver_r_sign));
    } else {
        vlTOPp->SystolicArray__DOT__pes_1_1__DOT__fpadder_io_out_result_exp 
            = vlTOPp->SystolicArray__DOT__pes_1_1__DOT__result_buffer_exp;
        vlTOPp->SystolicArray__DOT__pes_1_1__DOT__fpadder_io_out_result_sign 
            = vlTOPp->SystolicArray__DOT__pes_1_1__DOT__result_buffer_sign;
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
    vlTOPp->io_in_ready = (1U & (~ (IData)(vlTOPp->SystolicArray__DOT__inputQueue__DOT__full)));
    vlTOPp->SystolicArray__DOT__inputQueue__DOT__do_enq 
        = ((~ (IData)(vlTOPp->SystolicArray__DOT__inputQueue__DOT__full)) 
           & (IData)(vlTOPp->io_in_valid));
    vlTOPp->SystolicArray__DOT__pes_0_0_io_in_hor_sign 
        = ((~ (IData)(vlTOPp->SystolicArray__DOT__inputQueue__DOT__empty)) 
           & ((IData)(vlTOPp->SystolicArray__DOT__counter)
               ? vlTOPp->SystolicArray__DOT__inputQueue__DOT__ram_0_1_hor_sign
              [vlTOPp->SystolicArray__DOT__inputQueue__DOT__deq_ptr_value]
               : vlTOPp->SystolicArray__DOT__inputQueue__DOT__ram_0_0_hor_sign
              [vlTOPp->SystolicArray__DOT__inputQueue__DOT__deq_ptr_value]));
    vlTOPp->SystolicArray__DOT__pes_0_0_io_in_ver_sign 
        = ((~ (IData)(vlTOPp->SystolicArray__DOT__inputQueue__DOT__empty)) 
           & ((IData)(vlTOPp->SystolicArray__DOT__counter)
               ? vlTOPp->SystolicArray__DOT__inputQueue__DOT__ram_1_0_ver_sign
              [vlTOPp->SystolicArray__DOT__inputQueue__DOT__deq_ptr_value]
               : vlTOPp->SystolicArray__DOT__inputQueue__DOT__ram_0_0_ver_sign
              [vlTOPp->SystolicArray__DOT__inputQueue__DOT__deq_ptr_value]));
    if (vlTOPp->SystolicArray__DOT__inputQueue__DOT__empty) {
        vlTOPp->SystolicArray__DOT__pes_0_0_io_in_hor_man = 0U;
        vlTOPp->SystolicArray__DOT__pes_0_0_io_in_ver_man = 0U;
        vlTOPp->SystolicArray__DOT__pes_0_0_io_in_hor_exp = 0U;
        vlTOPp->SystolicArray__DOT__pes_0_0_io_in_ver_exp = 0U;
    } else {
        vlTOPp->SystolicArray__DOT__pes_0_0_io_in_hor_man 
            = ((IData)(vlTOPp->SystolicArray__DOT__counter)
                ? vlTOPp->SystolicArray__DOT__inputQueue__DOT__ram_0_1_hor_man
               [vlTOPp->SystolicArray__DOT__inputQueue__DOT__deq_ptr_value]
                : vlTOPp->SystolicArray__DOT__inputQueue__DOT__ram_0_0_hor_man
               [vlTOPp->SystolicArray__DOT__inputQueue__DOT__deq_ptr_value]);
        vlTOPp->SystolicArray__DOT__pes_0_0_io_in_ver_man 
            = ((IData)(vlTOPp->SystolicArray__DOT__counter)
                ? vlTOPp->SystolicArray__DOT__inputQueue__DOT__ram_1_0_ver_man
               [vlTOPp->SystolicArray__DOT__inputQueue__DOT__deq_ptr_value]
                : vlTOPp->SystolicArray__DOT__inputQueue__DOT__ram_0_0_ver_man
               [vlTOPp->SystolicArray__DOT__inputQueue__DOT__deq_ptr_value]);
        vlTOPp->SystolicArray__DOT__pes_0_0_io_in_hor_exp 
            = ((IData)(vlTOPp->SystolicArray__DOT__counter)
                ? vlTOPp->SystolicArray__DOT__inputQueue__DOT__ram_0_1_hor_exp
               [vlTOPp->SystolicArray__DOT__inputQueue__DOT__deq_ptr_value]
                : vlTOPp->SystolicArray__DOT__inputQueue__DOT__ram_0_0_hor_exp
               [vlTOPp->SystolicArray__DOT__inputQueue__DOT__deq_ptr_value]);
        vlTOPp->SystolicArray__DOT__pes_0_0_io_in_ver_exp 
            = ((IData)(vlTOPp->SystolicArray__DOT__counter)
                ? vlTOPp->SystolicArray__DOT__inputQueue__DOT__ram_1_0_ver_exp
               [vlTOPp->SystolicArray__DOT__inputQueue__DOT__deq_ptr_value]
                : vlTOPp->SystolicArray__DOT__inputQueue__DOT__ram_0_0_ver_exp
               [vlTOPp->SystolicArray__DOT__inputQueue__DOT__deq_ptr_value]);
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
            = ((IData)(vlTOPp->SystolicArray__DOT__pes_0_1_io_in_hor_r_sign) 
               ^ (IData)(vlTOPp->SystolicArray__DOT__pes_0_1_io_in_ver_sign));
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
            = ((IData)(vlTOPp->SystolicArray__DOT__pes_1_0_io_in_hor_sign) 
               ^ (IData)(vlTOPp->SystolicArray__DOT__pes_1_0_io_in_ver_r_sign));
    } else {
        vlTOPp->SystolicArray__DOT__pes_1_0__DOT__fpadder_io_out_result_exp 
            = vlTOPp->SystolicArray__DOT__pes_1_0__DOT__result_buffer_exp;
        vlTOPp->SystolicArray__DOT__pes_1_0__DOT__fpadder_io_out_result_sign 
            = vlTOPp->SystolicArray__DOT__pes_1_0__DOT__result_buffer_sign;
    }
    vlTOPp->io_out_0_0_hor_sign = vlTOPp->SystolicArray__DOT__pes_0_0_io_in_hor_sign;
    vlTOPp->io_out_0_0_ver_sign = vlTOPp->SystolicArray__DOT__pes_0_0_io_in_ver_sign;
    vlTOPp->io_out_0_0_hor_man = vlTOPp->SystolicArray__DOT__pes_0_0_io_in_hor_man;
    vlTOPp->io_out_0_0_ver_man = vlTOPp->SystolicArray__DOT__pes_0_0_io_in_ver_man;
    vlTOPp->SystolicArray__DOT__pes_0_0__DOT__fpmult__DOT___io_out_result_man_T 
        = (0xffU & ((IData)(vlTOPp->SystolicArray__DOT__pes_0_0_io_in_hor_man) 
                    * (IData)(vlTOPp->SystolicArray__DOT__pes_0_0_io_in_ver_man)));
    vlTOPp->io_out_0_0_hor_exp = vlTOPp->SystolicArray__DOT__pes_0_0_io_in_hor_exp;
    vlTOPp->io_out_0_0_ver_exp = vlTOPp->SystolicArray__DOT__pes_0_0_io_in_ver_exp;
    vlTOPp->SystolicArray__DOT__pes_0_0__DOT__fpmult_io_out_result_exp 
        = (0xffU & ((IData)(vlTOPp->SystolicArray__DOT__pes_0_0_io_in_hor_exp) 
                    + (IData)(vlTOPp->SystolicArray__DOT__pes_0_0_io_in_ver_exp)));
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
            = ((IData)(vlTOPp->SystolicArray__DOT__pes_0_0_io_in_hor_sign) 
               ^ (IData)(vlTOPp->SystolicArray__DOT__pes_0_0_io_in_ver_sign));
    } else {
        vlTOPp->SystolicArray__DOT__pes_0_0__DOT__fpadder_io_out_result_exp 
            = vlTOPp->SystolicArray__DOT__pes_0_0__DOT__result_buffer_exp;
        vlTOPp->SystolicArray__DOT__pes_0_0__DOT__fpadder_io_out_result_sign 
            = vlTOPp->SystolicArray__DOT__pes_0_0__DOT__result_buffer_sign;
    }
}

void VSystolicArray::_eval_initial(VSystolicArray__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSystolicArray::_eval_initial\n"); );
    VSystolicArray* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VSystolicArray::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSystolicArray::final\n"); );
    // Variables
    VSystolicArray__Syms* __restrict vlSymsp = this->__VlSymsp;
    VSystolicArray* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VSystolicArray::_eval_settle(VSystolicArray__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSystolicArray::_eval_settle\n"); );
    VSystolicArray* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
}

void VSystolicArray::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSystolicArray::_ctor_var_reset\n"); );
    // Body
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    io_in_ready = VL_RAND_RESET_I(1);
    io_in_valid = VL_RAND_RESET_I(1);
    io_in_bits_0_0_hor_sign = VL_RAND_RESET_I(1);
    io_in_bits_0_0_hor_man = VL_RAND_RESET_I(4);
    io_in_bits_0_0_hor_exp = VL_RAND_RESET_I(8);
    io_in_bits_0_0_ver_sign = VL_RAND_RESET_I(1);
    io_in_bits_0_0_ver_man = VL_RAND_RESET_I(4);
    io_in_bits_0_0_ver_exp = VL_RAND_RESET_I(8);
    io_in_bits_0_1_hor_sign = VL_RAND_RESET_I(1);
    io_in_bits_0_1_hor_man = VL_RAND_RESET_I(4);
    io_in_bits_0_1_hor_exp = VL_RAND_RESET_I(8);
    io_in_bits_0_1_ver_sign = VL_RAND_RESET_I(1);
    io_in_bits_0_1_ver_man = VL_RAND_RESET_I(4);
    io_in_bits_0_1_ver_exp = VL_RAND_RESET_I(8);
    io_in_bits_1_0_hor_sign = VL_RAND_RESET_I(1);
    io_in_bits_1_0_hor_man = VL_RAND_RESET_I(4);
    io_in_bits_1_0_hor_exp = VL_RAND_RESET_I(8);
    io_in_bits_1_0_ver_sign = VL_RAND_RESET_I(1);
    io_in_bits_1_0_ver_man = VL_RAND_RESET_I(4);
    io_in_bits_1_0_ver_exp = VL_RAND_RESET_I(8);
    io_in_bits_1_1_hor_sign = VL_RAND_RESET_I(1);
    io_in_bits_1_1_hor_man = VL_RAND_RESET_I(4);
    io_in_bits_1_1_hor_exp = VL_RAND_RESET_I(8);
    io_in_bits_1_1_ver_sign = VL_RAND_RESET_I(1);
    io_in_bits_1_1_ver_man = VL_RAND_RESET_I(4);
    io_in_bits_1_1_ver_exp = VL_RAND_RESET_I(8);
    io_out_0_0_hor_sign = VL_RAND_RESET_I(1);
    io_out_0_0_hor_man = VL_RAND_RESET_I(4);
    io_out_0_0_hor_exp = VL_RAND_RESET_I(8);
    io_out_0_0_ver_sign = VL_RAND_RESET_I(1);
    io_out_0_0_ver_man = VL_RAND_RESET_I(4);
    io_out_0_0_ver_exp = VL_RAND_RESET_I(8);
    io_out_0_0_result_sign = VL_RAND_RESET_I(1);
    io_out_0_0_result_man = VL_RAND_RESET_I(4);
    io_out_0_0_result_exp = VL_RAND_RESET_I(8);
    io_out_0_1_hor_sign = VL_RAND_RESET_I(1);
    io_out_0_1_hor_man = VL_RAND_RESET_I(4);
    io_out_0_1_hor_exp = VL_RAND_RESET_I(8);
    io_out_0_1_ver_sign = VL_RAND_RESET_I(1);
    io_out_0_1_ver_man = VL_RAND_RESET_I(4);
    io_out_0_1_ver_exp = VL_RAND_RESET_I(8);
    io_out_0_1_result_sign = VL_RAND_RESET_I(1);
    io_out_0_1_result_man = VL_RAND_RESET_I(4);
    io_out_0_1_result_exp = VL_RAND_RESET_I(8);
    io_out_1_0_hor_sign = VL_RAND_RESET_I(1);
    io_out_1_0_hor_man = VL_RAND_RESET_I(4);
    io_out_1_0_hor_exp = VL_RAND_RESET_I(8);
    io_out_1_0_ver_sign = VL_RAND_RESET_I(1);
    io_out_1_0_ver_man = VL_RAND_RESET_I(4);
    io_out_1_0_ver_exp = VL_RAND_RESET_I(8);
    io_out_1_0_result_sign = VL_RAND_RESET_I(1);
    io_out_1_0_result_man = VL_RAND_RESET_I(4);
    io_out_1_0_result_exp = VL_RAND_RESET_I(8);
    io_out_1_1_hor_sign = VL_RAND_RESET_I(1);
    io_out_1_1_hor_man = VL_RAND_RESET_I(4);
    io_out_1_1_hor_exp = VL_RAND_RESET_I(8);
    io_out_1_1_ver_sign = VL_RAND_RESET_I(1);
    io_out_1_1_ver_man = VL_RAND_RESET_I(4);
    io_out_1_1_ver_exp = VL_RAND_RESET_I(8);
    io_out_1_1_result_sign = VL_RAND_RESET_I(1);
    io_out_1_1_result_man = VL_RAND_RESET_I(4);
    io_out_1_1_result_exp = VL_RAND_RESET_I(8);
    SystolicArray__DOT__pes_0_0_io_in_hor_sign = VL_RAND_RESET_I(1);
    SystolicArray__DOT__pes_0_0_io_in_hor_man = VL_RAND_RESET_I(4);
    SystolicArray__DOT__pes_0_0_io_in_hor_exp = VL_RAND_RESET_I(8);
    SystolicArray__DOT__pes_0_0_io_in_ver_sign = VL_RAND_RESET_I(1);
    SystolicArray__DOT__pes_0_0_io_in_ver_man = VL_RAND_RESET_I(4);
    SystolicArray__DOT__pes_0_0_io_in_ver_exp = VL_RAND_RESET_I(8);
    SystolicArray__DOT__pes_0_1_io_in_ver_sign = VL_RAND_RESET_I(1);
    SystolicArray__DOT__pes_0_1_io_in_ver_man = VL_RAND_RESET_I(4);
    SystolicArray__DOT__pes_0_1_io_in_ver_exp = VL_RAND_RESET_I(8);
    SystolicArray__DOT__pes_1_0_io_in_hor_sign = VL_RAND_RESET_I(1);
    SystolicArray__DOT__pes_1_0_io_in_hor_man = VL_RAND_RESET_I(4);
    SystolicArray__DOT__pes_1_0_io_in_hor_exp = VL_RAND_RESET_I(8);
    SystolicArray__DOT__counter = VL_RAND_RESET_I(1);
    SystolicArray__DOT__pes_1_0_io_in_hor_r_1_sign = VL_RAND_RESET_I(1);
    SystolicArray__DOT__pes_1_0_io_in_hor_r_1_man = VL_RAND_RESET_I(4);
    SystolicArray__DOT__pes_1_0_io_in_hor_r_1_exp = VL_RAND_RESET_I(8);
    SystolicArray__DOT__pes_0_1_io_in_ver_r = VL_RAND_RESET_I(1);
    SystolicArray__DOT__pes_0_1_io_in_ver_r_1_sign = VL_RAND_RESET_I(1);
    SystolicArray__DOT__pes_0_1_io_in_ver_r_1_man = VL_RAND_RESET_I(4);
    SystolicArray__DOT__pes_0_1_io_in_ver_r_1_exp = VL_RAND_RESET_I(8);
    SystolicArray__DOT__pes_0_1_io_in_hor_r_sign = VL_RAND_RESET_I(1);
    SystolicArray__DOT__pes_0_1_io_in_hor_r_man = VL_RAND_RESET_I(4);
    SystolicArray__DOT__pes_0_1_io_in_hor_r_exp = VL_RAND_RESET_I(8);
    SystolicArray__DOT__pes_1_1_io_in_hor_r_sign = VL_RAND_RESET_I(1);
    SystolicArray__DOT__pes_1_1_io_in_hor_r_man = VL_RAND_RESET_I(4);
    SystolicArray__DOT__pes_1_1_io_in_hor_r_exp = VL_RAND_RESET_I(8);
    SystolicArray__DOT__pes_1_0_io_in_ver_r_sign = VL_RAND_RESET_I(1);
    SystolicArray__DOT__pes_1_0_io_in_ver_r_man = VL_RAND_RESET_I(4);
    SystolicArray__DOT__pes_1_0_io_in_ver_r_exp = VL_RAND_RESET_I(8);
    SystolicArray__DOT__pes_1_1_io_in_ver_r_sign = VL_RAND_RESET_I(1);
    SystolicArray__DOT__pes_1_1_io_in_ver_r_man = VL_RAND_RESET_I(4);
    SystolicArray__DOT__pes_1_1_io_in_ver_r_exp = VL_RAND_RESET_I(8);
    SystolicArray__DOT__pes_0_0__DOT__fpmult_io_out_result_exp = VL_RAND_RESET_I(8);
    SystolicArray__DOT__pes_0_0__DOT__fpadder_io_out_result_sign = VL_RAND_RESET_I(1);
    SystolicArray__DOT__pes_0_0__DOT__fpadder_io_out_result_exp = VL_RAND_RESET_I(8);
    SystolicArray__DOT__pes_0_0__DOT__result_buffer_sign = VL_RAND_RESET_I(1);
    SystolicArray__DOT__pes_0_0__DOT__result_buffer_man = VL_RAND_RESET_I(4);
    SystolicArray__DOT__pes_0_0__DOT__result_buffer_exp = VL_RAND_RESET_I(8);
    SystolicArray__DOT__pes_0_0__DOT__fpmult__DOT___io_out_result_man_T = VL_RAND_RESET_I(8);
    SystolicArray__DOT__pes_0_0__DOT__fpadder__DOT___exp_diff_T = VL_RAND_RESET_I(1);
    SystolicArray__DOT__pes_0_0__DOT__fpadder__DOT__exp_diff = VL_RAND_RESET_I(8);
    SystolicArray__DOT__pes_0_0__DOT__fpadder__DOT___io_out_result_man_T_3 = VL_RAND_RESET_I(4);
    SystolicArray__DOT__pes_0_0__DOT__fpadder__DOT___io_out_result_man_T_6 = VL_RAND_RESET_I(4);
    SystolicArray__DOT__pes_0_1__DOT__fpmult_io_out_result_exp = VL_RAND_RESET_I(8);
    SystolicArray__DOT__pes_0_1__DOT__fpadder_io_out_result_sign = VL_RAND_RESET_I(1);
    SystolicArray__DOT__pes_0_1__DOT__fpadder_io_out_result_exp = VL_RAND_RESET_I(8);
    SystolicArray__DOT__pes_0_1__DOT__result_buffer_sign = VL_RAND_RESET_I(1);
    SystolicArray__DOT__pes_0_1__DOT__result_buffer_man = VL_RAND_RESET_I(4);
    SystolicArray__DOT__pes_0_1__DOT__result_buffer_exp = VL_RAND_RESET_I(8);
    SystolicArray__DOT__pes_0_1__DOT__fpmult__DOT___io_out_result_man_T = VL_RAND_RESET_I(8);
    SystolicArray__DOT__pes_0_1__DOT__fpadder__DOT___exp_diff_T = VL_RAND_RESET_I(1);
    SystolicArray__DOT__pes_0_1__DOT__fpadder__DOT__exp_diff = VL_RAND_RESET_I(8);
    SystolicArray__DOT__pes_0_1__DOT__fpadder__DOT___io_out_result_man_T_3 = VL_RAND_RESET_I(4);
    SystolicArray__DOT__pes_0_1__DOT__fpadder__DOT___io_out_result_man_T_6 = VL_RAND_RESET_I(4);
    SystolicArray__DOT__pes_1_0__DOT__fpmult_io_out_result_exp = VL_RAND_RESET_I(8);
    SystolicArray__DOT__pes_1_0__DOT__fpadder_io_out_result_sign = VL_RAND_RESET_I(1);
    SystolicArray__DOT__pes_1_0__DOT__fpadder_io_out_result_exp = VL_RAND_RESET_I(8);
    SystolicArray__DOT__pes_1_0__DOT__result_buffer_sign = VL_RAND_RESET_I(1);
    SystolicArray__DOT__pes_1_0__DOT__result_buffer_man = VL_RAND_RESET_I(4);
    SystolicArray__DOT__pes_1_0__DOT__result_buffer_exp = VL_RAND_RESET_I(8);
    SystolicArray__DOT__pes_1_0__DOT__fpmult__DOT___io_out_result_man_T = VL_RAND_RESET_I(8);
    SystolicArray__DOT__pes_1_0__DOT__fpadder__DOT___exp_diff_T = VL_RAND_RESET_I(1);
    SystolicArray__DOT__pes_1_0__DOT__fpadder__DOT__exp_diff = VL_RAND_RESET_I(8);
    SystolicArray__DOT__pes_1_0__DOT__fpadder__DOT___io_out_result_man_T_3 = VL_RAND_RESET_I(4);
    SystolicArray__DOT__pes_1_0__DOT__fpadder__DOT___io_out_result_man_T_6 = VL_RAND_RESET_I(4);
    SystolicArray__DOT__pes_1_1__DOT__fpmult_io_out_result_exp = VL_RAND_RESET_I(8);
    SystolicArray__DOT__pes_1_1__DOT__fpadder_io_out_result_sign = VL_RAND_RESET_I(1);
    SystolicArray__DOT__pes_1_1__DOT__fpadder_io_out_result_exp = VL_RAND_RESET_I(8);
    SystolicArray__DOT__pes_1_1__DOT__result_buffer_sign = VL_RAND_RESET_I(1);
    SystolicArray__DOT__pes_1_1__DOT__result_buffer_man = VL_RAND_RESET_I(4);
    SystolicArray__DOT__pes_1_1__DOT__result_buffer_exp = VL_RAND_RESET_I(8);
    SystolicArray__DOT__pes_1_1__DOT__fpmult__DOT___io_out_result_man_T = VL_RAND_RESET_I(8);
    SystolicArray__DOT__pes_1_1__DOT__fpadder__DOT___exp_diff_T = VL_RAND_RESET_I(1);
    SystolicArray__DOT__pes_1_1__DOT__fpadder__DOT__exp_diff = VL_RAND_RESET_I(8);
    SystolicArray__DOT__pes_1_1__DOT__fpadder__DOT___io_out_result_man_T_3 = VL_RAND_RESET_I(4);
    SystolicArray__DOT__pes_1_1__DOT__fpadder__DOT___io_out_result_man_T_6 = VL_RAND_RESET_I(4);
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            SystolicArray__DOT__inputQueue__DOT__ram_0_0_hor_sign[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            SystolicArray__DOT__inputQueue__DOT__ram_0_0_hor_man[__Vi0] = VL_RAND_RESET_I(4);
    }}
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            SystolicArray__DOT__inputQueue__DOT__ram_0_0_hor_exp[__Vi0] = VL_RAND_RESET_I(8);
    }}
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            SystolicArray__DOT__inputQueue__DOT__ram_0_0_ver_sign[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            SystolicArray__DOT__inputQueue__DOT__ram_0_0_ver_man[__Vi0] = VL_RAND_RESET_I(4);
    }}
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            SystolicArray__DOT__inputQueue__DOT__ram_0_0_ver_exp[__Vi0] = VL_RAND_RESET_I(8);
    }}
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            SystolicArray__DOT__inputQueue__DOT__ram_0_1_hor_sign[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            SystolicArray__DOT__inputQueue__DOT__ram_0_1_hor_man[__Vi0] = VL_RAND_RESET_I(4);
    }}
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            SystolicArray__DOT__inputQueue__DOT__ram_0_1_hor_exp[__Vi0] = VL_RAND_RESET_I(8);
    }}
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            SystolicArray__DOT__inputQueue__DOT__ram_0_1_ver_sign[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            SystolicArray__DOT__inputQueue__DOT__ram_0_1_ver_man[__Vi0] = VL_RAND_RESET_I(4);
    }}
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            SystolicArray__DOT__inputQueue__DOT__ram_0_1_ver_exp[__Vi0] = VL_RAND_RESET_I(8);
    }}
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            SystolicArray__DOT__inputQueue__DOT__ram_1_0_hor_sign[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            SystolicArray__DOT__inputQueue__DOT__ram_1_0_hor_man[__Vi0] = VL_RAND_RESET_I(4);
    }}
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            SystolicArray__DOT__inputQueue__DOT__ram_1_0_hor_exp[__Vi0] = VL_RAND_RESET_I(8);
    }}
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            SystolicArray__DOT__inputQueue__DOT__ram_1_0_ver_sign[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            SystolicArray__DOT__inputQueue__DOT__ram_1_0_ver_man[__Vi0] = VL_RAND_RESET_I(4);
    }}
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            SystolicArray__DOT__inputQueue__DOT__ram_1_0_ver_exp[__Vi0] = VL_RAND_RESET_I(8);
    }}
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            SystolicArray__DOT__inputQueue__DOT__ram_1_1_hor_sign[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            SystolicArray__DOT__inputQueue__DOT__ram_1_1_hor_man[__Vi0] = VL_RAND_RESET_I(4);
    }}
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            SystolicArray__DOT__inputQueue__DOT__ram_1_1_hor_exp[__Vi0] = VL_RAND_RESET_I(8);
    }}
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            SystolicArray__DOT__inputQueue__DOT__ram_1_1_ver_sign[__Vi0] = VL_RAND_RESET_I(1);
    }}
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            SystolicArray__DOT__inputQueue__DOT__ram_1_1_ver_man[__Vi0] = VL_RAND_RESET_I(4);
    }}
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            SystolicArray__DOT__inputQueue__DOT__ram_1_1_ver_exp[__Vi0] = VL_RAND_RESET_I(8);
    }}
    SystolicArray__DOT__inputQueue__DOT__enq_ptr_value = VL_RAND_RESET_I(1);
    SystolicArray__DOT__inputQueue__DOT__deq_ptr_value = VL_RAND_RESET_I(1);
    SystolicArray__DOT__inputQueue__DOT__maybe_full = VL_RAND_RESET_I(1);
    SystolicArray__DOT__inputQueue__DOT__ptr_match = VL_RAND_RESET_I(1);
    SystolicArray__DOT__inputQueue__DOT__empty = VL_RAND_RESET_I(1);
    SystolicArray__DOT__inputQueue__DOT__full = VL_RAND_RESET_I(1);
    SystolicArray__DOT__inputQueue__DOT__do_enq = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}

void VSystolicArray::_configure_coverage(VSystolicArray__Syms* __restrict vlSymsp, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSystolicArray::_configure_coverage\n"); );
    // Body
    if (false && vlSymsp && first) {}  // Prevent unused
}