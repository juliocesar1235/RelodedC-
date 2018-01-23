#include <iostream>
using namespace std;

void GetN(int &iN)
{
  std::cout << "Enter the value of n" << '\n';
  std::cin >> iN;
  while(iN < 0)
  {
    std::cout << "Cannot use negative values, Enter the number again" << '\n';
  }
}
void MultiplicationTable(int iN)
{
  for (int i = 1; i == 10  ; i++)
  {
    int iMResult = iN * i;
    std::cout << iN <<"*"<<i<<" = "<<iMResult<< '\n';
  }
}

int Addition(int iN)
{
  int iSum = 0;
  for (int i = 1; i <= iN; i++)
  {
    iSum = iSum + i;
  }
  return iSum;
}

void PerfectNumber(int iN)
{
  int iSumNumber = 0;
  for (int i = 1; i < iN ; i++)
  {
    if (iN % i == 0)
    {
      iSumNumber += i;
    }
  }
  if (iSumNumber == iN) {
    std::cout << "Perfect number" << '\n';
  }
  else
  {
    std::cout << "Not a perfect number" << '\n';
  }
}

int main(int argc, char const *argv[]) {
  char cOption;
  int   iN;
  do {
    std::cout << "MENU" << '\n';
    std::cout << "MultiplicationTable = 1" << '\n';
    std::cout << "Addition (1 to n) = 2" << '\n';
    std::cout << "Perfect number = 3" << '\n';
    std::cout << "End = 4" << '\n';
    std::cout << "Enter option (1 to 4)" << '\n';
    std::cin >> cOption;
    switch (cOption) {
      case '1':
        GetN(iN);
        MultiplicationTable(iN);
      break;
      case '2':
       GetN(iN);
        std::cout << "Addition" <<Addition(iN)<< '\n';
      break;
      case '3':
        GetN(iN);
        PerfectNumber(iN);
      break;
      case '4':
        std::cout << "Tenks vru, for using this menu :)" << '\n';
        break;
      default:
      std::cout << "Wrong option" << '\n';
    }
  } while(cOption != '4');
  return 0;
}
