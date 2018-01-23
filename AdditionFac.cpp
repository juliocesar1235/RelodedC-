#include <iostream>
#include <math.h>

using namespace std;

double factorial(int iN)
{
  //Intialition the multiplication variable
  double dMult = 1;
  //Make a loop to multiply
  for(int i = 1; i<= iN; i++)
  {
    dMult *= i;

  }
  //returning the factorial
  return dMult;
}

double Addition(int iN)
{
  //Intializing a variable to Addition
  double dAdd = 0;
  //Make a loop to add from 1 to N
  for(int i = 1; i<= iN; i++)
  {
    dAdd += pow(2,i)/factorial(i);
  }
  //returning dAdd
  return dAdd;
}
int main(int argc, char const *argv[]) {
  std::cout <<  Addition(4)<< '\n';
  return 0;
}
