#include <iostream>
/*
  Backward.cpp

  This program gets n numbers from the user and stores them in an array
  then a displays the numbers inside the array but Backwards with a for
  loop.

  Author: JulioGutierrez
  13 de Octubre de 2017, 05:00 PM
  version 1.0
*/
using namespace std;
void getChar(char iArr[]){
  for(int j = 0; j<10;j++){
  cin>>iArr[j];
}
}
int Vowels(char iArr[]){
  int iTotal = 0;
  for(int i = 0; i < 10; i++){
    if(iArr[i]=='a'||iArr[i]=='e'||iArr[i]=='i'||iArr[i]=='o'||iArr[i]=='u')
    {
      iTotal++;
    }

  }
  return iTotal;
}
int main(int argc, char const *argv[]) {
  char iArr[10];
  getChar(iArr);
  std::cout << Vowels(iArr) << '\n';
  return 0;
}
