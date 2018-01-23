#include <iostream>
using namespace std;
/*
 GetValues

 This function gets the n value from the user and stores it in a variable, also
 makes a loop to asked n numbers and stores them in an array of integers

 Parameters
  iArrValues1 integer array to store n numbers from the user
  iArrValues2 integer array to store n numbers from the user
  iN integer variable to store the value of n from the user
  iN2 integer variable to store the value of n from the user
 Returns
  none its a void function
*/
void GetValues(int iArrValues1[],int iArrValues2[], int &iN, int &iN2)
{
  //  Getting the iN value from the user
  std::cin >> iN;

  //  Condition if iN is greater than 0 and iN is lower than 16
  if (iN > 0 && iN<11)
  {
      //  For loop from 0 to iN
    for (int i = 0; i < iN; i++)
    {
      //  Getting the values from the user and store them in an array
      std::cin >> iArrValues1[i];
    }
  }
  std::cin >> iN2;
  if(iN > 0 && iN<11)
  {
    for (int j = 0; j < iN2; j++)
    {
      std::cin >> iArrValues2[j];
    }
  }
}
/*
  Display

  This function gets the 2 arrays as Parameters and the

  Parameters
      iArrValues1 is an integer array
      iArrValues2  is an integer array
      iN is the integer value of n for the 1 list
      iN2 is the integer value of n for the 2 list
  Returns
     None is a void function
*/
void Display(int iArrValues1[],int iArrValues2[], int iN, int iN2)
{
  //  initializing and declaring iTemp variable
  int iTemp = 0;

  //  if condition to validate the range of the lists is positive and less than 11
  if((iN > 0 && iN < 11) && (iN2 > 0 && iN2 < 11))
  {
    //  for loop from 0 to iN
    for (int i = 0; i < iN; i++)
    {
      //  while loop when iArrValues1 in i position is greater than iArrValues2 in iTemp
      //  and iTemp is lower than iN2
      while ((iArrValues1[i] > iArrValues2[iTemp]) && (iTemp < iN2))
      {
        //  display the iArrValues2 in position iTemp
        std::cout << iArrValues2[iTemp] << '\n';
        //  increasing by 1 iTemp
        iTemp++;
      }
      //  Displaying the iArrValues1 in position i
      std::cout << iArrValues1[i] << '\n';
    }
    //  while loop when iTemp is lower than iN2
    while (iTemp < iN2){
        //  Displaying the iArrValues2 in position iTemp
        cout << iArrValues2[iTemp] << endl;
        //  Increase iTemp by 1
        iTemp++;
      }
  }
}
/*
  main

  In this function gets declare and initialize iArrValues1,iArrValues2
  also the iN and iN2. Then calls GetValues and Display functions with the
  corresponding Parameters.

  Parameters
     none
  return
     0 which is the number of 0

*/
int main(int argc, char const *argv[]) {
  //  initialize and declare the arrays and the two range of the lists (iN, iN2)
  int iArrValues1[10],iArrValues2[10],iN,iN2;
  //  Calling the functions GetValues and Display both with the corresponding Parameters
  GetValues(iArrValues1,iArrValues2,iN,iN2);
  Display(iArrValues1,iArrValues2,iN,iN2);

  return 0;
}
