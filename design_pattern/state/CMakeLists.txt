cmake_minimum_required(VERSION 2.8)

project(dp_state CXX)
set(CMAKE_CXX_STANDARD 11)
add_executable(state_test
	context.cpp
	created.cpp
	downloading.cpp
	fatal_error.cpp
	image_writing.cpp
	main.cpp
	pre_process.cpp
	started.cpp
	waiting_for_eula.cpp
	waiting_for_update.cpp
	waiting_for_update_mode.cpp)
