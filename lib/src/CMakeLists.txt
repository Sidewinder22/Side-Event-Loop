# lib src dir CMake

set(LIB side-event-loop-lib)

add_library(${LIB}
    SHARED
    Event.cpp
    EventQueue.cpp
    EventLoop.cpp
)

target_include_directories(${LIB}
	# For the public header files
	PUBLIC 
    ${side-event-loop_SOURCE_DIR}/lib/include
    # For only private header files 
    PRIVATE
    ${side-event-loop_SOURCE_DIR}/lib/src
)
