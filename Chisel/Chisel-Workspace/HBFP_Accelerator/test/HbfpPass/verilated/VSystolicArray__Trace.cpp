// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSystolicArray__Syms.h"


void VSystolicArray::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    VSystolicArray__Syms* __restrict vlSymsp = static_cast<VSystolicArray__Syms*>(userp);
    VSystolicArray* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void VSystolicArray::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    VSystolicArray__Syms* __restrict vlSymsp = static_cast<VSystolicArray__Syms*>(userp);
    VSystolicArray* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+0,(vlTOPp->SystolicArray__DOT__pes_0_0_io_in_hor_sign));
            tracep->chgCData(oldp+1,(vlTOPp->SystolicArray__DOT__pes_0_0_io_in_hor_man),4);
            tracep->chgCData(oldp+2,(vlTOPp->SystolicArray__DOT__pes_0_0_io_in_hor_exp),8);
            tracep->chgBit(oldp+3,(vlTOPp->SystolicArray__DOT__pes_0_0_io_in_ver_sign));
            tracep->chgCData(oldp+4,(vlTOPp->SystolicArray__DOT__pes_0_0_io_in_ver_man),4);
            tracep->chgCData(oldp+5,(vlTOPp->SystolicArray__DOT__pes_0_0_io_in_ver_exp),8);
            tracep->chgBit(oldp+6,(vlTOPp->SystolicArray__DOT__pes_0_0__DOT__result_buffer_sign));
            tracep->chgCData(oldp+7,(vlTOPp->SystolicArray__DOT__pes_0_0__DOT__result_buffer_man),4);
            tracep->chgCData(oldp+8,(vlTOPp->SystolicArray__DOT__pes_0_0__DOT__result_buffer_exp),8);
            tracep->chgBit(oldp+9,(vlTOPp->SystolicArray__DOT__pes_0_1_io_in_hor_r_sign));
            tracep->chgCData(oldp+10,(vlTOPp->SystolicArray__DOT__pes_0_1_io_in_hor_r_man),4);
            tracep->chgCData(oldp+11,(vlTOPp->SystolicArray__DOT__pes_0_1_io_in_hor_r_exp),8);
            tracep->chgBit(oldp+12,(vlTOPp->SystolicArray__DOT__pes_0_1_io_in_ver_sign));
            tracep->chgCData(oldp+13,(vlTOPp->SystolicArray__DOT__pes_0_1_io_in_ver_man),4);
            tracep->chgCData(oldp+14,(vlTOPp->SystolicArray__DOT__pes_0_1_io_in_ver_exp),8);
            tracep->chgBit(oldp+15,(vlTOPp->SystolicArray__DOT__pes_0_1__DOT__result_buffer_sign));
            tracep->chgCData(oldp+16,(vlTOPp->SystolicArray__DOT__pes_0_1__DOT__result_buffer_man),4);
            tracep->chgCData(oldp+17,(vlTOPp->SystolicArray__DOT__pes_0_1__DOT__result_buffer_exp),8);
            tracep->chgBit(oldp+18,(vlTOPp->SystolicArray__DOT__pes_1_0_io_in_hor_sign));
            tracep->chgCData(oldp+19,(vlTOPp->SystolicArray__DOT__pes_1_0_io_in_hor_man),4);
            tracep->chgCData(oldp+20,(vlTOPp->SystolicArray__DOT__pes_1_0_io_in_hor_exp),8);
            tracep->chgBit(oldp+21,(vlTOPp->SystolicArray__DOT__pes_1_0_io_in_ver_r_sign));
            tracep->chgCData(oldp+22,(vlTOPp->SystolicArray__DOT__pes_1_0_io_in_ver_r_man),4);
            tracep->chgCData(oldp+23,(vlTOPp->SystolicArray__DOT__pes_1_0_io_in_ver_r_exp),8);
            tracep->chgBit(oldp+24,(vlTOPp->SystolicArray__DOT__pes_1_0__DOT__result_buffer_sign));
            tracep->chgCData(oldp+25,(vlTOPp->SystolicArray__DOT__pes_1_0__DOT__result_buffer_man),4);
            tracep->chgCData(oldp+26,(vlTOPp->SystolicArray__DOT__pes_1_0__DOT__result_buffer_exp),8);
            tracep->chgBit(oldp+27,(vlTOPp->SystolicArray__DOT__pes_1_1_io_in_hor_r_sign));
            tracep->chgCData(oldp+28,(vlTOPp->SystolicArray__DOT__pes_1_1_io_in_hor_r_man),4);
            tracep->chgCData(oldp+29,(vlTOPp->SystolicArray__DOT__pes_1_1_io_in_hor_r_exp),8);
            tracep->chgBit(oldp+30,(vlTOPp->SystolicArray__DOT__pes_1_1_io_in_ver_r_sign));
            tracep->chgCData(oldp+31,(vlTOPp->SystolicArray__DOT__pes_1_1_io_in_ver_r_man),4);
            tracep->chgCData(oldp+32,(vlTOPp->SystolicArray__DOT__pes_1_1_io_in_ver_r_exp),8);
            tracep->chgBit(oldp+33,(vlTOPp->SystolicArray__DOT__pes_1_1__DOT__result_buffer_sign));
            tracep->chgCData(oldp+34,(vlTOPp->SystolicArray__DOT__pes_1_1__DOT__result_buffer_man),4);
            tracep->chgCData(oldp+35,(vlTOPp->SystolicArray__DOT__pes_1_1__DOT__result_buffer_exp),8);
            tracep->chgBit(oldp+36,((1U & (~ (IData)(vlTOPp->SystolicArray__DOT__inputQueue__DOT__full)))));
            tracep->chgBit(oldp+37,((1U & (~ (IData)(vlTOPp->SystolicArray__DOT__inputQueue__DOT__empty)))));
            tracep->chgBit(oldp+38,(vlTOPp->SystolicArray__DOT__inputQueue__DOT__ram_0_0_hor_sign
                                    [vlTOPp->SystolicArray__DOT__inputQueue__DOT__deq_ptr_value]));
            tracep->chgCData(oldp+39,(vlTOPp->SystolicArray__DOT__inputQueue__DOT__ram_0_0_hor_man
                                      [vlTOPp->SystolicArray__DOT__inputQueue__DOT__deq_ptr_value]),4);
            tracep->chgCData(oldp+40,(vlTOPp->SystolicArray__DOT__inputQueue__DOT__ram_0_0_hor_exp
                                      [vlTOPp->SystolicArray__DOT__inputQueue__DOT__deq_ptr_value]),8);
            tracep->chgBit(oldp+41,(vlTOPp->SystolicArray__DOT__inputQueue__DOT__ram_0_0_ver_sign
                                    [vlTOPp->SystolicArray__DOT__inputQueue__DOT__deq_ptr_value]));
            tracep->chgCData(oldp+42,(vlTOPp->SystolicArray__DOT__inputQueue__DOT__ram_0_0_ver_man
                                      [vlTOPp->SystolicArray__DOT__inputQueue__DOT__deq_ptr_value]),4);
            tracep->chgCData(oldp+43,(vlTOPp->SystolicArray__DOT__inputQueue__DOT__ram_0_0_ver_exp
                                      [vlTOPp->SystolicArray__DOT__inputQueue__DOT__deq_ptr_value]),8);
            tracep->chgBit(oldp+44,(vlTOPp->SystolicArray__DOT__inputQueue__DOT__ram_0_1_hor_sign
                                    [vlTOPp->SystolicArray__DOT__inputQueue__DOT__deq_ptr_value]));
            tracep->chgCData(oldp+45,(vlTOPp->SystolicArray__DOT__inputQueue__DOT__ram_0_1_hor_man
                                      [vlTOPp->SystolicArray__DOT__inputQueue__DOT__deq_ptr_value]),4);
            tracep->chgCData(oldp+46,(vlTOPp->SystolicArray__DOT__inputQueue__DOT__ram_0_1_hor_exp
                                      [vlTOPp->SystolicArray__DOT__inputQueue__DOT__deq_ptr_value]),8);
            tracep->chgBit(oldp+47,(vlTOPp->SystolicArray__DOT__inputQueue__DOT__ram_0_1_ver_sign
                                    [vlTOPp->SystolicArray__DOT__inputQueue__DOT__deq_ptr_value]));
            tracep->chgCData(oldp+48,(vlTOPp->SystolicArray__DOT__inputQueue__DOT__ram_0_1_ver_man
                                      [vlTOPp->SystolicArray__DOT__inputQueue__DOT__deq_ptr_value]),4);
            tracep->chgCData(oldp+49,(vlTOPp->SystolicArray__DOT__inputQueue__DOT__ram_0_1_ver_exp
                                      [vlTOPp->SystolicArray__DOT__inputQueue__DOT__deq_ptr_value]),8);
            tracep->chgBit(oldp+50,(vlTOPp->SystolicArray__DOT__inputQueue__DOT__ram_1_0_hor_sign
                                    [vlTOPp->SystolicArray__DOT__inputQueue__DOT__deq_ptr_value]));
            tracep->chgCData(oldp+51,(vlTOPp->SystolicArray__DOT__inputQueue__DOT__ram_1_0_hor_man
                                      [vlTOPp->SystolicArray__DOT__inputQueue__DOT__deq_ptr_value]),4);
            tracep->chgCData(oldp+52,(vlTOPp->SystolicArray__DOT__inputQueue__DOT__ram_1_0_hor_exp
                                      [vlTOPp->SystolicArray__DOT__inputQueue__DOT__deq_ptr_value]),8);
            tracep->chgBit(oldp+53,(vlTOPp->SystolicArray__DOT__inputQueue__DOT__ram_1_0_ver_sign
                                    [vlTOPp->SystolicArray__DOT__inputQueue__DOT__deq_ptr_value]));
            tracep->chgCData(oldp+54,(vlTOPp->SystolicArray__DOT__inputQueue__DOT__ram_1_0_ver_man
                                      [vlTOPp->SystolicArray__DOT__inputQueue__DOT__deq_ptr_value]),4);
            tracep->chgCData(oldp+55,(vlTOPp->SystolicArray__DOT__inputQueue__DOT__ram_1_0_ver_exp
                                      [vlTOPp->SystolicArray__DOT__inputQueue__DOT__deq_ptr_value]),8);
            tracep->chgBit(oldp+56,(vlTOPp->SystolicArray__DOT__inputQueue__DOT__ram_1_1_hor_sign
                                    [vlTOPp->SystolicArray__DOT__inputQueue__DOT__deq_ptr_value]));
            tracep->chgCData(oldp+57,(vlTOPp->SystolicArray__DOT__inputQueue__DOT__ram_1_1_hor_man
                                      [vlTOPp->SystolicArray__DOT__inputQueue__DOT__deq_ptr_value]),4);
            tracep->chgCData(oldp+58,(vlTOPp->SystolicArray__DOT__inputQueue__DOT__ram_1_1_hor_exp
                                      [vlTOPp->SystolicArray__DOT__inputQueue__DOT__deq_ptr_value]),8);
            tracep->chgBit(oldp+59,(vlTOPp->SystolicArray__DOT__inputQueue__DOT__ram_1_1_ver_sign
                                    [vlTOPp->SystolicArray__DOT__inputQueue__DOT__deq_ptr_value]));
            tracep->chgCData(oldp+60,(vlTOPp->SystolicArray__DOT__inputQueue__DOT__ram_1_1_ver_man
                                      [vlTOPp->SystolicArray__DOT__inputQueue__DOT__deq_ptr_value]),4);
            tracep->chgCData(oldp+61,(vlTOPp->SystolicArray__DOT__inputQueue__DOT__ram_1_1_ver_exp
                                      [vlTOPp->SystolicArray__DOT__inputQueue__DOT__deq_ptr_value]),8);
            tracep->chgBit(oldp+62,(vlTOPp->SystolicArray__DOT__counter));
            tracep->chgBit(oldp+63,(vlTOPp->SystolicArray__DOT__pes_0_1_io_in_ver_r));
            tracep->chgBit(oldp+64,(vlTOPp->SystolicArray__DOT__pes_1_0_io_in_hor_r_1_sign));
            tracep->chgCData(oldp+65,(vlTOPp->SystolicArray__DOT__pes_1_0_io_in_hor_r_1_man),4);
            tracep->chgCData(oldp+66,(vlTOPp->SystolicArray__DOT__pes_1_0_io_in_hor_r_1_exp),8);
            tracep->chgBit(oldp+67,(vlTOPp->SystolicArray__DOT__pes_0_1_io_in_ver_r_1_sign));
            tracep->chgCData(oldp+68,(vlTOPp->SystolicArray__DOT__pes_0_1_io_in_ver_r_1_man),4);
            tracep->chgCData(oldp+69,(vlTOPp->SystolicArray__DOT__pes_0_1_io_in_ver_r_1_exp),8);
            tracep->chgBit(oldp+70,(((IData)(vlTOPp->SystolicArray__DOT__pes_0_0_io_in_hor_sign) 
                                     ^ (IData)(vlTOPp->SystolicArray__DOT__pes_0_0_io_in_ver_sign))));
            tracep->chgCData(oldp+71,((0xfU & (IData)(vlTOPp->SystolicArray__DOT__pes_0_0__DOT__fpmult__DOT___io_out_result_man_T))),4);
            tracep->chgCData(oldp+72,(vlTOPp->SystolicArray__DOT__pes_0_0__DOT__fpmult_io_out_result_exp),8);
            tracep->chgBit(oldp+73,(((IData)(vlTOPp->SystolicArray__DOT__pes_0_0__DOT__fpadder__DOT___exp_diff_T)
                                      ? ((IData)(vlTOPp->SystolicArray__DOT__pes_0_0_io_in_hor_sign) 
                                         ^ (IData)(vlTOPp->SystolicArray__DOT__pes_0_0_io_in_ver_sign))
                                      : (IData)(vlTOPp->SystolicArray__DOT__pes_0_0__DOT__result_buffer_sign))));
            tracep->chgCData(oldp+74,((0xfU & ((IData)(vlTOPp->SystolicArray__DOT__pes_0_0__DOT__fpadder__DOT___exp_diff_T)
                                                ? ((IData)(vlTOPp->SystolicArray__DOT__pes_0_0__DOT__fpmult__DOT___io_out_result_man_T) 
                                                   + 
                                                   ((3U 
                                                     >= (IData)(vlTOPp->SystolicArray__DOT__pes_0_0__DOT__fpadder__DOT__exp_diff))
                                                     ? 
                                                    ((IData)(vlTOPp->SystolicArray__DOT__pes_0_0__DOT__result_buffer_man) 
                                                     >> (IData)(vlTOPp->SystolicArray__DOT__pes_0_0__DOT__fpadder__DOT__exp_diff))
                                                     : 0U))
                                                : (
                                                   ((3U 
                                                     >= (IData)(vlTOPp->SystolicArray__DOT__pes_0_0__DOT__fpadder__DOT__exp_diff))
                                                     ? 
                                                    ((0xfU 
                                                      & (IData)(vlTOPp->SystolicArray__DOT__pes_0_0__DOT__fpmult__DOT___io_out_result_man_T)) 
                                                     >> (IData)(vlTOPp->SystolicArray__DOT__pes_0_0__DOT__fpadder__DOT__exp_diff))
                                                     : 0U) 
                                                   + (IData)(vlTOPp->SystolicArray__DOT__pes_0_0__DOT__result_buffer_man))))),4);
            tracep->chgCData(oldp+75,(((IData)(vlTOPp->SystolicArray__DOT__pes_0_0__DOT__fpadder__DOT___exp_diff_T)
                                        ? (IData)(vlTOPp->SystolicArray__DOT__pes_0_0__DOT__fpmult_io_out_result_exp)
                                        : (IData)(vlTOPp->SystolicArray__DOT__pes_0_0__DOT__result_buffer_exp))),8);
            tracep->chgCData(oldp+76,(vlTOPp->SystolicArray__DOT__pes_0_0__DOT__fpadder__DOT__exp_diff),8);
            tracep->chgBit(oldp+77,(((IData)(vlTOPp->SystolicArray__DOT__pes_0_1_io_in_hor_r_sign) 
                                     ^ (IData)(vlTOPp->SystolicArray__DOT__pes_0_1_io_in_ver_sign))));
            tracep->chgCData(oldp+78,((0xfU & (IData)(vlTOPp->SystolicArray__DOT__pes_0_1__DOT__fpmult__DOT___io_out_result_man_T))),4);
            tracep->chgCData(oldp+79,(vlTOPp->SystolicArray__DOT__pes_0_1__DOT__fpmult_io_out_result_exp),8);
            tracep->chgBit(oldp+80,(((IData)(vlTOPp->SystolicArray__DOT__pes_0_1__DOT__fpadder__DOT___exp_diff_T)
                                      ? ((IData)(vlTOPp->SystolicArray__DOT__pes_0_1_io_in_hor_r_sign) 
                                         ^ (IData)(vlTOPp->SystolicArray__DOT__pes_0_1_io_in_ver_sign))
                                      : (IData)(vlTOPp->SystolicArray__DOT__pes_0_1__DOT__result_buffer_sign))));
            tracep->chgCData(oldp+81,((0xfU & ((IData)(vlTOPp->SystolicArray__DOT__pes_0_1__DOT__fpadder__DOT___exp_diff_T)
                                                ? ((IData)(vlTOPp->SystolicArray__DOT__pes_0_1__DOT__fpmult__DOT___io_out_result_man_T) 
                                                   + 
                                                   ((3U 
                                                     >= (IData)(vlTOPp->SystolicArray__DOT__pes_0_1__DOT__fpadder__DOT__exp_diff))
                                                     ? 
                                                    ((IData)(vlTOPp->SystolicArray__DOT__pes_0_1__DOT__result_buffer_man) 
                                                     >> (IData)(vlTOPp->SystolicArray__DOT__pes_0_1__DOT__fpadder__DOT__exp_diff))
                                                     : 0U))
                                                : (
                                                   ((3U 
                                                     >= (IData)(vlTOPp->SystolicArray__DOT__pes_0_1__DOT__fpadder__DOT__exp_diff))
                                                     ? 
                                                    ((0xfU 
                                                      & (IData)(vlTOPp->SystolicArray__DOT__pes_0_1__DOT__fpmult__DOT___io_out_result_man_T)) 
                                                     >> (IData)(vlTOPp->SystolicArray__DOT__pes_0_1__DOT__fpadder__DOT__exp_diff))
                                                     : 0U) 
                                                   + (IData)(vlTOPp->SystolicArray__DOT__pes_0_1__DOT__result_buffer_man))))),4);
            tracep->chgCData(oldp+82,(((IData)(vlTOPp->SystolicArray__DOT__pes_0_1__DOT__fpadder__DOT___exp_diff_T)
                                        ? (IData)(vlTOPp->SystolicArray__DOT__pes_0_1__DOT__fpmult_io_out_result_exp)
                                        : (IData)(vlTOPp->SystolicArray__DOT__pes_0_1__DOT__result_buffer_exp))),8);
            tracep->chgCData(oldp+83,(vlTOPp->SystolicArray__DOT__pes_0_1__DOT__fpadder__DOT__exp_diff),8);
            tracep->chgBit(oldp+84,(((IData)(vlTOPp->SystolicArray__DOT__pes_1_0_io_in_hor_sign) 
                                     ^ (IData)(vlTOPp->SystolicArray__DOT__pes_1_0_io_in_ver_r_sign))));
            tracep->chgCData(oldp+85,((0xfU & (IData)(vlTOPp->SystolicArray__DOT__pes_1_0__DOT__fpmult__DOT___io_out_result_man_T))),4);
            tracep->chgCData(oldp+86,(vlTOPp->SystolicArray__DOT__pes_1_0__DOT__fpmult_io_out_result_exp),8);
            tracep->chgBit(oldp+87,(((IData)(vlTOPp->SystolicArray__DOT__pes_1_0__DOT__fpadder__DOT___exp_diff_T)
                                      ? ((IData)(vlTOPp->SystolicArray__DOT__pes_1_0_io_in_hor_sign) 
                                         ^ (IData)(vlTOPp->SystolicArray__DOT__pes_1_0_io_in_ver_r_sign))
                                      : (IData)(vlTOPp->SystolicArray__DOT__pes_1_0__DOT__result_buffer_sign))));
            tracep->chgCData(oldp+88,((0xfU & ((IData)(vlTOPp->SystolicArray__DOT__pes_1_0__DOT__fpadder__DOT___exp_diff_T)
                                                ? ((IData)(vlTOPp->SystolicArray__DOT__pes_1_0__DOT__fpmult__DOT___io_out_result_man_T) 
                                                   + 
                                                   ((3U 
                                                     >= (IData)(vlTOPp->SystolicArray__DOT__pes_1_0__DOT__fpadder__DOT__exp_diff))
                                                     ? 
                                                    ((IData)(vlTOPp->SystolicArray__DOT__pes_1_0__DOT__result_buffer_man) 
                                                     >> (IData)(vlTOPp->SystolicArray__DOT__pes_1_0__DOT__fpadder__DOT__exp_diff))
                                                     : 0U))
                                                : (
                                                   ((3U 
                                                     >= (IData)(vlTOPp->SystolicArray__DOT__pes_1_0__DOT__fpadder__DOT__exp_diff))
                                                     ? 
                                                    ((0xfU 
                                                      & (IData)(vlTOPp->SystolicArray__DOT__pes_1_0__DOT__fpmult__DOT___io_out_result_man_T)) 
                                                     >> (IData)(vlTOPp->SystolicArray__DOT__pes_1_0__DOT__fpadder__DOT__exp_diff))
                                                     : 0U) 
                                                   + (IData)(vlTOPp->SystolicArray__DOT__pes_1_0__DOT__result_buffer_man))))),4);
            tracep->chgCData(oldp+89,(((IData)(vlTOPp->SystolicArray__DOT__pes_1_0__DOT__fpadder__DOT___exp_diff_T)
                                        ? (IData)(vlTOPp->SystolicArray__DOT__pes_1_0__DOT__fpmult_io_out_result_exp)
                                        : (IData)(vlTOPp->SystolicArray__DOT__pes_1_0__DOT__result_buffer_exp))),8);
            tracep->chgCData(oldp+90,(vlTOPp->SystolicArray__DOT__pes_1_0__DOT__fpadder__DOT__exp_diff),8);
            tracep->chgBit(oldp+91,(((IData)(vlTOPp->SystolicArray__DOT__pes_1_1_io_in_hor_r_sign) 
                                     ^ (IData)(vlTOPp->SystolicArray__DOT__pes_1_1_io_in_ver_r_sign))));
            tracep->chgCData(oldp+92,((0xfU & (IData)(vlTOPp->SystolicArray__DOT__pes_1_1__DOT__fpmult__DOT___io_out_result_man_T))),4);
            tracep->chgCData(oldp+93,(vlTOPp->SystolicArray__DOT__pes_1_1__DOT__fpmult_io_out_result_exp),8);
            tracep->chgBit(oldp+94,(((IData)(vlTOPp->SystolicArray__DOT__pes_1_1__DOT__fpadder__DOT___exp_diff_T)
                                      ? ((IData)(vlTOPp->SystolicArray__DOT__pes_1_1_io_in_hor_r_sign) 
                                         ^ (IData)(vlTOPp->SystolicArray__DOT__pes_1_1_io_in_ver_r_sign))
                                      : (IData)(vlTOPp->SystolicArray__DOT__pes_1_1__DOT__result_buffer_sign))));
            tracep->chgCData(oldp+95,((0xfU & ((IData)(vlTOPp->SystolicArray__DOT__pes_1_1__DOT__fpadder__DOT___exp_diff_T)
                                                ? ((IData)(vlTOPp->SystolicArray__DOT__pes_1_1__DOT__fpmult__DOT___io_out_result_man_T) 
                                                   + 
                                                   ((3U 
                                                     >= (IData)(vlTOPp->SystolicArray__DOT__pes_1_1__DOT__fpadder__DOT__exp_diff))
                                                     ? 
                                                    ((IData)(vlTOPp->SystolicArray__DOT__pes_1_1__DOT__result_buffer_man) 
                                                     >> (IData)(vlTOPp->SystolicArray__DOT__pes_1_1__DOT__fpadder__DOT__exp_diff))
                                                     : 0U))
                                                : (
                                                   ((3U 
                                                     >= (IData)(vlTOPp->SystolicArray__DOT__pes_1_1__DOT__fpadder__DOT__exp_diff))
                                                     ? 
                                                    ((0xfU 
                                                      & (IData)(vlTOPp->SystolicArray__DOT__pes_1_1__DOT__fpmult__DOT___io_out_result_man_T)) 
                                                     >> (IData)(vlTOPp->SystolicArray__DOT__pes_1_1__DOT__fpadder__DOT__exp_diff))
                                                     : 0U) 
                                                   + (IData)(vlTOPp->SystolicArray__DOT__pes_1_1__DOT__result_buffer_man))))),4);
            tracep->chgCData(oldp+96,(((IData)(vlTOPp->SystolicArray__DOT__pes_1_1__DOT__fpadder__DOT___exp_diff_T)
                                        ? (IData)(vlTOPp->SystolicArray__DOT__pes_1_1__DOT__fpmult_io_out_result_exp)
                                        : (IData)(vlTOPp->SystolicArray__DOT__pes_1_1__DOT__result_buffer_exp))),8);
            tracep->chgCData(oldp+97,(vlTOPp->SystolicArray__DOT__pes_1_1__DOT__fpadder__DOT__exp_diff),8);
            tracep->chgBit(oldp+98,(vlTOPp->SystolicArray__DOT__inputQueue__DOT__ram_0_0_hor_sign[0]));
            tracep->chgBit(oldp+99,(vlTOPp->SystolicArray__DOT__inputQueue__DOT__ram_0_0_hor_sign[1]));
            tracep->chgBit(oldp+100,(vlTOPp->SystolicArray__DOT__inputQueue__DOT__deq_ptr_value));
            tracep->chgBit(oldp+101,(vlTOPp->SystolicArray__DOT__inputQueue__DOT__enq_ptr_value));
            tracep->chgCData(oldp+102,(vlTOPp->SystolicArray__DOT__inputQueue__DOT__ram_0_0_hor_man[0]),4);
            tracep->chgCData(oldp+103,(vlTOPp->SystolicArray__DOT__inputQueue__DOT__ram_0_0_hor_man[1]),4);
            tracep->chgCData(oldp+104,(vlTOPp->SystolicArray__DOT__inputQueue__DOT__ram_0_0_hor_exp[0]),8);
            tracep->chgCData(oldp+105,(vlTOPp->SystolicArray__DOT__inputQueue__DOT__ram_0_0_hor_exp[1]),8);
            tracep->chgBit(oldp+106,(vlTOPp->SystolicArray__DOT__inputQueue__DOT__ram_0_0_ver_sign[0]));
            tracep->chgBit(oldp+107,(vlTOPp->SystolicArray__DOT__inputQueue__DOT__ram_0_0_ver_sign[1]));
            tracep->chgCData(oldp+108,(vlTOPp->SystolicArray__DOT__inputQueue__DOT__ram_0_0_ver_man[0]),4);
            tracep->chgCData(oldp+109,(vlTOPp->SystolicArray__DOT__inputQueue__DOT__ram_0_0_ver_man[1]),4);
            tracep->chgCData(oldp+110,(vlTOPp->SystolicArray__DOT__inputQueue__DOT__ram_0_0_ver_exp[0]),8);
            tracep->chgCData(oldp+111,(vlTOPp->SystolicArray__DOT__inputQueue__DOT__ram_0_0_ver_exp[1]),8);
            tracep->chgBit(oldp+112,(vlTOPp->SystolicArray__DOT__inputQueue__DOT__ram_0_1_hor_sign[0]));
            tracep->chgBit(oldp+113,(vlTOPp->SystolicArray__DOT__inputQueue__DOT__ram_0_1_hor_sign[1]));
            tracep->chgCData(oldp+114,(vlTOPp->SystolicArray__DOT__inputQueue__DOT__ram_0_1_hor_man[0]),4);
            tracep->chgCData(oldp+115,(vlTOPp->SystolicArray__DOT__inputQueue__DOT__ram_0_1_hor_man[1]),4);
            tracep->chgCData(oldp+116,(vlTOPp->SystolicArray__DOT__inputQueue__DOT__ram_0_1_hor_exp[0]),8);
            tracep->chgCData(oldp+117,(vlTOPp->SystolicArray__DOT__inputQueue__DOT__ram_0_1_hor_exp[1]),8);
            tracep->chgBit(oldp+118,(vlTOPp->SystolicArray__DOT__inputQueue__DOT__ram_0_1_ver_sign[0]));
            tracep->chgBit(oldp+119,(vlTOPp->SystolicArray__DOT__inputQueue__DOT__ram_0_1_ver_sign[1]));
            tracep->chgCData(oldp+120,(vlTOPp->SystolicArray__DOT__inputQueue__DOT__ram_0_1_ver_man[0]),4);
            tracep->chgCData(oldp+121,(vlTOPp->SystolicArray__DOT__inputQueue__DOT__ram_0_1_ver_man[1]),4);
            tracep->chgCData(oldp+122,(vlTOPp->SystolicArray__DOT__inputQueue__DOT__ram_0_1_ver_exp[0]),8);
            tracep->chgCData(oldp+123,(vlTOPp->SystolicArray__DOT__inputQueue__DOT__ram_0_1_ver_exp[1]),8);
            tracep->chgBit(oldp+124,(vlTOPp->SystolicArray__DOT__inputQueue__DOT__ram_1_0_hor_sign[0]));
            tracep->chgBit(oldp+125,(vlTOPp->SystolicArray__DOT__inputQueue__DOT__ram_1_0_hor_sign[1]));
            tracep->chgCData(oldp+126,(vlTOPp->SystolicArray__DOT__inputQueue__DOT__ram_1_0_hor_man[0]),4);
            tracep->chgCData(oldp+127,(vlTOPp->SystolicArray__DOT__inputQueue__DOT__ram_1_0_hor_man[1]),4);
            tracep->chgCData(oldp+128,(vlTOPp->SystolicArray__DOT__inputQueue__DOT__ram_1_0_hor_exp[0]),8);
            tracep->chgCData(oldp+129,(vlTOPp->SystolicArray__DOT__inputQueue__DOT__ram_1_0_hor_exp[1]),8);
            tracep->chgBit(oldp+130,(vlTOPp->SystolicArray__DOT__inputQueue__DOT__ram_1_0_ver_sign[0]));
            tracep->chgBit(oldp+131,(vlTOPp->SystolicArray__DOT__inputQueue__DOT__ram_1_0_ver_sign[1]));
            tracep->chgCData(oldp+132,(vlTOPp->SystolicArray__DOT__inputQueue__DOT__ram_1_0_ver_man[0]),4);
            tracep->chgCData(oldp+133,(vlTOPp->SystolicArray__DOT__inputQueue__DOT__ram_1_0_ver_man[1]),4);
            tracep->chgCData(oldp+134,(vlTOPp->SystolicArray__DOT__inputQueue__DOT__ram_1_0_ver_exp[0]),8);
            tracep->chgCData(oldp+135,(vlTOPp->SystolicArray__DOT__inputQueue__DOT__ram_1_0_ver_exp[1]),8);
            tracep->chgBit(oldp+136,(vlTOPp->SystolicArray__DOT__inputQueue__DOT__ram_1_1_hor_sign[0]));
            tracep->chgBit(oldp+137,(vlTOPp->SystolicArray__DOT__inputQueue__DOT__ram_1_1_hor_sign[1]));
            tracep->chgCData(oldp+138,(vlTOPp->SystolicArray__DOT__inputQueue__DOT__ram_1_1_hor_man[0]),4);
            tracep->chgCData(oldp+139,(vlTOPp->SystolicArray__DOT__inputQueue__DOT__ram_1_1_hor_man[1]),4);
            tracep->chgCData(oldp+140,(vlTOPp->SystolicArray__DOT__inputQueue__DOT__ram_1_1_hor_exp[0]),8);
            tracep->chgCData(oldp+141,(vlTOPp->SystolicArray__DOT__inputQueue__DOT__ram_1_1_hor_exp[1]),8);
            tracep->chgBit(oldp+142,(vlTOPp->SystolicArray__DOT__inputQueue__DOT__ram_1_1_ver_sign[0]));
            tracep->chgBit(oldp+143,(vlTOPp->SystolicArray__DOT__inputQueue__DOT__ram_1_1_ver_sign[1]));
            tracep->chgCData(oldp+144,(vlTOPp->SystolicArray__DOT__inputQueue__DOT__ram_1_1_ver_man[0]),4);
            tracep->chgCData(oldp+145,(vlTOPp->SystolicArray__DOT__inputQueue__DOT__ram_1_1_ver_man[1]),4);
            tracep->chgCData(oldp+146,(vlTOPp->SystolicArray__DOT__inputQueue__DOT__ram_1_1_ver_exp[0]),8);
            tracep->chgCData(oldp+147,(vlTOPp->SystolicArray__DOT__inputQueue__DOT__ram_1_1_ver_exp[1]),8);
            tracep->chgBit(oldp+148,(vlTOPp->SystolicArray__DOT__inputQueue__DOT__maybe_full));
            tracep->chgBit(oldp+149,(vlTOPp->SystolicArray__DOT__inputQueue__DOT__ptr_match));
            tracep->chgBit(oldp+150,(vlTOPp->SystolicArray__DOT__inputQueue__DOT__empty));
            tracep->chgBit(oldp+151,(vlTOPp->SystolicArray__DOT__inputQueue__DOT__full));
        }
        tracep->chgBit(oldp+152,(vlTOPp->clock));
        tracep->chgBit(oldp+153,(vlTOPp->reset));
        tracep->chgBit(oldp+154,(vlTOPp->io_in_ready));
        tracep->chgBit(oldp+155,(vlTOPp->io_in_valid));
        tracep->chgBit(oldp+156,(vlTOPp->io_in_bits_0_0_hor_sign));
        tracep->chgCData(oldp+157,(vlTOPp->io_in_bits_0_0_hor_man),4);
        tracep->chgCData(oldp+158,(vlTOPp->io_in_bits_0_0_hor_exp),8);
        tracep->chgBit(oldp+159,(vlTOPp->io_in_bits_0_0_ver_sign));
        tracep->chgCData(oldp+160,(vlTOPp->io_in_bits_0_0_ver_man),4);
        tracep->chgCData(oldp+161,(vlTOPp->io_in_bits_0_0_ver_exp),8);
        tracep->chgBit(oldp+162,(vlTOPp->io_in_bits_0_1_hor_sign));
        tracep->chgCData(oldp+163,(vlTOPp->io_in_bits_0_1_hor_man),4);
        tracep->chgCData(oldp+164,(vlTOPp->io_in_bits_0_1_hor_exp),8);
        tracep->chgBit(oldp+165,(vlTOPp->io_in_bits_0_1_ver_sign));
        tracep->chgCData(oldp+166,(vlTOPp->io_in_bits_0_1_ver_man),4);
        tracep->chgCData(oldp+167,(vlTOPp->io_in_bits_0_1_ver_exp),8);
        tracep->chgBit(oldp+168,(vlTOPp->io_in_bits_1_0_hor_sign));
        tracep->chgCData(oldp+169,(vlTOPp->io_in_bits_1_0_hor_man),4);
        tracep->chgCData(oldp+170,(vlTOPp->io_in_bits_1_0_hor_exp),8);
        tracep->chgBit(oldp+171,(vlTOPp->io_in_bits_1_0_ver_sign));
        tracep->chgCData(oldp+172,(vlTOPp->io_in_bits_1_0_ver_man),4);
        tracep->chgCData(oldp+173,(vlTOPp->io_in_bits_1_0_ver_exp),8);
        tracep->chgBit(oldp+174,(vlTOPp->io_in_bits_1_1_hor_sign));
        tracep->chgCData(oldp+175,(vlTOPp->io_in_bits_1_1_hor_man),4);
        tracep->chgCData(oldp+176,(vlTOPp->io_in_bits_1_1_hor_exp),8);
        tracep->chgBit(oldp+177,(vlTOPp->io_in_bits_1_1_ver_sign));
        tracep->chgCData(oldp+178,(vlTOPp->io_in_bits_1_1_ver_man),4);
        tracep->chgCData(oldp+179,(vlTOPp->io_in_bits_1_1_ver_exp),8);
        tracep->chgBit(oldp+180,(vlTOPp->io_out_0_0_hor_sign));
        tracep->chgCData(oldp+181,(vlTOPp->io_out_0_0_hor_man),4);
        tracep->chgCData(oldp+182,(vlTOPp->io_out_0_0_hor_exp),8);
        tracep->chgBit(oldp+183,(vlTOPp->io_out_0_0_ver_sign));
        tracep->chgCData(oldp+184,(vlTOPp->io_out_0_0_ver_man),4);
        tracep->chgCData(oldp+185,(vlTOPp->io_out_0_0_ver_exp),8);
        tracep->chgBit(oldp+186,(vlTOPp->io_out_0_0_result_sign));
        tracep->chgCData(oldp+187,(vlTOPp->io_out_0_0_result_man),4);
        tracep->chgCData(oldp+188,(vlTOPp->io_out_0_0_result_exp),8);
        tracep->chgBit(oldp+189,(vlTOPp->io_out_0_1_hor_sign));
        tracep->chgCData(oldp+190,(vlTOPp->io_out_0_1_hor_man),4);
        tracep->chgCData(oldp+191,(vlTOPp->io_out_0_1_hor_exp),8);
        tracep->chgBit(oldp+192,(vlTOPp->io_out_0_1_ver_sign));
        tracep->chgCData(oldp+193,(vlTOPp->io_out_0_1_ver_man),4);
        tracep->chgCData(oldp+194,(vlTOPp->io_out_0_1_ver_exp),8);
        tracep->chgBit(oldp+195,(vlTOPp->io_out_0_1_result_sign));
        tracep->chgCData(oldp+196,(vlTOPp->io_out_0_1_result_man),4);
        tracep->chgCData(oldp+197,(vlTOPp->io_out_0_1_result_exp),8);
        tracep->chgBit(oldp+198,(vlTOPp->io_out_1_0_hor_sign));
        tracep->chgCData(oldp+199,(vlTOPp->io_out_1_0_hor_man),4);
        tracep->chgCData(oldp+200,(vlTOPp->io_out_1_0_hor_exp),8);
        tracep->chgBit(oldp+201,(vlTOPp->io_out_1_0_ver_sign));
        tracep->chgCData(oldp+202,(vlTOPp->io_out_1_0_ver_man),4);
        tracep->chgCData(oldp+203,(vlTOPp->io_out_1_0_ver_exp),8);
        tracep->chgBit(oldp+204,(vlTOPp->io_out_1_0_result_sign));
        tracep->chgCData(oldp+205,(vlTOPp->io_out_1_0_result_man),4);
        tracep->chgCData(oldp+206,(vlTOPp->io_out_1_0_result_exp),8);
        tracep->chgBit(oldp+207,(vlTOPp->io_out_1_1_hor_sign));
        tracep->chgCData(oldp+208,(vlTOPp->io_out_1_1_hor_man),4);
        tracep->chgCData(oldp+209,(vlTOPp->io_out_1_1_hor_exp),8);
        tracep->chgBit(oldp+210,(vlTOPp->io_out_1_1_ver_sign));
        tracep->chgCData(oldp+211,(vlTOPp->io_out_1_1_ver_man),4);
        tracep->chgCData(oldp+212,(vlTOPp->io_out_1_1_ver_exp),8);
        tracep->chgBit(oldp+213,(vlTOPp->io_out_1_1_result_sign));
        tracep->chgCData(oldp+214,(vlTOPp->io_out_1_1_result_man),4);
        tracep->chgCData(oldp+215,(vlTOPp->io_out_1_1_result_exp),8);
        tracep->chgBit(oldp+216,(((~ (IData)(vlTOPp->SystolicArray__DOT__inputQueue__DOT__full)) 
                                  & (IData)(vlTOPp->io_in_valid))));
        tracep->chgBit(oldp+217,(vlTOPp->SystolicArray__DOT__inputQueue__DOT__do_enq));
    }
}

void VSystolicArray::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    VSystolicArray__Syms* __restrict vlSymsp = static_cast<VSystolicArray__Syms*>(userp);
    VSystolicArray* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
    }
}
