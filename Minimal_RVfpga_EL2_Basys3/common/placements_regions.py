#
#  Placements script with different regions for each memory section
#

# Get references to the memories
iccm = link.core.mems["ICCM"]
dccm = link.core.mems["DCCM"]
ddr = link.core.mems["DDR"]

# Define memory sizes
# ICCM: Instruction TCM
iccm_total_size = 0x80000  # 512 KB
# DCCM: Data TCM
dccm_total_size = 0x40000  # 256 KB
# DDR: External RAM
ddr_total_size = 0x10000  # 64 KB

# Define regions in ICCM (Instruction TCM)
iccm_code_size = int(0.75 * iccm_total_size)  # 75% for code (384 KB)
iccm_rodata_size = iccm_total_size - iccm_code_size  # 25% for read-only data (128 KB)

# Define regions in DCCM (Data TCM)
dccm_initdata_size = int(0.50 * dccm_total_size)  # 50% for initialized data (128 KB)
dccm_uninitdata_size = int(0.25 * dccm_total_size)  # 25% for uninitialized data (64 KB)
dccm_stack_size = dccm_total_size - (dccm_initdata_size + dccm_uninitdata_size)  # Remaining 25% for stack (64 KB)

# Define a region in DDR if needed
# DDR might be used if DCCM is exhausted, or for data that can be more loosely accessed
# Here it is used to keep symbols close enough to prevent relocation issues.
ddr_region_size = ddr_total_size  # Using full DDR for other data

# Add regions to ICCM
iccm_code_region = Range(iccm.base_addr, iccm_code_size)
iccm_rodata_region = Range(iccm.base_addr + iccm_code_size, iccm.base_addr + iccm_code_size + iccm_rodata_size)

iccm[0] += iccm_code_region
iccm[1] += iccm_rodata_region

# Add regions to DCCM
dccm_initdata_region = Range(dccm.base_addr, dccm_initdata_size)
dccm_uninitdata_region = Range(dccm.base_addr + dccm_initdata_size, dccm.base_addr + dccm_initdata_size + dccm_uninitdata_size)
dccm_stack_region = Range(dccm.base_addr + dccm_initdata_size + dccm_uninitdata_size, dccm.base_addr + dccm_initdata_size + dccm_uninitdata_size + dccm_stack_size)

dccm[0] += dccm_initdata_region
dccm[1] += dccm_uninitdata_region
dccm[2] += dccm_stack_region

# Optionally add a region to DDR (full range)
ddr_region = Range(ddr.base_addr, ddr_region_size)
ddr += ddr_region

# Move the boot address to the beginning of ICCM
link.core.boot_addr = iccm.base_addr

# Assign layout to specific regions
link.layout.code = iccm[0]  # First ICCM region for code
link.layout.rodata = iccm[1]  # Second ICCM region for read-only data

link.layout.initdata = dccm[0]  # First DCCM region for initialized data
link.layout.uninitdata = dccm[1]  # Second DCCM region for uninitialized data
link.layout.stack = dccm[2]  # Third DCCM region for stack

# Print layout details for verification
print(f"ICCM: Code starts at {iccm_code_region.baseOffset:#x}, size {iccm_code_region.size:#x}")
print(f"ICCM: Read-only data starts at {iccm_rodata_region.baseOffset:#x}, size {iccm_rodata_region.size:#x}")
print(f"DCCM: Initialized data starts at {dccm_initdata_region.baseOffset:#x}, size {dccm_initdata_region.size:#x}")
print(f"DCCM: Uninitialized data starts at {dccm_uninitdata_region.baseOffset:#x}, size {dccm_uninitdata_region.size:#x}")
print(f"DCCM: Stack starts at {dccm_stack_region.baseOffset:#x}, size {dccm_stack_region.size:#x}")
print(f"DDR: Region starts at {ddr_region.baseOffset:#x}, size {ddr_region.size:#x}")
