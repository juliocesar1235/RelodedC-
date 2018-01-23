#include <iostream>
#include <math.h>

using namespace std;


void GetValues(int &iN,double &dX )
{
  std::cout << "Enter the value of n" << '\n';
  std::cin >> iN;
  std::cout << "Enter the value of x" << '\n';
  std::cin >> dX;
  while(iN < 0)
  {
    std::cout << "Cannot use negative values, Enter the number again" << '\n';
  }
}


double factorial(int &iN)
{
  double dSum = 1;
  for (int i = 1; i <= iN; i++) {
    dSum = dSum * i;
  }
  return dSum;
}
void Exponential(int &iN, double &dX)
{
  double dSum = 1;
  for (int i = 1; i <= iN; i++) {
    dSum = dSum + (pow(dX,i)/factorial(i));
  }
  std::cout <<"Aproximation: "<< dSum << '\n';
  std::cout << "Real value: " <<exp(dX)<< '\n';

}


void Sin (int &iN,double &dX)
{
  double dSum = 0;
  bool bSign = true;
  for (int i = 1; i <= iN; i = i + 2)
  {

      if (bSign == true)
      {
        dSum -= (pow(dX,i)/factorial(i));
      }
      else
      {
        dSum += (pow(dX,i)/factorial(i));
      }
      bSign = !bSign;
  }
  std::cout <<"Aproximation: "<< dSum << '\n';
  std::cout << "Real value: " <<sin(dX)<< '\n';
}


void Cos(int &iN,double &dX)
{
  double dSum = 0;
  bool bSignC = true;
  for (int i = 0; i <= iN; i = i + 2)
  {
    if(bSignC == true)
    {
      dSum = dSum - pow(dX,i)/factorial(i);
    }
    else
    {
      dSum = dSum + pow(dX,i)/factorial(i);
    }
    bSignC = !bSignC;
  }
  std::cout << dSum << '\n';
  std::cout << cos(dX) << '\n';
}


int main(int argc, char const *argv[]) {
  double dX;
  int iN;
  char cOption;
  do
  {
  std::cout << "MENU" << '\n';
  std::cout << "Exponential = 1" << '\n';
  std::cout << "Sin(x) = 2" << '\n';
  std::cout << "Cos(x) = 3" << '\n';
  std::cout << "End = 4" << '\n';
  std::cout << "Enter option (1 to 4)" << '\n';
  std::cin >> cOption;
  switch (cOption) {
    case '1':
      GetValues(iN,dX);
      Exponential(iN,dX);
    break;
    case '2':
     GetValues(iN,dX);
     Sin(iN,dX);
    break;
    case '3':
     GetValues(iN,dX);
     Cos(iN,dX);
    break;
    case '4':
      std::cout << "Thanks for using this menu :)" << '\n';
    break;
    default:
    std::cout << "Wrong option" << '\n';
  }
} while(cOption != '4');
  return 0;
}
