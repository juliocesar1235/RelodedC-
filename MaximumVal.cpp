#include <iostream>
#include <math.h>
using namespace std;

double maximum( double a, double b, double c )
{
   double max = ( a < b ) ? b : a;
   return ( ( max < c ) ? c : max );
}

int main(int argc, char const *argv[]) {
  double da, db, dc;
  std::cout << "a: " << '\n';
  cin>>da;
  std::cout << "b: " << '\n';
  cin>>db;
  std::cout << "c: " << '\n';
  cin>>dc;
  std::cout << maximum(da,db,dc) << '\n';

  return 0;
}
