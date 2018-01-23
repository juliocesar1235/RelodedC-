#include <iostream>
using namespace std;

/*
  VirusSimulator.cpp

  This program is used to calculate the population, as given a factor to increase
  the value of the population and to stop increasing the population when the
  value is greater than the final population. Shows the simulation as weeks go
  by with the increasing population.

  Author: JulioGutierrez
  10 de Septiembre de 2017, 07:00 PM
  version 3.0
 */



/*
 GetValues

 This function ask the user to enter the initial population, the multiplication
 factor, the final population and stores them in a variable. Then validate
 if any of those values are less than 1, then ask again for the corresponding
 value.

 Parameters:
    iP to store the value of initial population
    iF to store the value of the final population
    dM to store the value of the multiplication factor
 Returns:
    Is a void function, does not return anything

*/
void GetValues(int &iP,int &iF, double &dM)
{

    //  Ask the user for the initial poulation,the multiplication factor and the final population
    std::cout << "Enter the initial Population" << '\n';
    std::cin >> iP;

    std::cout << "Enter the Multiplication factor" << '\n';
    std::cin >> dM;

    std::cout << "Enter the final Population" << '\n';
    std::cin >> iF;

    //  Conditions to check if the values are less than 1, then ask again for the value
    while (iP < 1)
    {
      std::cout << "Enter the initial population again, cannot be negative or 0" << '\n';
      std::cin >> iP;
    }
    while (dM < 1)
    {
      std::cout << "Enter the multiplication factor, cannot be negative" << '\n';
      std::cin >> dM;
    }
    while (iF < 1)
    {
      std::cout << "Enter the final population again, cannot be negative or 0" << '\n';
      std::cin >> iF;
    }
}
/*
  Display

  Displays the message with the number of week and the result of the simulation
  of the virus, multiplying the initial population times the multiplication factor.
  Also sets a counter for the number of weeks.
  Use a loop to display this message until the result is grater than the final population.

  Parameters:
     iP to store the initial population
     dM to store the multiplication factor
     IFP to store the final population
  Returns:
     Is a void functions, does not return anything
*/
void Display(int iP, double dM,int iFP)
{
  //  Counter varible
  int iWNum;

  //  Variable to store the result of the population
  double dResult;

  //  Initialize the counter to 0
  iWNum = 1;

  //  Set the variable equal to the initial population.
  dResult = iP;

  //  To display the initial population without multiplying the factor
  std::cout << " week " <<iWNum++<<" Population "<<dResult<< '\n';

  //  Loop to check if the result is greater than the final population, if not display the message again.
  do
  {
    //  Making the operation of the result times the factor
    dResult *= dM;

    //  The message of the simulation and increase by 1 the counter
    std::cout << " week " <<iWNum++<<" Population "<<dResult<< '\n';


  } while(dResult < iFP);
}

/*
 main

 Prompt the values of the population, the multiplication factor and the
 final Population by calling the GetValues function. Then calls the display
 function with the Intital population, the multiplication factor and the
 final population as parameters.

 Parameters:
    none
 Returns:
    an integer value that is the number of errors (0 = none)
 */


int main(int argc, char const *argv[])
{
  /*
    Declaring the variables for the initial population,
    the multiplication factor and the final population
  */
  int iPopulation, iFinalPopulation;
  double dMultiplicationFactor;

  /*
    Calling the GetValues function with the parameters of initial population,
    the multiplication factor and the final population.
  */
  GetValues(iPopulation,iFinalPopulation,dMultiplicationFactor);

  /*
    Calling the Display function with the parameters of initial population,
    the multiplication factor and the final population.
  */
  Display(iPopulation,dMultiplicationFactor,iFinalPopulation);


  return 0;
}
