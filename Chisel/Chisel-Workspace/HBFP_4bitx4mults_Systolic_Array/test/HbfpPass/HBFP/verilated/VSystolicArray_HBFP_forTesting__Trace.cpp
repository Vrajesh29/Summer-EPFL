// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSystolicArray_HBFP_forTesting__Syms.h"


void VSystolicArray_HBFP_forTesting::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp = static_cast<VSystolicArray_HBFP_forTesting__Syms*>(userp);
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void VSystolicArray_HBFP_forTesting::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp = static_cast<VSystolicArray_HBFP_forTesting__Syms*>(userp);
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+0,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_hor_sign_0));
            tracep->chgBit(oldp+1,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_hor_sign_1));
            tracep->chgBit(oldp+2,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_hor_sign_2));
            tracep->chgBit(oldp+3,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_hor_sign_3));
            tracep->chgCData(oldp+4,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_hor_man_0),4);
            tracep->chgCData(oldp+5,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_hor_man_1),4);
            tracep->chgCData(oldp+6,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_hor_man_2),4);
            tracep->chgCData(oldp+7,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_hor_man_3),4);
            tracep->chgCData(oldp+8,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_hor_exp),8);
            tracep->chgBit(oldp+9,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_ver_sign_0));
            tracep->chgBit(oldp+10,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_ver_sign_1));
            tracep->chgBit(oldp+11,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_ver_sign_2));
            tracep->chgBit(oldp+12,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_ver_sign_3));
            tracep->chgCData(oldp+13,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_ver_man_0),4);
            tracep->chgCData(oldp+14,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_ver_man_1),4);
            tracep->chgCData(oldp+15,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_ver_man_2),4);
            tracep->chgCData(oldp+16,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_ver_man_3),4);
            tracep->chgCData(oldp+17,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_ver_exp),8);
            tracep->chgBit(oldp+18,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_0.__PVT__result_buffer_sign));
            tracep->chgCData(oldp+19,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_0.__PVT__result_buffer_man),4);
            tracep->chgCData(oldp+20,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_0.__PVT__result_buffer_exp),8);
            tracep->chgBit(oldp+21,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_hor_r_sign_0));
            tracep->chgBit(oldp+22,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_hor_r_sign_1));
            tracep->chgBit(oldp+23,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_hor_r_sign_2));
            tracep->chgBit(oldp+24,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_hor_r_sign_3));
            tracep->chgCData(oldp+25,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_hor_r_man_0),4);
            tracep->chgCData(oldp+26,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_hor_r_man_1),4);
            tracep->chgCData(oldp+27,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_hor_r_man_2),4);
            tracep->chgCData(oldp+28,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_hor_r_man_3),4);
            tracep->chgCData(oldp+29,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_hor_r_exp),8);
            tracep->chgBit(oldp+30,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_ver_sign_0));
            tracep->chgBit(oldp+31,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_ver_sign_1));
            tracep->chgBit(oldp+32,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_ver_sign_2));
            tracep->chgBit(oldp+33,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_ver_sign_3));
            tracep->chgCData(oldp+34,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_ver_man_0),4);
            tracep->chgCData(oldp+35,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_ver_man_1),4);
            tracep->chgCData(oldp+36,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_ver_man_2),4);
            tracep->chgCData(oldp+37,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_ver_man_3),4);
            tracep->chgCData(oldp+38,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_ver_exp),8);
            tracep->chgBit(oldp+39,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_1.__PVT__result_buffer_sign));
            tracep->chgCData(oldp+40,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_1.__PVT__result_buffer_man),4);
            tracep->chgCData(oldp+41,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_1.__PVT__result_buffer_exp),8);
            tracep->chgBit(oldp+42,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_hor_r_sign_0));
            tracep->chgBit(oldp+43,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_hor_r_sign_1));
            tracep->chgBit(oldp+44,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_hor_r_sign_2));
            tracep->chgBit(oldp+45,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_hor_r_sign_3));
            tracep->chgCData(oldp+46,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_hor_r_man_0),4);
            tracep->chgCData(oldp+47,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_hor_r_man_1),4);
            tracep->chgCData(oldp+48,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_hor_r_man_2),4);
            tracep->chgCData(oldp+49,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_hor_r_man_3),4);
            tracep->chgCData(oldp+50,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_hor_r_exp),8);
            tracep->chgBit(oldp+51,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_ver_sign_0));
            tracep->chgBit(oldp+52,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_ver_sign_1));
            tracep->chgBit(oldp+53,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_ver_sign_2));
            tracep->chgBit(oldp+54,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_ver_sign_3));
            tracep->chgCData(oldp+55,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_ver_man_0),4);
            tracep->chgCData(oldp+56,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_ver_man_1),4);
            tracep->chgCData(oldp+57,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_ver_man_2),4);
            tracep->chgCData(oldp+58,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_ver_man_3),4);
            tracep->chgCData(oldp+59,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_ver_exp),8);
            tracep->chgBit(oldp+60,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_2.__PVT__result_buffer_sign));
            tracep->chgCData(oldp+61,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_2.__PVT__result_buffer_man),4);
            tracep->chgCData(oldp+62,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_2.__PVT__result_buffer_exp),8);
            tracep->chgBit(oldp+63,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_hor_r_sign_0));
            tracep->chgBit(oldp+64,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_hor_r_sign_1));
            tracep->chgBit(oldp+65,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_hor_r_sign_2));
            tracep->chgBit(oldp+66,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_hor_r_sign_3));
            tracep->chgCData(oldp+67,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_hor_r_man_0),4);
            tracep->chgCData(oldp+68,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_hor_r_man_1),4);
            tracep->chgCData(oldp+69,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_hor_r_man_2),4);
            tracep->chgCData(oldp+70,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_hor_r_man_3),4);
            tracep->chgCData(oldp+71,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_hor_r_exp),8);
            tracep->chgBit(oldp+72,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_ver_sign_0));
            tracep->chgBit(oldp+73,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_ver_sign_1));
            tracep->chgBit(oldp+74,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_ver_sign_2));
            tracep->chgBit(oldp+75,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_ver_sign_3));
            tracep->chgCData(oldp+76,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_ver_man_0),4);
            tracep->chgCData(oldp+77,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_ver_man_1),4);
            tracep->chgCData(oldp+78,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_ver_man_2),4);
            tracep->chgCData(oldp+79,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_ver_man_3),4);
            tracep->chgCData(oldp+80,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_ver_exp),8);
            tracep->chgBit(oldp+81,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_3.__PVT__result_buffer_sign));
            tracep->chgCData(oldp+82,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_3.__PVT__result_buffer_man),4);
            tracep->chgCData(oldp+83,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_3.__PVT__result_buffer_exp),8);
            tracep->chgBit(oldp+84,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_sign_0));
            tracep->chgBit(oldp+85,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_sign_1));
            tracep->chgBit(oldp+86,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_sign_2));
            tracep->chgBit(oldp+87,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_sign_3));
            tracep->chgCData(oldp+88,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_0),4);
            tracep->chgCData(oldp+89,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_1),4);
            tracep->chgCData(oldp+90,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_2),4);
            tracep->chgCData(oldp+91,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_3),4);
            tracep->chgCData(oldp+92,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_exp),8);
            tracep->chgBit(oldp+93,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_sign_0));
            tracep->chgBit(oldp+94,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_sign_1));
            tracep->chgBit(oldp+95,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_sign_2));
            tracep->chgBit(oldp+96,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_sign_3));
            tracep->chgCData(oldp+97,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_0),4);
            tracep->chgCData(oldp+98,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_1),4);
            tracep->chgCData(oldp+99,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_2),4);
            tracep->chgCData(oldp+100,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_3),4);
            tracep->chgCData(oldp+101,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_exp),8);
            tracep->chgBit(oldp+102,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_0.__PVT__result_buffer_sign));
            tracep->chgCData(oldp+103,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_0.__PVT__result_buffer_man),4);
            tracep->chgCData(oldp+104,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_0.__PVT__result_buffer_exp),8);
            tracep->chgBit(oldp+105,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_sign_0));
            tracep->chgBit(oldp+106,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_sign_1));
            tracep->chgBit(oldp+107,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_sign_2));
            tracep->chgBit(oldp+108,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_sign_3));
            tracep->chgCData(oldp+109,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_0),4);
            tracep->chgCData(oldp+110,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_1),4);
            tracep->chgCData(oldp+111,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_2),4);
            tracep->chgCData(oldp+112,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_3),4);
            tracep->chgCData(oldp+113,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_exp),8);
            tracep->chgBit(oldp+114,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_sign_0));
            tracep->chgBit(oldp+115,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_sign_1));
            tracep->chgBit(oldp+116,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_sign_2));
            tracep->chgBit(oldp+117,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_sign_3));
            tracep->chgCData(oldp+118,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_0),4);
            tracep->chgCData(oldp+119,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_1),4);
            tracep->chgCData(oldp+120,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_2),4);
            tracep->chgCData(oldp+121,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_3),4);
            tracep->chgCData(oldp+122,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_exp),8);
            tracep->chgBit(oldp+123,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_1.__PVT__result_buffer_sign));
            tracep->chgCData(oldp+124,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_1.__PVT__result_buffer_man),4);
            tracep->chgCData(oldp+125,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_1.__PVT__result_buffer_exp),8);
            tracep->chgBit(oldp+126,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_sign_0));
            tracep->chgBit(oldp+127,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_sign_1));
            tracep->chgBit(oldp+128,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_sign_2));
            tracep->chgBit(oldp+129,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_sign_3));
            tracep->chgCData(oldp+130,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_0),4);
            tracep->chgCData(oldp+131,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_1),4);
            tracep->chgCData(oldp+132,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_2),4);
            tracep->chgCData(oldp+133,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_3),4);
            tracep->chgCData(oldp+134,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_exp),8);
            tracep->chgBit(oldp+135,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_sign_0));
            tracep->chgBit(oldp+136,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_sign_1));
            tracep->chgBit(oldp+137,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_sign_2));
            tracep->chgBit(oldp+138,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_sign_3));
            tracep->chgCData(oldp+139,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_0),4);
            tracep->chgCData(oldp+140,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_1),4);
            tracep->chgCData(oldp+141,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_2),4);
            tracep->chgCData(oldp+142,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_3),4);
            tracep->chgCData(oldp+143,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_exp),8);
            tracep->chgBit(oldp+144,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_2.__PVT__result_buffer_sign));
            tracep->chgCData(oldp+145,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_2.__PVT__result_buffer_man),4);
            tracep->chgCData(oldp+146,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_2.__PVT__result_buffer_exp),8);
            tracep->chgBit(oldp+147,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_sign_0));
            tracep->chgBit(oldp+148,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_sign_1));
            tracep->chgBit(oldp+149,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_sign_2));
            tracep->chgBit(oldp+150,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_sign_3));
            tracep->chgCData(oldp+151,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_0),4);
            tracep->chgCData(oldp+152,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_1),4);
            tracep->chgCData(oldp+153,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_2),4);
            tracep->chgCData(oldp+154,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_3),4);
            tracep->chgCData(oldp+155,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_exp),8);
            tracep->chgBit(oldp+156,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_sign_0));
            tracep->chgBit(oldp+157,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_sign_1));
            tracep->chgBit(oldp+158,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_sign_2));
            tracep->chgBit(oldp+159,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_sign_3));
            tracep->chgCData(oldp+160,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_0),4);
            tracep->chgCData(oldp+161,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_1),4);
            tracep->chgCData(oldp+162,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_2),4);
            tracep->chgCData(oldp+163,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_3),4);
            tracep->chgCData(oldp+164,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_exp),8);
            tracep->chgBit(oldp+165,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_3.__PVT__result_buffer_sign));
            tracep->chgCData(oldp+166,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_3.__PVT__result_buffer_man),4);
            tracep->chgCData(oldp+167,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_3.__PVT__result_buffer_exp),8);
            tracep->chgBit(oldp+168,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_sign_0));
            tracep->chgBit(oldp+169,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_sign_1));
            tracep->chgBit(oldp+170,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_sign_2));
            tracep->chgBit(oldp+171,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_sign_3));
            tracep->chgCData(oldp+172,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_0),4);
            tracep->chgCData(oldp+173,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_1),4);
            tracep->chgCData(oldp+174,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_2),4);
            tracep->chgCData(oldp+175,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_3),4);
            tracep->chgCData(oldp+176,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_exp),8);
            tracep->chgBit(oldp+177,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_r_sign_0));
            tracep->chgBit(oldp+178,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_r_sign_1));
            tracep->chgBit(oldp+179,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_r_sign_2));
            tracep->chgBit(oldp+180,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_r_sign_3));
            tracep->chgCData(oldp+181,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_r_man_0),4);
            tracep->chgCData(oldp+182,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_r_man_1),4);
            tracep->chgCData(oldp+183,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_r_man_2),4);
            tracep->chgCData(oldp+184,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_r_man_3),4);
            tracep->chgCData(oldp+185,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_r_exp),8);
            tracep->chgBit(oldp+186,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_0.__PVT__result_buffer_sign));
            tracep->chgCData(oldp+187,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_0.__PVT__result_buffer_man),4);
            tracep->chgCData(oldp+188,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_0.__PVT__result_buffer_exp),8);
            tracep->chgBit(oldp+189,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_r_sign_0));
            tracep->chgBit(oldp+190,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_r_sign_1));
            tracep->chgBit(oldp+191,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_r_sign_2));
            tracep->chgBit(oldp+192,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_r_sign_3));
            tracep->chgCData(oldp+193,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_r_man_0),4);
            tracep->chgCData(oldp+194,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_r_man_1),4);
            tracep->chgCData(oldp+195,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_r_man_2),4);
            tracep->chgCData(oldp+196,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_r_man_3),4);
            tracep->chgCData(oldp+197,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_r_exp),8);
            tracep->chgBit(oldp+198,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_r_sign_0));
            tracep->chgBit(oldp+199,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_r_sign_1));
            tracep->chgBit(oldp+200,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_r_sign_2));
            tracep->chgBit(oldp+201,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_r_sign_3));
            tracep->chgCData(oldp+202,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_r_man_0),4);
            tracep->chgCData(oldp+203,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_r_man_1),4);
            tracep->chgCData(oldp+204,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_r_man_2),4);
            tracep->chgCData(oldp+205,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_r_man_3),4);
            tracep->chgCData(oldp+206,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_r_exp),8);
            tracep->chgBit(oldp+207,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_1.__PVT__result_buffer_sign));
            tracep->chgCData(oldp+208,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_1.__PVT__result_buffer_man),4);
            tracep->chgCData(oldp+209,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_1.__PVT__result_buffer_exp),8);
            tracep->chgBit(oldp+210,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_r_sign_0));
            tracep->chgBit(oldp+211,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_r_sign_1));
            tracep->chgBit(oldp+212,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_r_sign_2));
            tracep->chgBit(oldp+213,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_r_sign_3));
            tracep->chgCData(oldp+214,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_r_man_0),4);
            tracep->chgCData(oldp+215,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_r_man_1),4);
            tracep->chgCData(oldp+216,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_r_man_2),4);
            tracep->chgCData(oldp+217,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_r_man_3),4);
            tracep->chgCData(oldp+218,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_r_exp),8);
            tracep->chgBit(oldp+219,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_r_sign_0));
            tracep->chgBit(oldp+220,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_r_sign_1));
            tracep->chgBit(oldp+221,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_r_sign_2));
            tracep->chgBit(oldp+222,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_r_sign_3));
            tracep->chgCData(oldp+223,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_r_man_0),4);
            tracep->chgCData(oldp+224,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_r_man_1),4);
            tracep->chgCData(oldp+225,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_r_man_2),4);
            tracep->chgCData(oldp+226,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_r_man_3),4);
            tracep->chgCData(oldp+227,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_r_exp),8);
            tracep->chgBit(oldp+228,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_2.__PVT__result_buffer_sign));
            tracep->chgCData(oldp+229,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_2.__PVT__result_buffer_man),4);
            tracep->chgCData(oldp+230,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_2.__PVT__result_buffer_exp),8);
            tracep->chgBit(oldp+231,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_r_sign_0));
            tracep->chgBit(oldp+232,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_r_sign_1));
            tracep->chgBit(oldp+233,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_r_sign_2));
            tracep->chgBit(oldp+234,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_r_sign_3));
            tracep->chgCData(oldp+235,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_r_man_0),4);
            tracep->chgCData(oldp+236,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_r_man_1),4);
            tracep->chgCData(oldp+237,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_r_man_2),4);
            tracep->chgCData(oldp+238,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_r_man_3),4);
            tracep->chgCData(oldp+239,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_r_exp),8);
            tracep->chgBit(oldp+240,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_r_sign_0));
            tracep->chgBit(oldp+241,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_r_sign_1));
            tracep->chgBit(oldp+242,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_r_sign_2));
            tracep->chgBit(oldp+243,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_r_sign_3));
            tracep->chgCData(oldp+244,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_r_man_0),4);
            tracep->chgCData(oldp+245,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_r_man_1),4);
            tracep->chgCData(oldp+246,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_r_man_2),4);
            tracep->chgCData(oldp+247,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_r_man_3),4);
            tracep->chgCData(oldp+248,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_r_exp),8);
            tracep->chgBit(oldp+249,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_3.__PVT__result_buffer_sign));
            tracep->chgCData(oldp+250,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_3.__PVT__result_buffer_man),4);
            tracep->chgCData(oldp+251,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_3.__PVT__result_buffer_exp),8);
            tracep->chgBit(oldp+252,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_sign_0));
            tracep->chgBit(oldp+253,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_sign_1));
            tracep->chgBit(oldp+254,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_sign_2));
            tracep->chgBit(oldp+255,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_sign_3));
            tracep->chgCData(oldp+256,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_0),4);
            tracep->chgCData(oldp+257,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_1),4);
            tracep->chgCData(oldp+258,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_2),4);
            tracep->chgCData(oldp+259,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_3),4);
            tracep->chgCData(oldp+260,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_exp),8);
            tracep->chgBit(oldp+261,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_sign_0));
            tracep->chgBit(oldp+262,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_sign_1));
            tracep->chgBit(oldp+263,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_sign_2));
            tracep->chgBit(oldp+264,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_sign_3));
            tracep->chgCData(oldp+265,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_0),4);
            tracep->chgCData(oldp+266,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_1),4);
            tracep->chgCData(oldp+267,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_2),4);
            tracep->chgCData(oldp+268,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_3),4);
            tracep->chgCData(oldp+269,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_exp),8);
            tracep->chgBit(oldp+270,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0.__PVT__result_buffer_sign));
            tracep->chgCData(oldp+271,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0.__PVT__result_buffer_man),4);
            tracep->chgCData(oldp+272,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0.__PVT__result_buffer_exp),8);
            tracep->chgBit(oldp+273,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_sign_0));
            tracep->chgBit(oldp+274,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_sign_1));
            tracep->chgBit(oldp+275,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_sign_2));
            tracep->chgBit(oldp+276,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_sign_3));
            tracep->chgCData(oldp+277,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_0),4);
            tracep->chgCData(oldp+278,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_1),4);
            tracep->chgCData(oldp+279,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_2),4);
            tracep->chgCData(oldp+280,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_3),4);
            tracep->chgCData(oldp+281,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_exp),8);
            tracep->chgBit(oldp+282,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_sign_0));
            tracep->chgBit(oldp+283,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_sign_1));
            tracep->chgBit(oldp+284,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_sign_2));
            tracep->chgBit(oldp+285,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_sign_3));
            tracep->chgCData(oldp+286,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_0),4);
            tracep->chgCData(oldp+287,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_1),4);
            tracep->chgCData(oldp+288,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_2),4);
            tracep->chgCData(oldp+289,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_3),4);
            tracep->chgCData(oldp+290,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_exp),8);
            tracep->chgBit(oldp+291,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1.__PVT__result_buffer_sign));
            tracep->chgCData(oldp+292,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1.__PVT__result_buffer_man),4);
            tracep->chgCData(oldp+293,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1.__PVT__result_buffer_exp),8);
            tracep->chgBit(oldp+294,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_sign_0));
            tracep->chgBit(oldp+295,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_sign_1));
            tracep->chgBit(oldp+296,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_sign_2));
            tracep->chgBit(oldp+297,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_sign_3));
            tracep->chgCData(oldp+298,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_0),4);
            tracep->chgCData(oldp+299,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_1),4);
            tracep->chgCData(oldp+300,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_2),4);
            tracep->chgCData(oldp+301,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_3),4);
            tracep->chgCData(oldp+302,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_exp),8);
            tracep->chgBit(oldp+303,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_sign_0));
            tracep->chgBit(oldp+304,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_sign_1));
            tracep->chgBit(oldp+305,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_sign_2));
            tracep->chgBit(oldp+306,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_sign_3));
            tracep->chgCData(oldp+307,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_0),4);
            tracep->chgCData(oldp+308,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_1),4);
            tracep->chgCData(oldp+309,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_2),4);
            tracep->chgCData(oldp+310,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_3),4);
            tracep->chgCData(oldp+311,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_exp),8);
            tracep->chgBit(oldp+312,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2.__PVT__result_buffer_sign));
            tracep->chgCData(oldp+313,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2.__PVT__result_buffer_man),4);
            tracep->chgCData(oldp+314,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2.__PVT__result_buffer_exp),8);
            tracep->chgBit(oldp+315,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_sign_0));
            tracep->chgBit(oldp+316,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_sign_1));
            tracep->chgBit(oldp+317,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_sign_2));
            tracep->chgBit(oldp+318,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_sign_3));
            tracep->chgCData(oldp+319,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_0),4);
            tracep->chgCData(oldp+320,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_1),4);
            tracep->chgCData(oldp+321,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_2),4);
            tracep->chgCData(oldp+322,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_3),4);
            tracep->chgCData(oldp+323,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_exp),8);
            tracep->chgBit(oldp+324,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_sign_0));
            tracep->chgBit(oldp+325,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_sign_1));
            tracep->chgBit(oldp+326,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_sign_2));
            tracep->chgBit(oldp+327,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_sign_3));
            tracep->chgCData(oldp+328,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_0),4);
            tracep->chgCData(oldp+329,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_1),4);
            tracep->chgCData(oldp+330,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_2),4);
            tracep->chgCData(oldp+331,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_3),4);
            tracep->chgCData(oldp+332,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_exp),8);
            tracep->chgBit(oldp+333,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3.__PVT__result_buffer_sign));
            tracep->chgCData(oldp+334,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3.__PVT__result_buffer_man),4);
            tracep->chgCData(oldp+335,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3.__PVT__result_buffer_exp),8);
            tracep->chgBit(oldp+336,((1U & (~ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_0__DOT__full)))));
            tracep->chgBit(oldp+337,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_0_io_deq_ready));
            tracep->chgBit(oldp+338,((1U & (~ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_0__DOT__empty)))));
            tracep->chgBit(oldp+339,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_0__DOT__ram_sign_0
                                     [vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_0__DOT__deq_ptr_value]));
            tracep->chgBit(oldp+340,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_0__DOT__ram_sign_1
                                     [vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_0__DOT__deq_ptr_value]));
            tracep->chgBit(oldp+341,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_0__DOT__ram_sign_2
                                     [vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_0__DOT__deq_ptr_value]));
            tracep->chgBit(oldp+342,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_0__DOT__ram_sign_3
                                     [vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_0__DOT__deq_ptr_value]));
            tracep->chgCData(oldp+343,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_0__DOT__ram_man_0
                                       [vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_0__DOT__deq_ptr_value]),4);
            tracep->chgCData(oldp+344,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_0__DOT__ram_man_1
                                       [vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_0__DOT__deq_ptr_value]),4);
            tracep->chgCData(oldp+345,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_0__DOT__ram_man_2
                                       [vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_0__DOT__deq_ptr_value]),4);
            tracep->chgCData(oldp+346,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_0__DOT__ram_man_3
                                       [vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_0__DOT__deq_ptr_value]),4);
            tracep->chgCData(oldp+347,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_0__DOT__ram_exp
                                       [vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_0__DOT__deq_ptr_value]),8);
            tracep->chgBit(oldp+348,((1U & (~ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_1__DOT__full)))));
            tracep->chgBit(oldp+349,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_1_io_deq_ready_r));
            tracep->chgBit(oldp+350,((1U & (~ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_1__DOT__empty)))));
            tracep->chgBit(oldp+351,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_1__DOT__ram_sign_0
                                     [vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_1__DOT__deq_ptr_value]));
            tracep->chgBit(oldp+352,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_1__DOT__ram_sign_1
                                     [vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_1__DOT__deq_ptr_value]));
            tracep->chgBit(oldp+353,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_1__DOT__ram_sign_2
                                     [vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_1__DOT__deq_ptr_value]));
            tracep->chgBit(oldp+354,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_1__DOT__ram_sign_3
                                     [vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_1__DOT__deq_ptr_value]));
            tracep->chgCData(oldp+355,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_1__DOT__ram_man_0
                                       [vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_1__DOT__deq_ptr_value]),4);
            tracep->chgCData(oldp+356,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_1__DOT__ram_man_1
                                       [vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_1__DOT__deq_ptr_value]),4);
            tracep->chgCData(oldp+357,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_1__DOT__ram_man_2
                                       [vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_1__DOT__deq_ptr_value]),4);
            tracep->chgCData(oldp+358,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_1__DOT__ram_man_3
                                       [vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_1__DOT__deq_ptr_value]),4);
            tracep->chgCData(oldp+359,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_1__DOT__ram_exp
                                       [vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_1__DOT__deq_ptr_value]),8);
            tracep->chgBit(oldp+360,((1U & (~ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_2__DOT__full)))));
            tracep->chgBit(oldp+361,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_2_io_deq_ready_r_1));
            tracep->chgBit(oldp+362,((1U & (~ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_2__DOT__empty)))));
            tracep->chgBit(oldp+363,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_2__DOT__ram_sign_0
                                     [vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_2__DOT__deq_ptr_value]));
            tracep->chgBit(oldp+364,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_2__DOT__ram_sign_1
                                     [vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_2__DOT__deq_ptr_value]));
            tracep->chgBit(oldp+365,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_2__DOT__ram_sign_2
                                     [vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_2__DOT__deq_ptr_value]));
            tracep->chgBit(oldp+366,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_2__DOT__ram_sign_3
                                     [vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_2__DOT__deq_ptr_value]));
            tracep->chgCData(oldp+367,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_2__DOT__ram_man_0
                                       [vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_2__DOT__deq_ptr_value]),4);
            tracep->chgCData(oldp+368,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_2__DOT__ram_man_1
                                       [vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_2__DOT__deq_ptr_value]),4);
            tracep->chgCData(oldp+369,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_2__DOT__ram_man_2
                                       [vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_2__DOT__deq_ptr_value]),4);
            tracep->chgCData(oldp+370,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_2__DOT__ram_man_3
                                       [vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_2__DOT__deq_ptr_value]),4);
            tracep->chgCData(oldp+371,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_2__DOT__ram_exp
                                       [vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_2__DOT__deq_ptr_value]),8);
            tracep->chgBit(oldp+372,((1U & (~ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_3__DOT__full)))));
            tracep->chgBit(oldp+373,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_3_io_deq_ready_r_2));
            tracep->chgBit(oldp+374,((1U & (~ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_3__DOT__empty)))));
            tracep->chgBit(oldp+375,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_3__DOT__ram_sign_0
                                     [vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_3__DOT__deq_ptr_value]));
            tracep->chgBit(oldp+376,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_3__DOT__ram_sign_1
                                     [vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_3__DOT__deq_ptr_value]));
            tracep->chgBit(oldp+377,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_3__DOT__ram_sign_2
                                     [vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_3__DOT__deq_ptr_value]));
            tracep->chgBit(oldp+378,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_3__DOT__ram_sign_3
                                     [vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_3__DOT__deq_ptr_value]));
            tracep->chgCData(oldp+379,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_3__DOT__ram_man_0
                                       [vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_3__DOT__deq_ptr_value]),4);
            tracep->chgCData(oldp+380,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_3__DOT__ram_man_1
                                       [vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_3__DOT__deq_ptr_value]),4);
            tracep->chgCData(oldp+381,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_3__DOT__ram_man_2
                                       [vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_3__DOT__deq_ptr_value]),4);
            tracep->chgCData(oldp+382,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_3__DOT__ram_man_3
                                       [vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_3__DOT__deq_ptr_value]),4);
            tracep->chgCData(oldp+383,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_3__DOT__ram_exp
                                       [vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_3__DOT__deq_ptr_value]),8);
            tracep->chgBit(oldp+384,((1U & (~ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_0__DOT__full)))));
            tracep->chgBit(oldp+385,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_0_io_deq_ready));
            tracep->chgBit(oldp+386,((1U & (~ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_0__DOT__empty)))));
            tracep->chgBit(oldp+387,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_0__DOT__ram_sign_0
                                     [vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_0__DOT__deq_ptr_value]));
            tracep->chgBit(oldp+388,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_0__DOT__ram_sign_1
                                     [vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_0__DOT__deq_ptr_value]));
            tracep->chgBit(oldp+389,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_0__DOT__ram_sign_2
                                     [vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_0__DOT__deq_ptr_value]));
            tracep->chgBit(oldp+390,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_0__DOT__ram_sign_3
                                     [vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_0__DOT__deq_ptr_value]));
            tracep->chgCData(oldp+391,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_0__DOT__ram_man_0
                                       [vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_0__DOT__deq_ptr_value]),4);
            tracep->chgCData(oldp+392,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_0__DOT__ram_man_1
                                       [vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_0__DOT__deq_ptr_value]),4);
            tracep->chgCData(oldp+393,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_0__DOT__ram_man_2
                                       [vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_0__DOT__deq_ptr_value]),4);
            tracep->chgCData(oldp+394,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_0__DOT__ram_man_3
                                       [vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_0__DOT__deq_ptr_value]),4);
            tracep->chgCData(oldp+395,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_0__DOT__ram_exp
                                       [vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_0__DOT__deq_ptr_value]),8);
            tracep->chgBit(oldp+396,((1U & (~ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_1__DOT__full)))));
            tracep->chgBit(oldp+397,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_1_io_deq_ready_r));
            tracep->chgBit(oldp+398,((1U & (~ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_1__DOT__empty)))));
            tracep->chgBit(oldp+399,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_1__DOT__ram_sign_0
                                     [vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_1__DOT__deq_ptr_value]));
            tracep->chgBit(oldp+400,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_1__DOT__ram_sign_1
                                     [vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_1__DOT__deq_ptr_value]));
            tracep->chgBit(oldp+401,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_1__DOT__ram_sign_2
                                     [vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_1__DOT__deq_ptr_value]));
            tracep->chgBit(oldp+402,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_1__DOT__ram_sign_3
                                     [vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_1__DOT__deq_ptr_value]));
            tracep->chgCData(oldp+403,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_1__DOT__ram_man_0
                                       [vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_1__DOT__deq_ptr_value]),4);
            tracep->chgCData(oldp+404,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_1__DOT__ram_man_1
                                       [vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_1__DOT__deq_ptr_value]),4);
            tracep->chgCData(oldp+405,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_1__DOT__ram_man_2
                                       [vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_1__DOT__deq_ptr_value]),4);
            tracep->chgCData(oldp+406,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_1__DOT__ram_man_3
                                       [vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_1__DOT__deq_ptr_value]),4);
            tracep->chgCData(oldp+407,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_1__DOT__ram_exp
                                       [vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_1__DOT__deq_ptr_value]),8);
            tracep->chgBit(oldp+408,((1U & (~ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_2__DOT__full)))));
            tracep->chgBit(oldp+409,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_2_io_deq_ready_r_1));
            tracep->chgBit(oldp+410,((1U & (~ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_2__DOT__empty)))));
            tracep->chgBit(oldp+411,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_2__DOT__ram_sign_0
                                     [vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_2__DOT__deq_ptr_value]));
            tracep->chgBit(oldp+412,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_2__DOT__ram_sign_1
                                     [vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_2__DOT__deq_ptr_value]));
            tracep->chgBit(oldp+413,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_2__DOT__ram_sign_2
                                     [vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_2__DOT__deq_ptr_value]));
            tracep->chgBit(oldp+414,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_2__DOT__ram_sign_3
                                     [vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_2__DOT__deq_ptr_value]));
            tracep->chgCData(oldp+415,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_2__DOT__ram_man_0
                                       [vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_2__DOT__deq_ptr_value]),4);
            tracep->chgCData(oldp+416,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_2__DOT__ram_man_1
                                       [vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_2__DOT__deq_ptr_value]),4);
            tracep->chgCData(oldp+417,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_2__DOT__ram_man_2
                                       [vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_2__DOT__deq_ptr_value]),4);
            tracep->chgCData(oldp+418,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_2__DOT__ram_man_3
                                       [vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_2__DOT__deq_ptr_value]),4);
            tracep->chgCData(oldp+419,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_2__DOT__ram_exp
                                       [vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_2__DOT__deq_ptr_value]),8);
            tracep->chgBit(oldp+420,((1U & (~ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_3__DOT__full)))));
            tracep->chgBit(oldp+421,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_3_io_deq_ready_r_2));
            tracep->chgBit(oldp+422,((1U & (~ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_3__DOT__empty)))));
            tracep->chgBit(oldp+423,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_3__DOT__ram_sign_0
                                     [vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_3__DOT__deq_ptr_value]));
            tracep->chgBit(oldp+424,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_3__DOT__ram_sign_1
                                     [vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_3__DOT__deq_ptr_value]));
            tracep->chgBit(oldp+425,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_3__DOT__ram_sign_2
                                     [vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_3__DOT__deq_ptr_value]));
            tracep->chgBit(oldp+426,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_3__DOT__ram_sign_3
                                     [vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_3__DOT__deq_ptr_value]));
            tracep->chgCData(oldp+427,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_3__DOT__ram_man_0
                                       [vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_3__DOT__deq_ptr_value]),4);
            tracep->chgCData(oldp+428,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_3__DOT__ram_man_1
                                       [vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_3__DOT__deq_ptr_value]),4);
            tracep->chgCData(oldp+429,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_3__DOT__ram_man_2
                                       [vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_3__DOT__deq_ptr_value]),4);
            tracep->chgCData(oldp+430,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_3__DOT__ram_man_3
                                       [vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_3__DOT__deq_ptr_value]),4);
            tracep->chgCData(oldp+431,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_3__DOT__ram_exp
                                       [vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_3__DOT__deq_ptr_value]),8);
            tracep->chgBit(oldp+432,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_0__DOT__ram_sign_0[0]));
            tracep->chgBit(oldp+433,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_0__DOT__ram_sign_0[1]));
            tracep->chgBit(oldp+434,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_0__DOT__ram_sign_0[2]));
            tracep->chgBit(oldp+435,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_0__DOT__ram_sign_0[3]));
            tracep->chgCData(oldp+436,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_0__DOT__deq_ptr_value),2);
            tracep->chgCData(oldp+437,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_0__DOT__enq_ptr_value),2);
            tracep->chgBit(oldp+438,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_0__DOT__ram_sign_1[0]));
            tracep->chgBit(oldp+439,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_0__DOT__ram_sign_1[1]));
            tracep->chgBit(oldp+440,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_0__DOT__ram_sign_1[2]));
            tracep->chgBit(oldp+441,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_0__DOT__ram_sign_1[3]));
            tracep->chgBit(oldp+442,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_0__DOT__ram_sign_2[0]));
            tracep->chgBit(oldp+443,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_0__DOT__ram_sign_2[1]));
            tracep->chgBit(oldp+444,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_0__DOT__ram_sign_2[2]));
            tracep->chgBit(oldp+445,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_0__DOT__ram_sign_2[3]));
            tracep->chgBit(oldp+446,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_0__DOT__ram_sign_3[0]));
            tracep->chgBit(oldp+447,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_0__DOT__ram_sign_3[1]));
            tracep->chgBit(oldp+448,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_0__DOT__ram_sign_3[2]));
            tracep->chgBit(oldp+449,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_0__DOT__ram_sign_3[3]));
            tracep->chgCData(oldp+450,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_0__DOT__ram_man_0[0]),4);
            tracep->chgCData(oldp+451,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_0__DOT__ram_man_0[1]),4);
            tracep->chgCData(oldp+452,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_0__DOT__ram_man_0[2]),4);
            tracep->chgCData(oldp+453,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_0__DOT__ram_man_0[3]),4);
            tracep->chgCData(oldp+454,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_0__DOT__ram_man_1[0]),4);
            tracep->chgCData(oldp+455,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_0__DOT__ram_man_1[1]),4);
            tracep->chgCData(oldp+456,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_0__DOT__ram_man_1[2]),4);
            tracep->chgCData(oldp+457,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_0__DOT__ram_man_1[3]),4);
            tracep->chgCData(oldp+458,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_0__DOT__ram_man_2[0]),4);
            tracep->chgCData(oldp+459,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_0__DOT__ram_man_2[1]),4);
            tracep->chgCData(oldp+460,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_0__DOT__ram_man_2[2]),4);
            tracep->chgCData(oldp+461,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_0__DOT__ram_man_2[3]),4);
            tracep->chgCData(oldp+462,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_0__DOT__ram_man_3[0]),4);
            tracep->chgCData(oldp+463,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_0__DOT__ram_man_3[1]),4);
            tracep->chgCData(oldp+464,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_0__DOT__ram_man_3[2]),4);
            tracep->chgCData(oldp+465,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_0__DOT__ram_man_3[3]),4);
            tracep->chgCData(oldp+466,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_0__DOT__ram_exp[0]),8);
            tracep->chgCData(oldp+467,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_0__DOT__ram_exp[1]),8);
            tracep->chgCData(oldp+468,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_0__DOT__ram_exp[2]),8);
            tracep->chgCData(oldp+469,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_0__DOT__ram_exp[3]),8);
            tracep->chgBit(oldp+470,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_0__DOT__maybe_full));
            tracep->chgBit(oldp+471,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_0__DOT__ptr_match));
            tracep->chgBit(oldp+472,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_0__DOT__empty));
            tracep->chgBit(oldp+473,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_0__DOT__full));
            tracep->chgBit(oldp+474,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_0__DOT__do_deq));
            tracep->chgBit(oldp+475,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_1__DOT__ram_sign_0[0]));
            tracep->chgBit(oldp+476,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_1__DOT__ram_sign_0[1]));
            tracep->chgBit(oldp+477,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_1__DOT__ram_sign_0[2]));
            tracep->chgBit(oldp+478,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_1__DOT__ram_sign_0[3]));
            tracep->chgCData(oldp+479,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_1__DOT__deq_ptr_value),2);
            tracep->chgCData(oldp+480,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_1__DOT__enq_ptr_value),2);
            tracep->chgBit(oldp+481,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_1__DOT__ram_sign_1[0]));
            tracep->chgBit(oldp+482,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_1__DOT__ram_sign_1[1]));
            tracep->chgBit(oldp+483,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_1__DOT__ram_sign_1[2]));
            tracep->chgBit(oldp+484,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_1__DOT__ram_sign_1[3]));
            tracep->chgBit(oldp+485,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_1__DOT__ram_sign_2[0]));
            tracep->chgBit(oldp+486,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_1__DOT__ram_sign_2[1]));
            tracep->chgBit(oldp+487,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_1__DOT__ram_sign_2[2]));
            tracep->chgBit(oldp+488,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_1__DOT__ram_sign_2[3]));
            tracep->chgBit(oldp+489,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_1__DOT__ram_sign_3[0]));
            tracep->chgBit(oldp+490,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_1__DOT__ram_sign_3[1]));
            tracep->chgBit(oldp+491,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_1__DOT__ram_sign_3[2]));
            tracep->chgBit(oldp+492,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_1__DOT__ram_sign_3[3]));
            tracep->chgCData(oldp+493,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_1__DOT__ram_man_0[0]),4);
            tracep->chgCData(oldp+494,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_1__DOT__ram_man_0[1]),4);
            tracep->chgCData(oldp+495,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_1__DOT__ram_man_0[2]),4);
            tracep->chgCData(oldp+496,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_1__DOT__ram_man_0[3]),4);
            tracep->chgCData(oldp+497,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_1__DOT__ram_man_1[0]),4);
            tracep->chgCData(oldp+498,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_1__DOT__ram_man_1[1]),4);
            tracep->chgCData(oldp+499,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_1__DOT__ram_man_1[2]),4);
            tracep->chgCData(oldp+500,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_1__DOT__ram_man_1[3]),4);
            tracep->chgCData(oldp+501,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_1__DOT__ram_man_2[0]),4);
            tracep->chgCData(oldp+502,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_1__DOT__ram_man_2[1]),4);
            tracep->chgCData(oldp+503,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_1__DOT__ram_man_2[2]),4);
            tracep->chgCData(oldp+504,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_1__DOT__ram_man_2[3]),4);
            tracep->chgCData(oldp+505,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_1__DOT__ram_man_3[0]),4);
            tracep->chgCData(oldp+506,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_1__DOT__ram_man_3[1]),4);
            tracep->chgCData(oldp+507,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_1__DOT__ram_man_3[2]),4);
            tracep->chgCData(oldp+508,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_1__DOT__ram_man_3[3]),4);
            tracep->chgCData(oldp+509,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_1__DOT__ram_exp[0]),8);
            tracep->chgCData(oldp+510,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_1__DOT__ram_exp[1]),8);
            tracep->chgCData(oldp+511,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_1__DOT__ram_exp[2]),8);
            tracep->chgCData(oldp+512,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_1__DOT__ram_exp[3]),8);
            tracep->chgBit(oldp+513,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_1__DOT__maybe_full));
            tracep->chgBit(oldp+514,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_1__DOT__ptr_match));
            tracep->chgBit(oldp+515,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_1__DOT__empty));
            tracep->chgBit(oldp+516,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_1__DOT__full));
            tracep->chgBit(oldp+517,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_1__DOT__do_deq));
            tracep->chgBit(oldp+518,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_2__DOT__ram_sign_0[0]));
            tracep->chgBit(oldp+519,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_2__DOT__ram_sign_0[1]));
            tracep->chgBit(oldp+520,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_2__DOT__ram_sign_0[2]));
            tracep->chgBit(oldp+521,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_2__DOT__ram_sign_0[3]));
            tracep->chgCData(oldp+522,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_2__DOT__deq_ptr_value),2);
            tracep->chgCData(oldp+523,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_2__DOT__enq_ptr_value),2);
            tracep->chgBit(oldp+524,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_2__DOT__ram_sign_1[0]));
            tracep->chgBit(oldp+525,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_2__DOT__ram_sign_1[1]));
            tracep->chgBit(oldp+526,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_2__DOT__ram_sign_1[2]));
            tracep->chgBit(oldp+527,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_2__DOT__ram_sign_1[3]));
            tracep->chgBit(oldp+528,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_2__DOT__ram_sign_2[0]));
            tracep->chgBit(oldp+529,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_2__DOT__ram_sign_2[1]));
            tracep->chgBit(oldp+530,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_2__DOT__ram_sign_2[2]));
            tracep->chgBit(oldp+531,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_2__DOT__ram_sign_2[3]));
            tracep->chgBit(oldp+532,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_2__DOT__ram_sign_3[0]));
            tracep->chgBit(oldp+533,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_2__DOT__ram_sign_3[1]));
            tracep->chgBit(oldp+534,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_2__DOT__ram_sign_3[2]));
            tracep->chgBit(oldp+535,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_2__DOT__ram_sign_3[3]));
            tracep->chgCData(oldp+536,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_2__DOT__ram_man_0[0]),4);
            tracep->chgCData(oldp+537,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_2__DOT__ram_man_0[1]),4);
            tracep->chgCData(oldp+538,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_2__DOT__ram_man_0[2]),4);
            tracep->chgCData(oldp+539,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_2__DOT__ram_man_0[3]),4);
            tracep->chgCData(oldp+540,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_2__DOT__ram_man_1[0]),4);
            tracep->chgCData(oldp+541,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_2__DOT__ram_man_1[1]),4);
            tracep->chgCData(oldp+542,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_2__DOT__ram_man_1[2]),4);
            tracep->chgCData(oldp+543,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_2__DOT__ram_man_1[3]),4);
            tracep->chgCData(oldp+544,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_2__DOT__ram_man_2[0]),4);
            tracep->chgCData(oldp+545,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_2__DOT__ram_man_2[1]),4);
            tracep->chgCData(oldp+546,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_2__DOT__ram_man_2[2]),4);
            tracep->chgCData(oldp+547,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_2__DOT__ram_man_2[3]),4);
            tracep->chgCData(oldp+548,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_2__DOT__ram_man_3[0]),4);
            tracep->chgCData(oldp+549,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_2__DOT__ram_man_3[1]),4);
            tracep->chgCData(oldp+550,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_2__DOT__ram_man_3[2]),4);
            tracep->chgCData(oldp+551,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_2__DOT__ram_man_3[3]),4);
            tracep->chgCData(oldp+552,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_2__DOT__ram_exp[0]),8);
            tracep->chgCData(oldp+553,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_2__DOT__ram_exp[1]),8);
            tracep->chgCData(oldp+554,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_2__DOT__ram_exp[2]),8);
            tracep->chgCData(oldp+555,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_2__DOT__ram_exp[3]),8);
            tracep->chgBit(oldp+556,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_2__DOT__maybe_full));
            tracep->chgBit(oldp+557,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_2__DOT__ptr_match));
            tracep->chgBit(oldp+558,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_2__DOT__empty));
            tracep->chgBit(oldp+559,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_2__DOT__full));
            tracep->chgBit(oldp+560,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_2__DOT__do_deq));
            tracep->chgBit(oldp+561,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_3__DOT__ram_sign_0[0]));
            tracep->chgBit(oldp+562,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_3__DOT__ram_sign_0[1]));
            tracep->chgBit(oldp+563,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_3__DOT__ram_sign_0[2]));
            tracep->chgBit(oldp+564,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_3__DOT__ram_sign_0[3]));
            tracep->chgCData(oldp+565,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_3__DOT__deq_ptr_value),2);
            tracep->chgCData(oldp+566,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_3__DOT__enq_ptr_value),2);
            tracep->chgBit(oldp+567,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_3__DOT__ram_sign_1[0]));
            tracep->chgBit(oldp+568,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_3__DOT__ram_sign_1[1]));
            tracep->chgBit(oldp+569,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_3__DOT__ram_sign_1[2]));
            tracep->chgBit(oldp+570,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_3__DOT__ram_sign_1[3]));
            tracep->chgBit(oldp+571,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_3__DOT__ram_sign_2[0]));
            tracep->chgBit(oldp+572,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_3__DOT__ram_sign_2[1]));
            tracep->chgBit(oldp+573,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_3__DOT__ram_sign_2[2]));
            tracep->chgBit(oldp+574,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_3__DOT__ram_sign_2[3]));
            tracep->chgBit(oldp+575,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_3__DOT__ram_sign_3[0]));
            tracep->chgBit(oldp+576,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_3__DOT__ram_sign_3[1]));
            tracep->chgBit(oldp+577,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_3__DOT__ram_sign_3[2]));
            tracep->chgBit(oldp+578,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_3__DOT__ram_sign_3[3]));
            tracep->chgCData(oldp+579,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_3__DOT__ram_man_0[0]),4);
            tracep->chgCData(oldp+580,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_3__DOT__ram_man_0[1]),4);
            tracep->chgCData(oldp+581,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_3__DOT__ram_man_0[2]),4);
            tracep->chgCData(oldp+582,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_3__DOT__ram_man_0[3]),4);
            tracep->chgCData(oldp+583,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_3__DOT__ram_man_1[0]),4);
            tracep->chgCData(oldp+584,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_3__DOT__ram_man_1[1]),4);
            tracep->chgCData(oldp+585,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_3__DOT__ram_man_1[2]),4);
            tracep->chgCData(oldp+586,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_3__DOT__ram_man_1[3]),4);
            tracep->chgCData(oldp+587,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_3__DOT__ram_man_2[0]),4);
            tracep->chgCData(oldp+588,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_3__DOT__ram_man_2[1]),4);
            tracep->chgCData(oldp+589,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_3__DOT__ram_man_2[2]),4);
            tracep->chgCData(oldp+590,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_3__DOT__ram_man_2[3]),4);
            tracep->chgCData(oldp+591,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_3__DOT__ram_man_3[0]),4);
            tracep->chgCData(oldp+592,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_3__DOT__ram_man_3[1]),4);
            tracep->chgCData(oldp+593,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_3__DOT__ram_man_3[2]),4);
            tracep->chgCData(oldp+594,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_3__DOT__ram_man_3[3]),4);
            tracep->chgCData(oldp+595,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_3__DOT__ram_exp[0]),8);
            tracep->chgCData(oldp+596,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_3__DOT__ram_exp[1]),8);
            tracep->chgCData(oldp+597,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_3__DOT__ram_exp[2]),8);
            tracep->chgCData(oldp+598,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_3__DOT__ram_exp[3]),8);
            tracep->chgBit(oldp+599,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_3__DOT__maybe_full));
            tracep->chgBit(oldp+600,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_3__DOT__ptr_match));
            tracep->chgBit(oldp+601,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_3__DOT__empty));
            tracep->chgBit(oldp+602,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_3__DOT__full));
            tracep->chgBit(oldp+603,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_3__DOT__do_deq));
            tracep->chgBit(oldp+604,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_0__DOT__ram_sign_0[0]));
            tracep->chgBit(oldp+605,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_0__DOT__ram_sign_0[1]));
            tracep->chgBit(oldp+606,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_0__DOT__ram_sign_0[2]));
            tracep->chgBit(oldp+607,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_0__DOT__ram_sign_0[3]));
            tracep->chgCData(oldp+608,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_0__DOT__deq_ptr_value),2);
            tracep->chgCData(oldp+609,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_0__DOT__enq_ptr_value),2);
            tracep->chgBit(oldp+610,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_0__DOT__ram_sign_1[0]));
            tracep->chgBit(oldp+611,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_0__DOT__ram_sign_1[1]));
            tracep->chgBit(oldp+612,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_0__DOT__ram_sign_1[2]));
            tracep->chgBit(oldp+613,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_0__DOT__ram_sign_1[3]));
            tracep->chgBit(oldp+614,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_0__DOT__ram_sign_2[0]));
            tracep->chgBit(oldp+615,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_0__DOT__ram_sign_2[1]));
            tracep->chgBit(oldp+616,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_0__DOT__ram_sign_2[2]));
            tracep->chgBit(oldp+617,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_0__DOT__ram_sign_2[3]));
            tracep->chgBit(oldp+618,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_0__DOT__ram_sign_3[0]));
            tracep->chgBit(oldp+619,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_0__DOT__ram_sign_3[1]));
            tracep->chgBit(oldp+620,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_0__DOT__ram_sign_3[2]));
            tracep->chgBit(oldp+621,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_0__DOT__ram_sign_3[3]));
            tracep->chgCData(oldp+622,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_0__DOT__ram_man_0[0]),4);
            tracep->chgCData(oldp+623,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_0__DOT__ram_man_0[1]),4);
            tracep->chgCData(oldp+624,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_0__DOT__ram_man_0[2]),4);
            tracep->chgCData(oldp+625,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_0__DOT__ram_man_0[3]),4);
            tracep->chgCData(oldp+626,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_0__DOT__ram_man_1[0]),4);
            tracep->chgCData(oldp+627,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_0__DOT__ram_man_1[1]),4);
            tracep->chgCData(oldp+628,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_0__DOT__ram_man_1[2]),4);
            tracep->chgCData(oldp+629,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_0__DOT__ram_man_1[3]),4);
            tracep->chgCData(oldp+630,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_0__DOT__ram_man_2[0]),4);
            tracep->chgCData(oldp+631,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_0__DOT__ram_man_2[1]),4);
            tracep->chgCData(oldp+632,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_0__DOT__ram_man_2[2]),4);
            tracep->chgCData(oldp+633,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_0__DOT__ram_man_2[3]),4);
            tracep->chgCData(oldp+634,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_0__DOT__ram_man_3[0]),4);
            tracep->chgCData(oldp+635,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_0__DOT__ram_man_3[1]),4);
            tracep->chgCData(oldp+636,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_0__DOT__ram_man_3[2]),4);
            tracep->chgCData(oldp+637,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_0__DOT__ram_man_3[3]),4);
            tracep->chgCData(oldp+638,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_0__DOT__ram_exp[0]),8);
            tracep->chgCData(oldp+639,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_0__DOT__ram_exp[1]),8);
            tracep->chgCData(oldp+640,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_0__DOT__ram_exp[2]),8);
            tracep->chgCData(oldp+641,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_0__DOT__ram_exp[3]),8);
            tracep->chgBit(oldp+642,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_0__DOT__maybe_full));
            tracep->chgBit(oldp+643,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_0__DOT__ptr_match));
            tracep->chgBit(oldp+644,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_0__DOT__empty));
            tracep->chgBit(oldp+645,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_0__DOT__full));
            tracep->chgBit(oldp+646,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_0__DOT__do_deq));
            tracep->chgBit(oldp+647,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_1__DOT__ram_sign_0[0]));
            tracep->chgBit(oldp+648,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_1__DOT__ram_sign_0[1]));
            tracep->chgBit(oldp+649,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_1__DOT__ram_sign_0[2]));
            tracep->chgBit(oldp+650,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_1__DOT__ram_sign_0[3]));
            tracep->chgCData(oldp+651,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_1__DOT__deq_ptr_value),2);
            tracep->chgCData(oldp+652,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_1__DOT__enq_ptr_value),2);
            tracep->chgBit(oldp+653,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_1__DOT__ram_sign_1[0]));
            tracep->chgBit(oldp+654,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_1__DOT__ram_sign_1[1]));
            tracep->chgBit(oldp+655,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_1__DOT__ram_sign_1[2]));
            tracep->chgBit(oldp+656,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_1__DOT__ram_sign_1[3]));
            tracep->chgBit(oldp+657,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_1__DOT__ram_sign_2[0]));
            tracep->chgBit(oldp+658,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_1__DOT__ram_sign_2[1]));
            tracep->chgBit(oldp+659,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_1__DOT__ram_sign_2[2]));
            tracep->chgBit(oldp+660,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_1__DOT__ram_sign_2[3]));
            tracep->chgBit(oldp+661,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_1__DOT__ram_sign_3[0]));
            tracep->chgBit(oldp+662,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_1__DOT__ram_sign_3[1]));
            tracep->chgBit(oldp+663,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_1__DOT__ram_sign_3[2]));
            tracep->chgBit(oldp+664,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_1__DOT__ram_sign_3[3]));
            tracep->chgCData(oldp+665,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_1__DOT__ram_man_0[0]),4);
            tracep->chgCData(oldp+666,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_1__DOT__ram_man_0[1]),4);
            tracep->chgCData(oldp+667,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_1__DOT__ram_man_0[2]),4);
            tracep->chgCData(oldp+668,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_1__DOT__ram_man_0[3]),4);
            tracep->chgCData(oldp+669,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_1__DOT__ram_man_1[0]),4);
            tracep->chgCData(oldp+670,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_1__DOT__ram_man_1[1]),4);
            tracep->chgCData(oldp+671,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_1__DOT__ram_man_1[2]),4);
            tracep->chgCData(oldp+672,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_1__DOT__ram_man_1[3]),4);
            tracep->chgCData(oldp+673,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_1__DOT__ram_man_2[0]),4);
            tracep->chgCData(oldp+674,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_1__DOT__ram_man_2[1]),4);
            tracep->chgCData(oldp+675,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_1__DOT__ram_man_2[2]),4);
            tracep->chgCData(oldp+676,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_1__DOT__ram_man_2[3]),4);
            tracep->chgCData(oldp+677,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_1__DOT__ram_man_3[0]),4);
            tracep->chgCData(oldp+678,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_1__DOT__ram_man_3[1]),4);
            tracep->chgCData(oldp+679,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_1__DOT__ram_man_3[2]),4);
            tracep->chgCData(oldp+680,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_1__DOT__ram_man_3[3]),4);
            tracep->chgCData(oldp+681,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_1__DOT__ram_exp[0]),8);
            tracep->chgCData(oldp+682,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_1__DOT__ram_exp[1]),8);
            tracep->chgCData(oldp+683,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_1__DOT__ram_exp[2]),8);
            tracep->chgCData(oldp+684,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_1__DOT__ram_exp[3]),8);
            tracep->chgBit(oldp+685,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_1__DOT__maybe_full));
            tracep->chgBit(oldp+686,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_1__DOT__ptr_match));
            tracep->chgBit(oldp+687,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_1__DOT__empty));
            tracep->chgBit(oldp+688,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_1__DOT__full));
            tracep->chgBit(oldp+689,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_1__DOT__do_deq));
            tracep->chgBit(oldp+690,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_2__DOT__ram_sign_0[0]));
            tracep->chgBit(oldp+691,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_2__DOT__ram_sign_0[1]));
            tracep->chgBit(oldp+692,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_2__DOT__ram_sign_0[2]));
            tracep->chgBit(oldp+693,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_2__DOT__ram_sign_0[3]));
            tracep->chgCData(oldp+694,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_2__DOT__deq_ptr_value),2);
            tracep->chgCData(oldp+695,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_2__DOT__enq_ptr_value),2);
            tracep->chgBit(oldp+696,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_2__DOT__ram_sign_1[0]));
            tracep->chgBit(oldp+697,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_2__DOT__ram_sign_1[1]));
            tracep->chgBit(oldp+698,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_2__DOT__ram_sign_1[2]));
            tracep->chgBit(oldp+699,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_2__DOT__ram_sign_1[3]));
            tracep->chgBit(oldp+700,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_2__DOT__ram_sign_2[0]));
            tracep->chgBit(oldp+701,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_2__DOT__ram_sign_2[1]));
            tracep->chgBit(oldp+702,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_2__DOT__ram_sign_2[2]));
            tracep->chgBit(oldp+703,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_2__DOT__ram_sign_2[3]));
            tracep->chgBit(oldp+704,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_2__DOT__ram_sign_3[0]));
            tracep->chgBit(oldp+705,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_2__DOT__ram_sign_3[1]));
            tracep->chgBit(oldp+706,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_2__DOT__ram_sign_3[2]));
            tracep->chgBit(oldp+707,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_2__DOT__ram_sign_3[3]));
            tracep->chgCData(oldp+708,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_2__DOT__ram_man_0[0]),4);
            tracep->chgCData(oldp+709,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_2__DOT__ram_man_0[1]),4);
            tracep->chgCData(oldp+710,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_2__DOT__ram_man_0[2]),4);
            tracep->chgCData(oldp+711,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_2__DOT__ram_man_0[3]),4);
            tracep->chgCData(oldp+712,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_2__DOT__ram_man_1[0]),4);
            tracep->chgCData(oldp+713,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_2__DOT__ram_man_1[1]),4);
            tracep->chgCData(oldp+714,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_2__DOT__ram_man_1[2]),4);
            tracep->chgCData(oldp+715,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_2__DOT__ram_man_1[3]),4);
            tracep->chgCData(oldp+716,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_2__DOT__ram_man_2[0]),4);
            tracep->chgCData(oldp+717,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_2__DOT__ram_man_2[1]),4);
            tracep->chgCData(oldp+718,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_2__DOT__ram_man_2[2]),4);
            tracep->chgCData(oldp+719,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_2__DOT__ram_man_2[3]),4);
            tracep->chgCData(oldp+720,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_2__DOT__ram_man_3[0]),4);
            tracep->chgCData(oldp+721,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_2__DOT__ram_man_3[1]),4);
            tracep->chgCData(oldp+722,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_2__DOT__ram_man_3[2]),4);
            tracep->chgCData(oldp+723,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_2__DOT__ram_man_3[3]),4);
            tracep->chgCData(oldp+724,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_2__DOT__ram_exp[0]),8);
            tracep->chgCData(oldp+725,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_2__DOT__ram_exp[1]),8);
            tracep->chgCData(oldp+726,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_2__DOT__ram_exp[2]),8);
            tracep->chgCData(oldp+727,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_2__DOT__ram_exp[3]),8);
            tracep->chgBit(oldp+728,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_2__DOT__maybe_full));
            tracep->chgBit(oldp+729,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_2__DOT__ptr_match));
            tracep->chgBit(oldp+730,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_2__DOT__empty));
            tracep->chgBit(oldp+731,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_2__DOT__full));
            tracep->chgBit(oldp+732,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_2__DOT__do_deq));
            tracep->chgBit(oldp+733,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_3__DOT__ram_sign_0[0]));
            tracep->chgBit(oldp+734,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_3__DOT__ram_sign_0[1]));
            tracep->chgBit(oldp+735,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_3__DOT__ram_sign_0[2]));
            tracep->chgBit(oldp+736,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_3__DOT__ram_sign_0[3]));
            tracep->chgCData(oldp+737,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_3__DOT__deq_ptr_value),2);
            tracep->chgCData(oldp+738,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_3__DOT__enq_ptr_value),2);
            tracep->chgBit(oldp+739,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_3__DOT__ram_sign_1[0]));
            tracep->chgBit(oldp+740,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_3__DOT__ram_sign_1[1]));
            tracep->chgBit(oldp+741,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_3__DOT__ram_sign_1[2]));
            tracep->chgBit(oldp+742,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_3__DOT__ram_sign_1[3]));
            tracep->chgBit(oldp+743,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_3__DOT__ram_sign_2[0]));
            tracep->chgBit(oldp+744,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_3__DOT__ram_sign_2[1]));
            tracep->chgBit(oldp+745,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_3__DOT__ram_sign_2[2]));
            tracep->chgBit(oldp+746,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_3__DOT__ram_sign_2[3]));
            tracep->chgBit(oldp+747,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_3__DOT__ram_sign_3[0]));
            tracep->chgBit(oldp+748,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_3__DOT__ram_sign_3[1]));
            tracep->chgBit(oldp+749,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_3__DOT__ram_sign_3[2]));
            tracep->chgBit(oldp+750,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_3__DOT__ram_sign_3[3]));
            tracep->chgCData(oldp+751,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_3__DOT__ram_man_0[0]),4);
            tracep->chgCData(oldp+752,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_3__DOT__ram_man_0[1]),4);
            tracep->chgCData(oldp+753,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_3__DOT__ram_man_0[2]),4);
            tracep->chgCData(oldp+754,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_3__DOT__ram_man_0[3]),4);
            tracep->chgCData(oldp+755,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_3__DOT__ram_man_1[0]),4);
            tracep->chgCData(oldp+756,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_3__DOT__ram_man_1[1]),4);
            tracep->chgCData(oldp+757,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_3__DOT__ram_man_1[2]),4);
            tracep->chgCData(oldp+758,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_3__DOT__ram_man_1[3]),4);
            tracep->chgCData(oldp+759,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_3__DOT__ram_man_2[0]),4);
            tracep->chgCData(oldp+760,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_3__DOT__ram_man_2[1]),4);
            tracep->chgCData(oldp+761,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_3__DOT__ram_man_2[2]),4);
            tracep->chgCData(oldp+762,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_3__DOT__ram_man_2[3]),4);
            tracep->chgCData(oldp+763,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_3__DOT__ram_man_3[0]),4);
            tracep->chgCData(oldp+764,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_3__DOT__ram_man_3[1]),4);
            tracep->chgCData(oldp+765,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_3__DOT__ram_man_3[2]),4);
            tracep->chgCData(oldp+766,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_3__DOT__ram_man_3[3]),4);
            tracep->chgCData(oldp+767,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_3__DOT__ram_exp[0]),8);
            tracep->chgCData(oldp+768,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_3__DOT__ram_exp[1]),8);
            tracep->chgCData(oldp+769,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_3__DOT__ram_exp[2]),8);
            tracep->chgCData(oldp+770,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_3__DOT__ram_exp[3]),8);
            tracep->chgBit(oldp+771,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_3__DOT__maybe_full));
            tracep->chgBit(oldp+772,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_3__DOT__ptr_match));
            tracep->chgBit(oldp+773,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_3__DOT__empty));
            tracep->chgBit(oldp+774,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_3__DOT__full));
            tracep->chgBit(oldp+775,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_3__DOT__do_deq));
            tracep->chgBit(oldp+776,((1U & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_0.__PVT__mac__DOT__acc_hbfp) 
                                            >> 4U))));
            tracep->chgCData(oldp+777,((0xffU & (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_0.__PVT__mac__DOT___io_out_result_exp_T_5))),8);
            tracep->chgCData(oldp+778,((0xffU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_0.__PVT__adder__DOT___exp_diff_T)
                                                  ? (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_0.__PVT__mac__DOT___io_out_result_exp_T_5)
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_0.__PVT__result_buffer_exp)))),8);
            tracep->chgCData(oldp+779,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_0.__PVT__mac__DOT__multiplier_1_io_out),8);
            tracep->chgCData(oldp+780,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_0.__PVT__mac__DOT__multiplier_1_1_io_out),8);
            tracep->chgCData(oldp+781,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_0.__PVT__mac__DOT__multiplier_1_2_io_out),8);
            tracep->chgCData(oldp+782,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_0.__PVT__mac__DOT__multiplier_1_3_io_out),8);
            tracep->chgSData(oldp+783,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_0.__PVT__mac__DOT__exp_addition_r),9);
            tracep->chgSData(oldp+784,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_0.__PVT__mac__DOT__exp_addition_r_1),9);
            tracep->chgSData(oldp+785,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_0.__PVT__mac__DOT__exp_addition_r_2),9);
            tracep->chgSData(oldp+786,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_0.__PVT__mac__DOT__exp_addition),9);
            tracep->chgCData(oldp+787,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_0.__PVT__mac__DOT__dotProductRegs_0),4);
            tracep->chgCData(oldp+788,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_0.__PVT__mac__DOT__dotProductRegs_1),4);
            tracep->chgCData(oldp+789,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_0.__PVT__mac__DOT__dotProductRegs_2),4);
            tracep->chgCData(oldp+790,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_0.__PVT__mac__DOT__dotProductRegs_3),4);
            tracep->chgCData(oldp+791,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_0.__PVT__mac__DOT__two_complement_buffer_0),5);
            tracep->chgCData(oldp+792,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_0.__PVT__mac__DOT__two_complement_buffer_1),5);
            tracep->chgCData(oldp+793,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_0.__PVT__mac__DOT__two_complement_buffer_2),5);
            tracep->chgCData(oldp+794,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_0.__PVT__mac__DOT__two_complement_buffer_3),5);
            tracep->chgBit(oldp+795,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_0.__PVT__mac__DOT__signs_0));
            tracep->chgBit(oldp+796,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_0.__PVT__mac__DOT__signs_1));
            tracep->chgBit(oldp+797,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_0.__PVT__mac__DOT__signs_2));
            tracep->chgBit(oldp+798,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_0.__PVT__mac__DOT__signs_3));
            tracep->chgCData(oldp+799,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_0.__PVT__mac__DOT__final_result),8);
            tracep->chgBit(oldp+800,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_0.__PVT__mac__DOT__signs_0_r));
            tracep->chgCData(oldp+801,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_0.__PVT__mac__DOT__final_result_1),8);
            tracep->chgBit(oldp+802,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_0.__PVT__mac__DOT__signs_1_r));
            tracep->chgCData(oldp+803,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_0.__PVT__mac__DOT__final_result_2),8);
            tracep->chgBit(oldp+804,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_0.__PVT__mac__DOT__signs_2_r));
            tracep->chgCData(oldp+805,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_0.__PVT__mac__DOT__final_result_3),8);
            tracep->chgBit(oldp+806,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_0.__PVT__mac__DOT__signs_3_r));
            tracep->chgCData(oldp+807,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_0.__PVT__mac__DOT__sum),8);
            tracep->chgCData(oldp+808,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_0.__PVT__mac__DOT__acc_hbfp),5);
            tracep->chgCData(oldp+809,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_0.__PVT__adder__DOT__exp_diff),8);
            tracep->chgBit(oldp+810,((1U & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_1.__PVT__mac__DOT__acc_hbfp) 
                                            >> 4U))));
            tracep->chgCData(oldp+811,((0xffU & (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_1.__PVT__mac__DOT___io_out_result_exp_T_5))),8);
            tracep->chgCData(oldp+812,((0xffU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_1.__PVT__adder__DOT___exp_diff_T)
                                                  ? (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_1.__PVT__mac__DOT___io_out_result_exp_T_5)
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_1.__PVT__result_buffer_exp)))),8);
            tracep->chgCData(oldp+813,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_1.__PVT__mac__DOT__multiplier_1_io_out),8);
            tracep->chgCData(oldp+814,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_1.__PVT__mac__DOT__multiplier_1_1_io_out),8);
            tracep->chgCData(oldp+815,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_1.__PVT__mac__DOT__multiplier_1_2_io_out),8);
            tracep->chgCData(oldp+816,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_1.__PVT__mac__DOT__multiplier_1_3_io_out),8);
            tracep->chgSData(oldp+817,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_1.__PVT__mac__DOT__exp_addition_r),9);
            tracep->chgSData(oldp+818,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_1.__PVT__mac__DOT__exp_addition_r_1),9);
            tracep->chgSData(oldp+819,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_1.__PVT__mac__DOT__exp_addition_r_2),9);
            tracep->chgSData(oldp+820,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_1.__PVT__mac__DOT__exp_addition),9);
            tracep->chgCData(oldp+821,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_1.__PVT__mac__DOT__dotProductRegs_0),4);
            tracep->chgCData(oldp+822,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_1.__PVT__mac__DOT__dotProductRegs_1),4);
            tracep->chgCData(oldp+823,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_1.__PVT__mac__DOT__dotProductRegs_2),4);
            tracep->chgCData(oldp+824,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_1.__PVT__mac__DOT__dotProductRegs_3),4);
            tracep->chgCData(oldp+825,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_1.__PVT__mac__DOT__two_complement_buffer_0),5);
            tracep->chgCData(oldp+826,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_1.__PVT__mac__DOT__two_complement_buffer_1),5);
            tracep->chgCData(oldp+827,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_1.__PVT__mac__DOT__two_complement_buffer_2),5);
            tracep->chgCData(oldp+828,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_1.__PVT__mac__DOT__two_complement_buffer_3),5);
            tracep->chgBit(oldp+829,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_1.__PVT__mac__DOT__signs_0));
            tracep->chgBit(oldp+830,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_1.__PVT__mac__DOT__signs_1));
            tracep->chgBit(oldp+831,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_1.__PVT__mac__DOT__signs_2));
            tracep->chgBit(oldp+832,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_1.__PVT__mac__DOT__signs_3));
            tracep->chgCData(oldp+833,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_1.__PVT__mac__DOT__final_result),8);
            tracep->chgBit(oldp+834,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_1.__PVT__mac__DOT__signs_0_r));
            tracep->chgCData(oldp+835,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_1.__PVT__mac__DOT__final_result_1),8);
            tracep->chgBit(oldp+836,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_1.__PVT__mac__DOT__signs_1_r));
            tracep->chgCData(oldp+837,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_1.__PVT__mac__DOT__final_result_2),8);
            tracep->chgBit(oldp+838,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_1.__PVT__mac__DOT__signs_2_r));
            tracep->chgCData(oldp+839,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_1.__PVT__mac__DOT__final_result_3),8);
            tracep->chgBit(oldp+840,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_1.__PVT__mac__DOT__signs_3_r));
            tracep->chgCData(oldp+841,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_1.__PVT__mac__DOT__sum),8);
            tracep->chgCData(oldp+842,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_1.__PVT__mac__DOT__acc_hbfp),5);
            tracep->chgCData(oldp+843,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_1.__PVT__adder__DOT__exp_diff),8);
            tracep->chgBit(oldp+844,((1U & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_2.__PVT__mac__DOT__acc_hbfp) 
                                            >> 4U))));
            tracep->chgCData(oldp+845,((0xffU & (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_2.__PVT__mac__DOT___io_out_result_exp_T_5))),8);
            tracep->chgCData(oldp+846,((0xffU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_2.__PVT__adder__DOT___exp_diff_T)
                                                  ? (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_2.__PVT__mac__DOT___io_out_result_exp_T_5)
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_2.__PVT__result_buffer_exp)))),8);
            tracep->chgCData(oldp+847,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_2.__PVT__mac__DOT__multiplier_1_io_out),8);
            tracep->chgCData(oldp+848,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_2.__PVT__mac__DOT__multiplier_1_1_io_out),8);
            tracep->chgCData(oldp+849,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_2.__PVT__mac__DOT__multiplier_1_2_io_out),8);
            tracep->chgCData(oldp+850,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_2.__PVT__mac__DOT__multiplier_1_3_io_out),8);
            tracep->chgSData(oldp+851,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_2.__PVT__mac__DOT__exp_addition_r),9);
            tracep->chgSData(oldp+852,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_2.__PVT__mac__DOT__exp_addition_r_1),9);
            tracep->chgSData(oldp+853,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_2.__PVT__mac__DOT__exp_addition_r_2),9);
            tracep->chgSData(oldp+854,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_2.__PVT__mac__DOT__exp_addition),9);
            tracep->chgCData(oldp+855,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_2.__PVT__mac__DOT__dotProductRegs_0),4);
            tracep->chgCData(oldp+856,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_2.__PVT__mac__DOT__dotProductRegs_1),4);
            tracep->chgCData(oldp+857,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_2.__PVT__mac__DOT__dotProductRegs_2),4);
            tracep->chgCData(oldp+858,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_2.__PVT__mac__DOT__dotProductRegs_3),4);
            tracep->chgCData(oldp+859,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_2.__PVT__mac__DOT__two_complement_buffer_0),5);
            tracep->chgCData(oldp+860,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_2.__PVT__mac__DOT__two_complement_buffer_1),5);
            tracep->chgCData(oldp+861,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_2.__PVT__mac__DOT__two_complement_buffer_2),5);
            tracep->chgCData(oldp+862,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_2.__PVT__mac__DOT__two_complement_buffer_3),5);
            tracep->chgBit(oldp+863,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_2.__PVT__mac__DOT__signs_0));
            tracep->chgBit(oldp+864,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_2.__PVT__mac__DOT__signs_1));
            tracep->chgBit(oldp+865,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_2.__PVT__mac__DOT__signs_2));
            tracep->chgBit(oldp+866,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_2.__PVT__mac__DOT__signs_3));
            tracep->chgCData(oldp+867,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_2.__PVT__mac__DOT__final_result),8);
            tracep->chgBit(oldp+868,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_2.__PVT__mac__DOT__signs_0_r));
            tracep->chgCData(oldp+869,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_2.__PVT__mac__DOT__final_result_1),8);
            tracep->chgBit(oldp+870,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_2.__PVT__mac__DOT__signs_1_r));
            tracep->chgCData(oldp+871,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_2.__PVT__mac__DOT__final_result_2),8);
            tracep->chgBit(oldp+872,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_2.__PVT__mac__DOT__signs_2_r));
            tracep->chgCData(oldp+873,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_2.__PVT__mac__DOT__final_result_3),8);
            tracep->chgBit(oldp+874,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_2.__PVT__mac__DOT__signs_3_r));
            tracep->chgCData(oldp+875,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_2.__PVT__mac__DOT__sum),8);
            tracep->chgCData(oldp+876,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_2.__PVT__mac__DOT__acc_hbfp),5);
            tracep->chgCData(oldp+877,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_2.__PVT__adder__DOT__exp_diff),8);
            tracep->chgBit(oldp+878,((1U & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_3.__PVT__mac__DOT__acc_hbfp) 
                                            >> 4U))));
            tracep->chgCData(oldp+879,((0xffU & (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_3.__PVT__mac__DOT___io_out_result_exp_T_5))),8);
            tracep->chgCData(oldp+880,((0xffU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_3.__PVT__adder__DOT___exp_diff_T)
                                                  ? (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_3.__PVT__mac__DOT___io_out_result_exp_T_5)
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_3.__PVT__result_buffer_exp)))),8);
            tracep->chgCData(oldp+881,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_3.__PVT__mac__DOT__multiplier_1_io_out),8);
            tracep->chgCData(oldp+882,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_3.__PVT__mac__DOT__multiplier_1_1_io_out),8);
            tracep->chgCData(oldp+883,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_3.__PVT__mac__DOT__multiplier_1_2_io_out),8);
            tracep->chgCData(oldp+884,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_3.__PVT__mac__DOT__multiplier_1_3_io_out),8);
            tracep->chgSData(oldp+885,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_3.__PVT__mac__DOT__exp_addition_r),9);
            tracep->chgSData(oldp+886,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_3.__PVT__mac__DOT__exp_addition_r_1),9);
            tracep->chgSData(oldp+887,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_3.__PVT__mac__DOT__exp_addition_r_2),9);
            tracep->chgSData(oldp+888,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_3.__PVT__mac__DOT__exp_addition),9);
            tracep->chgCData(oldp+889,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_3.__PVT__mac__DOT__dotProductRegs_0),4);
            tracep->chgCData(oldp+890,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_3.__PVT__mac__DOT__dotProductRegs_1),4);
            tracep->chgCData(oldp+891,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_3.__PVT__mac__DOT__dotProductRegs_2),4);
            tracep->chgCData(oldp+892,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_3.__PVT__mac__DOT__dotProductRegs_3),4);
            tracep->chgCData(oldp+893,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_3.__PVT__mac__DOT__two_complement_buffer_0),5);
            tracep->chgCData(oldp+894,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_3.__PVT__mac__DOT__two_complement_buffer_1),5);
            tracep->chgCData(oldp+895,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_3.__PVT__mac__DOT__two_complement_buffer_2),5);
            tracep->chgCData(oldp+896,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_3.__PVT__mac__DOT__two_complement_buffer_3),5);
            tracep->chgBit(oldp+897,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_3.__PVT__mac__DOT__signs_0));
            tracep->chgBit(oldp+898,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_3.__PVT__mac__DOT__signs_1));
            tracep->chgBit(oldp+899,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_3.__PVT__mac__DOT__signs_2));
            tracep->chgBit(oldp+900,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_3.__PVT__mac__DOT__signs_3));
            tracep->chgCData(oldp+901,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_3.__PVT__mac__DOT__final_result),8);
            tracep->chgBit(oldp+902,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_3.__PVT__mac__DOT__signs_0_r));
            tracep->chgCData(oldp+903,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_3.__PVT__mac__DOT__final_result_1),8);
            tracep->chgBit(oldp+904,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_3.__PVT__mac__DOT__signs_1_r));
            tracep->chgCData(oldp+905,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_3.__PVT__mac__DOT__final_result_2),8);
            tracep->chgBit(oldp+906,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_3.__PVT__mac__DOT__signs_2_r));
            tracep->chgCData(oldp+907,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_3.__PVT__mac__DOT__final_result_3),8);
            tracep->chgBit(oldp+908,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_3.__PVT__mac__DOT__signs_3_r));
            tracep->chgCData(oldp+909,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_3.__PVT__mac__DOT__sum),8);
            tracep->chgCData(oldp+910,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_3.__PVT__mac__DOT__acc_hbfp),5);
            tracep->chgCData(oldp+911,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_3.__PVT__adder__DOT__exp_diff),8);
            tracep->chgBit(oldp+912,((1U & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_0.__PVT__mac__DOT__acc_hbfp) 
                                            >> 4U))));
            tracep->chgCData(oldp+913,((0xffU & (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_0.__PVT__mac__DOT___io_out_result_exp_T_5))),8);
            tracep->chgCData(oldp+914,((0xffU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_0.__PVT__adder__DOT___exp_diff_T)
                                                  ? (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_0.__PVT__mac__DOT___io_out_result_exp_T_5)
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_0.__PVT__result_buffer_exp)))),8);
            tracep->chgCData(oldp+915,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_0.__PVT__mac__DOT__multiplier_1_io_out),8);
            tracep->chgCData(oldp+916,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_0.__PVT__mac__DOT__multiplier_1_1_io_out),8);
            tracep->chgCData(oldp+917,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_0.__PVT__mac__DOT__multiplier_1_2_io_out),8);
            tracep->chgCData(oldp+918,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_0.__PVT__mac__DOT__multiplier_1_3_io_out),8);
            tracep->chgSData(oldp+919,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_0.__PVT__mac__DOT__exp_addition_r),9);
            tracep->chgSData(oldp+920,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_0.__PVT__mac__DOT__exp_addition_r_1),9);
            tracep->chgSData(oldp+921,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_0.__PVT__mac__DOT__exp_addition_r_2),9);
            tracep->chgSData(oldp+922,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_0.__PVT__mac__DOT__exp_addition),9);
            tracep->chgCData(oldp+923,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_0.__PVT__mac__DOT__dotProductRegs_0),4);
            tracep->chgCData(oldp+924,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_0.__PVT__mac__DOT__dotProductRegs_1),4);
            tracep->chgCData(oldp+925,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_0.__PVT__mac__DOT__dotProductRegs_2),4);
            tracep->chgCData(oldp+926,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_0.__PVT__mac__DOT__dotProductRegs_3),4);
            tracep->chgCData(oldp+927,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_0.__PVT__mac__DOT__two_complement_buffer_0),5);
            tracep->chgCData(oldp+928,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_0.__PVT__mac__DOT__two_complement_buffer_1),5);
            tracep->chgCData(oldp+929,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_0.__PVT__mac__DOT__two_complement_buffer_2),5);
            tracep->chgCData(oldp+930,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_0.__PVT__mac__DOT__two_complement_buffer_3),5);
            tracep->chgBit(oldp+931,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_0.__PVT__mac__DOT__signs_0));
            tracep->chgBit(oldp+932,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_0.__PVT__mac__DOT__signs_1));
            tracep->chgBit(oldp+933,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_0.__PVT__mac__DOT__signs_2));
            tracep->chgBit(oldp+934,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_0.__PVT__mac__DOT__signs_3));
            tracep->chgCData(oldp+935,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_0.__PVT__mac__DOT__final_result),8);
            tracep->chgBit(oldp+936,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_0.__PVT__mac__DOT__signs_0_r));
            tracep->chgCData(oldp+937,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_0.__PVT__mac__DOT__final_result_1),8);
            tracep->chgBit(oldp+938,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_0.__PVT__mac__DOT__signs_1_r));
            tracep->chgCData(oldp+939,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_0.__PVT__mac__DOT__final_result_2),8);
            tracep->chgBit(oldp+940,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_0.__PVT__mac__DOT__signs_2_r));
            tracep->chgCData(oldp+941,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_0.__PVT__mac__DOT__final_result_3),8);
            tracep->chgBit(oldp+942,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_0.__PVT__mac__DOT__signs_3_r));
            tracep->chgCData(oldp+943,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_0.__PVT__mac__DOT__sum),8);
            tracep->chgCData(oldp+944,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_0.__PVT__mac__DOT__acc_hbfp),5);
            tracep->chgCData(oldp+945,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_0.__PVT__adder__DOT__exp_diff),8);
            tracep->chgBit(oldp+946,((1U & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_1.__PVT__mac__DOT__acc_hbfp) 
                                            >> 4U))));
            tracep->chgCData(oldp+947,((0xffU & (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_1.__PVT__mac__DOT___io_out_result_exp_T_5))),8);
            tracep->chgCData(oldp+948,((0xffU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_1.__PVT__adder__DOT___exp_diff_T)
                                                  ? (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_1.__PVT__mac__DOT___io_out_result_exp_T_5)
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_1.__PVT__result_buffer_exp)))),8);
            tracep->chgCData(oldp+949,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_1.__PVT__mac__DOT__multiplier_1_io_out),8);
            tracep->chgCData(oldp+950,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_1.__PVT__mac__DOT__multiplier_1_1_io_out),8);
            tracep->chgCData(oldp+951,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_1.__PVT__mac__DOT__multiplier_1_2_io_out),8);
            tracep->chgCData(oldp+952,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_1.__PVT__mac__DOT__multiplier_1_3_io_out),8);
            tracep->chgSData(oldp+953,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_1.__PVT__mac__DOT__exp_addition_r),9);
            tracep->chgSData(oldp+954,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_1.__PVT__mac__DOT__exp_addition_r_1),9);
            tracep->chgSData(oldp+955,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_1.__PVT__mac__DOT__exp_addition_r_2),9);
            tracep->chgSData(oldp+956,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_1.__PVT__mac__DOT__exp_addition),9);
            tracep->chgCData(oldp+957,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_1.__PVT__mac__DOT__dotProductRegs_0),4);
            tracep->chgCData(oldp+958,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_1.__PVT__mac__DOT__dotProductRegs_1),4);
            tracep->chgCData(oldp+959,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_1.__PVT__mac__DOT__dotProductRegs_2),4);
            tracep->chgCData(oldp+960,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_1.__PVT__mac__DOT__dotProductRegs_3),4);
            tracep->chgCData(oldp+961,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_1.__PVT__mac__DOT__two_complement_buffer_0),5);
            tracep->chgCData(oldp+962,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_1.__PVT__mac__DOT__two_complement_buffer_1),5);
            tracep->chgCData(oldp+963,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_1.__PVT__mac__DOT__two_complement_buffer_2),5);
            tracep->chgCData(oldp+964,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_1.__PVT__mac__DOT__two_complement_buffer_3),5);
            tracep->chgBit(oldp+965,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_1.__PVT__mac__DOT__signs_0));
            tracep->chgBit(oldp+966,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_1.__PVT__mac__DOT__signs_1));
            tracep->chgBit(oldp+967,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_1.__PVT__mac__DOT__signs_2));
            tracep->chgBit(oldp+968,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_1.__PVT__mac__DOT__signs_3));
            tracep->chgCData(oldp+969,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_1.__PVT__mac__DOT__final_result),8);
            tracep->chgBit(oldp+970,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_1.__PVT__mac__DOT__signs_0_r));
            tracep->chgCData(oldp+971,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_1.__PVT__mac__DOT__final_result_1),8);
            tracep->chgBit(oldp+972,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_1.__PVT__mac__DOT__signs_1_r));
            tracep->chgCData(oldp+973,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_1.__PVT__mac__DOT__final_result_2),8);
            tracep->chgBit(oldp+974,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_1.__PVT__mac__DOT__signs_2_r));
            tracep->chgCData(oldp+975,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_1.__PVT__mac__DOT__final_result_3),8);
            tracep->chgBit(oldp+976,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_1.__PVT__mac__DOT__signs_3_r));
            tracep->chgCData(oldp+977,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_1.__PVT__mac__DOT__sum),8);
            tracep->chgCData(oldp+978,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_1.__PVT__mac__DOT__acc_hbfp),5);
            tracep->chgCData(oldp+979,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_1.__PVT__adder__DOT__exp_diff),8);
            tracep->chgBit(oldp+980,((1U & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_2.__PVT__mac__DOT__acc_hbfp) 
                                            >> 4U))));
            tracep->chgCData(oldp+981,((0xffU & (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_2.__PVT__mac__DOT___io_out_result_exp_T_5))),8);
            tracep->chgCData(oldp+982,((0xffU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_2.__PVT__adder__DOT___exp_diff_T)
                                                  ? (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_2.__PVT__mac__DOT___io_out_result_exp_T_5)
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_2.__PVT__result_buffer_exp)))),8);
            tracep->chgCData(oldp+983,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_2.__PVT__mac__DOT__multiplier_1_io_out),8);
            tracep->chgCData(oldp+984,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_2.__PVT__mac__DOT__multiplier_1_1_io_out),8);
            tracep->chgCData(oldp+985,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_2.__PVT__mac__DOT__multiplier_1_2_io_out),8);
            tracep->chgCData(oldp+986,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_2.__PVT__mac__DOT__multiplier_1_3_io_out),8);
            tracep->chgSData(oldp+987,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_2.__PVT__mac__DOT__exp_addition_r),9);
            tracep->chgSData(oldp+988,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_2.__PVT__mac__DOT__exp_addition_r_1),9);
            tracep->chgSData(oldp+989,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_2.__PVT__mac__DOT__exp_addition_r_2),9);
            tracep->chgSData(oldp+990,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_2.__PVT__mac__DOT__exp_addition),9);
            tracep->chgCData(oldp+991,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_2.__PVT__mac__DOT__dotProductRegs_0),4);
            tracep->chgCData(oldp+992,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_2.__PVT__mac__DOT__dotProductRegs_1),4);
            tracep->chgCData(oldp+993,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_2.__PVT__mac__DOT__dotProductRegs_2),4);
            tracep->chgCData(oldp+994,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_2.__PVT__mac__DOT__dotProductRegs_3),4);
            tracep->chgCData(oldp+995,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_2.__PVT__mac__DOT__two_complement_buffer_0),5);
            tracep->chgCData(oldp+996,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_2.__PVT__mac__DOT__two_complement_buffer_1),5);
            tracep->chgCData(oldp+997,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_2.__PVT__mac__DOT__two_complement_buffer_2),5);
            tracep->chgCData(oldp+998,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_2.__PVT__mac__DOT__two_complement_buffer_3),5);
            tracep->chgBit(oldp+999,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_2.__PVT__mac__DOT__signs_0));
            tracep->chgBit(oldp+1000,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_2.__PVT__mac__DOT__signs_1));
            tracep->chgBit(oldp+1001,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_2.__PVT__mac__DOT__signs_2));
            tracep->chgBit(oldp+1002,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_2.__PVT__mac__DOT__signs_3));
            tracep->chgCData(oldp+1003,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_2.__PVT__mac__DOT__final_result),8);
            tracep->chgBit(oldp+1004,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_2.__PVT__mac__DOT__signs_0_r));
            tracep->chgCData(oldp+1005,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_2.__PVT__mac__DOT__final_result_1),8);
            tracep->chgBit(oldp+1006,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_2.__PVT__mac__DOT__signs_1_r));
            tracep->chgCData(oldp+1007,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_2.__PVT__mac__DOT__final_result_2),8);
            tracep->chgBit(oldp+1008,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_2.__PVT__mac__DOT__signs_2_r));
            tracep->chgCData(oldp+1009,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_2.__PVT__mac__DOT__final_result_3),8);
            tracep->chgBit(oldp+1010,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_2.__PVT__mac__DOT__signs_3_r));
            tracep->chgCData(oldp+1011,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_2.__PVT__mac__DOT__sum),8);
            tracep->chgCData(oldp+1012,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_2.__PVT__mac__DOT__acc_hbfp),5);
            tracep->chgCData(oldp+1013,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_2.__PVT__adder__DOT__exp_diff),8);
            tracep->chgBit(oldp+1014,((1U & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_3.__PVT__mac__DOT__acc_hbfp) 
                                             >> 4U))));
            tracep->chgCData(oldp+1015,((0xffU & (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_3.__PVT__mac__DOT___io_out_result_exp_T_5))),8);
            tracep->chgCData(oldp+1016,((0xffU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_3.__PVT__adder__DOT___exp_diff_T)
                                                   ? (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_3.__PVT__mac__DOT___io_out_result_exp_T_5)
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_3.__PVT__result_buffer_exp)))),8);
            tracep->chgCData(oldp+1017,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_3.__PVT__mac__DOT__multiplier_1_io_out),8);
            tracep->chgCData(oldp+1018,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_3.__PVT__mac__DOT__multiplier_1_1_io_out),8);
            tracep->chgCData(oldp+1019,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_3.__PVT__mac__DOT__multiplier_1_2_io_out),8);
            tracep->chgCData(oldp+1020,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_3.__PVT__mac__DOT__multiplier_1_3_io_out),8);
            tracep->chgSData(oldp+1021,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_3.__PVT__mac__DOT__exp_addition_r),9);
            tracep->chgSData(oldp+1022,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_3.__PVT__mac__DOT__exp_addition_r_1),9);
            tracep->chgSData(oldp+1023,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_3.__PVT__mac__DOT__exp_addition_r_2),9);
            tracep->chgSData(oldp+1024,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_3.__PVT__mac__DOT__exp_addition),9);
            tracep->chgCData(oldp+1025,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_3.__PVT__mac__DOT__dotProductRegs_0),4);
            tracep->chgCData(oldp+1026,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_3.__PVT__mac__DOT__dotProductRegs_1),4);
            tracep->chgCData(oldp+1027,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_3.__PVT__mac__DOT__dotProductRegs_2),4);
            tracep->chgCData(oldp+1028,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_3.__PVT__mac__DOT__dotProductRegs_3),4);
            tracep->chgCData(oldp+1029,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_3.__PVT__mac__DOT__two_complement_buffer_0),5);
            tracep->chgCData(oldp+1030,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_3.__PVT__mac__DOT__two_complement_buffer_1),5);
            tracep->chgCData(oldp+1031,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_3.__PVT__mac__DOT__two_complement_buffer_2),5);
            tracep->chgCData(oldp+1032,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_3.__PVT__mac__DOT__two_complement_buffer_3),5);
            tracep->chgBit(oldp+1033,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_3.__PVT__mac__DOT__signs_0));
            tracep->chgBit(oldp+1034,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_3.__PVT__mac__DOT__signs_1));
            tracep->chgBit(oldp+1035,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_3.__PVT__mac__DOT__signs_2));
            tracep->chgBit(oldp+1036,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_3.__PVT__mac__DOT__signs_3));
            tracep->chgCData(oldp+1037,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_3.__PVT__mac__DOT__final_result),8);
            tracep->chgBit(oldp+1038,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_3.__PVT__mac__DOT__signs_0_r));
            tracep->chgCData(oldp+1039,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_3.__PVT__mac__DOT__final_result_1),8);
            tracep->chgBit(oldp+1040,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_3.__PVT__mac__DOT__signs_1_r));
            tracep->chgCData(oldp+1041,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_3.__PVT__mac__DOT__final_result_2),8);
            tracep->chgBit(oldp+1042,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_3.__PVT__mac__DOT__signs_2_r));
            tracep->chgCData(oldp+1043,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_3.__PVT__mac__DOT__final_result_3),8);
            tracep->chgBit(oldp+1044,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_3.__PVT__mac__DOT__signs_3_r));
            tracep->chgCData(oldp+1045,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_3.__PVT__mac__DOT__sum),8);
            tracep->chgCData(oldp+1046,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_3.__PVT__mac__DOT__acc_hbfp),5);
            tracep->chgCData(oldp+1047,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_3.__PVT__adder__DOT__exp_diff),8);
            tracep->chgBit(oldp+1048,((1U & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_0.__PVT__mac__DOT__acc_hbfp) 
                                             >> 4U))));
            tracep->chgCData(oldp+1049,((0xffU & (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_0.__PVT__mac__DOT___io_out_result_exp_T_5))),8);
            tracep->chgCData(oldp+1050,((0xffU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_0.__PVT__adder__DOT___exp_diff_T)
                                                   ? (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_0.__PVT__mac__DOT___io_out_result_exp_T_5)
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_0.__PVT__result_buffer_exp)))),8);
            tracep->chgCData(oldp+1051,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_0.__PVT__mac__DOT__multiplier_1_io_out),8);
            tracep->chgCData(oldp+1052,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_0.__PVT__mac__DOT__multiplier_1_1_io_out),8);
            tracep->chgCData(oldp+1053,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_0.__PVT__mac__DOT__multiplier_1_2_io_out),8);
            tracep->chgCData(oldp+1054,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_0.__PVT__mac__DOT__multiplier_1_3_io_out),8);
            tracep->chgSData(oldp+1055,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_0.__PVT__mac__DOT__exp_addition_r),9);
            tracep->chgSData(oldp+1056,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_0.__PVT__mac__DOT__exp_addition_r_1),9);
            tracep->chgSData(oldp+1057,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_0.__PVT__mac__DOT__exp_addition_r_2),9);
            tracep->chgSData(oldp+1058,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_0.__PVT__mac__DOT__exp_addition),9);
            tracep->chgCData(oldp+1059,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_0.__PVT__mac__DOT__dotProductRegs_0),4);
            tracep->chgCData(oldp+1060,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_0.__PVT__mac__DOT__dotProductRegs_1),4);
            tracep->chgCData(oldp+1061,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_0.__PVT__mac__DOT__dotProductRegs_2),4);
            tracep->chgCData(oldp+1062,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_0.__PVT__mac__DOT__dotProductRegs_3),4);
            tracep->chgCData(oldp+1063,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_0.__PVT__mac__DOT__two_complement_buffer_0),5);
            tracep->chgCData(oldp+1064,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_0.__PVT__mac__DOT__two_complement_buffer_1),5);
            tracep->chgCData(oldp+1065,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_0.__PVT__mac__DOT__two_complement_buffer_2),5);
            tracep->chgCData(oldp+1066,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_0.__PVT__mac__DOT__two_complement_buffer_3),5);
            tracep->chgBit(oldp+1067,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_0.__PVT__mac__DOT__signs_0));
            tracep->chgBit(oldp+1068,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_0.__PVT__mac__DOT__signs_1));
            tracep->chgBit(oldp+1069,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_0.__PVT__mac__DOT__signs_2));
            tracep->chgBit(oldp+1070,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_0.__PVT__mac__DOT__signs_3));
            tracep->chgCData(oldp+1071,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_0.__PVT__mac__DOT__final_result),8);
            tracep->chgBit(oldp+1072,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_0.__PVT__mac__DOT__signs_0_r));
            tracep->chgCData(oldp+1073,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_0.__PVT__mac__DOT__final_result_1),8);
            tracep->chgBit(oldp+1074,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_0.__PVT__mac__DOT__signs_1_r));
            tracep->chgCData(oldp+1075,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_0.__PVT__mac__DOT__final_result_2),8);
            tracep->chgBit(oldp+1076,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_0.__PVT__mac__DOT__signs_2_r));
            tracep->chgCData(oldp+1077,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_0.__PVT__mac__DOT__final_result_3),8);
            tracep->chgBit(oldp+1078,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_0.__PVT__mac__DOT__signs_3_r));
            tracep->chgCData(oldp+1079,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_0.__PVT__mac__DOT__sum),8);
            tracep->chgCData(oldp+1080,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_0.__PVT__mac__DOT__acc_hbfp),5);
            tracep->chgCData(oldp+1081,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_0.__PVT__adder__DOT__exp_diff),8);
            tracep->chgBit(oldp+1082,((1U & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_1.__PVT__mac__DOT__acc_hbfp) 
                                             >> 4U))));
            tracep->chgCData(oldp+1083,((0xffU & (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_1.__PVT__mac__DOT___io_out_result_exp_T_5))),8);
            tracep->chgCData(oldp+1084,((0xffU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_1.__PVT__adder__DOT___exp_diff_T)
                                                   ? (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_1.__PVT__mac__DOT___io_out_result_exp_T_5)
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_1.__PVT__result_buffer_exp)))),8);
            tracep->chgCData(oldp+1085,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_1.__PVT__mac__DOT__multiplier_1_io_out),8);
            tracep->chgCData(oldp+1086,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_1.__PVT__mac__DOT__multiplier_1_1_io_out),8);
            tracep->chgCData(oldp+1087,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_1.__PVT__mac__DOT__multiplier_1_2_io_out),8);
            tracep->chgCData(oldp+1088,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_1.__PVT__mac__DOT__multiplier_1_3_io_out),8);
            tracep->chgSData(oldp+1089,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_1.__PVT__mac__DOT__exp_addition_r),9);
            tracep->chgSData(oldp+1090,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_1.__PVT__mac__DOT__exp_addition_r_1),9);
            tracep->chgSData(oldp+1091,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_1.__PVT__mac__DOT__exp_addition_r_2),9);
            tracep->chgSData(oldp+1092,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_1.__PVT__mac__DOT__exp_addition),9);
            tracep->chgCData(oldp+1093,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_1.__PVT__mac__DOT__dotProductRegs_0),4);
            tracep->chgCData(oldp+1094,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_1.__PVT__mac__DOT__dotProductRegs_1),4);
            tracep->chgCData(oldp+1095,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_1.__PVT__mac__DOT__dotProductRegs_2),4);
            tracep->chgCData(oldp+1096,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_1.__PVT__mac__DOT__dotProductRegs_3),4);
            tracep->chgCData(oldp+1097,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_1.__PVT__mac__DOT__two_complement_buffer_0),5);
            tracep->chgCData(oldp+1098,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_1.__PVT__mac__DOT__two_complement_buffer_1),5);
            tracep->chgCData(oldp+1099,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_1.__PVT__mac__DOT__two_complement_buffer_2),5);
            tracep->chgCData(oldp+1100,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_1.__PVT__mac__DOT__two_complement_buffer_3),5);
            tracep->chgBit(oldp+1101,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_1.__PVT__mac__DOT__signs_0));
            tracep->chgBit(oldp+1102,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_1.__PVT__mac__DOT__signs_1));
            tracep->chgBit(oldp+1103,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_1.__PVT__mac__DOT__signs_2));
            tracep->chgBit(oldp+1104,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_1.__PVT__mac__DOT__signs_3));
            tracep->chgCData(oldp+1105,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_1.__PVT__mac__DOT__final_result),8);
            tracep->chgBit(oldp+1106,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_1.__PVT__mac__DOT__signs_0_r));
            tracep->chgCData(oldp+1107,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_1.__PVT__mac__DOT__final_result_1),8);
            tracep->chgBit(oldp+1108,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_1.__PVT__mac__DOT__signs_1_r));
            tracep->chgCData(oldp+1109,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_1.__PVT__mac__DOT__final_result_2),8);
            tracep->chgBit(oldp+1110,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_1.__PVT__mac__DOT__signs_2_r));
            tracep->chgCData(oldp+1111,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_1.__PVT__mac__DOT__final_result_3),8);
            tracep->chgBit(oldp+1112,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_1.__PVT__mac__DOT__signs_3_r));
            tracep->chgCData(oldp+1113,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_1.__PVT__mac__DOT__sum),8);
            tracep->chgCData(oldp+1114,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_1.__PVT__mac__DOT__acc_hbfp),5);
            tracep->chgCData(oldp+1115,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_1.__PVT__adder__DOT__exp_diff),8);
            tracep->chgBit(oldp+1116,((1U & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_2.__PVT__mac__DOT__acc_hbfp) 
                                             >> 4U))));
            tracep->chgCData(oldp+1117,((0xffU & (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_2.__PVT__mac__DOT___io_out_result_exp_T_5))),8);
            tracep->chgCData(oldp+1118,((0xffU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_2.__PVT__adder__DOT___exp_diff_T)
                                                   ? (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_2.__PVT__mac__DOT___io_out_result_exp_T_5)
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_2.__PVT__result_buffer_exp)))),8);
            tracep->chgCData(oldp+1119,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_2.__PVT__mac__DOT__multiplier_1_io_out),8);
            tracep->chgCData(oldp+1120,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_2.__PVT__mac__DOT__multiplier_1_1_io_out),8);
            tracep->chgCData(oldp+1121,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_2.__PVT__mac__DOT__multiplier_1_2_io_out),8);
            tracep->chgCData(oldp+1122,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_2.__PVT__mac__DOT__multiplier_1_3_io_out),8);
            tracep->chgSData(oldp+1123,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_2.__PVT__mac__DOT__exp_addition_r),9);
            tracep->chgSData(oldp+1124,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_2.__PVT__mac__DOT__exp_addition_r_1),9);
            tracep->chgSData(oldp+1125,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_2.__PVT__mac__DOT__exp_addition_r_2),9);
            tracep->chgSData(oldp+1126,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_2.__PVT__mac__DOT__exp_addition),9);
            tracep->chgCData(oldp+1127,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_2.__PVT__mac__DOT__dotProductRegs_0),4);
            tracep->chgCData(oldp+1128,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_2.__PVT__mac__DOT__dotProductRegs_1),4);
            tracep->chgCData(oldp+1129,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_2.__PVT__mac__DOT__dotProductRegs_2),4);
            tracep->chgCData(oldp+1130,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_2.__PVT__mac__DOT__dotProductRegs_3),4);
            tracep->chgCData(oldp+1131,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_2.__PVT__mac__DOT__two_complement_buffer_0),5);
            tracep->chgCData(oldp+1132,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_2.__PVT__mac__DOT__two_complement_buffer_1),5);
            tracep->chgCData(oldp+1133,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_2.__PVT__mac__DOT__two_complement_buffer_2),5);
            tracep->chgCData(oldp+1134,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_2.__PVT__mac__DOT__two_complement_buffer_3),5);
            tracep->chgBit(oldp+1135,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_2.__PVT__mac__DOT__signs_0));
            tracep->chgBit(oldp+1136,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_2.__PVT__mac__DOT__signs_1));
            tracep->chgBit(oldp+1137,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_2.__PVT__mac__DOT__signs_2));
            tracep->chgBit(oldp+1138,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_2.__PVT__mac__DOT__signs_3));
            tracep->chgCData(oldp+1139,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_2.__PVT__mac__DOT__final_result),8);
            tracep->chgBit(oldp+1140,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_2.__PVT__mac__DOT__signs_0_r));
            tracep->chgCData(oldp+1141,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_2.__PVT__mac__DOT__final_result_1),8);
            tracep->chgBit(oldp+1142,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_2.__PVT__mac__DOT__signs_1_r));
            tracep->chgCData(oldp+1143,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_2.__PVT__mac__DOT__final_result_2),8);
            tracep->chgBit(oldp+1144,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_2.__PVT__mac__DOT__signs_2_r));
            tracep->chgCData(oldp+1145,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_2.__PVT__mac__DOT__final_result_3),8);
            tracep->chgBit(oldp+1146,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_2.__PVT__mac__DOT__signs_3_r));
            tracep->chgCData(oldp+1147,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_2.__PVT__mac__DOT__sum),8);
            tracep->chgCData(oldp+1148,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_2.__PVT__mac__DOT__acc_hbfp),5);
            tracep->chgCData(oldp+1149,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_2.__PVT__adder__DOT__exp_diff),8);
            tracep->chgBit(oldp+1150,((1U & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_3.__PVT__mac__DOT__acc_hbfp) 
                                             >> 4U))));
            tracep->chgCData(oldp+1151,((0xffU & (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_3.__PVT__mac__DOT___io_out_result_exp_T_5))),8);
            tracep->chgCData(oldp+1152,((0xffU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_3.__PVT__adder__DOT___exp_diff_T)
                                                   ? (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_3.__PVT__mac__DOT___io_out_result_exp_T_5)
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_3.__PVT__result_buffer_exp)))),8);
            tracep->chgCData(oldp+1153,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_3.__PVT__mac__DOT__multiplier_1_io_out),8);
            tracep->chgCData(oldp+1154,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_3.__PVT__mac__DOT__multiplier_1_1_io_out),8);
            tracep->chgCData(oldp+1155,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_3.__PVT__mac__DOT__multiplier_1_2_io_out),8);
            tracep->chgCData(oldp+1156,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_3.__PVT__mac__DOT__multiplier_1_3_io_out),8);
            tracep->chgSData(oldp+1157,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_3.__PVT__mac__DOT__exp_addition_r),9);
            tracep->chgSData(oldp+1158,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_3.__PVT__mac__DOT__exp_addition_r_1),9);
            tracep->chgSData(oldp+1159,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_3.__PVT__mac__DOT__exp_addition_r_2),9);
            tracep->chgSData(oldp+1160,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_3.__PVT__mac__DOT__exp_addition),9);
            tracep->chgCData(oldp+1161,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_3.__PVT__mac__DOT__dotProductRegs_0),4);
            tracep->chgCData(oldp+1162,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_3.__PVT__mac__DOT__dotProductRegs_1),4);
            tracep->chgCData(oldp+1163,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_3.__PVT__mac__DOT__dotProductRegs_2),4);
            tracep->chgCData(oldp+1164,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_3.__PVT__mac__DOT__dotProductRegs_3),4);
            tracep->chgCData(oldp+1165,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_3.__PVT__mac__DOT__two_complement_buffer_0),5);
            tracep->chgCData(oldp+1166,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_3.__PVT__mac__DOT__two_complement_buffer_1),5);
            tracep->chgCData(oldp+1167,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_3.__PVT__mac__DOT__two_complement_buffer_2),5);
            tracep->chgCData(oldp+1168,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_3.__PVT__mac__DOT__two_complement_buffer_3),5);
            tracep->chgBit(oldp+1169,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_3.__PVT__mac__DOT__signs_0));
            tracep->chgBit(oldp+1170,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_3.__PVT__mac__DOT__signs_1));
            tracep->chgBit(oldp+1171,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_3.__PVT__mac__DOT__signs_2));
            tracep->chgBit(oldp+1172,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_3.__PVT__mac__DOT__signs_3));
            tracep->chgCData(oldp+1173,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_3.__PVT__mac__DOT__final_result),8);
            tracep->chgBit(oldp+1174,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_3.__PVT__mac__DOT__signs_0_r));
            tracep->chgCData(oldp+1175,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_3.__PVT__mac__DOT__final_result_1),8);
            tracep->chgBit(oldp+1176,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_3.__PVT__mac__DOT__signs_1_r));
            tracep->chgCData(oldp+1177,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_3.__PVT__mac__DOT__final_result_2),8);
            tracep->chgBit(oldp+1178,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_3.__PVT__mac__DOT__signs_2_r));
            tracep->chgCData(oldp+1179,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_3.__PVT__mac__DOT__final_result_3),8);
            tracep->chgBit(oldp+1180,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_3.__PVT__mac__DOT__signs_3_r));
            tracep->chgCData(oldp+1181,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_3.__PVT__mac__DOT__sum),8);
            tracep->chgCData(oldp+1182,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_3.__PVT__mac__DOT__acc_hbfp),5);
            tracep->chgCData(oldp+1183,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_3.__PVT__adder__DOT__exp_diff),8);
            tracep->chgBit(oldp+1184,((1U & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0.__PVT__mac__DOT__acc_hbfp) 
                                             >> 4U))));
            tracep->chgCData(oldp+1185,((0xffU & (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0.__PVT__mac__DOT___io_out_result_exp_T_5))),8);
            tracep->chgCData(oldp+1186,((0xffU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0.__PVT__adder__DOT___exp_diff_T)
                                                   ? (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0.__PVT__mac__DOT___io_out_result_exp_T_5)
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0.__PVT__result_buffer_exp)))),8);
            tracep->chgCData(oldp+1187,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0.__PVT__mac__DOT__multiplier_1_io_out),8);
            tracep->chgCData(oldp+1188,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0.__PVT__mac__DOT__multiplier_1_1_io_out),8);
            tracep->chgCData(oldp+1189,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0.__PVT__mac__DOT__multiplier_1_2_io_out),8);
            tracep->chgCData(oldp+1190,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0.__PVT__mac__DOT__multiplier_1_3_io_out),8);
            tracep->chgSData(oldp+1191,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0.__PVT__mac__DOT__exp_addition_r),9);
            tracep->chgSData(oldp+1192,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0.__PVT__mac__DOT__exp_addition_r_1),9);
            tracep->chgSData(oldp+1193,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0.__PVT__mac__DOT__exp_addition_r_2),9);
            tracep->chgSData(oldp+1194,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0.__PVT__mac__DOT__exp_addition),9);
            tracep->chgCData(oldp+1195,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0.__PVT__mac__DOT__dotProductRegs_0),4);
            tracep->chgCData(oldp+1196,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0.__PVT__mac__DOT__dotProductRegs_1),4);
            tracep->chgCData(oldp+1197,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0.__PVT__mac__DOT__dotProductRegs_2),4);
            tracep->chgCData(oldp+1198,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0.__PVT__mac__DOT__dotProductRegs_3),4);
            tracep->chgCData(oldp+1199,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0.__PVT__mac__DOT__two_complement_buffer_0),5);
            tracep->chgCData(oldp+1200,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0.__PVT__mac__DOT__two_complement_buffer_1),5);
            tracep->chgCData(oldp+1201,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0.__PVT__mac__DOT__two_complement_buffer_2),5);
            tracep->chgCData(oldp+1202,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0.__PVT__mac__DOT__two_complement_buffer_3),5);
            tracep->chgBit(oldp+1203,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0.__PVT__mac__DOT__signs_0));
            tracep->chgBit(oldp+1204,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0.__PVT__mac__DOT__signs_1));
            tracep->chgBit(oldp+1205,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0.__PVT__mac__DOT__signs_2));
            tracep->chgBit(oldp+1206,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0.__PVT__mac__DOT__signs_3));
            tracep->chgCData(oldp+1207,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0.__PVT__mac__DOT__final_result),8);
            tracep->chgBit(oldp+1208,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0.__PVT__mac__DOT__signs_0_r));
            tracep->chgCData(oldp+1209,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0.__PVT__mac__DOT__final_result_1),8);
            tracep->chgBit(oldp+1210,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0.__PVT__mac__DOT__signs_1_r));
            tracep->chgCData(oldp+1211,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0.__PVT__mac__DOT__final_result_2),8);
            tracep->chgBit(oldp+1212,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0.__PVT__mac__DOT__signs_2_r));
            tracep->chgCData(oldp+1213,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0.__PVT__mac__DOT__final_result_3),8);
            tracep->chgBit(oldp+1214,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0.__PVT__mac__DOT__signs_3_r));
            tracep->chgCData(oldp+1215,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0.__PVT__mac__DOT__sum),8);
            tracep->chgCData(oldp+1216,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0.__PVT__mac__DOT__acc_hbfp),5);
            tracep->chgCData(oldp+1217,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0.__PVT__adder__DOT__exp_diff),8);
            tracep->chgBit(oldp+1218,((1U & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1.__PVT__mac__DOT__acc_hbfp) 
                                             >> 4U))));
            tracep->chgCData(oldp+1219,((0xffU & (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1.__PVT__mac__DOT___io_out_result_exp_T_5))),8);
            tracep->chgCData(oldp+1220,((0xffU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1.__PVT__adder__DOT___exp_diff_T)
                                                   ? (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1.__PVT__mac__DOT___io_out_result_exp_T_5)
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1.__PVT__result_buffer_exp)))),8);
            tracep->chgCData(oldp+1221,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1.__PVT__mac__DOT__multiplier_1_io_out),8);
            tracep->chgCData(oldp+1222,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1.__PVT__mac__DOT__multiplier_1_1_io_out),8);
            tracep->chgCData(oldp+1223,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1.__PVT__mac__DOT__multiplier_1_2_io_out),8);
            tracep->chgCData(oldp+1224,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1.__PVT__mac__DOT__multiplier_1_3_io_out),8);
            tracep->chgSData(oldp+1225,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1.__PVT__mac__DOT__exp_addition_r),9);
            tracep->chgSData(oldp+1226,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1.__PVT__mac__DOT__exp_addition_r_1),9);
            tracep->chgSData(oldp+1227,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1.__PVT__mac__DOT__exp_addition_r_2),9);
            tracep->chgSData(oldp+1228,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1.__PVT__mac__DOT__exp_addition),9);
            tracep->chgCData(oldp+1229,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1.__PVT__mac__DOT__dotProductRegs_0),4);
            tracep->chgCData(oldp+1230,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1.__PVT__mac__DOT__dotProductRegs_1),4);
            tracep->chgCData(oldp+1231,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1.__PVT__mac__DOT__dotProductRegs_2),4);
            tracep->chgCData(oldp+1232,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1.__PVT__mac__DOT__dotProductRegs_3),4);
            tracep->chgCData(oldp+1233,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1.__PVT__mac__DOT__two_complement_buffer_0),5);
            tracep->chgCData(oldp+1234,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1.__PVT__mac__DOT__two_complement_buffer_1),5);
            tracep->chgCData(oldp+1235,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1.__PVT__mac__DOT__two_complement_buffer_2),5);
            tracep->chgCData(oldp+1236,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1.__PVT__mac__DOT__two_complement_buffer_3),5);
            tracep->chgBit(oldp+1237,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1.__PVT__mac__DOT__signs_0));
            tracep->chgBit(oldp+1238,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1.__PVT__mac__DOT__signs_1));
            tracep->chgBit(oldp+1239,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1.__PVT__mac__DOT__signs_2));
            tracep->chgBit(oldp+1240,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1.__PVT__mac__DOT__signs_3));
            tracep->chgCData(oldp+1241,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1.__PVT__mac__DOT__final_result),8);
            tracep->chgBit(oldp+1242,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1.__PVT__mac__DOT__signs_0_r));
            tracep->chgCData(oldp+1243,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1.__PVT__mac__DOT__final_result_1),8);
            tracep->chgBit(oldp+1244,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1.__PVT__mac__DOT__signs_1_r));
            tracep->chgCData(oldp+1245,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1.__PVT__mac__DOT__final_result_2),8);
            tracep->chgBit(oldp+1246,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1.__PVT__mac__DOT__signs_2_r));
            tracep->chgCData(oldp+1247,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1.__PVT__mac__DOT__final_result_3),8);
            tracep->chgBit(oldp+1248,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1.__PVT__mac__DOT__signs_3_r));
            tracep->chgCData(oldp+1249,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1.__PVT__mac__DOT__sum),8);
            tracep->chgCData(oldp+1250,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1.__PVT__mac__DOT__acc_hbfp),5);
            tracep->chgCData(oldp+1251,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1.__PVT__adder__DOT__exp_diff),8);
            tracep->chgBit(oldp+1252,((1U & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2.__PVT__mac__DOT__acc_hbfp) 
                                             >> 4U))));
            tracep->chgCData(oldp+1253,((0xffU & (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2.__PVT__mac__DOT___io_out_result_exp_T_5))),8);
            tracep->chgCData(oldp+1254,((0xffU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2.__PVT__adder__DOT___exp_diff_T)
                                                   ? (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2.__PVT__mac__DOT___io_out_result_exp_T_5)
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2.__PVT__result_buffer_exp)))),8);
            tracep->chgCData(oldp+1255,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2.__PVT__mac__DOT__multiplier_1_io_out),8);
            tracep->chgCData(oldp+1256,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2.__PVT__mac__DOT__multiplier_1_1_io_out),8);
            tracep->chgCData(oldp+1257,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2.__PVT__mac__DOT__multiplier_1_2_io_out),8);
            tracep->chgCData(oldp+1258,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2.__PVT__mac__DOT__multiplier_1_3_io_out),8);
            tracep->chgSData(oldp+1259,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2.__PVT__mac__DOT__exp_addition_r),9);
            tracep->chgSData(oldp+1260,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2.__PVT__mac__DOT__exp_addition_r_1),9);
            tracep->chgSData(oldp+1261,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2.__PVT__mac__DOT__exp_addition_r_2),9);
            tracep->chgSData(oldp+1262,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2.__PVT__mac__DOT__exp_addition),9);
            tracep->chgCData(oldp+1263,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2.__PVT__mac__DOT__dotProductRegs_0),4);
            tracep->chgCData(oldp+1264,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2.__PVT__mac__DOT__dotProductRegs_1),4);
            tracep->chgCData(oldp+1265,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2.__PVT__mac__DOT__dotProductRegs_2),4);
            tracep->chgCData(oldp+1266,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2.__PVT__mac__DOT__dotProductRegs_3),4);
            tracep->chgCData(oldp+1267,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2.__PVT__mac__DOT__two_complement_buffer_0),5);
            tracep->chgCData(oldp+1268,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2.__PVT__mac__DOT__two_complement_buffer_1),5);
            tracep->chgCData(oldp+1269,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2.__PVT__mac__DOT__two_complement_buffer_2),5);
            tracep->chgCData(oldp+1270,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2.__PVT__mac__DOT__two_complement_buffer_3),5);
            tracep->chgBit(oldp+1271,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2.__PVT__mac__DOT__signs_0));
            tracep->chgBit(oldp+1272,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2.__PVT__mac__DOT__signs_1));
            tracep->chgBit(oldp+1273,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2.__PVT__mac__DOT__signs_2));
            tracep->chgBit(oldp+1274,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2.__PVT__mac__DOT__signs_3));
            tracep->chgCData(oldp+1275,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2.__PVT__mac__DOT__final_result),8);
            tracep->chgBit(oldp+1276,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2.__PVT__mac__DOT__signs_0_r));
            tracep->chgCData(oldp+1277,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2.__PVT__mac__DOT__final_result_1),8);
            tracep->chgBit(oldp+1278,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2.__PVT__mac__DOT__signs_1_r));
            tracep->chgCData(oldp+1279,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2.__PVT__mac__DOT__final_result_2),8);
            tracep->chgBit(oldp+1280,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2.__PVT__mac__DOT__signs_2_r));
            tracep->chgCData(oldp+1281,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2.__PVT__mac__DOT__final_result_3),8);
            tracep->chgBit(oldp+1282,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2.__PVT__mac__DOT__signs_3_r));
            tracep->chgCData(oldp+1283,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2.__PVT__mac__DOT__sum),8);
            tracep->chgCData(oldp+1284,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2.__PVT__mac__DOT__acc_hbfp),5);
            tracep->chgCData(oldp+1285,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2.__PVT__adder__DOT__exp_diff),8);
            tracep->chgBit(oldp+1286,((1U & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3.__PVT__mac__DOT__acc_hbfp) 
                                             >> 4U))));
            tracep->chgCData(oldp+1287,((0xffU & (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3.__PVT__mac__DOT___io_out_result_exp_T_5))),8);
            tracep->chgCData(oldp+1288,((0xffU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3.__PVT__adder__DOT___exp_diff_T)
                                                   ? (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3.__PVT__mac__DOT___io_out_result_exp_T_5)
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3.__PVT__result_buffer_exp)))),8);
            tracep->chgCData(oldp+1289,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3.__PVT__mac__DOT__multiplier_1_io_out),8);
            tracep->chgCData(oldp+1290,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3.__PVT__mac__DOT__multiplier_1_1_io_out),8);
            tracep->chgCData(oldp+1291,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3.__PVT__mac__DOT__multiplier_1_2_io_out),8);
            tracep->chgCData(oldp+1292,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3.__PVT__mac__DOT__multiplier_1_3_io_out),8);
            tracep->chgSData(oldp+1293,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3.__PVT__mac__DOT__exp_addition_r),9);
            tracep->chgSData(oldp+1294,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3.__PVT__mac__DOT__exp_addition_r_1),9);
            tracep->chgSData(oldp+1295,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3.__PVT__mac__DOT__exp_addition_r_2),9);
            tracep->chgSData(oldp+1296,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3.__PVT__mac__DOT__exp_addition),9);
            tracep->chgCData(oldp+1297,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3.__PVT__mac__DOT__dotProductRegs_0),4);
            tracep->chgCData(oldp+1298,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3.__PVT__mac__DOT__dotProductRegs_1),4);
            tracep->chgCData(oldp+1299,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3.__PVT__mac__DOT__dotProductRegs_2),4);
            tracep->chgCData(oldp+1300,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3.__PVT__mac__DOT__dotProductRegs_3),4);
            tracep->chgCData(oldp+1301,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3.__PVT__mac__DOT__two_complement_buffer_0),5);
            tracep->chgCData(oldp+1302,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3.__PVT__mac__DOT__two_complement_buffer_1),5);
            tracep->chgCData(oldp+1303,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3.__PVT__mac__DOT__two_complement_buffer_2),5);
            tracep->chgCData(oldp+1304,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3.__PVT__mac__DOT__two_complement_buffer_3),5);
            tracep->chgBit(oldp+1305,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3.__PVT__mac__DOT__signs_0));
            tracep->chgBit(oldp+1306,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3.__PVT__mac__DOT__signs_1));
            tracep->chgBit(oldp+1307,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3.__PVT__mac__DOT__signs_2));
            tracep->chgBit(oldp+1308,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3.__PVT__mac__DOT__signs_3));
            tracep->chgCData(oldp+1309,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3.__PVT__mac__DOT__final_result),8);
            tracep->chgBit(oldp+1310,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3.__PVT__mac__DOT__signs_0_r));
            tracep->chgCData(oldp+1311,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3.__PVT__mac__DOT__final_result_1),8);
            tracep->chgBit(oldp+1312,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3.__PVT__mac__DOT__signs_1_r));
            tracep->chgCData(oldp+1313,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3.__PVT__mac__DOT__final_result_2),8);
            tracep->chgBit(oldp+1314,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3.__PVT__mac__DOT__signs_2_r));
            tracep->chgCData(oldp+1315,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3.__PVT__mac__DOT__final_result_3),8);
            tracep->chgBit(oldp+1316,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3.__PVT__mac__DOT__signs_3_r));
            tracep->chgCData(oldp+1317,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3.__PVT__mac__DOT__sum),8);
            tracep->chgCData(oldp+1318,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3.__PVT__mac__DOT__acc_hbfp),5);
            tracep->chgCData(oldp+1319,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3.__PVT__adder__DOT__exp_diff),8);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [1U] | vlTOPp->__Vm_traceActivity
                         [2U]))) {
            tracep->chgBit(oldp+1320,((1U & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_0.__PVT__adder__DOT___exp_diff_T)
                                              ? (((0xfU 
                                                   & (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_0.__PVT__mac__DOT___io_out_result_man_T_10)) 
                                                  > (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_0.__PVT__adder__DOT___io_out_result_sign_T_1))
                                                  ? 
                                                 ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_0.__PVT__mac__DOT__acc_hbfp) 
                                                  >> 4U)
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_0.__PVT__result_buffer_sign))
                                              : (((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_0.__PVT__adder__DOT___io_out_result_sign_T_4) 
                                                  > (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_0.__PVT__result_buffer_man))
                                                  ? 
                                                 ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_0.__PVT__mac__DOT__acc_hbfp) 
                                                  >> 4U)
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_0.__PVT__result_buffer_sign))))));
            tracep->chgBit(oldp+1321,((1U & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_1.__PVT__adder__DOT___exp_diff_T)
                                              ? (((0xfU 
                                                   & (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_1.__PVT__mac__DOT___io_out_result_man_T_10)) 
                                                  > (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_1.__PVT__adder__DOT___io_out_result_sign_T_1))
                                                  ? 
                                                 ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_1.__PVT__mac__DOT__acc_hbfp) 
                                                  >> 4U)
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_1.__PVT__result_buffer_sign))
                                              : (((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_1.__PVT__adder__DOT___io_out_result_sign_T_4) 
                                                  > (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_1.__PVT__result_buffer_man))
                                                  ? 
                                                 ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_1.__PVT__mac__DOT__acc_hbfp) 
                                                  >> 4U)
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_1.__PVT__result_buffer_sign))))));
            tracep->chgBit(oldp+1322,((1U & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_2.__PVT__adder__DOT___exp_diff_T)
                                              ? (((0xfU 
                                                   & (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_2.__PVT__mac__DOT___io_out_result_man_T_10)) 
                                                  > (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_2.__PVT__adder__DOT___io_out_result_sign_T_1))
                                                  ? 
                                                 ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_2.__PVT__mac__DOT__acc_hbfp) 
                                                  >> 4U)
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_2.__PVT__result_buffer_sign))
                                              : (((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_2.__PVT__adder__DOT___io_out_result_sign_T_4) 
                                                  > (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_2.__PVT__result_buffer_man))
                                                  ? 
                                                 ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_2.__PVT__mac__DOT__acc_hbfp) 
                                                  >> 4U)
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_2.__PVT__result_buffer_sign))))));
            tracep->chgBit(oldp+1323,((1U & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_3.__PVT__adder__DOT___exp_diff_T)
                                              ? (((0xfU 
                                                   & (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_3.__PVT__mac__DOT___io_out_result_man_T_10)) 
                                                  > (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_3.__PVT__adder__DOT___io_out_result_sign_T_1))
                                                  ? 
                                                 ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_3.__PVT__mac__DOT__acc_hbfp) 
                                                  >> 4U)
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_3.__PVT__result_buffer_sign))
                                              : (((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_3.__PVT__adder__DOT___io_out_result_sign_T_4) 
                                                  > (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_3.__PVT__result_buffer_man))
                                                  ? 
                                                 ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_3.__PVT__mac__DOT__acc_hbfp) 
                                                  >> 4U)
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_3.__PVT__result_buffer_sign))))));
            tracep->chgBit(oldp+1324,((1U & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_0.__PVT__adder__DOT___exp_diff_T)
                                              ? (((0xfU 
                                                   & (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_0.__PVT__mac__DOT___io_out_result_man_T_10)) 
                                                  > (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_0.__PVT__adder__DOT___io_out_result_sign_T_1))
                                                  ? 
                                                 ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_0.__PVT__mac__DOT__acc_hbfp) 
                                                  >> 4U)
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_0.__PVT__result_buffer_sign))
                                              : (((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_0.__PVT__adder__DOT___io_out_result_sign_T_4) 
                                                  > (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_0.__PVT__result_buffer_man))
                                                  ? 
                                                 ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_0.__PVT__mac__DOT__acc_hbfp) 
                                                  >> 4U)
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_0.__PVT__result_buffer_sign))))));
            tracep->chgBit(oldp+1325,((1U & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_1.__PVT__adder__DOT___exp_diff_T)
                                              ? (((0xfU 
                                                   & (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_1.__PVT__mac__DOT___io_out_result_man_T_10)) 
                                                  > (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_1.__PVT__adder__DOT___io_out_result_sign_T_1))
                                                  ? 
                                                 ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_1.__PVT__mac__DOT__acc_hbfp) 
                                                  >> 4U)
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_1.__PVT__result_buffer_sign))
                                              : (((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_1.__PVT__adder__DOT___io_out_result_sign_T_4) 
                                                  > (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_1.__PVT__result_buffer_man))
                                                  ? 
                                                 ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_1.__PVT__mac__DOT__acc_hbfp) 
                                                  >> 4U)
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_1.__PVT__result_buffer_sign))))));
            tracep->chgBit(oldp+1326,((1U & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_2.__PVT__adder__DOT___exp_diff_T)
                                              ? (((0xfU 
                                                   & (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_2.__PVT__mac__DOT___io_out_result_man_T_10)) 
                                                  > (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_2.__PVT__adder__DOT___io_out_result_sign_T_1))
                                                  ? 
                                                 ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_2.__PVT__mac__DOT__acc_hbfp) 
                                                  >> 4U)
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_2.__PVT__result_buffer_sign))
                                              : (((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_2.__PVT__adder__DOT___io_out_result_sign_T_4) 
                                                  > (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_2.__PVT__result_buffer_man))
                                                  ? 
                                                 ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_2.__PVT__mac__DOT__acc_hbfp) 
                                                  >> 4U)
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_2.__PVT__result_buffer_sign))))));
            tracep->chgBit(oldp+1327,((1U & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_3.__PVT__adder__DOT___exp_diff_T)
                                              ? (((0xfU 
                                                   & (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_3.__PVT__mac__DOT___io_out_result_man_T_10)) 
                                                  > (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_3.__PVT__adder__DOT___io_out_result_sign_T_1))
                                                  ? 
                                                 ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_3.__PVT__mac__DOT__acc_hbfp) 
                                                  >> 4U)
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_3.__PVT__result_buffer_sign))
                                              : (((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_3.__PVT__adder__DOT___io_out_result_sign_T_4) 
                                                  > (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_3.__PVT__result_buffer_man))
                                                  ? 
                                                 ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_3.__PVT__mac__DOT__acc_hbfp) 
                                                  >> 4U)
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_3.__PVT__result_buffer_sign))))));
            tracep->chgBit(oldp+1328,((1U & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_0.__PVT__adder__DOT___exp_diff_T)
                                              ? (((0xfU 
                                                   & (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_0.__PVT__mac__DOT___io_out_result_man_T_10)) 
                                                  > (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_0.__PVT__adder__DOT___io_out_result_sign_T_1))
                                                  ? 
                                                 ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_0.__PVT__mac__DOT__acc_hbfp) 
                                                  >> 4U)
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_0.__PVT__result_buffer_sign))
                                              : (((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_0.__PVT__adder__DOT___io_out_result_sign_T_4) 
                                                  > (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_0.__PVT__result_buffer_man))
                                                  ? 
                                                 ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_0.__PVT__mac__DOT__acc_hbfp) 
                                                  >> 4U)
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_0.__PVT__result_buffer_sign))))));
            tracep->chgBit(oldp+1329,((1U & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_1.__PVT__adder__DOT___exp_diff_T)
                                              ? (((0xfU 
                                                   & (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_1.__PVT__mac__DOT___io_out_result_man_T_10)) 
                                                  > (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_1.__PVT__adder__DOT___io_out_result_sign_T_1))
                                                  ? 
                                                 ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_1.__PVT__mac__DOT__acc_hbfp) 
                                                  >> 4U)
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_1.__PVT__result_buffer_sign))
                                              : (((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_1.__PVT__adder__DOT___io_out_result_sign_T_4) 
                                                  > (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_1.__PVT__result_buffer_man))
                                                  ? 
                                                 ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_1.__PVT__mac__DOT__acc_hbfp) 
                                                  >> 4U)
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_1.__PVT__result_buffer_sign))))));
            tracep->chgBit(oldp+1330,((1U & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_2.__PVT__adder__DOT___exp_diff_T)
                                              ? (((0xfU 
                                                   & (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_2.__PVT__mac__DOT___io_out_result_man_T_10)) 
                                                  > (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_2.__PVT__adder__DOT___io_out_result_sign_T_1))
                                                  ? 
                                                 ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_2.__PVT__mac__DOT__acc_hbfp) 
                                                  >> 4U)
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_2.__PVT__result_buffer_sign))
                                              : (((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_2.__PVT__adder__DOT___io_out_result_sign_T_4) 
                                                  > (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_2.__PVT__result_buffer_man))
                                                  ? 
                                                 ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_2.__PVT__mac__DOT__acc_hbfp) 
                                                  >> 4U)
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_2.__PVT__result_buffer_sign))))));
            tracep->chgBit(oldp+1331,((1U & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_3.__PVT__adder__DOT___exp_diff_T)
                                              ? (((0xfU 
                                                   & (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_3.__PVT__mac__DOT___io_out_result_man_T_10)) 
                                                  > (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_3.__PVT__adder__DOT___io_out_result_sign_T_1))
                                                  ? 
                                                 ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_3.__PVT__mac__DOT__acc_hbfp) 
                                                  >> 4U)
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_3.__PVT__result_buffer_sign))
                                              : (((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_3.__PVT__adder__DOT___io_out_result_sign_T_4) 
                                                  > (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_3.__PVT__result_buffer_man))
                                                  ? 
                                                 ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_3.__PVT__mac__DOT__acc_hbfp) 
                                                  >> 4U)
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_3.__PVT__result_buffer_sign))))));
            tracep->chgBit(oldp+1332,((1U & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0.__PVT__adder__DOT___exp_diff_T)
                                              ? (((0xfU 
                                                   & (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0.__PVT__mac__DOT___io_out_result_man_T_10)) 
                                                  > (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0.__PVT__adder__DOT___io_out_result_sign_T_1))
                                                  ? 
                                                 ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0.__PVT__mac__DOT__acc_hbfp) 
                                                  >> 4U)
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0.__PVT__result_buffer_sign))
                                              : (((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0.__PVT__adder__DOT___io_out_result_sign_T_4) 
                                                  > (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0.__PVT__result_buffer_man))
                                                  ? 
                                                 ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0.__PVT__mac__DOT__acc_hbfp) 
                                                  >> 4U)
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0.__PVT__result_buffer_sign))))));
            tracep->chgBit(oldp+1333,((1U & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1.__PVT__adder__DOT___exp_diff_T)
                                              ? (((0xfU 
                                                   & (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1.__PVT__mac__DOT___io_out_result_man_T_10)) 
                                                  > (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1.__PVT__adder__DOT___io_out_result_sign_T_1))
                                                  ? 
                                                 ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1.__PVT__mac__DOT__acc_hbfp) 
                                                  >> 4U)
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1.__PVT__result_buffer_sign))
                                              : (((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1.__PVT__adder__DOT___io_out_result_sign_T_4) 
                                                  > (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1.__PVT__result_buffer_man))
                                                  ? 
                                                 ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1.__PVT__mac__DOT__acc_hbfp) 
                                                  >> 4U)
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1.__PVT__result_buffer_sign))))));
            tracep->chgBit(oldp+1334,((1U & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2.__PVT__adder__DOT___exp_diff_T)
                                              ? (((0xfU 
                                                   & (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2.__PVT__mac__DOT___io_out_result_man_T_10)) 
                                                  > (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2.__PVT__adder__DOT___io_out_result_sign_T_1))
                                                  ? 
                                                 ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2.__PVT__mac__DOT__acc_hbfp) 
                                                  >> 4U)
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2.__PVT__result_buffer_sign))
                                              : (((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2.__PVT__adder__DOT___io_out_result_sign_T_4) 
                                                  > (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2.__PVT__result_buffer_man))
                                                  ? 
                                                 ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2.__PVT__mac__DOT__acc_hbfp) 
                                                  >> 4U)
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2.__PVT__result_buffer_sign))))));
            tracep->chgBit(oldp+1335,((1U & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3.__PVT__adder__DOT___exp_diff_T)
                                              ? (((0xfU 
                                                   & (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3.__PVT__mac__DOT___io_out_result_man_T_10)) 
                                                  > (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3.__PVT__adder__DOT___io_out_result_sign_T_1))
                                                  ? 
                                                 ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3.__PVT__mac__DOT__acc_hbfp) 
                                                  >> 4U)
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3.__PVT__result_buffer_sign))
                                              : (((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3.__PVT__adder__DOT___io_out_result_sign_T_4) 
                                                  > (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3.__PVT__result_buffer_man))
                                                  ? 
                                                 ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3.__PVT__mac__DOT__acc_hbfp) 
                                                  >> 4U)
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3.__PVT__result_buffer_sign))))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[2U])) {
            tracep->chgBit(oldp+1336,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_0__DOT__do_enq));
            tracep->chgBit(oldp+1337,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_1__DOT__do_enq));
            tracep->chgBit(oldp+1338,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_2__DOT__do_enq));
            tracep->chgBit(oldp+1339,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_3__DOT__do_enq));
            tracep->chgBit(oldp+1340,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_0__DOT__do_enq));
            tracep->chgBit(oldp+1341,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_1__DOT__do_enq));
            tracep->chgBit(oldp+1342,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_2__DOT__do_enq));
            tracep->chgBit(oldp+1343,(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_3__DOT__do_enq));
            tracep->chgCData(oldp+1344,((0xfU & (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_0.__PVT__mac__DOT___io_out_result_man_T_10))),4);
            tracep->chgCData(oldp+1345,(((0xfU < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_0.__PVT__adder__DOT__addition))
                                          ? 0xfU : 
                                         (0xfU & (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_0.__PVT__adder__DOT__addition)))),4);
            tracep->chgCData(oldp+1346,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_0.__PVT__adder__DOT__addition),5);
            tracep->chgCData(oldp+1347,((0xfU & (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_1.__PVT__mac__DOT___io_out_result_man_T_10))),4);
            tracep->chgCData(oldp+1348,(((0xfU < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_1.__PVT__adder__DOT__addition))
                                          ? 0xfU : 
                                         (0xfU & (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_1.__PVT__adder__DOT__addition)))),4);
            tracep->chgCData(oldp+1349,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_1.__PVT__adder__DOT__addition),5);
            tracep->chgCData(oldp+1350,((0xfU & (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_2.__PVT__mac__DOT___io_out_result_man_T_10))),4);
            tracep->chgCData(oldp+1351,(((0xfU < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_2.__PVT__adder__DOT__addition))
                                          ? 0xfU : 
                                         (0xfU & (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_2.__PVT__adder__DOT__addition)))),4);
            tracep->chgCData(oldp+1352,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_2.__PVT__adder__DOT__addition),5);
            tracep->chgCData(oldp+1353,((0xfU & (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_3.__PVT__mac__DOT___io_out_result_man_T_10))),4);
            tracep->chgCData(oldp+1354,(((0xfU < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_3.__PVT__adder__DOT__addition))
                                          ? 0xfU : 
                                         (0xfU & (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_3.__PVT__adder__DOT__addition)))),4);
            tracep->chgCData(oldp+1355,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_3.__PVT__adder__DOT__addition),5);
            tracep->chgCData(oldp+1356,((0xfU & (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_0.__PVT__mac__DOT___io_out_result_man_T_10))),4);
            tracep->chgCData(oldp+1357,(((0xfU < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_0.__PVT__adder__DOT__addition))
                                          ? 0xfU : 
                                         (0xfU & (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_0.__PVT__adder__DOT__addition)))),4);
            tracep->chgCData(oldp+1358,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_0.__PVT__adder__DOT__addition),5);
            tracep->chgCData(oldp+1359,((0xfU & (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_1.__PVT__mac__DOT___io_out_result_man_T_10))),4);
            tracep->chgCData(oldp+1360,(((0xfU < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_1.__PVT__adder__DOT__addition))
                                          ? 0xfU : 
                                         (0xfU & (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_1.__PVT__adder__DOT__addition)))),4);
            tracep->chgCData(oldp+1361,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_1.__PVT__adder__DOT__addition),5);
            tracep->chgCData(oldp+1362,((0xfU & (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_2.__PVT__mac__DOT___io_out_result_man_T_10))),4);
            tracep->chgCData(oldp+1363,(((0xfU < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_2.__PVT__adder__DOT__addition))
                                          ? 0xfU : 
                                         (0xfU & (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_2.__PVT__adder__DOT__addition)))),4);
            tracep->chgCData(oldp+1364,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_2.__PVT__adder__DOT__addition),5);
            tracep->chgCData(oldp+1365,((0xfU & (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_3.__PVT__mac__DOT___io_out_result_man_T_10))),4);
            tracep->chgCData(oldp+1366,(((0xfU < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_3.__PVT__adder__DOT__addition))
                                          ? 0xfU : 
                                         (0xfU & (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_3.__PVT__adder__DOT__addition)))),4);
            tracep->chgCData(oldp+1367,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_3.__PVT__adder__DOT__addition),5);
            tracep->chgCData(oldp+1368,((0xfU & (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_0.__PVT__mac__DOT___io_out_result_man_T_10))),4);
            tracep->chgCData(oldp+1369,(((0xfU < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_0.__PVT__adder__DOT__addition))
                                          ? 0xfU : 
                                         (0xfU & (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_0.__PVT__adder__DOT__addition)))),4);
            tracep->chgCData(oldp+1370,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_0.__PVT__adder__DOT__addition),5);
            tracep->chgCData(oldp+1371,((0xfU & (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_1.__PVT__mac__DOT___io_out_result_man_T_10))),4);
            tracep->chgCData(oldp+1372,(((0xfU < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_1.__PVT__adder__DOT__addition))
                                          ? 0xfU : 
                                         (0xfU & (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_1.__PVT__adder__DOT__addition)))),4);
            tracep->chgCData(oldp+1373,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_1.__PVT__adder__DOT__addition),5);
            tracep->chgCData(oldp+1374,((0xfU & (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_2.__PVT__mac__DOT___io_out_result_man_T_10))),4);
            tracep->chgCData(oldp+1375,(((0xfU < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_2.__PVT__adder__DOT__addition))
                                          ? 0xfU : 
                                         (0xfU & (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_2.__PVT__adder__DOT__addition)))),4);
            tracep->chgCData(oldp+1376,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_2.__PVT__adder__DOT__addition),5);
            tracep->chgCData(oldp+1377,((0xfU & (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_3.__PVT__mac__DOT___io_out_result_man_T_10))),4);
            tracep->chgCData(oldp+1378,(((0xfU < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_3.__PVT__adder__DOT__addition))
                                          ? 0xfU : 
                                         (0xfU & (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_3.__PVT__adder__DOT__addition)))),4);
            tracep->chgCData(oldp+1379,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_3.__PVT__adder__DOT__addition),5);
            tracep->chgCData(oldp+1380,((0xfU & (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0.__PVT__mac__DOT___io_out_result_man_T_10))),4);
            tracep->chgCData(oldp+1381,(((0xfU < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0.__PVT__adder__DOT__addition))
                                          ? 0xfU : 
                                         (0xfU & (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0.__PVT__adder__DOT__addition)))),4);
            tracep->chgCData(oldp+1382,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0.__PVT__adder__DOT__addition),5);
            tracep->chgCData(oldp+1383,((0xfU & (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1.__PVT__mac__DOT___io_out_result_man_T_10))),4);
            tracep->chgCData(oldp+1384,(((0xfU < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1.__PVT__adder__DOT__addition))
                                          ? 0xfU : 
                                         (0xfU & (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1.__PVT__adder__DOT__addition)))),4);
            tracep->chgCData(oldp+1385,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1.__PVT__adder__DOT__addition),5);
            tracep->chgCData(oldp+1386,((0xfU & (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2.__PVT__mac__DOT___io_out_result_man_T_10))),4);
            tracep->chgCData(oldp+1387,(((0xfU < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2.__PVT__adder__DOT__addition))
                                          ? 0xfU : 
                                         (0xfU & (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2.__PVT__adder__DOT__addition)))),4);
            tracep->chgCData(oldp+1388,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2.__PVT__adder__DOT__addition),5);
            tracep->chgCData(oldp+1389,((0xfU & (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3.__PVT__mac__DOT___io_out_result_man_T_10))),4);
            tracep->chgCData(oldp+1390,(((0xfU < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3.__PVT__adder__DOT__addition))
                                          ? 0xfU : 
                                         (0xfU & (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3.__PVT__adder__DOT__addition)))),4);
            tracep->chgCData(oldp+1391,(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3.__PVT__adder__DOT__addition),5);
        }
        tracep->chgBit(oldp+1392,(vlTOPp->clock));
        tracep->chgBit(oldp+1393,(vlTOPp->reset));
        tracep->chgBit(oldp+1394,(vlTOPp->io_in_hor_0_ready));
        tracep->chgBit(oldp+1395,(vlTOPp->io_in_hor_0_valid));
        tracep->chgBit(oldp+1396,(vlTOPp->io_in_hor_0_bits_sign_0));
        tracep->chgBit(oldp+1397,(vlTOPp->io_in_hor_0_bits_sign_1));
        tracep->chgBit(oldp+1398,(vlTOPp->io_in_hor_0_bits_sign_2));
        tracep->chgBit(oldp+1399,(vlTOPp->io_in_hor_0_bits_sign_3));
        tracep->chgCData(oldp+1400,(vlTOPp->io_in_hor_0_bits_man_0),4);
        tracep->chgCData(oldp+1401,(vlTOPp->io_in_hor_0_bits_man_1),4);
        tracep->chgCData(oldp+1402,(vlTOPp->io_in_hor_0_bits_man_2),4);
        tracep->chgCData(oldp+1403,(vlTOPp->io_in_hor_0_bits_man_3),4);
        tracep->chgCData(oldp+1404,(vlTOPp->io_in_hor_0_bits_exp),8);
        tracep->chgBit(oldp+1405,(vlTOPp->io_in_hor_1_ready));
        tracep->chgBit(oldp+1406,(vlTOPp->io_in_hor_1_valid));
        tracep->chgBit(oldp+1407,(vlTOPp->io_in_hor_1_bits_sign_0));
        tracep->chgBit(oldp+1408,(vlTOPp->io_in_hor_1_bits_sign_1));
        tracep->chgBit(oldp+1409,(vlTOPp->io_in_hor_1_bits_sign_2));
        tracep->chgBit(oldp+1410,(vlTOPp->io_in_hor_1_bits_sign_3));
        tracep->chgCData(oldp+1411,(vlTOPp->io_in_hor_1_bits_man_0),4);
        tracep->chgCData(oldp+1412,(vlTOPp->io_in_hor_1_bits_man_1),4);
        tracep->chgCData(oldp+1413,(vlTOPp->io_in_hor_1_bits_man_2),4);
        tracep->chgCData(oldp+1414,(vlTOPp->io_in_hor_1_bits_man_3),4);
        tracep->chgCData(oldp+1415,(vlTOPp->io_in_hor_1_bits_exp),8);
        tracep->chgBit(oldp+1416,(vlTOPp->io_in_hor_2_ready));
        tracep->chgBit(oldp+1417,(vlTOPp->io_in_hor_2_valid));
        tracep->chgBit(oldp+1418,(vlTOPp->io_in_hor_2_bits_sign_0));
        tracep->chgBit(oldp+1419,(vlTOPp->io_in_hor_2_bits_sign_1));
        tracep->chgBit(oldp+1420,(vlTOPp->io_in_hor_2_bits_sign_2));
        tracep->chgBit(oldp+1421,(vlTOPp->io_in_hor_2_bits_sign_3));
        tracep->chgCData(oldp+1422,(vlTOPp->io_in_hor_2_bits_man_0),4);
        tracep->chgCData(oldp+1423,(vlTOPp->io_in_hor_2_bits_man_1),4);
        tracep->chgCData(oldp+1424,(vlTOPp->io_in_hor_2_bits_man_2),4);
        tracep->chgCData(oldp+1425,(vlTOPp->io_in_hor_2_bits_man_3),4);
        tracep->chgCData(oldp+1426,(vlTOPp->io_in_hor_2_bits_exp),8);
        tracep->chgBit(oldp+1427,(vlTOPp->io_in_hor_3_ready));
        tracep->chgBit(oldp+1428,(vlTOPp->io_in_hor_3_valid));
        tracep->chgBit(oldp+1429,(vlTOPp->io_in_hor_3_bits_sign_0));
        tracep->chgBit(oldp+1430,(vlTOPp->io_in_hor_3_bits_sign_1));
        tracep->chgBit(oldp+1431,(vlTOPp->io_in_hor_3_bits_sign_2));
        tracep->chgBit(oldp+1432,(vlTOPp->io_in_hor_3_bits_sign_3));
        tracep->chgCData(oldp+1433,(vlTOPp->io_in_hor_3_bits_man_0),4);
        tracep->chgCData(oldp+1434,(vlTOPp->io_in_hor_3_bits_man_1),4);
        tracep->chgCData(oldp+1435,(vlTOPp->io_in_hor_3_bits_man_2),4);
        tracep->chgCData(oldp+1436,(vlTOPp->io_in_hor_3_bits_man_3),4);
        tracep->chgCData(oldp+1437,(vlTOPp->io_in_hor_3_bits_exp),8);
        tracep->chgBit(oldp+1438,(vlTOPp->io_in_ver_0_ready));
        tracep->chgBit(oldp+1439,(vlTOPp->io_in_ver_0_valid));
        tracep->chgBit(oldp+1440,(vlTOPp->io_in_ver_0_bits_sign_0));
        tracep->chgBit(oldp+1441,(vlTOPp->io_in_ver_0_bits_sign_1));
        tracep->chgBit(oldp+1442,(vlTOPp->io_in_ver_0_bits_sign_2));
        tracep->chgBit(oldp+1443,(vlTOPp->io_in_ver_0_bits_sign_3));
        tracep->chgCData(oldp+1444,(vlTOPp->io_in_ver_0_bits_man_0),4);
        tracep->chgCData(oldp+1445,(vlTOPp->io_in_ver_0_bits_man_1),4);
        tracep->chgCData(oldp+1446,(vlTOPp->io_in_ver_0_bits_man_2),4);
        tracep->chgCData(oldp+1447,(vlTOPp->io_in_ver_0_bits_man_3),4);
        tracep->chgCData(oldp+1448,(vlTOPp->io_in_ver_0_bits_exp),8);
        tracep->chgBit(oldp+1449,(vlTOPp->io_in_ver_1_ready));
        tracep->chgBit(oldp+1450,(vlTOPp->io_in_ver_1_valid));
        tracep->chgBit(oldp+1451,(vlTOPp->io_in_ver_1_bits_sign_0));
        tracep->chgBit(oldp+1452,(vlTOPp->io_in_ver_1_bits_sign_1));
        tracep->chgBit(oldp+1453,(vlTOPp->io_in_ver_1_bits_sign_2));
        tracep->chgBit(oldp+1454,(vlTOPp->io_in_ver_1_bits_sign_3));
        tracep->chgCData(oldp+1455,(vlTOPp->io_in_ver_1_bits_man_0),4);
        tracep->chgCData(oldp+1456,(vlTOPp->io_in_ver_1_bits_man_1),4);
        tracep->chgCData(oldp+1457,(vlTOPp->io_in_ver_1_bits_man_2),4);
        tracep->chgCData(oldp+1458,(vlTOPp->io_in_ver_1_bits_man_3),4);
        tracep->chgCData(oldp+1459,(vlTOPp->io_in_ver_1_bits_exp),8);
        tracep->chgBit(oldp+1460,(vlTOPp->io_in_ver_2_ready));
        tracep->chgBit(oldp+1461,(vlTOPp->io_in_ver_2_valid));
        tracep->chgBit(oldp+1462,(vlTOPp->io_in_ver_2_bits_sign_0));
        tracep->chgBit(oldp+1463,(vlTOPp->io_in_ver_2_bits_sign_1));
        tracep->chgBit(oldp+1464,(vlTOPp->io_in_ver_2_bits_sign_2));
        tracep->chgBit(oldp+1465,(vlTOPp->io_in_ver_2_bits_sign_3));
        tracep->chgCData(oldp+1466,(vlTOPp->io_in_ver_2_bits_man_0),4);
        tracep->chgCData(oldp+1467,(vlTOPp->io_in_ver_2_bits_man_1),4);
        tracep->chgCData(oldp+1468,(vlTOPp->io_in_ver_2_bits_man_2),4);
        tracep->chgCData(oldp+1469,(vlTOPp->io_in_ver_2_bits_man_3),4);
        tracep->chgCData(oldp+1470,(vlTOPp->io_in_ver_2_bits_exp),8);
        tracep->chgBit(oldp+1471,(vlTOPp->io_in_ver_3_ready));
        tracep->chgBit(oldp+1472,(vlTOPp->io_in_ver_3_valid));
        tracep->chgBit(oldp+1473,(vlTOPp->io_in_ver_3_bits_sign_0));
        tracep->chgBit(oldp+1474,(vlTOPp->io_in_ver_3_bits_sign_1));
        tracep->chgBit(oldp+1475,(vlTOPp->io_in_ver_3_bits_sign_2));
        tracep->chgBit(oldp+1476,(vlTOPp->io_in_ver_3_bits_sign_3));
        tracep->chgCData(oldp+1477,(vlTOPp->io_in_ver_3_bits_man_0),4);
        tracep->chgCData(oldp+1478,(vlTOPp->io_in_ver_3_bits_man_1),4);
        tracep->chgCData(oldp+1479,(vlTOPp->io_in_ver_3_bits_man_2),4);
        tracep->chgCData(oldp+1480,(vlTOPp->io_in_ver_3_bits_man_3),4);
        tracep->chgCData(oldp+1481,(vlTOPp->io_in_ver_3_bits_exp),8);
        tracep->chgBit(oldp+1482,(vlTOPp->io_in_flag));
        tracep->chgBit(oldp+1483,(vlTOPp->io_out_0_0_result_sign));
        tracep->chgCData(oldp+1484,(vlTOPp->io_out_0_0_result_man),4);
        tracep->chgCData(oldp+1485,(vlTOPp->io_out_0_0_result_exp),8);
        tracep->chgBit(oldp+1486,(vlTOPp->io_out_0_1_result_sign));
        tracep->chgCData(oldp+1487,(vlTOPp->io_out_0_1_result_man),4);
        tracep->chgCData(oldp+1488,(vlTOPp->io_out_0_1_result_exp),8);
        tracep->chgBit(oldp+1489,(vlTOPp->io_out_0_2_result_sign));
        tracep->chgCData(oldp+1490,(vlTOPp->io_out_0_2_result_man),4);
        tracep->chgCData(oldp+1491,(vlTOPp->io_out_0_2_result_exp),8);
        tracep->chgBit(oldp+1492,(vlTOPp->io_out_0_3_result_sign));
        tracep->chgCData(oldp+1493,(vlTOPp->io_out_0_3_result_man),4);
        tracep->chgCData(oldp+1494,(vlTOPp->io_out_0_3_result_exp),8);
        tracep->chgBit(oldp+1495,(vlTOPp->io_out_1_0_result_sign));
        tracep->chgCData(oldp+1496,(vlTOPp->io_out_1_0_result_man),4);
        tracep->chgCData(oldp+1497,(vlTOPp->io_out_1_0_result_exp),8);
        tracep->chgBit(oldp+1498,(vlTOPp->io_out_1_1_result_sign));
        tracep->chgCData(oldp+1499,(vlTOPp->io_out_1_1_result_man),4);
        tracep->chgCData(oldp+1500,(vlTOPp->io_out_1_1_result_exp),8);
        tracep->chgBit(oldp+1501,(vlTOPp->io_out_1_2_result_sign));
        tracep->chgCData(oldp+1502,(vlTOPp->io_out_1_2_result_man),4);
        tracep->chgCData(oldp+1503,(vlTOPp->io_out_1_2_result_exp),8);
        tracep->chgBit(oldp+1504,(vlTOPp->io_out_1_3_result_sign));
        tracep->chgCData(oldp+1505,(vlTOPp->io_out_1_3_result_man),4);
        tracep->chgCData(oldp+1506,(vlTOPp->io_out_1_3_result_exp),8);
        tracep->chgBit(oldp+1507,(vlTOPp->io_out_2_0_result_sign));
        tracep->chgCData(oldp+1508,(vlTOPp->io_out_2_0_result_man),4);
        tracep->chgCData(oldp+1509,(vlTOPp->io_out_2_0_result_exp),8);
        tracep->chgBit(oldp+1510,(vlTOPp->io_out_2_1_result_sign));
        tracep->chgCData(oldp+1511,(vlTOPp->io_out_2_1_result_man),4);
        tracep->chgCData(oldp+1512,(vlTOPp->io_out_2_1_result_exp),8);
        tracep->chgBit(oldp+1513,(vlTOPp->io_out_2_2_result_sign));
        tracep->chgCData(oldp+1514,(vlTOPp->io_out_2_2_result_man),4);
        tracep->chgCData(oldp+1515,(vlTOPp->io_out_2_2_result_exp),8);
        tracep->chgBit(oldp+1516,(vlTOPp->io_out_2_3_result_sign));
        tracep->chgCData(oldp+1517,(vlTOPp->io_out_2_3_result_man),4);
        tracep->chgCData(oldp+1518,(vlTOPp->io_out_2_3_result_exp),8);
        tracep->chgBit(oldp+1519,(vlTOPp->io_out_3_0_result_sign));
        tracep->chgCData(oldp+1520,(vlTOPp->io_out_3_0_result_man),4);
        tracep->chgCData(oldp+1521,(vlTOPp->io_out_3_0_result_exp),8);
        tracep->chgBit(oldp+1522,(vlTOPp->io_out_3_1_result_sign));
        tracep->chgCData(oldp+1523,(vlTOPp->io_out_3_1_result_man),4);
        tracep->chgCData(oldp+1524,(vlTOPp->io_out_3_1_result_exp),8);
        tracep->chgBit(oldp+1525,(vlTOPp->io_out_3_2_result_sign));
        tracep->chgCData(oldp+1526,(vlTOPp->io_out_3_2_result_man),4);
        tracep->chgCData(oldp+1527,(vlTOPp->io_out_3_2_result_exp),8);
        tracep->chgBit(oldp+1528,(vlTOPp->io_out_3_3_result_sign));
        tracep->chgCData(oldp+1529,(vlTOPp->io_out_3_3_result_man),4);
        tracep->chgCData(oldp+1530,(vlTOPp->io_out_3_3_result_exp),8);
        tracep->chgBit(oldp+1531,(((~ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_0__DOT__full)) 
                                   & (IData)(vlTOPp->io_in_hor_0_valid))));
        tracep->chgBit(oldp+1532,(((~ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_1__DOT__full)) 
                                   & (IData)(vlTOPp->io_in_hor_1_valid))));
        tracep->chgBit(oldp+1533,(((~ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_2__DOT__full)) 
                                   & (IData)(vlTOPp->io_in_hor_2_valid))));
        tracep->chgBit(oldp+1534,(((~ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_hor_3__DOT__full)) 
                                   & (IData)(vlTOPp->io_in_hor_3_valid))));
        tracep->chgBit(oldp+1535,(((~ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_0__DOT__full)) 
                                   & (IData)(vlTOPp->io_in_ver_0_valid))));
        tracep->chgBit(oldp+1536,(((~ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_1__DOT__full)) 
                                   & (IData)(vlTOPp->io_in_ver_1_valid))));
        tracep->chgBit(oldp+1537,(((~ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_2__DOT__full)) 
                                   & (IData)(vlTOPp->io_in_ver_2_valid))));
        tracep->chgBit(oldp+1538,(((~ (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__myinputQ_ver_3__DOT__full)) 
                                   & (IData)(vlTOPp->io_in_ver_3_valid))));
        tracep->chgCData(oldp+1539,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_hor_man_0) 
                                               >> 2U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1540,(((IData)(vlTOPp->io_in_flag)
                                      ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_ver_man_0)
                                      : 0U)),4);
        tracep->chgCData(oldp+1541,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_hor_man_0) 
                                                      >> 2U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_ver_man_0)
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1542,(((IData)(vlTOPp->io_in_flag)
                                      ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_hor_man_0)
                                      : 0U)),4);
        tracep->chgCData(oldp+1543,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_ver_man_0) 
                                               >> 2U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1544,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_hor_man_0)
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_ver_man_0) 
                                                     >> 2U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1545,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_hor_man_0) 
                                                      >> 2U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_ver_man_0) 
                                                     >> 2U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1546,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_hor_man_1) 
                                               >> 2U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1547,(((IData)(vlTOPp->io_in_flag)
                                      ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_ver_man_1)
                                      : 0U)),4);
        tracep->chgCData(oldp+1548,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_hor_man_1) 
                                                      >> 2U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_ver_man_1)
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1549,(((IData)(vlTOPp->io_in_flag)
                                      ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_hor_man_1)
                                      : 0U)),4);
        tracep->chgCData(oldp+1550,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_ver_man_1) 
                                               >> 2U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1551,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_hor_man_1)
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_ver_man_1) 
                                                     >> 2U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1552,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_hor_man_1) 
                                                      >> 2U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_ver_man_1) 
                                                     >> 2U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1553,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_hor_man_2) 
                                               >> 2U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1554,(((IData)(vlTOPp->io_in_flag)
                                      ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_ver_man_2)
                                      : 0U)),4);
        tracep->chgCData(oldp+1555,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_hor_man_2) 
                                                      >> 2U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_ver_man_2)
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1556,(((IData)(vlTOPp->io_in_flag)
                                      ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_hor_man_2)
                                      : 0U)),4);
        tracep->chgCData(oldp+1557,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_ver_man_2) 
                                               >> 2U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1558,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_hor_man_2)
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_ver_man_2) 
                                                     >> 2U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1559,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_hor_man_2) 
                                                      >> 2U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_ver_man_2) 
                                                     >> 2U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1560,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_hor_man_3) 
                                               >> 2U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1561,(((IData)(vlTOPp->io_in_flag)
                                      ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_ver_man_3)
                                      : 0U)),4);
        tracep->chgCData(oldp+1562,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_hor_man_3) 
                                                      >> 2U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_ver_man_3)
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1563,(((IData)(vlTOPp->io_in_flag)
                                      ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_hor_man_3)
                                      : 0U)),4);
        tracep->chgCData(oldp+1564,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_ver_man_3) 
                                               >> 2U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1565,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_hor_man_3)
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_ver_man_3) 
                                                     >> 2U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1566,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_hor_man_3) 
                                                      >> 2U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_0_io_in_ver_man_3) 
                                                     >> 2U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1567,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_hor_r_man_0) 
                                               >> 2U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1568,(((IData)(vlTOPp->io_in_flag)
                                      ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_ver_man_0)
                                      : 0U)),4);
        tracep->chgCData(oldp+1569,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_hor_r_man_0) 
                                                      >> 2U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_ver_man_0)
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1570,(((IData)(vlTOPp->io_in_flag)
                                      ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_hor_r_man_0)
                                      : 0U)),4);
        tracep->chgCData(oldp+1571,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_ver_man_0) 
                                               >> 2U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1572,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_hor_r_man_0)
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_ver_man_0) 
                                                     >> 2U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1573,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_hor_r_man_0) 
                                                      >> 2U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_ver_man_0) 
                                                     >> 2U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1574,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_hor_r_man_1) 
                                               >> 2U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1575,(((IData)(vlTOPp->io_in_flag)
                                      ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_ver_man_1)
                                      : 0U)),4);
        tracep->chgCData(oldp+1576,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_hor_r_man_1) 
                                                      >> 2U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_ver_man_1)
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1577,(((IData)(vlTOPp->io_in_flag)
                                      ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_hor_r_man_1)
                                      : 0U)),4);
        tracep->chgCData(oldp+1578,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_ver_man_1) 
                                               >> 2U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1579,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_hor_r_man_1)
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_ver_man_1) 
                                                     >> 2U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1580,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_hor_r_man_1) 
                                                      >> 2U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_ver_man_1) 
                                                     >> 2U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1581,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_hor_r_man_2) 
                                               >> 2U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1582,(((IData)(vlTOPp->io_in_flag)
                                      ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_ver_man_2)
                                      : 0U)),4);
        tracep->chgCData(oldp+1583,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_hor_r_man_2) 
                                                      >> 2U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_ver_man_2)
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1584,(((IData)(vlTOPp->io_in_flag)
                                      ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_hor_r_man_2)
                                      : 0U)),4);
        tracep->chgCData(oldp+1585,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_ver_man_2) 
                                               >> 2U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1586,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_hor_r_man_2)
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_ver_man_2) 
                                                     >> 2U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1587,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_hor_r_man_2) 
                                                      >> 2U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_ver_man_2) 
                                                     >> 2U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1588,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_hor_r_man_3) 
                                               >> 2U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1589,(((IData)(vlTOPp->io_in_flag)
                                      ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_ver_man_3)
                                      : 0U)),4);
        tracep->chgCData(oldp+1590,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_hor_r_man_3) 
                                                      >> 2U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_ver_man_3)
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1591,(((IData)(vlTOPp->io_in_flag)
                                      ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_hor_r_man_3)
                                      : 0U)),4);
        tracep->chgCData(oldp+1592,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_ver_man_3) 
                                               >> 2U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1593,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_hor_r_man_3)
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_ver_man_3) 
                                                     >> 2U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1594,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_hor_r_man_3) 
                                                      >> 2U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_1_io_in_ver_man_3) 
                                                     >> 2U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1595,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_hor_r_man_0) 
                                               >> 2U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1596,(((IData)(vlTOPp->io_in_flag)
                                      ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_ver_man_0)
                                      : 0U)),4);
        tracep->chgCData(oldp+1597,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_hor_r_man_0) 
                                                      >> 2U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_ver_man_0)
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1598,(((IData)(vlTOPp->io_in_flag)
                                      ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_hor_r_man_0)
                                      : 0U)),4);
        tracep->chgCData(oldp+1599,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_ver_man_0) 
                                               >> 2U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1600,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_hor_r_man_0)
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_ver_man_0) 
                                                     >> 2U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1601,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_hor_r_man_0) 
                                                      >> 2U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_ver_man_0) 
                                                     >> 2U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1602,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_hor_r_man_1) 
                                               >> 2U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1603,(((IData)(vlTOPp->io_in_flag)
                                      ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_ver_man_1)
                                      : 0U)),4);
        tracep->chgCData(oldp+1604,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_hor_r_man_1) 
                                                      >> 2U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_ver_man_1)
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1605,(((IData)(vlTOPp->io_in_flag)
                                      ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_hor_r_man_1)
                                      : 0U)),4);
        tracep->chgCData(oldp+1606,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_ver_man_1) 
                                               >> 2U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1607,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_hor_r_man_1)
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_ver_man_1) 
                                                     >> 2U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1608,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_hor_r_man_1) 
                                                      >> 2U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_ver_man_1) 
                                                     >> 2U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1609,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_hor_r_man_2) 
                                               >> 2U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1610,(((IData)(vlTOPp->io_in_flag)
                                      ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_ver_man_2)
                                      : 0U)),4);
        tracep->chgCData(oldp+1611,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_hor_r_man_2) 
                                                      >> 2U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_ver_man_2)
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1612,(((IData)(vlTOPp->io_in_flag)
                                      ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_hor_r_man_2)
                                      : 0U)),4);
        tracep->chgCData(oldp+1613,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_ver_man_2) 
                                               >> 2U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1614,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_hor_r_man_2)
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_ver_man_2) 
                                                     >> 2U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1615,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_hor_r_man_2) 
                                                      >> 2U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_ver_man_2) 
                                                     >> 2U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1616,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_hor_r_man_3) 
                                               >> 2U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1617,(((IData)(vlTOPp->io_in_flag)
                                      ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_ver_man_3)
                                      : 0U)),4);
        tracep->chgCData(oldp+1618,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_hor_r_man_3) 
                                                      >> 2U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_ver_man_3)
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1619,(((IData)(vlTOPp->io_in_flag)
                                      ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_hor_r_man_3)
                                      : 0U)),4);
        tracep->chgCData(oldp+1620,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_ver_man_3) 
                                               >> 2U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1621,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_hor_r_man_3)
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_ver_man_3) 
                                                     >> 2U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1622,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_hor_r_man_3) 
                                                      >> 2U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_2_io_in_ver_man_3) 
                                                     >> 2U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1623,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_hor_r_man_0) 
                                               >> 2U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1624,(((IData)(vlTOPp->io_in_flag)
                                      ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_ver_man_0)
                                      : 0U)),4);
        tracep->chgCData(oldp+1625,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_hor_r_man_0) 
                                                      >> 2U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_ver_man_0)
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1626,(((IData)(vlTOPp->io_in_flag)
                                      ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_hor_r_man_0)
                                      : 0U)),4);
        tracep->chgCData(oldp+1627,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_ver_man_0) 
                                               >> 2U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1628,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_hor_r_man_0)
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_ver_man_0) 
                                                     >> 2U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1629,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_hor_r_man_0) 
                                                      >> 2U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_ver_man_0) 
                                                     >> 2U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1630,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_hor_r_man_1) 
                                               >> 2U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1631,(((IData)(vlTOPp->io_in_flag)
                                      ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_ver_man_1)
                                      : 0U)),4);
        tracep->chgCData(oldp+1632,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_hor_r_man_1) 
                                                      >> 2U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_ver_man_1)
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1633,(((IData)(vlTOPp->io_in_flag)
                                      ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_hor_r_man_1)
                                      : 0U)),4);
        tracep->chgCData(oldp+1634,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_ver_man_1) 
                                               >> 2U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1635,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_hor_r_man_1)
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_ver_man_1) 
                                                     >> 2U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1636,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_hor_r_man_1) 
                                                      >> 2U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_ver_man_1) 
                                                     >> 2U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1637,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_hor_r_man_2) 
                                               >> 2U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1638,(((IData)(vlTOPp->io_in_flag)
                                      ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_ver_man_2)
                                      : 0U)),4);
        tracep->chgCData(oldp+1639,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_hor_r_man_2) 
                                                      >> 2U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_ver_man_2)
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1640,(((IData)(vlTOPp->io_in_flag)
                                      ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_hor_r_man_2)
                                      : 0U)),4);
        tracep->chgCData(oldp+1641,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_ver_man_2) 
                                               >> 2U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1642,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_hor_r_man_2)
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_ver_man_2) 
                                                     >> 2U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1643,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_hor_r_man_2) 
                                                      >> 2U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_ver_man_2) 
                                                     >> 2U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1644,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_hor_r_man_3) 
                                               >> 2U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1645,(((IData)(vlTOPp->io_in_flag)
                                      ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_ver_man_3)
                                      : 0U)),4);
        tracep->chgCData(oldp+1646,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_hor_r_man_3) 
                                                      >> 2U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_ver_man_3)
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1647,(((IData)(vlTOPp->io_in_flag)
                                      ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_hor_r_man_3)
                                      : 0U)),4);
        tracep->chgCData(oldp+1648,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_ver_man_3) 
                                               >> 2U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1649,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_hor_r_man_3)
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_ver_man_3) 
                                                     >> 2U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1650,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_hor_r_man_3) 
                                                      >> 2U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_0_3_io_in_ver_man_3) 
                                                     >> 2U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1651,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_0) 
                                               >> 2U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1652,(((IData)(vlTOPp->io_in_flag)
                                      ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_0)
                                      : 0U)),4);
        tracep->chgCData(oldp+1653,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_0) 
                                                      >> 2U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_0)
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1654,(((IData)(vlTOPp->io_in_flag)
                                      ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_0)
                                      : 0U)),4);
        tracep->chgCData(oldp+1655,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_0) 
                                               >> 2U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1656,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_0)
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_0) 
                                                     >> 2U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1657,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_0) 
                                                      >> 2U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_0) 
                                                     >> 2U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1658,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_1) 
                                               >> 2U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1659,(((IData)(vlTOPp->io_in_flag)
                                      ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_1)
                                      : 0U)),4);
        tracep->chgCData(oldp+1660,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_1) 
                                                      >> 2U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_1)
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1661,(((IData)(vlTOPp->io_in_flag)
                                      ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_1)
                                      : 0U)),4);
        tracep->chgCData(oldp+1662,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_1) 
                                               >> 2U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1663,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_1)
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_1) 
                                                     >> 2U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1664,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_1) 
                                                      >> 2U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_1) 
                                                     >> 2U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1665,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_2) 
                                               >> 2U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1666,(((IData)(vlTOPp->io_in_flag)
                                      ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_2)
                                      : 0U)),4);
        tracep->chgCData(oldp+1667,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_2) 
                                                      >> 2U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_2)
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1668,(((IData)(vlTOPp->io_in_flag)
                                      ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_2)
                                      : 0U)),4);
        tracep->chgCData(oldp+1669,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_2) 
                                               >> 2U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1670,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_2)
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_2) 
                                                     >> 2U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1671,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_2) 
                                                      >> 2U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_2) 
                                                     >> 2U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1672,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_3) 
                                               >> 2U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1673,(((IData)(vlTOPp->io_in_flag)
                                      ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_3)
                                      : 0U)),4);
        tracep->chgCData(oldp+1674,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_3) 
                                                      >> 2U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_3)
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1675,(((IData)(vlTOPp->io_in_flag)
                                      ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_3)
                                      : 0U)),4);
        tracep->chgCData(oldp+1676,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_3) 
                                               >> 2U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1677,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_3)
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_3) 
                                                     >> 2U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1678,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_hor_man_3) 
                                                      >> 2U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_0_io_in_ver_r_man_3) 
                                                     >> 2U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1679,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_0) 
                                               >> 2U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1680,(((IData)(vlTOPp->io_in_flag)
                                      ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_0)
                                      : 0U)),4);
        tracep->chgCData(oldp+1681,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_0) 
                                                      >> 2U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_0)
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1682,(((IData)(vlTOPp->io_in_flag)
                                      ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_0)
                                      : 0U)),4);
        tracep->chgCData(oldp+1683,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_0) 
                                               >> 2U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1684,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_0)
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_0) 
                                                     >> 2U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1685,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_0) 
                                                      >> 2U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_0) 
                                                     >> 2U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1686,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_1) 
                                               >> 2U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1687,(((IData)(vlTOPp->io_in_flag)
                                      ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_1)
                                      : 0U)),4);
        tracep->chgCData(oldp+1688,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_1) 
                                                      >> 2U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_1)
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1689,(((IData)(vlTOPp->io_in_flag)
                                      ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_1)
                                      : 0U)),4);
        tracep->chgCData(oldp+1690,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_1) 
                                               >> 2U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1691,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_1)
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_1) 
                                                     >> 2U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1692,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_1) 
                                                      >> 2U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_1) 
                                                     >> 2U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1693,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_2) 
                                               >> 2U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1694,(((IData)(vlTOPp->io_in_flag)
                                      ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_2)
                                      : 0U)),4);
        tracep->chgCData(oldp+1695,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_2) 
                                                      >> 2U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_2)
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1696,(((IData)(vlTOPp->io_in_flag)
                                      ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_2)
                                      : 0U)),4);
        tracep->chgCData(oldp+1697,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_2) 
                                               >> 2U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1698,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_2)
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_2) 
                                                     >> 2U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1699,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_2) 
                                                      >> 2U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_2) 
                                                     >> 2U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1700,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_3) 
                                               >> 2U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1701,(((IData)(vlTOPp->io_in_flag)
                                      ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_3)
                                      : 0U)),4);
        tracep->chgCData(oldp+1702,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_3) 
                                                      >> 2U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_3)
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1703,(((IData)(vlTOPp->io_in_flag)
                                      ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_3)
                                      : 0U)),4);
        tracep->chgCData(oldp+1704,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_3) 
                                               >> 2U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1705,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_3)
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_3) 
                                                     >> 2U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1706,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_r_man_3) 
                                                      >> 2U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_r_man_3) 
                                                     >> 2U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1707,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_0) 
                                               >> 2U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1708,(((IData)(vlTOPp->io_in_flag)
                                      ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_0)
                                      : 0U)),4);
        tracep->chgCData(oldp+1709,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_0) 
                                                      >> 2U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_0)
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1710,(((IData)(vlTOPp->io_in_flag)
                                      ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_0)
                                      : 0U)),4);
        tracep->chgCData(oldp+1711,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_0) 
                                               >> 2U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1712,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_0)
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_0) 
                                                     >> 2U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1713,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_0) 
                                                      >> 2U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_0) 
                                                     >> 2U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1714,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_1) 
                                               >> 2U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1715,(((IData)(vlTOPp->io_in_flag)
                                      ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_1)
                                      : 0U)),4);
        tracep->chgCData(oldp+1716,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_1) 
                                                      >> 2U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_1)
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1717,(((IData)(vlTOPp->io_in_flag)
                                      ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_1)
                                      : 0U)),4);
        tracep->chgCData(oldp+1718,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_1) 
                                               >> 2U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1719,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_1)
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_1) 
                                                     >> 2U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1720,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_1) 
                                                      >> 2U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_1) 
                                                     >> 2U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1721,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_2) 
                                               >> 2U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1722,(((IData)(vlTOPp->io_in_flag)
                                      ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_2)
                                      : 0U)),4);
        tracep->chgCData(oldp+1723,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_2) 
                                                      >> 2U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_2)
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1724,(((IData)(vlTOPp->io_in_flag)
                                      ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_2)
                                      : 0U)),4);
        tracep->chgCData(oldp+1725,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_2) 
                                               >> 2U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1726,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_2)
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_2) 
                                                     >> 2U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1727,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_2) 
                                                      >> 2U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_2) 
                                                     >> 2U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1728,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_3) 
                                               >> 2U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1729,(((IData)(vlTOPp->io_in_flag)
                                      ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_3)
                                      : 0U)),4);
        tracep->chgCData(oldp+1730,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_3) 
                                                      >> 2U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_3)
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1731,(((IData)(vlTOPp->io_in_flag)
                                      ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_3)
                                      : 0U)),4);
        tracep->chgCData(oldp+1732,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_3) 
                                               >> 2U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1733,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_3)
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_3) 
                                                     >> 2U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1734,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_r_man_3) 
                                                      >> 2U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_r_man_3) 
                                                     >> 2U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1735,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_0) 
                                               >> 2U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1736,(((IData)(vlTOPp->io_in_flag)
                                      ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_0)
                                      : 0U)),4);
        tracep->chgCData(oldp+1737,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_0) 
                                                      >> 2U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_0)
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1738,(((IData)(vlTOPp->io_in_flag)
                                      ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_0)
                                      : 0U)),4);
        tracep->chgCData(oldp+1739,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_0) 
                                               >> 2U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1740,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_0)
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_0) 
                                                     >> 2U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1741,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_0) 
                                                      >> 2U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_0) 
                                                     >> 2U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1742,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_1) 
                                               >> 2U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1743,(((IData)(vlTOPp->io_in_flag)
                                      ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_1)
                                      : 0U)),4);
        tracep->chgCData(oldp+1744,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_1) 
                                                      >> 2U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_1)
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1745,(((IData)(vlTOPp->io_in_flag)
                                      ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_1)
                                      : 0U)),4);
        tracep->chgCData(oldp+1746,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_1) 
                                               >> 2U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1747,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_1)
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_1) 
                                                     >> 2U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1748,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_1) 
                                                      >> 2U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_1) 
                                                     >> 2U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1749,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_2) 
                                               >> 2U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1750,(((IData)(vlTOPp->io_in_flag)
                                      ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_2)
                                      : 0U)),4);
        tracep->chgCData(oldp+1751,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_2) 
                                                      >> 2U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_2)
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1752,(((IData)(vlTOPp->io_in_flag)
                                      ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_2)
                                      : 0U)),4);
        tracep->chgCData(oldp+1753,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_2) 
                                               >> 2U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1754,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_2)
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_2) 
                                                     >> 2U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1755,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_2) 
                                                      >> 2U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_2) 
                                                     >> 2U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1756,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_3) 
                                               >> 2U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1757,(((IData)(vlTOPp->io_in_flag)
                                      ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_3)
                                      : 0U)),4);
        tracep->chgCData(oldp+1758,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_3) 
                                                      >> 2U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_3)
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1759,(((IData)(vlTOPp->io_in_flag)
                                      ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_3)
                                      : 0U)),4);
        tracep->chgCData(oldp+1760,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_3) 
                                               >> 2U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1761,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_3)
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_3) 
                                                     >> 2U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1762,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_r_man_3) 
                                                      >> 2U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_r_man_3) 
                                                     >> 2U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1763,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_0) 
                                               >> 2U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1764,(((IData)(vlTOPp->io_in_flag)
                                      ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_r_man_0)
                                      : 0U)),4);
        tracep->chgCData(oldp+1765,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_0) 
                                                      >> 2U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_r_man_0)
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1766,(((IData)(vlTOPp->io_in_flag)
                                      ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_0)
                                      : 0U)),4);
        tracep->chgCData(oldp+1767,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_r_man_0) 
                                               >> 2U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1768,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_0)
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_r_man_0) 
                                                     >> 2U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1769,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_0) 
                                                      >> 2U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_r_man_0) 
                                                     >> 2U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1770,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_1) 
                                               >> 2U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1771,(((IData)(vlTOPp->io_in_flag)
                                      ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_r_man_1)
                                      : 0U)),4);
        tracep->chgCData(oldp+1772,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_1) 
                                                      >> 2U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_r_man_1)
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1773,(((IData)(vlTOPp->io_in_flag)
                                      ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_1)
                                      : 0U)),4);
        tracep->chgCData(oldp+1774,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_r_man_1) 
                                               >> 2U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1775,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_1)
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_r_man_1) 
                                                     >> 2U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1776,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_1) 
                                                      >> 2U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_r_man_1) 
                                                     >> 2U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1777,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_2) 
                                               >> 2U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1778,(((IData)(vlTOPp->io_in_flag)
                                      ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_r_man_2)
                                      : 0U)),4);
        tracep->chgCData(oldp+1779,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_2) 
                                                      >> 2U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_r_man_2)
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1780,(((IData)(vlTOPp->io_in_flag)
                                      ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_2)
                                      : 0U)),4);
        tracep->chgCData(oldp+1781,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_r_man_2) 
                                               >> 2U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1782,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_2)
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_r_man_2) 
                                                     >> 2U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1783,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_2) 
                                                      >> 2U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_r_man_2) 
                                                     >> 2U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1784,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_3) 
                                               >> 2U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1785,(((IData)(vlTOPp->io_in_flag)
                                      ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_r_man_3)
                                      : 0U)),4);
        tracep->chgCData(oldp+1786,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_3) 
                                                      >> 2U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_r_man_3)
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1787,(((IData)(vlTOPp->io_in_flag)
                                      ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_3)
                                      : 0U)),4);
        tracep->chgCData(oldp+1788,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_r_man_3) 
                                               >> 2U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1789,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_3)
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_r_man_3) 
                                                     >> 2U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1790,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_3) 
                                                      >> 2U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_r_man_3) 
                                                     >> 2U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1791,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_r_man_0) 
                                               >> 2U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1792,(((IData)(vlTOPp->io_in_flag)
                                      ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_r_man_0)
                                      : 0U)),4);
        tracep->chgCData(oldp+1793,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_r_man_0) 
                                                      >> 2U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_r_man_0)
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1794,(((IData)(vlTOPp->io_in_flag)
                                      ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_r_man_0)
                                      : 0U)),4);
        tracep->chgCData(oldp+1795,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_r_man_0) 
                                               >> 2U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1796,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_r_man_0)
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_r_man_0) 
                                                     >> 2U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1797,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_r_man_0) 
                                                      >> 2U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_r_man_0) 
                                                     >> 2U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1798,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_r_man_1) 
                                               >> 2U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1799,(((IData)(vlTOPp->io_in_flag)
                                      ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_r_man_1)
                                      : 0U)),4);
        tracep->chgCData(oldp+1800,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_r_man_1) 
                                                      >> 2U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_r_man_1)
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1801,(((IData)(vlTOPp->io_in_flag)
                                      ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_r_man_1)
                                      : 0U)),4);
        tracep->chgCData(oldp+1802,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_r_man_1) 
                                               >> 2U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1803,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_r_man_1)
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_r_man_1) 
                                                     >> 2U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1804,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_r_man_1) 
                                                      >> 2U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_r_man_1) 
                                                     >> 2U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1805,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_r_man_2) 
                                               >> 2U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1806,(((IData)(vlTOPp->io_in_flag)
                                      ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_r_man_2)
                                      : 0U)),4);
        tracep->chgCData(oldp+1807,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_r_man_2) 
                                                      >> 2U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_r_man_2)
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1808,(((IData)(vlTOPp->io_in_flag)
                                      ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_r_man_2)
                                      : 0U)),4);
        tracep->chgCData(oldp+1809,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_r_man_2) 
                                               >> 2U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1810,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_r_man_2)
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_r_man_2) 
                                                     >> 2U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1811,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_r_man_2) 
                                                      >> 2U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_r_man_2) 
                                                     >> 2U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1812,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_r_man_3) 
                                               >> 2U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1813,(((IData)(vlTOPp->io_in_flag)
                                      ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_r_man_3)
                                      : 0U)),4);
        tracep->chgCData(oldp+1814,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_r_man_3) 
                                                      >> 2U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_r_man_3)
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1815,(((IData)(vlTOPp->io_in_flag)
                                      ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_r_man_3)
                                      : 0U)),4);
        tracep->chgCData(oldp+1816,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_r_man_3) 
                                               >> 2U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1817,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_r_man_3)
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_r_man_3) 
                                                     >> 2U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1818,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_r_man_3) 
                                                      >> 2U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_r_man_3) 
                                                     >> 2U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1819,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_r_man_0) 
                                               >> 2U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1820,(((IData)(vlTOPp->io_in_flag)
                                      ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_r_man_0)
                                      : 0U)),4);
        tracep->chgCData(oldp+1821,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_r_man_0) 
                                                      >> 2U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_r_man_0)
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1822,(((IData)(vlTOPp->io_in_flag)
                                      ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_r_man_0)
                                      : 0U)),4);
        tracep->chgCData(oldp+1823,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_r_man_0) 
                                               >> 2U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1824,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_r_man_0)
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_r_man_0) 
                                                     >> 2U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1825,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_r_man_0) 
                                                      >> 2U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_r_man_0) 
                                                     >> 2U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1826,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_r_man_1) 
                                               >> 2U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1827,(((IData)(vlTOPp->io_in_flag)
                                      ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_r_man_1)
                                      : 0U)),4);
        tracep->chgCData(oldp+1828,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_r_man_1) 
                                                      >> 2U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_r_man_1)
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1829,(((IData)(vlTOPp->io_in_flag)
                                      ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_r_man_1)
                                      : 0U)),4);
        tracep->chgCData(oldp+1830,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_r_man_1) 
                                               >> 2U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1831,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_r_man_1)
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_r_man_1) 
                                                     >> 2U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1832,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_r_man_1) 
                                                      >> 2U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_r_man_1) 
                                                     >> 2U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1833,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_r_man_2) 
                                               >> 2U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1834,(((IData)(vlTOPp->io_in_flag)
                                      ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_r_man_2)
                                      : 0U)),4);
        tracep->chgCData(oldp+1835,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_r_man_2) 
                                                      >> 2U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_r_man_2)
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1836,(((IData)(vlTOPp->io_in_flag)
                                      ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_r_man_2)
                                      : 0U)),4);
        tracep->chgCData(oldp+1837,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_r_man_2) 
                                               >> 2U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1838,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_r_man_2)
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_r_man_2) 
                                                     >> 2U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1839,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_r_man_2) 
                                                      >> 2U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_r_man_2) 
                                                     >> 2U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1840,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_r_man_3) 
                                               >> 2U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1841,(((IData)(vlTOPp->io_in_flag)
                                      ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_r_man_3)
                                      : 0U)),4);
        tracep->chgCData(oldp+1842,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_r_man_3) 
                                                      >> 2U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_r_man_3)
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1843,(((IData)(vlTOPp->io_in_flag)
                                      ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_r_man_3)
                                      : 0U)),4);
        tracep->chgCData(oldp+1844,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_r_man_3) 
                                               >> 2U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1845,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_r_man_3)
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_r_man_3) 
                                                     >> 2U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1846,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_r_man_3) 
                                                      >> 2U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_r_man_3) 
                                                     >> 2U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1847,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_r_man_0) 
                                               >> 2U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1848,(((IData)(vlTOPp->io_in_flag)
                                      ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_r_man_0)
                                      : 0U)),4);
        tracep->chgCData(oldp+1849,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_r_man_0) 
                                                      >> 2U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_r_man_0)
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1850,(((IData)(vlTOPp->io_in_flag)
                                      ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_r_man_0)
                                      : 0U)),4);
        tracep->chgCData(oldp+1851,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_r_man_0) 
                                               >> 2U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1852,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_r_man_0)
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_r_man_0) 
                                                     >> 2U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1853,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_r_man_0) 
                                                      >> 2U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_r_man_0) 
                                                     >> 2U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1854,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_r_man_1) 
                                               >> 2U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1855,(((IData)(vlTOPp->io_in_flag)
                                      ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_r_man_1)
                                      : 0U)),4);
        tracep->chgCData(oldp+1856,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_r_man_1) 
                                                      >> 2U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_r_man_1)
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1857,(((IData)(vlTOPp->io_in_flag)
                                      ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_r_man_1)
                                      : 0U)),4);
        tracep->chgCData(oldp+1858,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_r_man_1) 
                                               >> 2U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1859,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_r_man_1)
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_r_man_1) 
                                                     >> 2U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1860,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_r_man_1) 
                                                      >> 2U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_r_man_1) 
                                                     >> 2U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1861,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_r_man_2) 
                                               >> 2U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1862,(((IData)(vlTOPp->io_in_flag)
                                      ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_r_man_2)
                                      : 0U)),4);
        tracep->chgCData(oldp+1863,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_r_man_2) 
                                                      >> 2U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_r_man_2)
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1864,(((IData)(vlTOPp->io_in_flag)
                                      ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_r_man_2)
                                      : 0U)),4);
        tracep->chgCData(oldp+1865,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_r_man_2) 
                                               >> 2U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1866,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_r_man_2)
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_r_man_2) 
                                                     >> 2U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1867,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_r_man_2) 
                                                      >> 2U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_r_man_2) 
                                                     >> 2U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1868,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_r_man_3) 
                                               >> 2U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1869,(((IData)(vlTOPp->io_in_flag)
                                      ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_r_man_3)
                                      : 0U)),4);
        tracep->chgCData(oldp+1870,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_r_man_3) 
                                                      >> 2U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_r_man_3)
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1871,(((IData)(vlTOPp->io_in_flag)
                                      ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_r_man_3)
                                      : 0U)),4);
        tracep->chgCData(oldp+1872,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_r_man_3) 
                                               >> 2U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1873,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_r_man_3)
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_r_man_3) 
                                                     >> 2U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1874,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_r_man_3) 
                                                      >> 2U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_r_man_3) 
                                                     >> 2U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1875,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_0) 
                                               >> 2U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1876,(((IData)(vlTOPp->io_in_flag)
                                      ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_0)
                                      : 0U)),4);
        tracep->chgCData(oldp+1877,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_0) 
                                                      >> 2U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_0)
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1878,(((IData)(vlTOPp->io_in_flag)
                                      ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_0)
                                      : 0U)),4);
        tracep->chgCData(oldp+1879,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_0) 
                                               >> 2U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1880,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_0)
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_0) 
                                                     >> 2U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1881,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_0) 
                                                      >> 2U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_0) 
                                                     >> 2U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1882,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_1) 
                                               >> 2U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1883,(((IData)(vlTOPp->io_in_flag)
                                      ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_1)
                                      : 0U)),4);
        tracep->chgCData(oldp+1884,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_1) 
                                                      >> 2U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_1)
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1885,(((IData)(vlTOPp->io_in_flag)
                                      ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_1)
                                      : 0U)),4);
        tracep->chgCData(oldp+1886,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_1) 
                                               >> 2U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1887,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_1)
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_1) 
                                                     >> 2U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1888,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_1) 
                                                      >> 2U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_1) 
                                                     >> 2U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1889,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_2) 
                                               >> 2U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1890,(((IData)(vlTOPp->io_in_flag)
                                      ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_2)
                                      : 0U)),4);
        tracep->chgCData(oldp+1891,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_2) 
                                                      >> 2U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_2)
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1892,(((IData)(vlTOPp->io_in_flag)
                                      ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_2)
                                      : 0U)),4);
        tracep->chgCData(oldp+1893,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_2) 
                                               >> 2U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1894,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_2)
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_2) 
                                                     >> 2U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1895,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_2) 
                                                      >> 2U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_2) 
                                                     >> 2U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1896,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_3) 
                                               >> 2U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1897,(((IData)(vlTOPp->io_in_flag)
                                      ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_3)
                                      : 0U)),4);
        tracep->chgCData(oldp+1898,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_3) 
                                                      >> 2U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_3)
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1899,(((IData)(vlTOPp->io_in_flag)
                                      ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_3)
                                      : 0U)),4);
        tracep->chgCData(oldp+1900,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_3) 
                                               >> 2U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1901,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_3)
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_3) 
                                                     >> 2U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1902,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_3) 
                                                      >> 2U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_r_man_3) 
                                                     >> 2U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1903,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_0) 
                                               >> 2U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1904,(((IData)(vlTOPp->io_in_flag)
                                      ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_0)
                                      : 0U)),4);
        tracep->chgCData(oldp+1905,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_0) 
                                                      >> 2U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_0)
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1906,(((IData)(vlTOPp->io_in_flag)
                                      ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_0)
                                      : 0U)),4);
        tracep->chgCData(oldp+1907,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_0) 
                                               >> 2U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1908,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_0)
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_0) 
                                                     >> 2U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1909,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_0) 
                                                      >> 2U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_0) 
                                                     >> 2U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1910,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_1) 
                                               >> 2U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1911,(((IData)(vlTOPp->io_in_flag)
                                      ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_1)
                                      : 0U)),4);
        tracep->chgCData(oldp+1912,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_1) 
                                                      >> 2U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_1)
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1913,(((IData)(vlTOPp->io_in_flag)
                                      ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_1)
                                      : 0U)),4);
        tracep->chgCData(oldp+1914,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_1) 
                                               >> 2U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1915,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_1)
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_1) 
                                                     >> 2U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1916,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_1) 
                                                      >> 2U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_1) 
                                                     >> 2U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1917,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_2) 
                                               >> 2U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1918,(((IData)(vlTOPp->io_in_flag)
                                      ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_2)
                                      : 0U)),4);
        tracep->chgCData(oldp+1919,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_2) 
                                                      >> 2U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_2)
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1920,(((IData)(vlTOPp->io_in_flag)
                                      ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_2)
                                      : 0U)),4);
        tracep->chgCData(oldp+1921,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_2) 
                                               >> 2U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1922,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_2)
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_2) 
                                                     >> 2U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1923,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_2) 
                                                      >> 2U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_2) 
                                                     >> 2U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1924,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_3) 
                                               >> 2U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1925,(((IData)(vlTOPp->io_in_flag)
                                      ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_3)
                                      : 0U)),4);
        tracep->chgCData(oldp+1926,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_3) 
                                                      >> 2U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_3)
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1927,(((IData)(vlTOPp->io_in_flag)
                                      ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_3)
                                      : 0U)),4);
        tracep->chgCData(oldp+1928,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_3) 
                                               >> 2U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1929,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_3)
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_3) 
                                                     >> 2U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1930,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_r_man_3) 
                                                      >> 2U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_r_man_3) 
                                                     >> 2U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1931,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_0) 
                                               >> 2U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1932,(((IData)(vlTOPp->io_in_flag)
                                      ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_0)
                                      : 0U)),4);
        tracep->chgCData(oldp+1933,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_0) 
                                                      >> 2U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_0)
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1934,(((IData)(vlTOPp->io_in_flag)
                                      ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_0)
                                      : 0U)),4);
        tracep->chgCData(oldp+1935,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_0) 
                                               >> 2U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1936,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_0)
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_0) 
                                                     >> 2U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1937,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_0) 
                                                      >> 2U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_0) 
                                                     >> 2U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1938,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_1) 
                                               >> 2U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1939,(((IData)(vlTOPp->io_in_flag)
                                      ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_1)
                                      : 0U)),4);
        tracep->chgCData(oldp+1940,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_1) 
                                                      >> 2U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_1)
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1941,(((IData)(vlTOPp->io_in_flag)
                                      ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_1)
                                      : 0U)),4);
        tracep->chgCData(oldp+1942,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_1) 
                                               >> 2U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1943,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_1)
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_1) 
                                                     >> 2U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1944,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_1) 
                                                      >> 2U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_1) 
                                                     >> 2U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1945,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_2) 
                                               >> 2U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1946,(((IData)(vlTOPp->io_in_flag)
                                      ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_2)
                                      : 0U)),4);
        tracep->chgCData(oldp+1947,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_2) 
                                                      >> 2U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_2)
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1948,(((IData)(vlTOPp->io_in_flag)
                                      ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_2)
                                      : 0U)),4);
        tracep->chgCData(oldp+1949,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_2) 
                                               >> 2U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1950,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_2)
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_2) 
                                                     >> 2U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1951,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_2) 
                                                      >> 2U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_2) 
                                                     >> 2U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1952,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_3) 
                                               >> 2U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1953,(((IData)(vlTOPp->io_in_flag)
                                      ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_3)
                                      : 0U)),4);
        tracep->chgCData(oldp+1954,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_3) 
                                                      >> 2U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_3)
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1955,(((IData)(vlTOPp->io_in_flag)
                                      ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_3)
                                      : 0U)),4);
        tracep->chgCData(oldp+1956,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_3) 
                                               >> 2U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1957,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_3)
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_3) 
                                                     >> 2U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1958,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_r_man_3) 
                                                      >> 2U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_r_man_3) 
                                                     >> 2U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1959,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_0) 
                                               >> 2U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1960,(((IData)(vlTOPp->io_in_flag)
                                      ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_0)
                                      : 0U)),4);
        tracep->chgCData(oldp+1961,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_0) 
                                                      >> 2U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_0)
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1962,(((IData)(vlTOPp->io_in_flag)
                                      ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_0)
                                      : 0U)),4);
        tracep->chgCData(oldp+1963,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_0) 
                                               >> 2U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1964,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_0)
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_0) 
                                                     >> 2U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1965,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_0) 
                                                      >> 2U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_0) 
                                                     >> 2U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1966,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_1) 
                                               >> 2U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1967,(((IData)(vlTOPp->io_in_flag)
                                      ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_1)
                                      : 0U)),4);
        tracep->chgCData(oldp+1968,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_1) 
                                                      >> 2U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_1)
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1969,(((IData)(vlTOPp->io_in_flag)
                                      ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_1)
                                      : 0U)),4);
        tracep->chgCData(oldp+1970,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_1) 
                                               >> 2U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1971,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_1)
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_1) 
                                                     >> 2U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1972,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_1) 
                                                      >> 2U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_1) 
                                                     >> 2U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1973,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_2) 
                                               >> 2U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1974,(((IData)(vlTOPp->io_in_flag)
                                      ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_2)
                                      : 0U)),4);
        tracep->chgCData(oldp+1975,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_2) 
                                                      >> 2U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_2)
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1976,(((IData)(vlTOPp->io_in_flag)
                                      ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_2)
                                      : 0U)),4);
        tracep->chgCData(oldp+1977,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_2) 
                                               >> 2U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1978,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_2)
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_2) 
                                                     >> 2U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1979,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_2) 
                                                      >> 2U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_2) 
                                                     >> 2U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1980,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_3) 
                                               >> 2U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1981,(((IData)(vlTOPp->io_in_flag)
                                      ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_3)
                                      : 0U)),4);
        tracep->chgCData(oldp+1982,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_3) 
                                                      >> 2U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_3)
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1983,(((IData)(vlTOPp->io_in_flag)
                                      ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_3)
                                      : 0U)),4);
        tracep->chgCData(oldp+1984,(((IData)(vlTOPp->io_in_flag)
                                      ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_3) 
                                               >> 2U))
                                      : 0U)),4);
        tracep->chgCData(oldp+1985,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_3)
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_3) 
                                                     >> 2U))
                                                  : 0U)))),8);
        tracep->chgCData(oldp+1986,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                ? (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_r_man_3) 
                                                      >> 2U))
                                                : 0U) 
                                              * ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_r_man_3) 
                                                     >> 2U))
                                                  : 0U)))),8);
    }
}

void VSystolicArray_HBFP_forTesting::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp = static_cast<VSystolicArray_HBFP_forTesting__Syms*>(userp);
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
        vlTOPp->__Vm_traceActivity[2U] = 0U;
    }
}
