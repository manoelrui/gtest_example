add_subdirectory(complexNumber)
add_subdirectory(vec2d)

add_executable(calculator main.cpp)

target_link_libraries(calculator complexNumber vector2d)
