#include "complex.hpp"

Complex::Complex() : a_(0), b_(0) {

}

Complex::Complex(const float&a, const float& b) : a_(a), b_(b) {

}

float Complex::getReal() const {
  return a_;
}

float Complex::getIm() const {
  return b_;
}
  
