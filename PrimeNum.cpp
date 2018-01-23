#include<iostream>
#include<math.h>

using namespace std;

int prime(int n){
  double sqrt_of_n = sqrt(n);
  for (int i = 2; i<=sqrt_of_n; i++) {
    if(n % i == 0){
      return false;
    }
  }
  return true;
}

int main(int argc, char const *argv[]) {
    int num = 1000000000;
    do {
        num++;    // you want to find a prime number greater than the argument
    } while (!prime(num));
    std::cout << num << '\n';
  return 0;
}
