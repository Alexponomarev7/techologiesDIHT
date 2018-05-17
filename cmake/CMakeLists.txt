cmake_minimum_required(VERSION 3.10)

project(TP_cpython)

set(SOURCE ${CMAKE_SOURCE_DIR}/B/main.cpp)

find_package(PythonInterp 3.5 REQUIRED)

execute_process(
	WORKING_DIRECTORY A
	COMMAND ${PYTHON_EXECUTABLE} script.py
	COMMAND echo success create "index.h"
)

include_directories(${CMAKE_SOURCE_DIR})

add_executable(result ${SOURCE})
