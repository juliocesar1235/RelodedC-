#include <iostream>
#include <ctime>
#include <cstdlib>
#include <limits.h>
/*
 randomDice.cpp
  Este programa agrega 1 a la posicion de un arreglo que la posicion la obtiene
  por medio de la suma de dos numeros aleatorios entre 1 y 6. Al final imprime
  los valores dentro del arreglo pero en forma de asteriscos con su respectiva posicion.

   Author: JulioGutierrez
    16 de enero de 2017, 9:00 PM
   version 2.0
*/
using namespace std;
//Esta funcion saca dos numeros al azar entre 1 y 6, regresa la suma de los dos
int RandomSum(int iRandNum,int iRandNum2){
  iRandNum = 1 + rand() % 6;
  iRandNum2 = 1 + rand() % 6;
  return iRandNum + iRandNum2;
}
//Esta funcion despliega la cantidad de asteriscos que contenga el arreglo y
//de que posicion los esta imprimiendo. Tambien va comparando cual es el minimo y maximo
void DisplayBars(int iArrCounter[],int &iMax,int &iMin){
  for(int i = 2; i < 13; i++){
    std::cout << i <<" "<< "|";
    if(iArrCounter[i] < iMin){
      iMin = iArrCounter[i];
    }
    else if(iArrCounter[i] > iMax){
      iMax = iArrCounter[i];
    }
    for (int j = 0; j<iArrCounter[i];j++) {
      std::cout << "*";
    }
    std::cout <<'\n';
  }
}
//Esta funcion compara los datos en el arreglo iArrCounter con el valor maximo
//y minimo para despues desplegar la posicion donde encuentre el valor respectivo
void DisplayMaxMin(int iArrCounter[],int iMax, int iMin){
  for(int i = 2; i < 13; i++){
    if(iArrCounter[i] == iMax){
      std::cout << "El numero que mas probalidad tiene de salir: " <<i<< '\n';
    }
  }
   for(int j = 2; j < 13; j++){
     if(iArrCounter[j] == iMin){
       std::cout << "El numero que menos probalidad tiene de salir: " <<j<< '\n';
     }
   }
}


int main(int argc, char const *argv[]) {
  int iArrCounter[13],iRandNum,iRandNum2,iMax = INT_MIN,iMin = INT_MAX;
  iArrCounter[12] = 0;
  srand(time(0));
  for(int i = 0; i < 201;i++){
    iArrCounter[RandomSum(iRandNum,iRandNum2)] += 1;
  }
  DisplayBars(iArrCounter,iMax,iMin);
  DisplayMaxMin(iArrCounter,iMax,iMin);
  return 0;
}
