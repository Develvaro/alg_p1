cmake_minimum_required(VERSION 3.6)
project(p1)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR})
set(SOURCE_FILES main.cpp Matrices.cpp fibonacci.cpp ClaseTiempo.cpp)
add_executable(p1 ${SOURCE_FILES})