#include <iostream>
/*
   Max.cpp

   This program gets n numbers and stores them in an array of integers
   and gets the average of all the numbers and compare every number to the
   average and if its greater than the avr display them.

   Author: JulioGutierrez
   23 de Octubre de 2017, 10:30 AM
   version 2.0
*/
using namespace std;
/*
  GetValues

  This function gets the values from the user and stores them in an array
  of integers

  Parameters:
     iArrValues stores the values of the array
     iN stores the n value of the user

  Returns
     None because is a void function

*/
void GetValues(int iArrValues[], int &iN)
{
    //  Getting the iN value from the user
    std::cin >> iN;

    //  Condition if iN is greater than 0 and iN is lower than 16
    if (iN > 0 && iN<16)
    {
        //  For loop from 0 to iN
      for (int i = 0; i < iN; i++)
      {
        //  Getting the values from the user and store them in an array
        std::cin >> iArrValues[i];
      }
    }
}
/*
  Maximum

  This function compare every value store in the array and checks which is the
  greatest of them all.
  Parameters
     iArrValues stores the values of the array
     iN stores the n value of the user
  Returns
     NONE because is a void function
*/
void Maximum(int iArrValues[], int iN)
{
  if(iN > 0 && iN < 16)
  {
    int iMax = iArrValues[0];

    for (int j = 0; j < iN; j++)
    {
      if(iArrValues[j] > iMax)
      {
        iMax = iArrValues[j];
      }
    }
    std::cout << iMax << '\n';
  }
}
/*
  Main

  In this function gets declare iN and an integer array iArrValues with a length
  of 15, then calls the GetValues function and then the DisplayAbove both with
  the corresponding Parameters.

  Parameters
    none
  Returns
    0 which the number of errors
*/
int main(int argc, char const *argv[]) {
  //  Declaring and initializing the iN variable and the array iArrValues
  int iN;
  int iArrValues[15];

  //  Calling GetValues function and Maximum function with corresponding Parameters
  GetValues(iArrValues,iN);
  Maximum(iArrValues,iN);

  //  return the number of errorss
  return 0;
}
