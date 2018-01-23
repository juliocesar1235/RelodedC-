#include <iostream>
#include <cstdlib>
#include <algorithm>

using namespace std;
/*
  Puzzle.cpp
  Este programa se crea una matriz de 16 posiciones y en una de ellas esta un 0
  el punto es ordenar los valores de manera sequencial para poder ganar. El usuario
  puede escoger mover valores que esten cerca de un espacio para poder acomodarlos.

   Author: JulioGutierrez
    16 de enero de 2017, 11:00 PM
   version 1.0
*/
//Inicializando y declarando las constantes para las columnas y filas de matriz
int const iMAXROWS = 4;
int const iMAXCOLUMNS = 4;



//Funcion que encuentra la posicion del numero que el usuario tecleo en la matriz
void FindNumber(int iMat[][iMAXCOLUMNS],int iNum,int &iRow,int &iCol){
  for  (int i= 0; i < 4; i++)
  {
    for (int j = 0; j < 4; j++) {
        if(iMat[i][j] == iNum){
          iRow = i;
          iCol = j;
      }
    }
  }
}
//Funcion que encuentra la posicion del espacio en la matriz
void FindSpace(int iMat[][iMAXCOLUMNS],int &iRowS,int &iColS){
  for  (int i= 0; i < 4; i++)
  {
    for (int j = 0; j < 4; j++) {
        if(iMat[i][j] == 0){
          iRowS = i;
          iColS = j;
      }
    }
  }
}
//Funcion que mueve la ficha seleccionada por el usuario y tambien mueve el 0 de posicion
void MoveBoard(int iMat[][iMAXCOLUMNS],int iNum,int iRow,int iCol,int iRowS,int iColS){
  if(iMat[iRow+1][iCol] == 0){
    iMat[iRow+1][iCol] = iMat[iRow][iCol];
    iMat[iRow][iCol] = 0;
  }
  else if(iMat[iRow][iCol-1] == 0){
    iMat[iRow][iCol-1] = iMat[iRow][iCol];
    iMat[iRow][iCol] = 0;
  }
  else if(iMat[iRow-1][iCol] == 0){
    iMat[iRow-1][iCol] = iMat[iRow][iCol];
    iMat[iRow][iCol] = 0;
  }
  else if(iMat[iRow][iCol+1] == 0){
    iMat[iRow][iCol+1] = iMat[iRow][iCol];
    iMat[iRow][iCol] = 0;
  }
}
//funcion que imprime el tablero con los valores de la matriz
void DisplayBoard(int iMat[][iMAXCOLUMNS]){
  for  (int i= 0; i < 4; i++)
  {
    for (int j = 0; j < 4; j++) {
      if(iMat[i][j] == 0){
        std::cout <<"["<< " "<<"]";
      }
      if(iMat[i][j] != 0){
          std::cout <<"["<<iMat[i][j]<<"]";
      }
    }
    std::cout <<'\n';
  }
}

int main(int argc, char const *argv[]) {
  int iMat[iMAXROWS][iMAXCOLUMNS] = {
    {7,4,2,10},
    {3,0,1,9},
    {5,8,12,15},
    {6,11,13,14}
  };
  int iNum,iRow = 0,iCol = 0,iRowS = 0,iColS = 0;
  DisplayBoard(iMat);
  std::cout << "Enter number" << '\n';
  cin>>iNum;
  while(iNum != 0){
    FindNumber(iMat,iNum,iRow,iCol);
    FindSpace(iMat,iRowS,iColS);
    MoveBoard(iMat,iNum,iRow,iCol,iRowS,iColS);
    DisplayBoard(iMat);
    std::cout << "Enter number" << '\n';
    cin>>iNum;
  }
  return 0;
}
