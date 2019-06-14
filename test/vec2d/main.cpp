#include <gtest/gtest.h>
#include <sstream>
#include <string>
#include "vector2d.hpp"


// Test constructores
TEST(Vector2dSuite, TestDefaultConstructor) {
  Vector2d v;
  ASSERT_EQ(0, v.x());
  ASSERT_EQ(0, v.y());
}

TEST(Vector2dSuite, TestNonDefaulConstructor) {
  Vector2d v{4, 7};
  ASSERT_EQ(4, v.x());
  ASSERT_EQ(7, v.y());
}

// Test output stream
TEST(Vector2dSuite, TestOutputStream) {
  Vector2d v{3, 11};
  std::stringstream ss;
  ss << v;
  std::string expected{"(3,11)"};
  ASSERT_TRUE(expected.compare(ss.str()) == 0);
}


int main(int argc, char** argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
