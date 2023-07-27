# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See VSystolicArray_HBFP_forTesting.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (from --threads, --trace-threads or use of classes)
VM_C11 = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 1
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Threaded output mode?  0/1/N threads (from --threads)
VM_THREADS = 0
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 1
# Tracing threaded output mode?  0/1/N threads (from --trace-thread)
VM_TRACE_THREADS = 0
# Separate FST writer thread? 0/1 (from --trace-fst with --trace-thread > 0)
VM_TRACE_FST_WRITER_THREAD = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	VSystolicArray_HBFP_forTesting \
	VSystolicArray_HBFP_forTesting__1 \
	VSystolicArray_HBFP_forTesting__2 \
	VSystolicArray_HBFP_forTesting__3 \
	VSystolicArray_HBFP_forTesting__4 \
	VSystolicArray_HBFP_forTesting__5 \
	VSystolicArray_HBFP_forTesting__6 \
	VSystolicArray_HBFP_forTesting_HBFP_PE \
	VSystolicArray_HBFP_forTesting_HBFP_PE__1 \
	VSystolicArray_HBFP_forTesting_HBFP_PE__2 \
	VSystolicArray_HBFP_forTesting_HBFP_PE__3 \
	VSystolicArray_HBFP_forTesting_HBFP_PE__4 \
	VSystolicArray_HBFP_forTesting_HBFP_PE__5 \
	VSystolicArray_HBFP_forTesting_HBFP_PE__6 \
	VSystolicArray_HBFP_forTesting_HBFP_PE__7 \
	VSystolicArray_HBFP_forTesting_HBFP_PE__8 \
	VSystolicArray_HBFP_forTesting_HBFP_PE__9 \
	VSystolicArray_HBFP_forTesting_HBFP_PE__10 \
	VSystolicArray_HBFP_forTesting_HBFP_PE__11 \
	VSystolicArray_HBFP_forTesting_HBFP_PE__12 \
	VSystolicArray_HBFP_forTesting_HBFP_PE__13 \
	VSystolicArray_HBFP_forTesting_HBFP_PE__14 \
	VSystolicArray_HBFP_forTesting_HBFP_PE__15 \
	VSystolicArray_HBFP_forTesting_HBFP_PE__16 \
	VSystolicArray_HBFP_forTesting_HBFP_PE__17 \
	VSystolicArray_HBFP_forTesting_HBFP_PE__18 \
	VSystolicArray_HBFP_forTesting_HBFP_PE__19 \
	VSystolicArray_HBFP_forTesting_HBFP_PE__20 \
	VSystolicArray_HBFP_forTesting_HBFP_PE__21 \
	VSystolicArray_HBFP_forTesting_HBFP_PE__22 \
	VSystolicArray_HBFP_forTesting_HBFP_PE__23 \
	VSystolicArray_HBFP_forTesting_HBFP_PE__24 \
	VSystolicArray_HBFP_forTesting_HBFP_PE__25 \
	VSystolicArray_HBFP_forTesting_HBFP_PE__26 \
	VSystolicArray_HBFP_forTesting_HBFP_PE__27 \
	VSystolicArray_HBFP_forTesting_HBFP_PE__28 \
	VSystolicArray_HBFP_forTesting_HBFP_PE__29 \
	VSystolicArray_HBFP_forTesting_HBFP_PE__30 \
	VSystolicArray_HBFP_forTesting_HBFP_PE__31 \
	VSystolicArray_HBFP_forTesting_HBFP_PE__32 \
	VSystolicArray_HBFP_forTesting_Queue \
	VSystolicArray_HBFP_forTesting_Queue__1 \
	VSystolicArray_HBFP_forTesting_Queue__2 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	VSystolicArray_HBFP_forTesting__Slow \
	VSystolicArray_HBFP_forTesting__1__Slow \
	VSystolicArray_HBFP_forTesting__2__Slow \
	VSystolicArray_HBFP_forTesting__3__Slow \
	VSystolicArray_HBFP_forTesting_HBFP_PE__Slow \
	VSystolicArray_HBFP_forTesting_HBFP_PE__1__Slow \
	VSystolicArray_HBFP_forTesting_HBFP_PE__2__Slow \
	VSystolicArray_HBFP_forTesting_HBFP_PE__3__Slow \
	VSystolicArray_HBFP_forTesting_HBFP_PE__4__Slow \
	VSystolicArray_HBFP_forTesting_HBFP_PE__5__Slow \
	VSystolicArray_HBFP_forTesting_HBFP_PE__6__Slow \
	VSystolicArray_HBFP_forTesting_HBFP_PE__7__Slow \
	VSystolicArray_HBFP_forTesting_HBFP_PE__8__Slow \
	VSystolicArray_HBFP_forTesting_HBFP_PE__9__Slow \
	VSystolicArray_HBFP_forTesting_HBFP_PE__10__Slow \
	VSystolicArray_HBFP_forTesting_HBFP_PE__11__Slow \
	VSystolicArray_HBFP_forTesting_HBFP_PE__12__Slow \
	VSystolicArray_HBFP_forTesting_Queue__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	VSystolicArray_HBFP_forTesting__Trace \
	VSystolicArray_HBFP_forTesting__Trace__1 \
	VSystolicArray_HBFP_forTesting__Trace__2 \
	VSystolicArray_HBFP_forTesting__Trace__3 \
	VSystolicArray_HBFP_forTesting__Trace__4 \
	VSystolicArray_HBFP_forTesting__Trace__5 \
	VSystolicArray_HBFP_forTesting__Trace__6 \
	VSystolicArray_HBFP_forTesting__Trace__7 \
	VSystolicArray_HBFP_forTesting__Trace__8 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	VSystolicArray_HBFP_forTesting__Syms \
	VSystolicArray_HBFP_forTesting__Trace__Slow \
	VSystolicArray_HBFP_forTesting__Trace__1__Slow \
	VSystolicArray_HBFP_forTesting__Trace__2__Slow \
	VSystolicArray_HBFP_forTesting__Trace__3__Slow \
	VSystolicArray_HBFP_forTesting__Trace__4__Slow \
	VSystolicArray_HBFP_forTesting__Trace__5__Slow \
	VSystolicArray_HBFP_forTesting__Trace__6__Slow \
	VSystolicArray_HBFP_forTesting__Trace__7__Slow \
	VSystolicArray_HBFP_forTesting__Trace__8__Slow \
	VSystolicArray_HBFP_forTesting__Trace__9__Slow \
	VSystolicArray_HBFP_forTesting__Trace__10__Slow \
	VSystolicArray_HBFP_forTesting__Trace__11__Slow \
	VSystolicArray_HBFP_forTesting__Trace__12__Slow \
	VSystolicArray_HBFP_forTesting__Trace__13__Slow \
	VSystolicArray_HBFP_forTesting__Trace__14__Slow \
	VSystolicArray_HBFP_forTesting__Trace__15__Slow \
	VSystolicArray_HBFP_forTesting__Trace__16__Slow \
	VSystolicArray_HBFP_forTesting__Trace__17__Slow \
	VSystolicArray_HBFP_forTesting__Trace__18__Slow \
	VSystolicArray_HBFP_forTesting__Trace__19__Slow \
	VSystolicArray_HBFP_forTesting__Trace__20__Slow \
	VSystolicArray_HBFP_forTesting__Trace__21__Slow \
	VSystolicArray_HBFP_forTesting__Trace__22__Slow \
	VSystolicArray_HBFP_forTesting__Trace__23__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_cov \
	verilated_vcd_c \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
