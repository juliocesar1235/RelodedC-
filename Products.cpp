#include <iostream>
#include <limits.h>
/*
 Products.cpp
  This program gets the number of days and the number of machines in each days
  an then ask the user for number of products developed by each machine and displays
  the maximum and minimum products each day.

   Author: JulioGutierrez
   3 de noviembre de 2017, 10:00 AM
   version 1.0
*/
using namespace std;
//  initializing and declaring iMAXROWS and iMAXCOLUMNS constants
int const iMAXROWS = 50;
int const iMAXCOLUMNS = 10;
/*
 GetDaysandMachines

   This function gets the number of  rows and columns for the matrix and validates
   them if their are not negative or greater than the limits. Then asks the user
   the values and stores them in the matrix iMat.
   Parameters:
      iMat integer matrix with the limit of columns
      iNR  integer variable that stores the number of rows
      iNC  integer variable that stores the number of columns
   Returns:
      None, is a void function
*/
void GetDaysandMachines(int iMat[][iMAXCOLUMNS],int &iNR, int &iNC)
{
  // getting number of elements
  cin >> iNR;
  cin >> iNC;
  // validating
  if ((iNR > 1 && iNR <= iMAXROWS) && (iNC > 1 && iNC <= iMAXCOLUMNS))
  {
    //  loop from 0 to iNR which is the limit of rows
    for  (int i= 0; i < iNR; i++)
    {
      //  loop from 0 to iNC which is limit of columns
      for (int j = 0; j < iNC; j++) {
        //  getting the values and store them in iMat
        cin >> iMat[i][j];
      }
    }
  }
}
/*
 display
  This function displays the position where the maximum and minimum value of the
  matrix each row.
  is store.
  Parameters:
     iMat integer matrix with the limit of columns
     iNR  integer variable that stores the number of rows
     iNC  integer variable that stores the number of columns

  Returns:
     None, is a void function

*/
void display(int iMat[][iMAXCOLUMNS],int iNR, int iNC) {
  //  declaring and initialized the iMax and iMin with the limits
  int iMax = INT_MIN;
  int iMin = INT_MAX;
  // compare to everyone
  for (int i = 0;i < iNR;i++)
  {
    //  loop from 0 to iNC which is limit of columns
    for (int j = 0; j < iNC;j++)
    {
      //  if the iMat value in position i and j is greater than iMax
      if(iMat[i][j] > iMax)
      {
        //  value of iMax is equal to iMat in position i and j
        iMax = iMat[i][j];
      }
      //  if the iMat value in position i and j is lower than iMin
      if(iMat[i][j] < iMin)
      {
        //  value of iMin is equal to iMat in position i and j
        iMin = iMat[i][j];
      }
    }
    //  displaying the iMin and iMax values
    std::cout << iMin<<" ";
    std::cout << iMax << '\n';
    //  Equalizing the iMax and iMin to the limits values
    iMax = INT_MIN;
    iMin = INT_MAX;

 }
}
/*
  main

  This function declare and initialized a matrix with limit of iMAXROWS and
  iMAXCOLUMNS also two integer variables iNR and iNC. Then calls the function
  GetDaysandMachines with iMat,iNR,iNC as Parameters and finally checks if the
  values inside the variables iNR and iNC are positive and inside the limits
  call the function display with the corresponding Parameters

  Parameters:
     None

  Returns:
     returns 0 as the number of errors of the program
*/
int main(int argc, char const *argv[]) {
    //  initializing and declaring iMat, iNR,iNC
    int iMat[iMAXROWS][iMAXCOLUMNS],iNR,iNC;
    //  calling the function and
    GetDaysandMachines(iMat,iNR,iNC);
    //  validating the values inside the variables
    if ((iNR > 1 && iNR <= iMAXROWS) && (iNC > 1 && iNC <= iMAXCOLUMNS))
    {
      //  calling the function display
      display(iMat,iNR,iNC);
    }
  //  returning the number of errors
  return 0;
}
