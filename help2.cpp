#include <iostream>
#include <limits.h>
using namespace std;

void cicloCreciente()
{
    //Declaración de variables
    int iK, iN;

    //Leer dato de entrada
    cout << "Teclea la cantidad de veces:";
    cin >> iN;

    //1º Inicializar la vcc antes del ciclo
    iK = 1;

    //2º Incluir en la condicion a la vcc
    while ( iK <= iN)
    {
        //Desplegar el valor de iK
        cout << "iK = " << iK << endl;

        //3º Actualizar la vcc
        iK = iK + 1;
    }

    cout << "cin >> iN;\n";

    cout << "//1º Inicializar la vcc antes del ciclo\n";
    cout << "iK = 1;\n";
    cout << "//2º Incluir en la condicion a la vcc\n";
    cout << "while ( iK <= iN)\n";
    cout << "{\n";
    cout << " //Desplegar el valor de iK\n";
    cout << " cout << \"iK = \" << iK << endl;\n";
    cout << "\n";
    cout << "//3º Actualizar la vcc\n";
    cout << "iK = iK + 1;\n";
    cout << " }\n";

}

void cicloDecreciente()
{
    //Declaración de variables
    int iK, iN;

    //Leer dato de entrada
    cout << "Teclea la cantidad de veces:";
    cin >> iN;

    //1º Inicializar la vcc antes del ciclo
    iK = iN;

    //2º Incluir en la condicion a la vcc
    while ( iK >= 1)
    {
        //Desplegar el valor de iK
        cout << "iK = " << iK << endl;

        //3º Actualizar la vcc
        iK = iK - 1;
    }
}


char menu(char cOpcion)
{
    cout << "Menú de opciones\n";
    cout << "1. Sumatoria 1 + 2 + 3 +...+ n (Alcancia)\n";
    cout << "2. Cuenta Positivos Negativos Ceros de n valores (Lo hicimos en clase) \n";
    cout << "3. Tabla de Multiplicar del número x\n";
    cout << "4. Promedio de n números\n";
    cout << "5. Encuentra el Mayor de n números\n";
    cout << "6.Cuenta Categorías Zodiacos\n";
    cout << "7.Encuentra el Menor de n números\n";
    cout << "8.Sucesión de Fibonacci\n";
    cout << "9.Adivina el siguiente número de la serie\n";
    cout << "10.Encuentra el Menor, el Mayor y el Promedio  de n valores\n";
    cout << "11. <<Ciclo Creciente>>\n";
    cout << "12. <<Ciclo Decreciente>>\n";
    cout << "Teclea la opcion:";
    cin>>cOpcion;
    return cOpcion;
}

void alcancia( )
{
    //Declaración de variables
    int iN, iK, iAcum;

    //Leer
    cout << "Teclea la cantidad de dias a ahorrar:";
    cin >> iN;

    //Inicializar antes del ciclo
    iAcum = 0;
    iK = 1;

    //Construir el ciclo
    while (iK <= iN)
    {
        //Acumular el valor de iK
        iAcum = iAcum + iK;
        //Actualizar la vcc
        iK = iK + 1;
    }

    cout << "Tu ahorro es $" << iAcum << endl;
}

void tablaM(int iX)
{
    //Declaración de variables
    int iK;

    //Inicializar
    iK = 10;

    while (iK >= 1)
    {
      cout<< iX << "x" << iK << "=" << (iK * iX)<<endl;
      iK = iK - 1;

    }
}

void promedio(int iNum)
{
    //Declaracion de variables
    int iSuma, Num, iK;


    //Inicializar
    iK = 1;

    while (iK <= iNum)
    {
      cout << "Teclea tu numero " << iK;
      cin >> iNum;
      iSuma = 0;

      iSuma = iSuma + iNum;

      //Actualización
      iK = iK + 1;

    }
    cout << "Tu promedio es: " << iSuma / iNum << endl;
}

void mayor(int iN)
{
  //Declaración de variables
  int iV, iK, iMayor;

  //Determinar si iN es correcto
  if (iN > 0)
  {
    iK=1;
    iMayor=INT_MIN;

    while (iK <= iN)
    {
      cout << "Teclea el valor: " << iK << ":";
      cin >> iV;

      if (iV > iMayor)
      iMayor = iV;
      iK = iK + 1;
    }//FinWhile

    //Desplegar el mayor
    cout << "El mayor es " << iMayor << endl;


  }
  else
      cout << "Error, no se procesaron valores!\n";
}

int main(int argc, char const *argv[]) {
  char cOpcion;


   switch(menu(cOpcion)){

          case '1':
              alcancia();
              break;
          case '3':
              int iX;
              cout << "Teclea la tabla que quieras conocer: ";
              cin >> iX;
              tablaM(iX);
              break;
          case '4':
              int iNum;
              cout << "Teclea el numero de enteros que desees promediar: ";
              cin >> iNum;
              promedio(iNum);
              break;
          case '5':
              int iN;
              cout << "Cantidad de valores a procesar:";
              cin >> iN;
              mayor(iN);
              break;
          case '11':
              cout << "<<Ciclo Creciente>>\n";
              cicloCreciente();
              break;
          case '12':
              cout << "<<Ciclo Decreciente>>\n";
              cicloDecreciente();
              break;
          default:
              cout << "Opcion Incorrecta!! \n";
              break;
      //fin switch
    }
  return 0;
}
