#include <iostream>
/*
   AboveAverage.cpp

   This program displays all the numbers above the average got from
   the sum of n numbers lower than 16.

   Author: JulioGutierrez
   16 de Octubre de 2017, 10:30 AM
   version 1.0
*/
using namespace std;

/*
 GetValues

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
  Average

  This function calculates the average of the sum of all the numbers inside
  the array iArrValues and returns the result.

  Parameters
    iArrValues integer array to store n numbers from the user
    iN integer variable to store the value of n from the user

  Returns
    dSum which is the result of the sum of all array values
*/
double Average(int iArrValues[],int iN)
{
  //  Declaring and initializing the sumatory variable
  double dSum = 0;
  //  For loop from 0 to iN
  for (int k = 0; k < iN;k++)
  {
    //  Making the operation of adding
    dSum = iArrValues[k] + dSum;

  }
  //  Performing the division to get the average and stores it in a variable
  dSum /= iN;
  //  Returning the result
  return dSum;
}
/*
Display

This function has a condition if iN is lower than 16 then perform a for loop
  increasing the value of i and displaying the values inside the array

Parameters
  iArrValues integer array to store n numbers from the user
  iN integer variable to store the value of n from the user
Returns
  none its a void function
*/
void DisplayAbove(int iArrValues[], int iN)
{
  //  if condition when iN is lower than 16
  if(iN < 16)
  {
    //  for loop starting from 0 to iN
    for(int j = 0; j<iN; j++)
    {
      //  if condition when the iArrValues in position j is greater than
      //  the average
      if(iArrValues[j] > Average(iArrValues,iN))
      {
        //  printing the values that are greater than the average
        std::cout << iArrValues[j] << '\n';
      }
    }
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
  //  declaring and initializing the iN and iArrValues variables
  int iN;
  int iArrValues[15];

  //  Calling GetValues with Parameters of iArrValues and iN to get the values
  GetValues(iArrValues,iN);
  //  Calling DisplayAbove with Parameters of iArrValues and iN to print result
  DisplayAbove(iArrValues,iN);

  //  returns the number of errors
  return 0;
}
