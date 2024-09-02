#!/usr/bin/env python3

#                         TestScript.py
#
# This is a script to automate the test of the RISC-V Architecture.
# It uses Verilator_Trace simulator. Its source must be provided.
#
# This script is designed for a specific configuration of folders.
# It automatically reconfigures the cmake files of a test folder,
# builds both the test and the simulator.
# Then, it runs the simulation and verifies the .vcd file in order
# to check if the architecture is correctly executing the
# Assembly code.
#
# In order for this script to correctly verify the assembly,
# a manual inspection must be provided below.

import subprocess
import time
import os
import signal
import argparse
from vcd.reader import TokenKind, tokenize

###########################################################
#       Define Tests and Simulators
###########################################################

# Predefined Tests
tests = {
    "Test1": {
        "path": "Minimal_RVfpga_EL2_Basys3/Tests/Test1",
        "expected_values": [
            (28600, {"dec_i0_pc_d_ext": "0x0000085C", "dec_i0_instr_d": "0x00E3F3B3", "result": "0x00000016"}),
            (30280, {"dec_i0_pc_d_ext": "0x0000085C", "dec_i0_instr_d": "0x00E3F3B3", "result": "0x0000000E"}),
            (31960, {"dec_i0_pc_d_ext": "0x0000085C", "dec_i0_instr_d": "0x00E3F3B3", "result": "0x0000000E"}),
        ],
    }
    # Add more tests here if needed
}

# Predefined Simulators
simulators = {
    "MinimalRVfpga": {
        "sim_path": "Minimal_RVfpga_EL2_Basys3/Simulators/verilatorSIM_Trace",
        "vivado_path": "Minimal_RVfpga_EL2_Basys3/MinimalRVfpga"
    },
    "RVfpga_Basys3": {
        "sim_path": "RVfpga_Basys3/Simulators/verilatorSIM_Trace",
        "vivado_path": "RVfpga_Basys3/RVfpga"
    }
    # Add more simulators here if needed
}

###########################################################
#       Argument Parsing
###########################################################

parser = argparse.ArgumentParser(description='Automate the test of the RISC-V Architecture using Verilator.')

# Add command-line options for choosing test and simulator
parser.add_argument('-t', '--test', choices=tests.keys(), help='Select a predefined test to run.', default='Test1')
parser.add_argument('-s', '--simulator', choices=simulators.keys(), help='Select a predefined simulator to use.', default='MinimalRVfpga')
parser.add_argument('-vivado', type=str, help='Run Vivado and generate utilization report. Provide the Vivado project name.')

args = parser.parse_args()

###########################################################
#       Validate and Use Arguments
###########################################################

# Determine which test and simulator to use
test_config = tests[args.test]
test_path = test_config["path"]
test_name = args.test
expected_values = test_config["expected_values"]

simulator_config = simulators[args.simulator]
simulator_path = simulator_config["sim_path"]
vivado_path = simulator_config["vivado_path"]

###########################################################
#       Define Vivado Functionality
###########################################################

def run_vivado_report(vivado_path, vivado_name):
    vivado_project_path = os.path.join(vivado_path, f"{os.path.basename(vivado_path)}.xpr")
    report_dir = os.path.join(vivado_path, "Utilization Reports (DCCM - ICCM)")

    if not os.path.exists(report_dir):
        os.makedirs(report_dir)

    report_path = os.path.join(report_dir, f"{vivado_name}.xlsx")
    
    vivado_commands = f"""
    start_gui
    open_project {vivado_project_path}
    reset_run synth_1
    launch_runs synth_1 -jobs 2
    wait_on_run synth_1
    update_compile_order -fileset sources_1
    open_run synth_1 -name synth_1
    report_utilization -name {vivado_name} -spreadsheet_file {report_path}
    """

    tcl_file_path = os.path.join(vivado_path, "run_vivado.tcl")

    with open(tcl_file_path, 'w') as tcl_file:
        tcl_file.write(vivado_commands)

    subprocess.run(["vivado", "-mode", "batch", "-source", tcl_file_path])

    print(f"\nVivado utilization report generated at: {report_path}\n")

###########################################################
#       Run Simulation and Verify Results
###########################################################

# Step 1: Clean and reconfigure CMake
build_dir = os.path.join(test_path, "build")

# Remove CMakeCache.txt and CMakeFiles directory
subprocess.run(["rm", "-rf", os.path.join(test_path, "build/")])

# Reconfigure using CMake
cmake_command = [
    "/opt/imgtec/catapult-sdk_1.10.0/build/bin/cmake",
    "--no-warn-unused-cli",
    "-DPLATFORM:STRING=RVFPGABASYS3",
    "-DCMAKE_EXPORT_COMPILE_COMMANDS:BOOL=TRUE",
    "-DCMAKE_BUILD_TYPE=Debug",
    "-DCMAKE_TOOLCHAIN_FILE=/opt/imgtec/catapult-sdk_1.10.0/build/riscv-toolchain-gcc-elf.cmake",
    "-S", test_path,
    "-B", build_dir,
    "-G", "Ninja"
]

subprocess.run(cmake_command)


# Step 2: Build the project using the CMake build command

build_command = [
    "/opt/imgtec/catapult-sdk_1.10.0/build/bin/cmake",
    "--build", build_dir,
    "--config", "Debug",
    "--target", "all", "--"
]

subprocess.run(build_command)

# Step 3: Build the simulator
subprocess.run(["make", "clean"], cwd=simulator_path)
subprocess.run(["make"], cwd=simulator_path)

# Step 4: Build the test files
commandline_dir = os.path.join(test_path, "commandLine")
vh_file = f"{test_name}.vh"
dis_file = f"{test_name}.dis"

# Run "make Test1.vh"
subprocess.run(["make", vh_file], cwd=commandline_dir)

# Run "make Test1.dis"
subprocess.run(["make", dis_file], cwd=commandline_dir)

# Step 5: Run the simulation
simulation_command = [
    "../../../Simulators/verilatorSIM_Trace/Vrvfpgasim",
    f"+ram_init_file={vh_file}",
    "+vcd=1"
]

# Run the simulation process
process = subprocess.Popen(simulation_command, cwd=commandline_dir)

# Step 6: Wait for 5 seconds and stop the simulation
time.sleep(5)
process.send_signal(signal.SIGINT)  # Send CTRL+C to stop the process

# Step 7: Check if the trace.vcd file was generated
vcd_path = os.path.join(commandline_dir, "trace.vcd")  # Update path to where the VCD file is generated
if not os.path.exists(vcd_path):
    raise FileNotFoundError("VCD file not generated!")
else:
    print("\nVCD file generated!\n")

# # If predefined test is selected, perform the check
# if expected_values:
#     # Step 8: Parse the VCD file and check the signal values at specific timestamps
#     with open(vcd_path, 'rb') as vcd_file:
#         tokens = tokenize(vcd_file)
#         current_timestamp = None
#         signals_to_check = {sig: None for sig in expected_values[0][1].keys()}
#         signals_values = {sig: None for sig in signals_to_check.keys()}
#         check_index = 0

#         for token in tokens:
#             if token.kind == TokenKind.CHANGE_TIME:
#                 current_timestamp = token.data

#             elif token.kind in (TokenKind.CHANGE_SCALAR, TokenKind.CHANGE_VECTOR):
#                 value = token.data.value
#                 reference = token.data.id_code

#                 # Check if this reference matches any of the signals we're interested in
#                 for signal_name in signals_to_check.keys():
#                     if signals_to_check[signal_name] is None and signal_name == reference:
#                         signals_to_check[signal_name] = reference

#                     if signals_to_check[signal_name] == reference:
#                         signals_values[signal_name] = value

#                 # Once all signals are captured for a given timestamp, check against expected values
#                 if current_timestamp == expected_values[check_index][0]:
#                     expected_signals = expected_values[check_index][1]
#                     if all(signals_values[sig] == expected_signals[sig] for sig in expected_signals):
#                         print(f"Test {check_index + 1} Passed at {current_timestamp}ps")
#                     else:
#                         print(f"Test {check_index + 1} Failed at {current_timestamp}ps")
#                         for sig in expected_signals:
#                             print(f"Expected {sig}: {expected_signals[sig]}, Found: {signals_values[sig]}")

#                     check_index += 1
#                     if check_index >= len(expected_values):
#                         break

# Step 8: Run Vivado utilization report (if requested)
if args.vivado:
    run_vivado_report(vivado_path, args.vivado)


#     # Final Check: Ensure all tests were conducted
#     if check_index < len(expected_values):
#         print(f"Not all tests could be conducted. Last timestamp reached: {current_timestamp}ps")
# else:
#     print("Custom test selected. Manual verification is required.")