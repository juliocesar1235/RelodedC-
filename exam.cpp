#include <iostream>

int main(int argc, char const *argv[]) {
  int iCounter = 200;
  while (iCounter >= 1) {
    iCounter = iCounter / 4;
  }
  std::cout << iCounter << '\n';
  return 0;
}
