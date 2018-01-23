#include <iostream>
/*
   EvenPos.cpp

   This program displays all the even numbers and positives inside the list
   given by the user and displays also the sum of all the values that pass
   this Conditions.


   Author: JulioGutierrez
   24 de Octubre de 2017, 10:30 AM
   version 1.0
*/
using namespace std;
/*
 GetValues

 This function gets the n value from the user and stores it in a variable, also
 makes a loop to asked n numbers and stores them in an array of integers

 Parameters
  iArrValues1 integer array to store n numbers from the user
  iN integer variable to store the value of n from the user
 Returns
  none its a void function
*/
void GetValues(int iArrValues1[],int &iN){
  //  Getting the iN value from the user
  std::cin >> iN;
  //  Condition if iN is greater than 0 and iN is lower than 16
  if (iN > 0 && iN < 11)
  {
      //  For loop from 0 to iN
    for (int i = 0; i < iN; i++)
    {
      //  Getting the values from the user and store them in an array
      std::cin >> iArrValues1[i];
    }
  }
}
/*
Display

This function has a condition if iN is lower than 11 then perform a for loop
  increasing the value of j and displaying the values inside the array when
  the value in the j position is even and positive.

Parameters
  iArrValues1 integer array to store n numbers from the user
  iN integer variable to store the value of n from the user
Returns
  none its a void function
*/
void Display(int iArrValues1[],int &iN) {
  //  if condition when iN is lower than 10
  if(iN > 0 && iN < 11)
  {
    //  Declaring and initializing sumatory variable
    int iSum = 0;

    //  for loop starting from 0 to iN
    for (int j = 0; j < iN; j++) {
      //  If condition when iArrValues1 in position j is positive and even number
      if(iArrValues1[j] >= 0 && iArrValues1[j] % 2 == 0){
        //  displaying the value in position j inside the iArrValues1
        std::cout << iArrValues1[j] << '\n';
        //  adding to the iSum variable the value in j position
        iSum = iSum + iArrValues1[j];
      }
    }

    //  Displaying the result
    std::cout << iSum << '\n';
  }
}
/*
  main

  In this function gets declare iN and an integer array iArrValues1 with a length
  of 10, then calls the GetValues function and then the Display both with
  the corresponding Parameters.

  Parameters
    none
  Returns
    0 which the number of errors

*/
int main(int argc, char const *argv[]) {
  //  declaring and intializing the iArrValues array and iN
  int iArrValues1[10],iN;

  //  Calling GetValues and Display functions with the corresponding Parameters
  GetValues(iArrValues1,iN);
  Display(iArrValues1,iN);

  //  Returns the number of errors
  return 0;
}
