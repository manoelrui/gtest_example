add_subdirectory(complexNumber)

add_executable(calculator main.cpp)

target_link_libraries(calculator complexNumber)
