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
            tracep->chgBit(oldp+0,(vlTOPp->SystolicArray__DOT__inputQueue__DOT__ram_0_1_hor_sign_io_deq_bits_MPORT_data));
            tracep->chgCData(oldp+1,(vlTOPp->SystolicArray__DOT__inputQueue__DOT__ram_0_1_hor_man_io_deq_bits_MPORT_data),4);
            tracep->chgCData(oldp+2,(vlTOPp->SystolicArray__DOT__inputQueue__DOT__ram_0_1_hor_exp_io_deq_bits_MPORT_data),8);
            tracep->chgBit(oldp+3,(vlTOPp->SystolicArray__DOT__inputQueue__DOT__ram_1_0_ver_sign_io_deq_bits_MPORT_data));
            tracep->chgCData(oldp+4,(vlTOPp->SystolicArray__DOT__inputQueue__DOT__ram_1_0_ver_man_io_deq_bits_MPORT_data),4);
            tracep->chgCData(oldp+5,(vlTOPp->SystolicArray__DOT__inputQueue__DOT__ram_1_0_ver_exp_io_deq_bits_MPORT_data),8);
            tracep->chgBit(oldp+6,(vlTOPp->SystolicArray__DOT__pes_0_0__DOT__result_buffer_sign));
            tracep->chgCData(oldp+7,(vlTOPp->SystolicArray__DOT__pes_0_0__DOT__result_buffer_man),4);
            tracep->chgCData(oldp+8,(vlTOPp->SystolicArray__DOT__pes_0_0__DOT__result_buffer_exp),8);
            tracep->chgBit(oldp+9,(vlTOPp->SystolicArray__DOT__pes_0_1_io_in_hor_r_sign));
            tracep->chgCData(oldp+10,(vlTOPp->SystolicArray__DOT__pes_0_1_io_in_hor_r_man),4);
            tracep->chgCData(oldp+11,(vlTOPp->SystolicArray__DOT__pes_0_1_io_in_hor_r_exp),8);
            tracep->chgBit(oldp+12,(vlTOPp->SystolicArray__DOT__inputQueue__DOT__ram_1_1_ver_sign_io_deq_bits_MPORT_data));
            tracep->chgCData(oldp+13,(vlTOPp->SystolicArray__DOT__inputQueue__DOT__ram_1_1_ver_man_io_deq_bits_MPORT_data),4);
            tracep->chgCData(oldp+14,(vlTOPp->SystolicArray__DOT__inputQueue__DOT__ram_1_1_ver_exp_io_deq_bits_MPORT_data),8);
            tracep->chgBit(oldp+15,(vlTOPp->SystolicArray__DOT__pes_0_1__DOT__result_buffer_sign));
            tracep->chgCData(oldp+16,(vlTOPp->SystolicArray__DOT__pes_0_1__DOT__result_buffer_man),4);
            tracep->chgCData(oldp+17,(vlTOPp->SystolicArray__DOT__pes_0_1__DOT__result_buffer_exp),8);
            tracep->chgBit(oldp+18,(vlTOPp->SystolicArray__DOT__inputQueue__DOT__ram_1_1_hor_sign_io_deq_bits_MPORT_data));
            tracep->chgCData(oldp+19,(vlTOPp->SystolicArray__DOT__inputQueue__DOT__ram_1_1_hor_man_io_deq_bits_MPORT_data),4);
            tracep->chgCData(oldp+20,(vlTOPp->SystolicArray__DOT__inputQueue__DOT__ram_1_1_hor_exp_io_deq_bits_MPORT_data),8);
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
            tracep->chgBit(oldp+38,(((IData)(vlTOPp->SystolicArray__DOT__inputQueue__DOT__ram_0_1_hor_sign_io_deq_bits_MPORT_data) 
                                     ^ (IData)(vlTOPp->SystolicArray__DOT__inputQueue__DOT__ram_1_0_ver_sign_io_deq_bits_MPORT_data))));
            tracep->chgCData(oldp+39,((0xfU & (IData)(vlTOPp->SystolicArray__DOT__pes_0_0__DOT__fpmult__DOT___io_out_result_man_T))),4);
            tracep->chgCData(oldp+40,(vlTOPp->SystolicArray__DOT__pes_0_0__DOT__fpmult_io_out_result_exp),8);
            tracep->chgBit(oldp+41,(((IData)(vlTOPp->SystolicArray__DOT__pes_0_0__DOT__fpadder__DOT___exp_diff_T)
                                      ? ((IData)(vlTOPp->SystolicArray__DOT__inputQueue__DOT__ram_0_1_hor_sign_io_deq_bits_MPORT_data) 
                                         ^ (IData)(vlTOPp->SystolicArray__DOT__inputQueue__DOT__ram_1_0_ver_sign_io_deq_bits_MPORT_data))
                                      : (IData)(vlTOPp->SystolicArray__DOT__pes_0_0__DOT__result_buffer_sign))));
            tracep->chgCData(oldp+42,((0xfU & ((IData)(vlTOPp->SystolicArray__DOT__pes_0_0__DOT__fpadder__DOT___exp_diff_T)
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
            tracep->chgCData(oldp+43,(((IData)(vlTOPp->SystolicArray__DOT__pes_0_0__DOT__fpadder__DOT___exp_diff_T)
                                        ? (IData)(vlTOPp->SystolicArray__DOT__pes_0_0__DOT__fpmult_io_out_result_exp)
                                        : (IData)(vlTOPp->SystolicArray__DOT__pes_0_0__DOT__result_buffer_exp))),8);
            tracep->chgCData(oldp+44,(vlTOPp->SystolicArray__DOT__pes_0_0__DOT__fpadder__DOT__exp_diff),8);
            tracep->chgBit(oldp+45,(((IData)(vlTOPp->SystolicArray__DOT__pes_0_1_io_in_hor_r_sign) 
                                     ^ (IData)(vlTOPp->SystolicArray__DOT__inputQueue__DOT__ram_1_1_ver_sign_io_deq_bits_MPORT_data))));
            tracep->chgCData(oldp+46,((0xfU & (IData)(vlTOPp->SystolicArray__DOT__pes_0_1__DOT__fpmult__DOT___io_out_result_man_T))),4);
            tracep->chgCData(oldp+47,(vlTOPp->SystolicArray__DOT__pes_0_1__DOT__fpmult_io_out_result_exp),8);
            tracep->chgBit(oldp+48,(((IData)(vlTOPp->SystolicArray__DOT__pes_0_1__DOT__fpadder__DOT___exp_diff_T)
                                      ? ((IData)(vlTOPp->SystolicArray__DOT__pes_0_1_io_in_hor_r_sign) 
                                         ^ (IData)(vlTOPp->SystolicArray__DOT__inputQueue__DOT__ram_1_1_ver_sign_io_deq_bits_MPORT_data))
                                      : (IData)(vlTOPp->SystolicArray__DOT__pes_0_1__DOT__result_buffer_sign))));
            tracep->chgCData(oldp+49,((0xfU & ((IData)(vlTOPp->SystolicArray__DOT__pes_0_1__DOT__fpadder__DOT___exp_diff_T)
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
            tracep->chgCData(oldp+50,(((IData)(vlTOPp->SystolicArray__DOT__pes_0_1__DOT__fpadder__DOT___exp_diff_T)
                                        ? (IData)(vlTOPp->SystolicArray__DOT__pes_0_1__DOT__fpmult_io_out_result_exp)
                                        : (IData)(vlTOPp->SystolicArray__DOT__pes_0_1__DOT__result_buffer_exp))),8);
            tracep->chgCData(oldp+51,(vlTOPp->SystolicArray__DOT__pes_0_1__DOT__fpadder__DOT__exp_diff),8);
            tracep->chgBit(oldp+52,(((IData)(vlTOPp->SystolicArray__DOT__inputQueue__DOT__ram_1_1_hor_sign_io_deq_bits_MPORT_data) 
                                     ^ (IData)(vlTOPp->SystolicArray__DOT__pes_1_0_io_in_ver_r_sign))));
            tracep->chgCData(oldp+53,((0xfU & (IData)(vlTOPp->SystolicArray__DOT__pes_1_0__DOT__fpmult__DOT___io_out_result_man_T))),4);
            tracep->chgCData(oldp+54,(vlTOPp->SystolicArray__DOT__pes_1_0__DOT__fpmult_io_out_result_exp),8);
            tracep->chgBit(oldp+55,(((IData)(vlTOPp->SystolicArray__DOT__pes_1_0__DOT__fpadder__DOT___exp_diff_T)
                                      ? ((IData)(vlTOPp->SystolicArray__DOT__inputQueue__DOT__ram_1_1_hor_sign_io_deq_bits_MPORT_data) 
                                         ^ (IData)(vlTOPp->SystolicArray__DOT__pes_1_0_io_in_ver_r_sign))
                                      : (IData)(vlTOPp->SystolicArray__DOT__pes_1_0__DOT__result_buffer_sign))));
            tracep->chgCData(oldp+56,((0xfU & ((IData)(vlTOPp->SystolicArray__DOT__pes_1_0__DOT__fpadder__DOT___exp_diff_T)
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
            tracep->chgCData(oldp+57,(((IData)(vlTOPp->SystolicArray__DOT__pes_1_0__DOT__fpadder__DOT___exp_diff_T)
                                        ? (IData)(vlTOPp->SystolicArray__DOT__pes_1_0__DOT__fpmult_io_out_result_exp)
                                        : (IData)(vlTOPp->SystolicArray__DOT__pes_1_0__DOT__result_buffer_exp))),8);
            tracep->chgCData(oldp+58,(vlTOPp->SystolicArray__DOT__pes_1_0__DOT__fpadder__DOT__exp_diff),8);
            tracep->chgBit(oldp+59,(((IData)(vlTOPp->SystolicArray__DOT__pes_1_1_io_in_hor_r_sign) 
                                     ^ (IData)(vlTOPp->SystolicArray__DOT__pes_1_1_io_in_ver_r_sign))));
            tracep->chgCData(oldp+60,((0xfU & (IData)(vlTOPp->SystolicArray__DOT__pes_1_1__DOT__fpmult__DOT___io_out_result_man_T))),4);
            tracep->chgCData(oldp+61,(vlTOPp->SystolicArray__DOT__pes_1_1__DOT__fpmult_io_out_result_exp),8);
            tracep->chgBit(oldp+62,(((IData)(vlTOPp->SystolicArray__DOT__pes_1_1__DOT__fpadder__DOT___exp_diff_T)
                                      ? ((IData)(vlTOPp->SystolicArray__DOT__pes_1_1_io_in_hor_r_sign) 
                                         ^ (IData)(vlTOPp->SystolicArray__DOT__pes_1_1_io_in_ver_r_sign))
                                      : (IData)(vlTOPp->SystolicArray__DOT__pes_1_1__DOT__result_buffer_sign))));
            tracep->chgCData(oldp+63,((0xfU & ((IData)(vlTOPp->SystolicArray__DOT__pes_1_1__DOT__fpadder__DOT___exp_diff_T)
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
            tracep->chgCData(oldp+64,(((IData)(vlTOPp->SystolicArray__DOT__pes_1_1__DOT__fpadder__DOT___exp_diff_T)
                                        ? (IData)(vlTOPp->SystolicArray__DOT__pes_1_1__DOT__fpmult_io_out_result_exp)
                                        : (IData)(vlTOPp->SystolicArray__DOT__pes_1_1__DOT__result_buffer_exp))),8);
            tracep->chgCData(oldp+65,(vlTOPp->SystolicArray__DOT__pes_1_1__DOT__fpadder__DOT__exp_diff),8);
            tracep->chgBit(oldp+66,(vlTOPp->SystolicArray__DOT__inputQueue__DOT__ram_0_1_hor_sign[0]));
            tracep->chgBit(oldp+67,(vlTOPp->SystolicArray__DOT__inputQueue__DOT__ram_0_1_hor_sign[1]));
            tracep->chgBit(oldp+68,(vlTOPp->SystolicArray__DOT__inputQueue__DOT__deq_ptr_value));
            tracep->chgBit(oldp+69,(vlTOPp->SystolicArray__DOT__inputQueue__DOT__enq_ptr_value));
            tracep->chgCData(oldp+70,(vlTOPp->SystolicArray__DOT__inputQueue__DOT__ram_0_1_hor_man[0]),4);
            tracep->chgCData(oldp+71,(vlTOPp->SystolicArray__DOT__inputQueue__DOT__ram_0_1_hor_man[1]),4);
            tracep->chgCData(oldp+72,(vlTOPp->SystolicArray__DOT__inputQueue__DOT__ram_0_1_hor_exp[0]),8);
            tracep->chgCData(oldp+73,(vlTOPp->SystolicArray__DOT__inputQueue__DOT__ram_0_1_hor_exp[1]),8);
            tracep->chgBit(oldp+74,(vlTOPp->SystolicArray__DOT__inputQueue__DOT__ram_1_0_ver_sign[0]));
            tracep->chgBit(oldp+75,(vlTOPp->SystolicArray__DOT__inputQueue__DOT__ram_1_0_ver_sign[1]));
            tracep->chgCData(oldp+76,(vlTOPp->SystolicArray__DOT__inputQueue__DOT__ram_1_0_ver_man[0]),4);
            tracep->chgCData(oldp+77,(vlTOPp->SystolicArray__DOT__inputQueue__DOT__ram_1_0_ver_man[1]),4);
            tracep->chgCData(oldp+78,(vlTOPp->SystolicArray__DOT__inputQueue__DOT__ram_1_0_ver_exp[0]),8);
            tracep->chgCData(oldp+79,(vlTOPp->SystolicArray__DOT__inputQueue__DOT__ram_1_0_ver_exp[1]),8);
            tracep->chgBit(oldp+80,(vlTOPp->SystolicArray__DOT__inputQueue__DOT__ram_1_1_hor_sign[0]));
            tracep->chgBit(oldp+81,(vlTOPp->SystolicArray__DOT__inputQueue__DOT__ram_1_1_hor_sign[1]));
            tracep->chgCData(oldp+82,(vlTOPp->SystolicArray__DOT__inputQueue__DOT__ram_1_1_hor_man[0]),4);
            tracep->chgCData(oldp+83,(vlTOPp->SystolicArray__DOT__inputQueue__DOT__ram_1_1_hor_man[1]),4);
            tracep->chgCData(oldp+84,(vlTOPp->SystolicArray__DOT__inputQueue__DOT__ram_1_1_hor_exp[0]),8);
            tracep->chgCData(oldp+85,(vlTOPp->SystolicArray__DOT__inputQueue__DOT__ram_1_1_hor_exp[1]),8);
            tracep->chgBit(oldp+86,(vlTOPp->SystolicArray__DOT__inputQueue__DOT__ram_1_1_ver_sign[0]));
            tracep->chgBit(oldp+87,(vlTOPp->SystolicArray__DOT__inputQueue__DOT__ram_1_1_ver_sign[1]));
            tracep->chgCData(oldp+88,(vlTOPp->SystolicArray__DOT__inputQueue__DOT__ram_1_1_ver_man[0]),4);
            tracep->chgCData(oldp+89,(vlTOPp->SystolicArray__DOT__inputQueue__DOT__ram_1_1_ver_man[1]),4);
            tracep->chgCData(oldp+90,(vlTOPp->SystolicArray__DOT__inputQueue__DOT__ram_1_1_ver_exp[0]),8);
            tracep->chgCData(oldp+91,(vlTOPp->SystolicArray__DOT__inputQueue__DOT__ram_1_1_ver_exp[1]),8);
            tracep->chgBit(oldp+92,(vlTOPp->SystolicArray__DOT__inputQueue__DOT__maybe_full));
            tracep->chgBit(oldp+93,(vlTOPp->SystolicArray__DOT__inputQueue__DOT__ptr_match));
            tracep->chgBit(oldp+94,(vlTOPp->SystolicArray__DOT__inputQueue__DOT__empty));
            tracep->chgBit(oldp+95,(vlTOPp->SystolicArray__DOT__inputQueue__DOT__full));
        }
        tracep->chgBit(oldp+96,(vlTOPp->clock));
        tracep->chgBit(oldp+97,(vlTOPp->reset));
        tracep->chgBit(oldp+98,(vlTOPp->io_in_ready));
        tracep->chgBit(oldp+99,(vlTOPp->io_in_valid));
        tracep->chgBit(oldp+100,(vlTOPp->io_in_bits_0_0_hor_sign));
        tracep->chgCData(oldp+101,(vlTOPp->io_in_bits_0_0_hor_man),4);
        tracep->chgCData(oldp+102,(vlTOPp->io_in_bits_0_0_hor_exp),8);
        tracep->chgBit(oldp+103,(vlTOPp->io_in_bits_0_0_ver_sign));
        tracep->chgCData(oldp+104,(vlTOPp->io_in_bits_0_0_ver_man),4);
        tracep->chgCData(oldp+105,(vlTOPp->io_in_bits_0_0_ver_exp),8);
        tracep->chgBit(oldp+106,(vlTOPp->io_in_bits_0_1_hor_sign));
        tracep->chgCData(oldp+107,(vlTOPp->io_in_bits_0_1_hor_man),4);
        tracep->chgCData(oldp+108,(vlTOPp->io_in_bits_0_1_hor_exp),8);
        tracep->chgBit(oldp+109,(vlTOPp->io_in_bits_0_1_ver_sign));
        tracep->chgCData(oldp+110,(vlTOPp->io_in_bits_0_1_ver_man),4);
        tracep->chgCData(oldp+111,(vlTOPp->io_in_bits_0_1_ver_exp),8);
        tracep->chgBit(oldp+112,(vlTOPp->io_in_bits_1_0_hor_sign));
        tracep->chgCData(oldp+113,(vlTOPp->io_in_bits_1_0_hor_man),4);
        tracep->chgCData(oldp+114,(vlTOPp->io_in_bits_1_0_hor_exp),8);
        tracep->chgBit(oldp+115,(vlTOPp->io_in_bits_1_0_ver_sign));
        tracep->chgCData(oldp+116,(vlTOPp->io_in_bits_1_0_ver_man),4);
        tracep->chgCData(oldp+117,(vlTOPp->io_in_bits_1_0_ver_exp),8);
        tracep->chgBit(oldp+118,(vlTOPp->io_in_bits_1_1_hor_sign));
        tracep->chgCData(oldp+119,(vlTOPp->io_in_bits_1_1_hor_man),4);
        tracep->chgCData(oldp+120,(vlTOPp->io_in_bits_1_1_hor_exp),8);
        tracep->chgBit(oldp+121,(vlTOPp->io_in_bits_1_1_ver_sign));
        tracep->chgCData(oldp+122,(vlTOPp->io_in_bits_1_1_ver_man),4);
        tracep->chgCData(oldp+123,(vlTOPp->io_in_bits_1_1_ver_exp),8);
        tracep->chgBit(oldp+124,(vlTOPp->io_out_0_0_hor_sign));
        tracep->chgCData(oldp+125,(vlTOPp->io_out_0_0_hor_man),4);
        tracep->chgCData(oldp+126,(vlTOPp->io_out_0_0_hor_exp),8);
        tracep->chgBit(oldp+127,(vlTOPp->io_out_0_0_ver_sign));
        tracep->chgCData(oldp+128,(vlTOPp->io_out_0_0_ver_man),4);
        tracep->chgCData(oldp+129,(vlTOPp->io_out_0_0_ver_exp),8);
        tracep->chgBit(oldp+130,(vlTOPp->io_out_0_0_result_sign));
        tracep->chgCData(oldp+131,(vlTOPp->io_out_0_0_result_man),4);
        tracep->chgCData(oldp+132,(vlTOPp->io_out_0_0_result_exp),8);
        tracep->chgBit(oldp+133,(vlTOPp->io_out_0_1_hor_sign));
        tracep->chgCData(oldp+134,(vlTOPp->io_out_0_1_hor_man),4);
        tracep->chgCData(oldp+135,(vlTOPp->io_out_0_1_hor_exp),8);
        tracep->chgBit(oldp+136,(vlTOPp->io_out_0_1_ver_sign));
        tracep->chgCData(oldp+137,(vlTOPp->io_out_0_1_ver_man),4);
        tracep->chgCData(oldp+138,(vlTOPp->io_out_0_1_ver_exp),8);
        tracep->chgBit(oldp+139,(vlTOPp->io_out_0_1_result_sign));
        tracep->chgCData(oldp+140,(vlTOPp->io_out_0_1_result_man),4);
        tracep->chgCData(oldp+141,(vlTOPp->io_out_0_1_result_exp),8);
        tracep->chgBit(oldp+142,(vlTOPp->io_out_1_0_hor_sign));
        tracep->chgCData(oldp+143,(vlTOPp->io_out_1_0_hor_man),4);
        tracep->chgCData(oldp+144,(vlTOPp->io_out_1_0_hor_exp),8);
        tracep->chgBit(oldp+145,(vlTOPp->io_out_1_0_ver_sign));
        tracep->chgCData(oldp+146,(vlTOPp->io_out_1_0_ver_man),4);
        tracep->chgCData(oldp+147,(vlTOPp->io_out_1_0_ver_exp),8);
        tracep->chgBit(oldp+148,(vlTOPp->io_out_1_0_result_sign));
        tracep->chgCData(oldp+149,(vlTOPp->io_out_1_0_result_man),4);
        tracep->chgCData(oldp+150,(vlTOPp->io_out_1_0_result_exp),8);
        tracep->chgBit(oldp+151,(vlTOPp->io_out_1_1_hor_sign));
        tracep->chgCData(oldp+152,(vlTOPp->io_out_1_1_hor_man),4);
        tracep->chgCData(oldp+153,(vlTOPp->io_out_1_1_hor_exp),8);
        tracep->chgBit(oldp+154,(vlTOPp->io_out_1_1_ver_sign));
        tracep->chgCData(oldp+155,(vlTOPp->io_out_1_1_ver_man),4);
        tracep->chgCData(oldp+156,(vlTOPp->io_out_1_1_ver_exp),8);
        tracep->chgBit(oldp+157,(vlTOPp->io_out_1_1_result_sign));
        tracep->chgCData(oldp+158,(vlTOPp->io_out_1_1_result_man),4);
        tracep->chgCData(oldp+159,(vlTOPp->io_out_1_1_result_exp),8);
        tracep->chgBit(oldp+160,(((~ (IData)(vlTOPp->SystolicArray__DOT__inputQueue__DOT__full)) 
                                  & (IData)(vlTOPp->io_in_valid))));
        tracep->chgBit(oldp+161,(vlTOPp->SystolicArray__DOT__inputQueue__DOT__do_enq));
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
