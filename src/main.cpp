#include <iostream>
#include "complex.hpp"

int main(int argc, char** argv) {
  Complex c1;
  Complex c2{6, 81};
  std::cout << "Hey cmake" << std::endl;
  std::cout << "The complex number 1 is: " << c1 << std::endl;
  std::cout << "The complex number 2 is: " << c2 << std::endl;
  return 0;
}
