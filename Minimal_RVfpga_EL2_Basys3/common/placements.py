#
#  Placements script 
#

# Get references to the memories
iccm = link.core.mems["ICCM"]
dccm = link.core.mems["DCCM"]
ddr = link.core.mems["DDR"]

#Create an offset for the boot
offset = 0x0800

# Create regions
# Regions are created from a base_addr offset (not a specific address) and a size
# Global symbols can not be referenced relative to the PC farther than +-2GB in
# RV64. This memory range keeps symbols within such limits.

ddr += Range(0x0 + offset , ddr.size - offset) # (the offset is for the boot)

# Set the boot address to the start of ICCM
link.core.boot_addr = ddr.base_addr

# Directly assign entire memory blocks without defining specific regions
# ICCM (Instruction TCM) for code and read-only data
link.layout.code = iccm
link.layout.rodata = iccm


# DCCM (Data TCM) for initialized data, uninitialized data, and stack
link.layout.initdata = dccm
link.layout.uninitdata = dccm
link.layout.stack = dccm


# Print layout details for verification
print(f"ICCM base address: {iccm.base_addr:#x}, size: {iccm.size:#x}")
print(f"DCCM base address: {dccm.base_addr:#x}, size: {dccm.size:#x}")


