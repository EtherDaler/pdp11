cmake_minimum_required(VERSION 3.20)
project(pdp11 C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

set(SOURCE_EXE main.c)

set(PDP_LIB ${CMAKE_SOURCE_DIR}/src/init/pdp11.h)
set(GLOBALS_LIB ${CMAKE_SOURCE_DIR}/src/init/globals.h)
set(FLAG_LIB ${CMAKE_SOURCE_DIR}/src/fun/flag_sup.c)
set(JOB_LIB ${CMAKE_SOURCE_DIR}/src/fun/job.c)
set(LOAD_DUMP_LIB ${CMAKE_SOURCE_DIR}/src/fun/load_dump.c)
set(FUNCS_LIB ${CMAKE_SOURCE_DIR}/src/fun/pdp11_funcs.c)

add_library(mylib STATIC ${FLAG_LIB} ${JOB_LIB} ${FLAG_LIB} ${JOB_LIB} ${LOAD_DUMP_LIB} ${FUNCS_LIB})

add_executable(main ${SOURCE_EXE} ${PDP_LIB} ${GLOBALS_LIB})

target_include_directories(main PUBLIC ${CMAKE_SOURCE_DIR})
target_link_libraries(main mylib)		# Линковка программы с библиотекой