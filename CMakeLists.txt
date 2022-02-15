cmake_minimum_required(VERSION 3.1)
project(sasha)

set(CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake" ${CMAKE_MODULE_PATH})

include(GetGitRevisionDescription)
git_describe(VERSION --tags)

string(REGEX REPLACE "^v([0-9]+)\\..*" "\\1" VERSION_MAJOR "${VERSION}")
string(REGEX REPLACE "^v[0-9]+\\.([0-9]+).*" "\\1" VERSION_MINOR "${VERSION}")
string(REGEX REPLACE "^v[0-9]+\\.[0-9]+\\.([0-9]+).*" "\\1" VERSION_PATCH "${VERSION}")
string(REGEX REPLACE "^v[0-9]+\\.[0-9]+\\.[0-9]+(.*)" "\\1" VERSION_SHA1 "${VERSION}")
# set(VERSION_SHORT "${VERSION_MAJOR}.${VERSION_MINOR}.${VERSION_PATCH}")

message(${VERSION})
message(${VERSION_MAJOR})
message(${VERSION_MINOR})
message(${VERSION_PATCH})
# message(${VERSION_SHA1})

configure_file(${CMAKE_CURRENT_SOURCE_DIR}/cmake/version.hpp.in ${CMAKE_CURRENT_SOURCE_DIR}/version.hpp)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/src)

add_executable(sasha_test
	${CMAKE_CURRENT_SOURCE_DIR}/src/test.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/src/window.cpp
)

target_link_libraries(sasha_test ncurses)