#include "vector2d.hpp"


Vector2d::Vector2d() : x_(0), y_(0) {

}

Vector2d::Vector2d(const float& x, const float& y) 
  : x_(x), y_(y) {

}

float Vector2d::x() {
  return x_;
}

float Vector2d::y() {
  return y_;
}
