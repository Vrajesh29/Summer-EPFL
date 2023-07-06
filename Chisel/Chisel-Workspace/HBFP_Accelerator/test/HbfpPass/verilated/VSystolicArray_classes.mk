# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See VSystolicArray.mk for the caller.

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
	VSystolicArray \
	VSystolicArray__1 \
	VSystolicArray__2 \
	VSystolicArray__3 \
	VSystolicArray_PE \
	VSystolicArray_PE__1 \
	VSystolicArray_PE__2 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	VSystolicArray__Slow \
	VSystolicArray__1__Slow \
	VSystolicArray_PE__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	VSystolicArray__Trace \
	VSystolicArray__Trace__1 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	VSystolicArray__Syms \
	VSystolicArray__Trace__Slow \
	VSystolicArray__Trace__1__Slow \
	VSystolicArray__Trace__2__Slow \
	VSystolicArray__Trace__3__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_cov \
	verilated_vcd_c \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
