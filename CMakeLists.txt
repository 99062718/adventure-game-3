cmake_minimum_required(VERSION 3.20 FATAL_ERROR)
project(Adventure_game_3)

set(CMAKE_C_COMPILER "gcc")
set(CMAKE_CXX_COMPILER "g++")

AUX_SOURCE_DIRECTORY(src SOURCES)
add_subdirectory(src)

find_package(PkgConfig REQUIRED)
pkg_check_modules(GTK4 REQUIRED IMPORTED_TARGET gtk4)

add_executable(app ${SOURCES})
target_link_libraries(app PRIVATE PkgConfig::GTK4)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wpedantic -g -fsanitize=address -I${CMAKE_CURRENT_LIST_DIR}/include")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -I${CMAKE_CURRENT_LIST_DIR}/include")