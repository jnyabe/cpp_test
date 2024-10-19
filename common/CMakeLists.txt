cmake_minimum_required(VERSION 3.13)
set (CMAKE_CXX_STANDARD 17)
project(commonn, CXX)
add_library(common STATIC mutex.cpp rwmutex.cpp thread.cpp cond.cpp)

