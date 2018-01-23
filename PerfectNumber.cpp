#include <iostream>
using namespace std;
/*
 PerfectNumber.cpp

 This program asks the value of n to the user to check if its a PerfectNumber
 with a for loop to check if it is a factor of the n value.

 Author: JulioGutierrez
 18 de Septiembre de 2017, 09:00 PM
 version 1.0
*/


/*
 GetN

 This function asks the user for the n value and stores it in a variable.

 Parameters:
    &iN to store the value of n
 Returns:
    none because is a void function
*/
void GetN(int &iN)
{
  //  Ask for n and store it in iN
  std::cout << "Enter the value of n" << '\n';
  std::cin >> iN;

  //  While loop to validate if the n is negative ask again the value
  while(iN < 0)
  {
    std::cout << "Cannot use negative values, Enter the number again" << '\n';
    std::cout << "Enter the value of n" << '\n';
    std::cin >> iN;
  }
}

/*
 PerfectNumber

 This function is use to check the factors of the variable n and checks  with
 a for loop all the numbers before that value to check if it is a factor, and
 if it is a factor then add to the sum that number that can the remainder is 0
 then if the sum all the factors is equal to n print that is a perfect number

 Parameters:
    iN to store the value of n
 Returns:
    None because is a void function

*/
void PerfectNumber(int iN)
{
  //  Variable to store the sum of the factors initialize to 0
  int iSumNumber = 0;

  //  For loop to check all the numbers before the n value and if they are factors
  for (int i = 1; i < iN ; i++)
  {
    //  to validate if the number checked is a factor then add to the sum the i value
    if (iN % i == 0)
    {
      //  Add the i value to the sum variable
      iSumNumber += i;
    }
  }
  //  if the sum of the factors is equal to the n then is a Perfect Number
  if (iSumNumber == iN) {
    std::cout << "Perfect number" << '\n';
  }
  else
  {
    std::cout << "Not a perfect number" << '\n';
  }
}


/*
  main

  This function declare a variable for n and calls the functions to get the
  value of n and to check if that value is a PerfectNumber with the corresponding
  function
  Parameters:
     none

  Returns:
     the number of errors in this case i hope 0

*/
int main(int argc, char const *argv[]) {
  int iN;
  GetN(iN);
  PerfectNumber(iN);
  return 0;
}
