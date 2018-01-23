#include <iostream>
#include <math.h>
/*
 MenuFactorial.cpp

 This program will display a menu to the user to make aproximations of
 the Exponential, sin and cos by letting the user choose which aproximation
 wants to use and for every aprox. gets prompt n value and a x value which have
 to be positive numbers. This n and x values are used in the functions for the
 aproximations. In each aproximation function gets called the factorial function
 because to make the aprox. it needs to divide by the factorial of the i value
 which is declare in every loop to make the sum of every operation.

 Author: JulioGutierrez
 2 de octuber de 2017, 6:00 PM
 version 3.0
*/
using namespace std;

/*
  GetValues

  This function asks the user for the values of n and x also checks with a loop
  if the value of n is positive if not asks again for the values.

  Parameters:
     dX to store the value of x
     iN to store the value of n
  returns:
     void function that does not return nothing
*/
void GetValues(int &iN,double &dX )
{
  //  Asks the value of n and x
  std::cout << "Enter the value of n" << '\n';
  std::cin >> iN;
  std::cout << "Enter the value of x" << '\n';
  std::cin >> dX;

  //  while loop to check if the n value is negative
  while(iN < 0)
  {
    std::cout << "Cannot use negative values, Enter the number again" << '\n';
  }
}

/*
  factorial

  This function gets the iN as a parameter and then is declared a sumatory
  variable to use in the for loop to multiply the sum variable time the i variable
  that is declared in the loop initialize in 1.

  Parameters:
     iN to store the value of n
  returns:
     returns the sumatory variable dSum.

*/
double factorial(int iN)
{
  //  declaring the sum variable and initialize to 1.
  double dSum = 1;

  //  for loop to make the operation of dSum times i in which i keeps incrementing until is less or equal to n
  for (int i = 1; i <= iN; i++)
  {
    dSum = dSum * i;
  }
  return dSum;
}
/*
 Exponential

 This function gets the iN and dX as parameter then gets declare the sumatory
 variable dSum initialize to 1, then makes a for loop to check every number
 from 1 to n and make the operation.

 Parameters:
    iN to store the value of n
    dX to store the value of dX
 returns:
    returns none because is void
*/
void Exponential(int &iN, double &dX)
{
  //  Declaring and initializing the sumatory variable to 1
  double dSum = 1;

  /*
   for loop that initialize the variable i, to check all the numbers from 1 to n,
   with every number make the operation where the factorial function gets call
   to perform the operation. Every result adds to the sumatory varible dSum
  */
  for (int i = 1; i <= iN; i++)
  {
    dSum = dSum + (pow(dX,i)/factorial(i));
  }
    //  Displays the Aproximation and the real value of the Exponential
  std::cout <<"Aproximation: "<< dSum << '\n';
  std::cout << "Real value: " <<exp(dX)<< '\n';
}

/*
 Sin

 This function gets the iN and dX as parameter then gets declare the sumatory
 variable and also a boolean variable, then there is a for loop to check all of
 the Odd numbers, inside the loop theres a condition to check the boolean
 variable if its false then make the operation with a negative sign else with
 a perform with a positive sign, and the result gets add to the sumatory variable.

 Parameters:
    iN to store the value of n
    dX to store the value of dX
 returns:
    returns none because is void
*/
void Sin (int &iN,double &dX)
{
  double dSum = 0;  //  declaring and initializing a double varible for the sum
  bool bSign = true;  //  declaring and Intializing the boolean var to true.

  /*
    for loop to check every odd number and perform the operation with an if
    to check which sign the operation needs to be
  */
  for (int i = 1; i <= iN; i = i + 2)
  {
    /*
    condition to check the boolean variable if it has false then perform
    operation with a negative sign else perform with positive sign and add
    the result to the variable dSum
    */
    if (bSign == false)
    {
      dSum -= (pow(dX,i)/factorial(i));
    }
    else
    {
      dSum += (pow(dX,i)/factorial(i));
    }
    //  Changing the value of the boolean variable everytime the loop runs
    bSign = !bSign;
  }
  //  Displays the Aproximation and the real value of the Sine
  std::cout <<"Aproximation: "<< dSum << '\n';
  std::cout << "Real value: " <<sin(dX)<< '\n';
}
/*
 Cos

 This function gets the iN and dX as parameter then gets declare the sumatory
 variable and also a boolean variable, then there is a for loop to check all of
 the pair numbers, inside the loop theres a condition to check the boolean
 variable if its false then make the operation with a negative sign else with
 a perform with a positive sign, and the result gets add to the sumatory variable.

 Parameters:
    iN to store the value of n
    dX to store the value of dX
 returns:
    returns none because is void
*/

void Cos(int &iN,double &dX)
{
  double dSum = 0;  //  declaring and initializing a double varible for the sum
  bool bSignC = true; //  declaring and Intializing the boolean var to true.
  /*
    for loop to check every pair number and perform the operation with an if
    to check which sign the operation needs to be
  */
  for (int i = 0; i <= iN; i = i + 2)
  {
    /*
    condition to check the boolean variable if it has false then perform
    operation with a negative sign else perform with positive sign and add
    the result to the variable dSum
    */
    if(bSignC == false)
    {
      dSum = dSum - pow(dX,i)/factorial(i);
    }
    else
    {
      dSum = dSum + pow(dX,i)/factorial(i);
    }
    //  Changing the value of the boolean variable everytime the loop runs
    bSignC = !bSignC;
  }
  //  Displays the Aproximation and the real value with x of the Cosine
  std::cout << dSum << '\n';
  std::cout << cos(dX) << '\n';
}
/*
  main

  In this function are declare the variables iN, dX and a char variable cOption,
  then displays the menu with 4 options in which have the Exponential, sin, cos
  and the End. it asks the user for the option and if its  not equal to 4 then
  asks again for the option with a do while loop. For each option has a
  condition and if the cOption is equal to the character in the case it performs
  the operation for that option, calls the GetValues function and the corresponding
  function for the option in which could be Exponential, sin and cos.
  Parameters:
     none

  Returns:
     the number of errors in this case i hope 0

*/
int main(int argc, char const *argv[])
{
  int iN; // Declaring integer variable to store n
  double dX;  //  Declaring double variable to store x
  char cOption; // Declaring char variable to store the option

  //  do loop to check if the cOption variable is not equal to 4 then run again the program
  do {
    //  Displays the menu options
    std::cout << "MENU" << '\n';
    std::cout << "Exponential = 1" << '\n';
    std::cout << "Sin(x) = 2" << '\n';
    std::cout << "Cos(x) = 3" << '\n';
    std::cout << "End = 4" << '\n';
    std::cout << "Enter option (1 to 4)" << '\n';
    std::cin >> cOption;  //  Getting the value of the option chose

    /*
     Conditions to check if the character store in cOption is equal to 1,2,3 and 4
     which are the options in the menu. If one of the is true the calls the
     GetValues function and corresponding option function such as Exponential,
     Sin and Cos.
    */
    if (cOption == '1') {
      GetValues(iN,dX);
      Exponential(iN,dX);
    }else if(cOption == '2')
    {
      GetValues(iN,dX);
      Sin(iN,dX);
    }else if(cOption == '3')
    {
      GetValues(iN,dX);
      Cos(iN,dX);
    }else if(cOption == '4')
    {
      std::cout << "Thanks for using this menu :)" << '\n';
    }else{
      std::cout << "Wrong option" << '\n';
    }
  } while(cOption != '4');
  return 0;
}
