file(GLOB SRCS *.cpp)

ADD_EXECUTABLE(testVec2d ${SRCS})

TARGET_LINK_LIBRARIES(
  testVec2d
  vector2d
  libgtest
  libgmock
)

add_test(NAME testVec2dSuite COMMAND testVec2d)
