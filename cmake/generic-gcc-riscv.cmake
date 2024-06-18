# Executables used for compilation process
find_program(RISCV_CC riscv-none-elf-gcc REQUIRED)
find_program(RISCV_CXX riscv-none-elf-g++ REQUIRED)
find_program(RISCV_OBJCOPY riscv-none-elf-objcopy REQUIRED)
find_program(RISCV_SIZE_TOOL riscv-none-elf-size REQUIRED)
find_program(RISCV_OBJDUMP riscv-none-elf-objdump REQUIRED)

# Mandatory toolchain's variables definition
set(CMAKE_SYSTEM_NAME Generic)
set(CMAKE_SYSTEM_PROCESSOR riscv)
set(CMAKE_C_COMPILER ${RISCV_CC})
set(CMAKE_CXX_COMPILER ${RISCV_CXX})

# Bypass compiler sanity test
set(CMAKE_TRY_COMPILE_TARGET_TYPE "STATIC_LIBRARY")
