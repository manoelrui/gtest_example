#include <gtest/gtest.h>
#include <string>
#include <sstream>
#include "complex.hpp"


TEST(ComplexSuite, TestGetRealPart) {
  Complex c;
  EXPECT_EQ(0, c.getReal());
}

TEST(ComplexSuite, TestGetImaginaryPart) {
  Complex c;
  EXPECT_EQ(0, c.getReal());
}

TEST(ComplexSuite, TestOutputStreamZero) {
  Complex c;
  std::stringstream ss;
  ss << c;
  std::string expected{"0"};
  EXPECT_TRUE(expected.compare(ss.str()) == 0);
}

TEST(ComplexSuite, TestOutputStreamZeroReal) {
  Complex c {0, 8};
  std::stringstream ss;
  ss << c;
  std::string expected{"8i"};
  EXPECT_TRUE(expected.compare(ss.str()) == 0);
}

TEST(ComplexSuite, TestOutputStreamZeroImaginary) {
  Complex c {33, 0};
  std::stringstream ss;
  ss << c;
  std::string expected{"33"};
  EXPECT_TRUE(expected.compare(ss.str()) == 0);
}

TEST(ComplexSuite, TestOutputStreamNonZero) {
  Complex c {7, 5};
  std::stringstream ss;
  ss << c;
  std::string expected{"7+5i"};
  EXPECT_TRUE(expected.compare(ss.str()) == 0);
}

int main(int argc, char* argv[]) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();  
}
