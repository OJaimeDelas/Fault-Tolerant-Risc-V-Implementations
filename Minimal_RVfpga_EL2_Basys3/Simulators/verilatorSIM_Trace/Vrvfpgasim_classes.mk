# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vrvfpgasim.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (from --threads, --trace-threads or use of classes)
VM_C11 = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
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
	Vrvfpgasim \
	Vrvfpgasim_rvfpgasim \
	Vrvfpgasim___024unit \
	Vrvfpgasim_veerwolf_core__B0_Cbebc20 \
	Vrvfpgasim_veerwolf_core__B0_Cbebc20__1 \
	Vrvfpgasim_veerwolf_core__B0_Cbebc20__2 \
	Vrvfpgasim_veerwolf_core__B0_Cbebc20__3 \
	Vrvfpgasim_veerwolf_core__B0_Cbebc20__4 \
	Vrvfpgasim_veerwolf_core__B0_Cbebc20__5 \
	Vrvfpgasim_wb_mem_wrapper__M1000_I0 \
	Vrvfpgasim_dpram64__S1000_MB0 \
	Vrvfpgasim_axi_demux__pi3 \
	Vrvfpgasim_axi_mux__pi5 \
	Vrvfpgasim_el2_configurable_gw \
	Vrvfpgasim_axi_demux_id_counters__pi15 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vrvfpgasim__Slow \
	Vrvfpgasim_rvfpgasim__Slow \
	Vrvfpgasim___024unit__Slow \
	Vrvfpgasim_veerwolf_core__B0_Cbebc20__Slow \
	Vrvfpgasim_veerwolf_core__B0_Cbebc20__1__Slow \
	Vrvfpgasim_veerwolf_core__B0_Cbebc20__2__Slow \
	Vrvfpgasim_veerwolf_core__B0_Cbebc20__3__Slow \
	Vrvfpgasim_wb_mem_wrapper__M1000_I0__Slow \
	Vrvfpgasim_dpram64__S1000_MB0__Slow \
	Vrvfpgasim_axi_demux__pi3__Slow \
	Vrvfpgasim_axi_mux__pi5__Slow \
	Vrvfpgasim_el2_configurable_gw__Slow \
	Vrvfpgasim_axi_demux_id_counters__pi15__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vrvfpgasim__Dpi \
	Vrvfpgasim__Trace \
	Vrvfpgasim__Trace__1 \
	Vrvfpgasim__Trace__2 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vrvfpgasim__Syms \
	Vrvfpgasim__Trace__Slow \
	Vrvfpgasim__Trace__1__Slow \
	Vrvfpgasim__Trace__2__Slow \
	Vrvfpgasim__Trace__3__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_dpi \
	verilated_vcd_c \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
