#include<iostream>
#include<math.h>
using namespace std;
double avg(double x, double y){
  return (x + y) / 2;
}

int main(int argc, char const *argv[]) {
  int i = static_cast<int>(avg(3.5,10));
  std::cout << i << '\n';
  return 0;
}
