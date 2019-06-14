file(GLOB SOURCES *.cpp *.hpp)

add_library(vector2d STATIC ${SOURCES})

target_include_directories(vector2d PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
