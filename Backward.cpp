#include <iostream>
/*
  Backward.cpp

  This program gets n numbers from the user and stores them in an array
  then a displays the numbers inside the array but Backwards with a for
  loop.

  Author: JulioGutierrez
  13 de Octubre de 2017, 05:00 PM
  version 1.0
*/
using namespace std;



/*
 Get Value

 This function gets the n value from the user and stores it in a variable, also
 makes a loop to asked n numbers and stores them in an array of integers

 Parameters
  iArrValues integer array to store n numbers from the user
 	iN integer variable to store the value of n from the user
 Returns
 	none its a void function
*/
void GetValues(int iArrValues[], int &iN)
{
  //  Getting the value of n and stores it in a variable
  std::cin >> iN;

  //  Condition if iN is greater than 0 and iN is lower than 21
  if(iN > 0 && iN<21)
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
  Display

  This function has a condition if iN is lower than 21 then perform a for loop
  decreasing the value of j and displaying the values inside the array

  Parameters
    iArrValues integer array to store n numbers from the user
  	iN integer variable to store the value of n from the user
  Returns
  	none its a void function

*/
void Display(int iArrValues[], int iN)
{
  //  Condition if the iN value is lower than 21
  if(iN < 21)
  {
    //  for loop from iN-1 to the final position of the array, in this case decreasing
    int iCounter = 0;
    for (int i = iN-1; i >= (iN-1)/2;i--) {

    }
    for (size_t j = 0; j < iN; j++) {
      std::cout << iArrValues[j] << '\n';
    }
  }
}
/*
  main

  In this function gets declare iN and an integer array iArrValues with a length
  of 20 and calls the function GetValues with parameters the iArrValues and iN,
  also calls the display function with the corresponding parameters.

  Parameters
    none
  Returns
    0 which the number of errors
*/
int main(int argc, char const *argv[]) {
  //  Declaring iN integer variable
  int iN;
  //  Declaring iArrValues integer array with a length of 20
  int iArrValues[20];
  //  Calling functions with the corresponding parameters
  GetValues(iArrValues,iN);
  Display(iArrValues,iN);
  return 0;
}
