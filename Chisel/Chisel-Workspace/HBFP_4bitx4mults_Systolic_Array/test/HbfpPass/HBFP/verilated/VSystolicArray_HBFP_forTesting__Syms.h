// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VSYSTOLICARRAY_HBFP_FORTESTING__SYMS_H_
#define _VSYSTOLICARRAY_HBFP_FORTESTING__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "VSystolicArray_HBFP_forTesting.h"
#include "VSystolicArray_HBFP_forTesting_HBFP_PE.h"

// SYMS CLASS
class VSystolicArray_HBFP_forTesting__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VSystolicArray_HBFP_forTesting* TOPp;
    VSystolicArray_HBFP_forTesting_HBFP_PE TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_0;
    VSystolicArray_HBFP_forTesting_HBFP_PE TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_1;
    VSystolicArray_HBFP_forTesting_HBFP_PE TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_2;
    VSystolicArray_HBFP_forTesting_HBFP_PE TOP__SystolicArray_HBFP_forTesting__DOT__pes_0_3;
    VSystolicArray_HBFP_forTesting_HBFP_PE TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_0;
    VSystolicArray_HBFP_forTesting_HBFP_PE TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_1;
    VSystolicArray_HBFP_forTesting_HBFP_PE TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_2;
    VSystolicArray_HBFP_forTesting_HBFP_PE TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_3;
    VSystolicArray_HBFP_forTesting_HBFP_PE TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_0;
    VSystolicArray_HBFP_forTesting_HBFP_PE TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_1;
    VSystolicArray_HBFP_forTesting_HBFP_PE TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_2;
    VSystolicArray_HBFP_forTesting_HBFP_PE TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_3;
    VSystolicArray_HBFP_forTesting_HBFP_PE TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0;
    VSystolicArray_HBFP_forTesting_HBFP_PE TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1;
    VSystolicArray_HBFP_forTesting_HBFP_PE TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2;
    VSystolicArray_HBFP_forTesting_HBFP_PE TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3;
    
    // CREATORS
    VSystolicArray_HBFP_forTesting__Syms(VSystolicArray_HBFP_forTesting* topp, const char* namep);
    ~VSystolicArray_HBFP_forTesting__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
