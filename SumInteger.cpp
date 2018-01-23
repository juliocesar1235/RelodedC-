#include <iostream>
#include <cmath>


using namespace std;

int main(int argc, char const *argv[]) {
  int n, iSum;
  std::cin >> n;
  if(abs(n) < pow(10,4)){
    iSum = 0;
    if (n >= 0)
    {
      for (int i = 1; i <= n; i++) {
        iSum = iSum + i;
      }
    }else
    {
      for (int i = -1; i >= n; i--) {
        iSum = iSum + i;
      }
    }
   std::cout << iSum << '\n';
 }
  return 0;
}
