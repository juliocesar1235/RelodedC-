#include <iostream>
#include <math.h>
/*
 Addition.cpp

 This program will make a series of numbers prompt and x value and a n value
 and will display a series of numbers with a loop, of x up to the n value,
 in which the n value defines when to stop the loop.

 Author: JulioGutierrez
 23 de agosto de 2017, 09:00 PM
 version 1.0
*/
using namespace std;

/*
 GetValues

 This function asks the values of x and n to the user and validates with a loop
 if the n value is negative or is not even.

 Parameters:
    dX to store the value of x
    iN to store the value of n
 returns:
    void function that does not return nothing
*/
void GetValues(double &dX,int &iN)
{
  //  prompt the values of x and y
  cout << "Enter x: " <<'\n';
  cin >> dX;
  cout << "Enter n: " << '\n';
  cin >> iN;

  //  while loop to validate the n and asks again the value of n
  while (iN < 0 || iN % 2 != 0)
  {
    std::cout << "n has to be a positive and even number" << '\n';
    cout << "Enter n: " << '\n';
    cin >> iN;
  }
}
/*
 Addition

 Parameters:
    dX to store the value of x
    iN to store the value of n
 returns:
    void function that does not return nothing
*/
void Addition(double dX,int iN)
{
  // Declare and initializing the variables dR for the result and iNE for the exponent to 0
  double dR = 0;
  int iNE = 0;
/*
 This loop adds to the variable iNE plus 2 and makes the result and increment
 of the result of dX to the power of iNE
*/
  do {

    //  dR is incrementing by dx to the power of the iNE variable
    dR += pow(dX,iNE);

    //  Adding 2 to the variable iNE
    iNE += 2;
  } while(iNE <= iN);
  std::cout << dR << '\n';
}

/*
 main

 The main function call the others function such as GetValues and Addition
 and declare the variable x and i

 Returns:
    returns 0 as the number of errors of the program
*/
int main(int argc, char const *argv[]) {
  //  Declare variable x
  double dX;

  //  Declare the variable n
  int iN;

  //  Call the function with Parameters of dx and iN
  GetValues(dX,iN);
  Addition(dX,iN);

  return 0;
}
