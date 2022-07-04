# app src dir CMake

set(LIB side-event-loop-lib)
set(APP side-event-loop-app)

add_executable(${APP}
	main.cpp
)

target_link_libraries(${APP}
    PRIVATE
    ${LIB}
)
