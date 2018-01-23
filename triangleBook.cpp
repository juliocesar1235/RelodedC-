#include<iostream>
#include<math.h>

using namespace std;
int triangle(int n){
  int sum = 0;
  for (int i = 1; i <= n; i++) {

    sum += i;
  }
  return sum;
}
int main(int argc, char const *argv[]) {
  int n;
  std::cout << "enter the number" << '\n';
  std::cin >> n;
  std::cout << "triangle of the number is " <<triangle(n)<< '\n';
  return 0;
}
