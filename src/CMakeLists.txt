# src dir CMake

set(LIB
    SideEventLoopLib)
set(EXEC
    SideEventLoop)

add_library(${LIB}
    SHARED
    EventLoop.cpp)
target_include_directories(${LIB}
	PUBLIC 
    ${side-event-loop_SOURCE_DIR}/include)

add_executable(${EXEC}
    main.cpp)
target_include_directories(${EXEC}
	PRIVATE 
    ${side-event-loop_SOURCE_DIR}/include)
target_link_libraries(${EXEC}
    PRIVATE
    ${LIB})
