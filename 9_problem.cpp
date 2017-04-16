#include <array>
#include <cmath>
#include <iostream>
#include <vector>

int main() {

  const unsigned int a0 = 331, b0 = 334, c0 = 335, c_range = 499 - c0 + 1;
  // c goes always up. From 335, to 499. 499-335+1 = 165 posible values.

  for (size_t i = 0; i < c_range; ++i) {
    const unsigned int b_max = b0 + i, a_min = a0 - 2 * i,
                       a_range = (b_max - a_min + 1) / 2;
    unsigned int a = a_min, b = b_max, c = c0 + i;
    int result = 0;

    for (size_t j = 0; j < a_range; ++j) {
      // "b" can be, at most, c - 1. Start from the maximum(b) and decrement by
      // 1, and then add it to "a". When "a" gets to b-1, a new value of "c" is
      // set.
      a = a_min + j;
      b = b_max - j;
      result = (a * a + b * b - c * c);
      std::cout << "a: " << a << "\tb: " << b << "\tc: " << c
                << "\ttotal: " << a + b + c << "\tresult: " << result << '\n';

      if (result == 0) {
        std::cout << "//// seeeeeee ////" << '\n';
        std::cout << "a: " << a << "\tb: " << b << "\tc: " << c
                  << "\ttotal: " << a + b + c << "\tresult: " << result << '\n';
        std::cout << "//// seeeeeee ////" << '\n';
      }
    }
  }

  return 0;
}
