#include <iostream>

int main() {
  int x, y, z;
  int n, m, l;
  std::cin >> x >> y >> z;
  std::cin >> n >> m >> l;

  for (int i = -999; i <= 999; ++i) {
    for (int j = -999; j <= 999; ++j) {
      if ((x * i) + (y * j) == z) {
        if ((n * i) + (m * j) == l) {
          std::cout << i << " " << j << "\n";
        }
      }
    }
  }
}