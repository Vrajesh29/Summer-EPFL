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
            tracep->chgCData(oldp+0,((0xfU & (IData)(vlTOPp->SystolicArray__DOT__pes_0_0__DOT__fpmult__DOT___io_out_result_man_T))),4);
            tracep->chgCData(oldp+1,(vlTOPp->SystolicArray__DOT__pes_0_0__DOT__fpmult_io_out_result_exp),8);
            tracep->chgCData(oldp+2,(vlTOPp->SystolicArray__DOT__pes_0_0__DOT__fpadder__DOT__exp_diff),8);
            tracep->chgCData(oldp+3,((0xfU & (IData)(vlTOPp->SystolicArray__DOT__pes_0_1__DOT__fpmult__DOT___io_out_result_man_T))),4);
            tracep->chgCData(oldp+4,(vlTOPp->SystolicArray__DOT__pes_0_1__DOT__fpmult_io_out_result_exp),8);
            tracep->chgCData(oldp+5,(vlTOPp->SystolicArray__DOT__pes_0_1__DOT__fpadder__DOT__exp_diff),8);
            tracep->chgCData(oldp+6,((0xfU & (IData)(vlTOPp->SystolicArray__DOT__pes_1_0__DOT__fpmult__DOT___io_out_result_man_T))),4);
            tracep->chgCData(oldp+7,(vlTOPp->SystolicArray__DOT__pes_1_0__DOT__fpmult_io_out_result_exp),8);
            tracep->chgCData(oldp+8,(vlTOPp->SystolicArray__DOT__pes_1_0__DOT__fpadder__DOT__exp_diff),8);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [1U] | vlTOPp->__Vm_traceActivity
                         [2U]))) {
            tracep->chgCData(oldp+9,((0xfU & ((IData)(vlTOPp->SystolicArray__DOT__pes_0_0__DOT__fpadder__DOT___exp_diff_T)
                                               ? ((IData)(vlTOPp->SystolicArray__DOT__pes_0_0__DOT__fpmult__DOT___io_out_result_man_T) 
                                                  + 
                                                  ((3U 
                                                    >= (IData)(vlTOPp->SystolicArray__DOT__pes_0_0__DOT__fpadder__DOT__exp_diff))
                                                    ? 
                                                   ((IData)(vlTOPp->SystolicArray__DOT__pes_0_0__DOT__result_buffer_man) 
                                                    >> (IData)(vlTOPp->SystolicArray__DOT__pes_0_0__DOT__fpadder__DOT__exp_diff))
                                                    : 0U))
                                               : ((
                                                   (3U 
                                                    >= (IData)(vlTOPp->SystolicArray__DOT__pes_0_0__DOT__fpadder__DOT__exp_diff))
                                                    ? 
                                                   ((0xfU 
                                                     & (IData)(vlTOPp->SystolicArray__DOT__pes_0_0__DOT__fpmult__DOT___io_out_result_man_T)) 
                                                    >> (IData)(vlTOPp->SystolicArray__DOT__pes_0_0__DOT__fpadder__DOT__exp_diff))
                                                    : 0U) 
                                                  + (IData)(vlTOPp->SystolicArray__DOT__pes_0_0__DOT__result_buffer_man))))),4);
            tracep->chgCData(oldp+10,(((IData)(vlTOPp->SystolicArray__DOT__pes_0_0__DOT__fpadder__DOT___exp_diff_T)
                                        ? (IData)(vlTOPp->SystolicArray__DOT__pes_0_0__DOT__fpmult_io_out_result_exp)
                                        : (IData)(vlTOPp->SystolicArray__DOT__pes_0_0__DOT__result_buffer_exp))),8);
            tracep->chgCData(oldp+11,((0xfU & ((IData)(vlTOPp->SystolicArray__DOT__pes_0_1__DOT__fpadder__DOT___exp_diff_T)
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
            tracep->chgCData(oldp+12,(((IData)(vlTOPp->SystolicArray__DOT__pes_0_1__DOT__fpadder__DOT___exp_diff_T)
                                        ? (IData)(vlTOPp->SystolicArray__DOT__pes_0_1__DOT__fpmult_io_out_result_exp)
                                        : (IData)(vlTOPp->SystolicArray__DOT__pes_0_1__DOT__result_buffer_exp))),8);
            tracep->chgCData(oldp+13,((0xfU & ((IData)(vlTOPp->SystolicArray__DOT__pes_1_0__DOT__fpadder__DOT___exp_diff_T)
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
            tracep->chgCData(oldp+14,(((IData)(vlTOPp->SystolicArray__DOT__pes_1_0__DOT__fpadder__DOT___exp_diff_T)
                                        ? (IData)(vlTOPp->SystolicArray__DOT__pes_1_0__DOT__fpmult_io_out_result_exp)
                                        : (IData)(vlTOPp->SystolicArray__DOT__pes_1_0__DOT__result_buffer_exp))),8);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[2U])) {
            tracep->chgBit(oldp+15,(vlTOPp->SystolicArray__DOT__pes_0_0__DOT__io_out_hor_REG_sign));
            tracep->chgCData(oldp+16,(vlTOPp->SystolicArray__DOT__pes_0_0__DOT__io_out_hor_REG_man),4);
            tracep->chgCData(oldp+17,(vlTOPp->SystolicArray__DOT__pes_0_0__DOT__io_out_hor_REG_exp),8);
            tracep->chgBit(oldp+18,(vlTOPp->SystolicArray__DOT__pes_0_0__DOT__io_out_ver_REG_sign));
            tracep->chgCData(oldp+19,(vlTOPp->SystolicArray__DOT__pes_0_0__DOT__io_out_ver_REG_man),4);
            tracep->chgCData(oldp+20,(vlTOPp->SystolicArray__DOT__pes_0_0__DOT__io_out_ver_REG_exp),8);
            tracep->chgBit(oldp+21,(vlTOPp->SystolicArray__DOT__pes_0_0__DOT__result_buffer_sign));
            tracep->chgCData(oldp+22,(vlTOPp->SystolicArray__DOT__pes_0_0__DOT__result_buffer_man),4);
            tracep->chgCData(oldp+23,(vlTOPp->SystolicArray__DOT__pes_0_0__DOT__result_buffer_exp),8);
            tracep->chgBit(oldp+24,(vlTOPp->SystolicArray__DOT__pes_0_1__DOT__io_out_hor_REG_sign));
            tracep->chgCData(oldp+25,(vlTOPp->SystolicArray__DOT__pes_0_1__DOT__io_out_hor_REG_man),4);
            tracep->chgCData(oldp+26,(vlTOPp->SystolicArray__DOT__pes_0_1__DOT__io_out_hor_REG_exp),8);
            tracep->chgBit(oldp+27,(vlTOPp->SystolicArray__DOT__pes_0_1__DOT__io_out_ver_REG_sign));
            tracep->chgCData(oldp+28,(vlTOPp->SystolicArray__DOT__pes_0_1__DOT__io_out_ver_REG_man),4);
            tracep->chgCData(oldp+29,(vlTOPp->SystolicArray__DOT__pes_0_1__DOT__io_out_ver_REG_exp),8);
            tracep->chgBit(oldp+30,(vlTOPp->SystolicArray__DOT__pes_0_1__DOT__result_buffer_sign));
            tracep->chgCData(oldp+31,(vlTOPp->SystolicArray__DOT__pes_0_1__DOT__result_buffer_man),4);
            tracep->chgCData(oldp+32,(vlTOPp->SystolicArray__DOT__pes_0_1__DOT__result_buffer_exp),8);
            tracep->chgBit(oldp+33,(vlTOPp->SystolicArray__DOT__pes_1_0__DOT__io_out_hor_REG_sign));
            tracep->chgCData(oldp+34,(vlTOPp->SystolicArray__DOT__pes_1_0__DOT__io_out_hor_REG_man),4);
            tracep->chgCData(oldp+35,(vlTOPp->SystolicArray__DOT__pes_1_0__DOT__io_out_hor_REG_exp),8);
            tracep->chgBit(oldp+36,(vlTOPp->SystolicArray__DOT__pes_1_0__DOT__io_out_ver_REG_sign));
            tracep->chgCData(oldp+37,(vlTOPp->SystolicArray__DOT__pes_1_0__DOT__io_out_ver_REG_man),4);
            tracep->chgCData(oldp+38,(vlTOPp->SystolicArray__DOT__pes_1_0__DOT__io_out_ver_REG_exp),8);
            tracep->chgBit(oldp+39,(vlTOPp->SystolicArray__DOT__pes_1_0__DOT__result_buffer_sign));
            tracep->chgCData(oldp+40,(vlTOPp->SystolicArray__DOT__pes_1_0__DOT__result_buffer_man),4);
            tracep->chgCData(oldp+41,(vlTOPp->SystolicArray__DOT__pes_1_0__DOT__result_buffer_exp),8);
            tracep->chgBit(oldp+42,(vlTOPp->SystolicArray__DOT__pes_1_1__DOT__io_out_hor_REG_sign));
            tracep->chgCData(oldp+43,(vlTOPp->SystolicArray__DOT__pes_1_1__DOT__io_out_hor_REG_man),4);
            tracep->chgCData(oldp+44,(vlTOPp->SystolicArray__DOT__pes_1_1__DOT__io_out_hor_REG_exp),8);
            tracep->chgBit(oldp+45,(vlTOPp->SystolicArray__DOT__pes_1_1__DOT__io_out_ver_REG_sign));
            tracep->chgCData(oldp+46,(vlTOPp->SystolicArray__DOT__pes_1_1__DOT__io_out_ver_REG_man),4);
            tracep->chgCData(oldp+47,(vlTOPp->SystolicArray__DOT__pes_1_1__DOT__io_out_ver_REG_exp),8);
            tracep->chgBit(oldp+48,(vlTOPp->SystolicArray__DOT__pes_1_1__DOT__result_buffer_sign));
            tracep->chgCData(oldp+49,(vlTOPp->SystolicArray__DOT__pes_1_1__DOT__result_buffer_man),4);
            tracep->chgCData(oldp+50,(vlTOPp->SystolicArray__DOT__pes_1_1__DOT__result_buffer_exp),8);
            tracep->chgBit(oldp+51,(((IData)(vlTOPp->SystolicArray__DOT__pes_1_0__DOT__io_out_hor_REG_sign) 
                                     ^ (IData)(vlTOPp->SystolicArray__DOT__pes_0_1__DOT__io_out_ver_REG_sign))));
            tracep->chgCData(oldp+52,((0xfU & (IData)(vlTOPp->SystolicArray__DOT__pes_1_1__DOT__fpmult__DOT___io_out_result_man_T))),4);
            tracep->chgCData(oldp+53,(vlTOPp->SystolicArray__DOT__pes_1_1__DOT__fpmult_io_out_result_exp),8);
            tracep->chgBit(oldp+54,(((IData)(vlTOPp->SystolicArray__DOT__pes_1_1__DOT__fpadder__DOT___exp_diff_T)
                                      ? ((IData)(vlTOPp->SystolicArray__DOT__pes_1_0__DOT__io_out_hor_REG_sign) 
                                         ^ (IData)(vlTOPp->SystolicArray__DOT__pes_0_1__DOT__io_out_ver_REG_sign))
                                      : (IData)(vlTOPp->SystolicArray__DOT__pes_1_1__DOT__result_buffer_sign))));
            tracep->chgCData(oldp+55,((0xfU & ((IData)(vlTOPp->SystolicArray__DOT__pes_1_1__DOT__fpadder__DOT___exp_diff_T)
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
            tracep->chgCData(oldp+56,(((IData)(vlTOPp->SystolicArray__DOT__pes_1_1__DOT__fpadder__DOT___exp_diff_T)
                                        ? (IData)(vlTOPp->SystolicArray__DOT__pes_1_1__DOT__fpmult_io_out_result_exp)
                                        : (IData)(vlTOPp->SystolicArray__DOT__pes_1_1__DOT__result_buffer_exp))),8);
            tracep->chgCData(oldp+57,(vlTOPp->SystolicArray__DOT__pes_1_1__DOT__fpadder__DOT__exp_diff),8);
        }
        tracep->chgBit(oldp+58,(vlTOPp->clock));
        tracep->chgBit(oldp+59,(vlTOPp->reset));
        tracep->chgBit(oldp+60,(vlTOPp->io_in_0_0_hor_sign));
        tracep->chgCData(oldp+61,(vlTOPp->io_in_0_0_hor_man),4);
        tracep->chgCData(oldp+62,(vlTOPp->io_in_0_0_hor_exp),8);
        tracep->chgBit(oldp+63,(vlTOPp->io_in_0_0_ver_sign));
        tracep->chgCData(oldp+64,(vlTOPp->io_in_0_0_ver_man),4);
        tracep->chgCData(oldp+65,(vlTOPp->io_in_0_0_ver_exp),8);
        tracep->chgBit(oldp+66,(vlTOPp->io_in_0_1_hor_sign));
        tracep->chgCData(oldp+67,(vlTOPp->io_in_0_1_hor_man),4);
        tracep->chgCData(oldp+68,(vlTOPp->io_in_0_1_hor_exp),8);
        tracep->chgBit(oldp+69,(vlTOPp->io_in_0_1_ver_sign));
        tracep->chgCData(oldp+70,(vlTOPp->io_in_0_1_ver_man),4);
        tracep->chgCData(oldp+71,(vlTOPp->io_in_0_1_ver_exp),8);
        tracep->chgBit(oldp+72,(vlTOPp->io_in_1_0_hor_sign));
        tracep->chgCData(oldp+73,(vlTOPp->io_in_1_0_hor_man),4);
        tracep->chgCData(oldp+74,(vlTOPp->io_in_1_0_hor_exp),8);
        tracep->chgBit(oldp+75,(vlTOPp->io_in_1_0_ver_sign));
        tracep->chgCData(oldp+76,(vlTOPp->io_in_1_0_ver_man),4);
        tracep->chgCData(oldp+77,(vlTOPp->io_in_1_0_ver_exp),8);
        tracep->chgBit(oldp+78,(vlTOPp->io_in_1_1_hor_sign));
        tracep->chgCData(oldp+79,(vlTOPp->io_in_1_1_hor_man),4);
        tracep->chgCData(oldp+80,(vlTOPp->io_in_1_1_hor_exp),8);
        tracep->chgBit(oldp+81,(vlTOPp->io_in_1_1_ver_sign));
        tracep->chgCData(oldp+82,(vlTOPp->io_in_1_1_ver_man),4);
        tracep->chgCData(oldp+83,(vlTOPp->io_in_1_1_ver_exp),8);
        tracep->chgBit(oldp+84,(vlTOPp->io_out_0_0_hor_sign));
        tracep->chgCData(oldp+85,(vlTOPp->io_out_0_0_hor_man),4);
        tracep->chgCData(oldp+86,(vlTOPp->io_out_0_0_hor_exp),8);
        tracep->chgBit(oldp+87,(vlTOPp->io_out_0_0_ver_sign));
        tracep->chgCData(oldp+88,(vlTOPp->io_out_0_0_ver_man),4);
        tracep->chgCData(oldp+89,(vlTOPp->io_out_0_0_ver_exp),8);
        tracep->chgBit(oldp+90,(vlTOPp->io_out_0_0_result_sign));
        tracep->chgCData(oldp+91,(vlTOPp->io_out_0_0_result_man),4);
        tracep->chgCData(oldp+92,(vlTOPp->io_out_0_0_result_exp),8);
        tracep->chgBit(oldp+93,(vlTOPp->io_out_0_1_hor_sign));
        tracep->chgCData(oldp+94,(vlTOPp->io_out_0_1_hor_man),4);
        tracep->chgCData(oldp+95,(vlTOPp->io_out_0_1_hor_exp),8);
        tracep->chgBit(oldp+96,(vlTOPp->io_out_0_1_ver_sign));
        tracep->chgCData(oldp+97,(vlTOPp->io_out_0_1_ver_man),4);
        tracep->chgCData(oldp+98,(vlTOPp->io_out_0_1_ver_exp),8);
        tracep->chgBit(oldp+99,(vlTOPp->io_out_0_1_result_sign));
        tracep->chgCData(oldp+100,(vlTOPp->io_out_0_1_result_man),4);
        tracep->chgCData(oldp+101,(vlTOPp->io_out_0_1_result_exp),8);
        tracep->chgBit(oldp+102,(vlTOPp->io_out_1_0_hor_sign));
        tracep->chgCData(oldp+103,(vlTOPp->io_out_1_0_hor_man),4);
        tracep->chgCData(oldp+104,(vlTOPp->io_out_1_0_hor_exp),8);
        tracep->chgBit(oldp+105,(vlTOPp->io_out_1_0_ver_sign));
        tracep->chgCData(oldp+106,(vlTOPp->io_out_1_0_ver_man),4);
        tracep->chgCData(oldp+107,(vlTOPp->io_out_1_0_ver_exp),8);
        tracep->chgBit(oldp+108,(vlTOPp->io_out_1_0_result_sign));
        tracep->chgCData(oldp+109,(vlTOPp->io_out_1_0_result_man),4);
        tracep->chgCData(oldp+110,(vlTOPp->io_out_1_0_result_exp),8);
        tracep->chgBit(oldp+111,(vlTOPp->io_out_1_1_hor_sign));
        tracep->chgCData(oldp+112,(vlTOPp->io_out_1_1_hor_man),4);
        tracep->chgCData(oldp+113,(vlTOPp->io_out_1_1_hor_exp),8);
        tracep->chgBit(oldp+114,(vlTOPp->io_out_1_1_ver_sign));
        tracep->chgCData(oldp+115,(vlTOPp->io_out_1_1_ver_man),4);
        tracep->chgCData(oldp+116,(vlTOPp->io_out_1_1_ver_exp),8);
        tracep->chgBit(oldp+117,(vlTOPp->io_out_1_1_result_sign));
        tracep->chgCData(oldp+118,(vlTOPp->io_out_1_1_result_man),4);
        tracep->chgCData(oldp+119,(vlTOPp->io_out_1_1_result_exp),8);
        tracep->chgBit(oldp+120,(((IData)(vlTOPp->io_in_0_0_hor_sign) 
                                  ^ (IData)(vlTOPp->io_in_0_0_ver_sign))));
        tracep->chgBit(oldp+121,(((IData)(vlTOPp->SystolicArray__DOT__pes_0_0__DOT__fpadder__DOT___exp_diff_T)
                                   ? ((IData)(vlTOPp->io_in_0_0_hor_sign) 
                                      ^ (IData)(vlTOPp->io_in_0_0_ver_sign))
                                   : (IData)(vlTOPp->SystolicArray__DOT__pes_0_0__DOT__result_buffer_sign))));
        tracep->chgBit(oldp+122,(((IData)(vlTOPp->SystolicArray__DOT__pes_0_0__DOT__io_out_hor_REG_sign) 
                                  ^ (IData)(vlTOPp->io_in_0_1_ver_sign))));
        tracep->chgBit(oldp+123,(((IData)(vlTOPp->SystolicArray__DOT__pes_0_1__DOT__fpadder__DOT___exp_diff_T)
                                   ? ((IData)(vlTOPp->SystolicArray__DOT__pes_0_0__DOT__io_out_hor_REG_sign) 
                                      ^ (IData)(vlTOPp->io_in_0_1_ver_sign))
                                   : (IData)(vlTOPp->SystolicArray__DOT__pes_0_1__DOT__result_buffer_sign))));
        tracep->chgBit(oldp+124,(((IData)(vlTOPp->io_in_1_0_hor_sign) 
                                  ^ (IData)(vlTOPp->SystolicArray__DOT__pes_0_0__DOT__io_out_ver_REG_sign))));
        tracep->chgBit(oldp+125,(((IData)(vlTOPp->SystolicArray__DOT__pes_1_0__DOT__fpadder__DOT___exp_diff_T)
                                   ? ((IData)(vlTOPp->io_in_1_0_hor_sign) 
                                      ^ (IData)(vlTOPp->SystolicArray__DOT__pes_0_0__DOT__io_out_ver_REG_sign))
                                   : (IData)(vlTOPp->SystolicArray__DOT__pes_1_0__DOT__result_buffer_sign))));
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
        vlTOPp->__Vm_traceActivity[2U] = 0U;
    }
}
