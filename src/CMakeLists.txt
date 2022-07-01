# src dir CMake

set(HEADER_FILES
    EventLoop.hpp)
set(LIB
    SideEventLoopLib)
set(EXEC
    SideEventLoop)


add_library(${LIB}
    EventLoop.cpp
    ${HEADER_FILES})
target_include_directories(${LIB}
    PRIVATE
    src)

add_executable(${EXEC}
    main.cpp
    ${HEADER_FILES})
target_include_directories(${EXEC}
    PRIVATE
    src)
target_link_libraries(${EXEC}
    PRIVATE
    ${LIB})
