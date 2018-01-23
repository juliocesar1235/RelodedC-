#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main()
{
  int numeroDeLetras;
  cin >> numeroDeLetras;
  string palabra;
  cin >> palabra;

  int contador = 0;
  int contador1 = 0;
  for(int i = 0;i < numeroDeLetras; ++i)
  {
    if(isupper(palabra[i]) == true)
    {
      ++contador;
    }
    if(islower(palabra[i]) == true)
    {
      ++contador1;
    }
  }
  cout << contador <<" "<< contador1 << endl;
  return 0;
}
