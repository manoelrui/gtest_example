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

// Test operator <<

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

// Test addition
TEST(ComplexSuite, TestAddition) {
  Complex c1 {4, 0};
  Complex c2 {1, 29};
  float expectedReal {5};
  float expectedImaginary{29};
  auto result = c1 + c2;
  EXPECT_EQ(expectedReal, result.getReal());
  EXPECT_EQ(expectedImaginary, result.getIm());
}

// Test subtraction
TEST(ComplexSuite, TestSubtraction) {
  Complex c1 {6, 23};
  Complex c2 {4, 40};
  float expectedReal {2};
  float expectedImaginary{-17};
  auto result = c1 - c2;
  EXPECT_EQ(expectedReal, result.getReal());
  EXPECT_EQ(expectedImaginary, result.getIm());
}

// Test multiplication
TEST(ComplexSuite, TestMultiplication) {
  Complex c1 {2, 4};
  Complex c2 {1, 5};
  float expectedReal {-18};
  float expectedImaginary{14};
  auto result = c1 * c2;
  EXPECT_EQ(expectedReal, result.getReal());
  EXPECT_EQ(expectedImaginary, result.getIm());
}

// Test division
TEST(ComplexSuite, TestDivision) {
  Complex c1 {2, 8};
  Complex c2 {2, 0};
  float expectedReal {1};
  float expectedImaginary{-4};
  auto result = c1 / c2;
  EXPECT_EQ(expectedReal, result.getReal());
  EXPECT_EQ(expectedImaginary, result.getIm());
}

int main(int argc, char* argv[]) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();  
}
