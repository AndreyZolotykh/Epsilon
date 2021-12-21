#include <iostream>
#include <iomanip>
#include <limits>

int main() {
  int errors = 0;
  for (double b = 1; b < 100; ++b) {
    for (int d = 1; d < 100; ++d) {
      if ( (b/d)*d != b) {          // b / d * d ... should == b
        // if ( abs((b/d)*d - b) > std::numeric_limits<double>::epsilon()) {
        ++errors;
        std::cout << std::setprecision(30) << "b = " << b << "\td = " << d << std::endl;
        std::cout << std::setprecision(30) << "(b/d)*d = " << (b/d)*d << std::endl;
      }    
    }
  }
  printf("errors: %d\n", errors);
  std::cout << std::setprecision(30) << "std::numeric_limits<double>::epsilon() = " << std::numeric_limits<double>::epsilon() << std::endl;
}
