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
	VSystolicArray_HBFP_forTesting_HBFP_PE \
	VSystolicArray_HBFP_forTesting_HBFP_PE__1 \
	VSystolicArray_HBFP_forTesting_HBFP_PE__2 \
	VSystolicArray_HBFP_forTesting_HBFP_PE__3 \
	VSystolicArray_HBFP_forTesting_HBFP_PE__4 \
	VSystolicArray_HBFP_forTesting_HBFP_PE__5 \
	VSystolicArray_HBFP_forTesting_HBFP_PE__6 \
	VSystolicArray_HBFP_forTesting_Queue \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	VSystolicArray_HBFP_forTesting__Slow \
	VSystolicArray_HBFP_forTesting__1__Slow \
	VSystolicArray_HBFP_forTesting_HBFP_PE__Slow \
	VSystolicArray_HBFP_forTesting_HBFP_PE__1__Slow \
	VSystolicArray_HBFP_forTesting_HBFP_PE__2__Slow \
	VSystolicArray_HBFP_forTesting_HBFP_PE__3__Slow \
	VSystolicArray_HBFP_forTesting_Queue__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	VSystolicArray_HBFP_forTesting__Trace \
	VSystolicArray_HBFP_forTesting__Trace__1 \
	VSystolicArray_HBFP_forTesting__Trace__2 \
	VSystolicArray_HBFP_forTesting__Trace__3 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	VSystolicArray_HBFP_forTesting__Syms \
	VSystolicArray_HBFP_forTesting__Trace__Slow \
	VSystolicArray_HBFP_forTesting__Trace__1__Slow \
	VSystolicArray_HBFP_forTesting__Trace__2__Slow \
	VSystolicArray_HBFP_forTesting__Trace__3__Slow \
	VSystolicArray_HBFP_forTesting__Trace__4__Slow \
	VSystolicArray_HBFP_forTesting__Trace__5__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_cov \
	verilated_vcd_c \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
