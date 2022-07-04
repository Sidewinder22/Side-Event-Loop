# app src dir CMake

set(LIB
    SideEventLoopLib)
set(APP
    SideEventLoop)

add_executable(${APP}
    main.cpp)
target_link_libraries(${APP}
    PRIVATE
    ${LIB})
