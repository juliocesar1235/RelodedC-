#include <iostream>
#include <cstdlib>
#include <algorithm>

using namespace std;

int fun(int b){
  b = b * 10;
  return b;
  b = 20;
  return b;
}
int main(int argc, char const *argv[]) {
 int Val,op = 10;
 Val =fun(op);
 std::cout << Val << '\n';
  return 0;
}
