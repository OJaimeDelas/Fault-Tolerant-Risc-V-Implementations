
    start_gui
    open_project Minimal_RVfpga_EL2_Basys3/Simulators/verilatorSIM_Trace/MinimalRVfpga/MinimalRVfpga.xpr
    reset_run synth_1
    launch_runs synth_1 -jobs 2
    wait_on_run synth_1
    update_compile_order -fileset sources_1
    open_run synth_1 -name synth_1
    report_utilization -name Teste -spreadsheet_file Minimal_RVfpga_EL2_Basys3/Simulators/verilatorSIM_Trace/Utilization Reports (DCCM - ICCM)/Teste.xlsx
    