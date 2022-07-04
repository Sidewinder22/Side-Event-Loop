# Main CMake file

cmake_minimum_required(VERSION 3.20)

project(side-event-loop VERSION 0.1)

set(CMAKE_CXX_STANDARD 17)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)

add_subdirectory(lib)
add_subdirectory(app)
