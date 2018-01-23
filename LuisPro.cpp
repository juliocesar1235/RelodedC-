#include <iostream>
#include <math.h>

using namespace std;
int main(int argc, char const *argv[]) {
  int n,b,tiempo,count;
      double promedio,total, mayor;
      cout << "Canitdad de maquinas?" << endl;
      cin >> n;

      cout << "Canitdad de piezas?" << endl;
      cin >> b;

          mayor = 0;
      for (int j = 1; j <= n; j++)
      {
          total = 0;
          promedio = 0;

          for (int i = 1; i <= b; i++)
              {
                  cout << "Minutos para la pieza " << i << endl;
                  cin >> tiempo;
                  total = total + tiempo;
              }

          promedio = total/b;
          cout << "Promedio de maquina " << j << " es " << promedio << endl;
          if(promedio > mayor)
          {
            count = j;
            mayor = promedio;
          }

      }
      std::cout << "Maquina " <<count<<" promedio mayor "<<mayor<<'\n';

  return 0;
}
