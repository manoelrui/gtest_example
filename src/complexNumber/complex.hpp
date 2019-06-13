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
  
  friend Complex operator+(const Complex& c1, const Complex& c2) {
    return {c1.a_ + c2.a_, c1.b_ + c2.b_};
  }

  friend Complex operator-(const Complex& c1, const Complex& c2) {
    return {c1.a_ - c2.a_, c1.b_ - c2.b_};
  }

  friend Complex operator*(const Complex& c1, const Complex& c2) {
    return {(c1.a_ * c2.a_) - (c1.b_ * c2.b_), (c1.a_ * c2.b_) + (c1.b_ * c2.a_)};
  }
  
  friend Complex operator/(const Complex& c1, const Complex& c2) {
    auto denominator = (c2.a_*c2.a_) + (c2.b_ * c2.b_);
    return {
      ((c1.a_ * c2.a_) + (c1.b_ * c2.b_))/denominator,
      ((c1.a_ * c2.b_) - (c1.b_ * c2.a_))/denominator
    };
  }

};


#endif
