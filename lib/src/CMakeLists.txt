# lib src dir CMake

set(LIB
    SideEventLoopLib)

add_library(${LIB}
    SHARED
    EventLoop.cpp)
target_include_directories(${LIB}
	PUBLIC 
    ${side-event-loop_SOURCE_DIR}/lib/include)
