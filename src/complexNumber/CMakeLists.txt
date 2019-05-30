file(GLOB SOURCES *.cpp *.hpp)

add_library(complexNumber STATIC ${SOURCES})

target_include_directories(complexNumber PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
