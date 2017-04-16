#include <iostream>
#include <vector>

int main() {

  const unsigned int top = 999, top_3 = top / 3, top_5 = top / 5,
                     top_15 = top / 15;
  const unsigned int sum_3 = 3 * top_3 * (top_3 + 1) / 2;
  const unsigned int sum_5 = 5 * top_5 * (top_5 + 1) / 2;
  const unsigned int sum_15 = 15 * top_15 * (top_15 + 1) / 2;

  std::cout << "result:\t" << sum_3 + sum_5 - sum_15 << '\n';

  std::cout << top_3 << "  " << top_5 << "  " << top_15 << '\n';

  return 0;
}
