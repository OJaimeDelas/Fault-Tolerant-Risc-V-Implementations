cmake_minimum_required(VERSION 3.17)

project(Test ASM)

set(SOURCE 
    ${CMAKE_CURRENT_SOURCE_DIR}/src/Test1.S
)

set(TARGET_NAME Test1.elf)

option(CUSTOM_UART "Use a custom uart_send_char()" OFF)

set(SEMIHOSTING OFF)
set(UART OFF)

add_executable(${TARGET_NAME} ${SOURCE})

include(${CMAKE_CURRENT_SOURCE_DIR}/../../common/Common.cmake)
