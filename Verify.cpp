#include <iostream>

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
  if (iN > 0 && iN<10)
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

  This function gets iArrValues and iN as Parameters then compare every
  position from the first position and compare the last position in the array
  with a counter and if every position is equal to the other extreme position
  then display YES if not No

  Parameters
     iArrValues which stores the values of the array
     iN this variable stores the value of n

  return
      is a void function does not return
*/
void Display(int iArrValues[],int iN)
{
  //  Declaring and initializing iCounter to iN-1 and a boolean to true
  int iCounter = iN-1;
  bool bPal = true;

  //  condition if iN is greater than 0 and less than 11 then do the for
  if(iN > 0 && iN < 11)
  {
    //  for loop from 0 to iN-1/2
    for(int j = 0; j<(iN-1)/2; j++)
    {
      /*
        condition if iArrValues in position j is not equal to iArrValues in
        position iCounter
      */
      if(iArrValues[j] != iArrValues[iCounter])
      {
        //  boolean variable bPal equal to false
        bPal = false;
      }
      //  Decreasing the counter by 1
      iCounter--;
    }
    //  condition if bPal is equal to true then is a palindrome
    if(bPal == true)
    {
      std::cout << "YES" << '\n';
    }
    //  condition if bPal is not equal to true then is not palindrome
    else
    {
      std::cout << "NO" << '\n';
    }
  }

}
/*
  main

  In this function gets declare iN and an integer array iArrValues with a length
  of 15, then calls the GetValues function and then the Display both with
  the corresponding Parameters.

  Parameters
    none
  Returns
    0 which the number of errors

*/
int main(int argc, char const *argv[])
{
  //  declaring and intializing the iArrValues array and iN
  int iArrValues[10],iN;

  //  Calling GetValues and Display functions with the corresponding Parameters
  GetValues(iArrValues,iN);
  Display(iArrValues,iN);

  //  Returns the number of errors
  return 0;
}
