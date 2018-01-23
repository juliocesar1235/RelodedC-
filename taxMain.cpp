#include <iostream>
#include <math.h>
using namespace std;

double TaxFunc(double dSal){
  double Ttax;
  if(dSal >= 1000){
    Ttax = dSal * .05;

  }
  else if(dSal >= 10000){
    Ttax = dSal * .07;

  }
  else if(dSal >= 20000){
    Ttax = dSal * .10;

  }
  else if(dSal > 0){
    Ttax = dSal * .03;
  }

else{
  Ttax = 0;
  std::cout << "your salary needs to be positive" << '\n';
}
  return Ttax;
}
int main(int argc, char const *argv[]) {
  double dSal;
  std::cout << "Your salary" << '\n';
  std::cin >> dSal;

  std::cout << TaxFunc(dSal)<< '\n';
  /*if(dSal >0){
    std::cout << TaxFunc(dSal) << '\n';
  }else{
    std::cout << "your salary needs to be positive" << '\n';
  }
*/
  return 0;
}
