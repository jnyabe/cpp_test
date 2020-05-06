cmake_minimum_required(VERSION 2.8)

project(dp_state CXX)
set(CMAKE_CXX_STANDARD 11)
add_executable(state_test state_context.cpp state.cpp state_a.cpp state_b.cpp main.cpp)

