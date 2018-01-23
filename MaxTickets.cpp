#include <iostream>
#include <limits.h>
/*
 MaxTickets.cpp
  This program gets the number of shows and days and stores them in a integer
  matrix with limits and gets the maximum value store and displays the position
  where the maximum value is.

   Author: JulioGutierrez
   2 de noviembre de 2017, 09:00 AM
   version 1.0
*/
using namespace std;
//  initializing and declaring iMAXROWS and iMAXCOLUMNS constants
int const iMAXROWS = 4;
int const iMAXCOLUMNS = 30;
/*
 GetDaysandShows

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
void GetDaysandShows(int iMat[][iMAXCOLUMNS],int &iNR, int &iNC)
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
 Maximum

 This function perform two loops to check which number inside the matrix is
 the maximum value and then return that value.
  Parameters:
     iMat integer matrix with the limit of columns
     iNR  integer variable that stores the number of rows
     iNC  integer variable that stores the number of columns
  Returns:
     iMax which is the maximum value inside the matrix
*/
int Maximum(int iMat[][iMAXCOLUMNS],int iNR, int iNC) {
  // variable to get the maximum initialized to the minimum possible value
  int iMax = INT_MIN;
  // compare to everyone
  for (int i = 0;i<iNR;i++)
  {
    //  loop from 0 to iNC which is limit of columns
    for (int j = 0; j<iNC;j++)
    {
      //  loop from 0 to iNC which is limit of columns
      if(iMat[i][j]>iMax){
        //  value of iMax is equal to iMat in position i and j
        iMax = iMat[i][j];
      }
    }
  }
  //  Returning the result
  return iMax;
}
/*
 display
  This function displays the position where the maximum value of the matrix
  is store.
  Parameters:
     iMat integer matrix with the limit of columns
     iNR  integer variable that stores the number of rows
     iNC  integer variable that stores the number of columns
     iMax integer variable that stores the maximum value inside the matrix
  Returns:
     None, is a void function

*/
void display(int iMat[][iMAXCOLUMNS],int iNR, int iNC,int iMax) {
  //  loop from 0 to iNR which is the limit of rows
  for (int i = 0;i < iNR;i++)
  {
    //  loop from 0 to iNC which is limit of columns
    for (int j = 0; j < iNC;j++)
    {
      //  if the value in iMat position in i and j is equal to iMax
      if(iMat[i][j]==iMax)
      {
        //  displaying the position of the maximum value
        std::cout <<i+1<<" "<<j+1<< '\n';
      }
    }
  }
}
/*
  main

  This function declare and initialized a matrix with limit of iMAXROWS and
  iMAXCOLUMNS also two integer variables iNR and iNC. Then calls the function
  GetDaysandShows with iMat,iNR,iNC as Parameters and finally checks if the
  values inside the variables iNR and iNC are positive and inside the limits
  call the function display with the corresponding Parameters with one of them
  being a function.

  Parameters:
     None

  Returns:
     returns 0 as the number of errors of the program
*/
int main(int argc, char const *argv[])
{
  //  initializing and declaring iMat, iNR,iNC
  int iMat[iMAXROWS][iMAXCOLUMNS],iNR,iNC;
  //  calling the function and
  GetDaysandShows(iMat,iNR,iNC);
  //  validating the values inside the variables
  if((iNR > 1 && iNR <= iMAXROWS) && (iNC > 1 && iNC <= iMAXCOLUMNS))
  {
    //  Calling the function with corresponding Parameters and inside calling
    //  the Maximum function as Parameters
    display(iMat,iNR,iNC,Maximum(iMat,iNR,iNC));
  }
  return 0;
}
