#include <iostream>
#include <math.h>
using namespace std;
/*double maximum( double a, double b, double c )
{
  double dMax;
  if (a>= b && a>=c)
  {
    dMax = a;
  }
  else if(b>= a && b>=c)
  {
    dMax = b;
  }
  else
  {
    dMax = c;
  }
  return dMax;
}
*/
void maximum(double a, double b, double c){
  double max;
  if(a>=b && a>=c){
    max = a;
  }
  else if(b>= a && b>= c){
    max = b;

  }else{
    max = c;
  }
  std::cout <<"The maximum: " <<max<< '\n';
}
int main(int argc, char const *argv[])
{
  double da,db,dc;
  std::cout << "a:" << '\n';
  std::cin >> da;
  std::cout << "b:" << '\n';
  std::cin >> db;
  std::cout << "c:" << '\n';
  std::cin >> dc;


  maximum(da,db,dc);
  return 0;
}
