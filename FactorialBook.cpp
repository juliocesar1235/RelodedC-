#include<iostream>
#include<math.h>

using namespace std;

double factorial(int n){
  double dFact = 1;

  for (int i = 1; i<= n; i++) {
    dFact *= i;
  }
  return dFact;
}
void print_out(int n){
  for (int j = 1; j<= n; j++) {
    std::cout << j<<" ";
  }
}
int main(int argc, char const *argv[]) {
  int n;
  std::cin >> n;
  std::cout << "Factorial: " << factorial(n)<< '\n';
  print_out(n);
  return 0;
}
