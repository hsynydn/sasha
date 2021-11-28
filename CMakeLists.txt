cmake_minimum_required(VERSION 3.1)
project(sasha)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/src)

add_executable(sasha_test
	${CMAKE_CURRENT_SOURCE_DIR}/src/test.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/src/window.cpp
)

target_link_libraries(sasha_test ncurses)