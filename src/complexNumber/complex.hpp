#ifndef __COMPLEX_HPP__
#define __COMPLEX_HPP__

#include <iostream>

class Complex {
private:
  float a_, b_;
  
public:
  Complex();
  Complex(const float& a, const float& b);

  float getReal() const;
  float getIm() const;
  friend std::ostream& operator<<(std::ostream& os, const Complex& c) {
    if (c.a_ == 0 && c.b_ == 0) {
      os << "0";
    } else if (c.a_ == 0 && c.b_ != 0) {
      os << c.b_ << "i";
    } else if (c.a_ != 0 && c.b_ == 0) {
      os << c.a_;
    } else {
      os << c.a_ << "+" << c.b_ << "i";
    }
    return os;
  }
};

int sum(int a, int b);

#endif
