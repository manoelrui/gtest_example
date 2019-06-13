file(GLOB SRCS *.cpp)

ADD_EXECUTABLE(testComplexNumber ${SRCS})

TARGET_LINK_LIBRARIES(
  testComplexNumber
  complexNumber
  libgtest
  libgmock
)

add_test(NAME testComplexSuite COMMAND testComplexNumber)
