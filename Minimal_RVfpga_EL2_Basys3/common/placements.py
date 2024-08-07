#
#  Placements script 
#

# Get references to the memories
iccm = link.core.mems["ICCM"]
dccm = link.core.mems["DCCM"]
ddr = link.core.mems["DDR"]

#Create an offset for the boot
offset = 0x0800

# # Create regions
# iccm += Range(0x0 + offset , iccm.size - offset) # (the offset is for the boot)

# # Set the boot address to the start of ICCM
# link.core.boot_addr = iccm.base_addr

# # Directly assign entire memory blocks without defining specific regions
# # ICCM (Instruction TCM) for code and read-only data
# link.layout.code = iccm[1]
# link.layout.rodata = iccm[1]

# Create a new DDR region
ddr += Range(ddr.base_addr + offset, ddr.size - offset)

# Move the boot address to the beginning of DDR
link.core.boot_addr = ddr.base_addr

# Move code, data and stack to the new region
link.layout.code = ddr[1]
link.layout.initdata = ddr[1]


# DCCM (Data TCM) for initialized data, uninitialized data, and stack
link.layout.initdata = dccm
link.layout.uninitdata = dccm
link.layout.stack = dccm


# Print layout details for verification
print(f"ICCM base address: {iccm.base_addr:#x}, size: {iccm.size:#x}")
print(f"DCCM base address: {dccm.base_addr:#x}, size: {dccm.size:#x}")


