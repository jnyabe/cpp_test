cmake_minimum_required(VERSION 2.8)

project(dp_state CXX)
set(CMAKE_CXX_STANDARD 11)
add_executable(strategy_test context.cpp concrete_strategy_a.cpp concrete_strategy_b.cpp concrete_strategy_c.cpp main.cpp)

