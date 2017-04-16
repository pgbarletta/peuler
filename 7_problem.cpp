#include <array>
#include <cmath>
#include <iostream>
#include <vector>

int main() {

  const unsigned int top = 10001;
  unsigned int i = 8, cnt = 4;
  std::vector<unsigned int> lista_prima = {2, 3, 5, 7};

  while (true) {
    bool b_composite = false;
    for (const auto &each : lista_prima) {

      if (each > sqrt(i)) {
        b_composite = false;
        break;
      }
      if ((i % each) == 0) {
        b_composite = true;
        break;
      }
    }
    if (!b_composite) {
      lista_prima.push_back(i);
      ++cnt;
      if (cnt == top) {
        break;
      }
    }
    ++i;
  }

  std::cout << "rtdo:  " << i << '\n';
  return 0;
}
