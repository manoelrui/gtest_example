#ifndef __VECTOR_2D_HPP__
#define __VECTOR_2D_HPP__

#include <iostream>


class Vector2d {
public:
  Vector2d();
  Vector2d(const float& x, const float& y);

  float x();
  float y();
  
  friend std::ostream& operator<<(std::ostream& os, const Vector2d& v) {
    os << "(" << v.x_ << "," << v.y_ << ")";
    return os;
  }

private:
  float x_, y_;
};

#endif

