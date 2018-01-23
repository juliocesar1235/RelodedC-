#include <iostream>
using namespace std;

/*
 Get Value

 This function gets the n value from the user and stores it in a variable

 Parameters
 	iN integer variable to store the value of n from the user
 Returns
 	iNi value
*/
int GetValue(int iN){
 //	Declaring the variable iNi to store the value of n
  int iNi;
 //	Get the value of iNi
  cin >> iNi;
 //	return the value of iNi
  return iNi;
}

/*
 DisplayTriangle

 This function gets as parameter the value of n and with 2 for loops prints n number of asteriscs.

 Parameters
 	iN to store the value of n

 Returns

*/
void DisplayTriangle(int iN){
  for ( int i = iN; i > 0; i--) {
    for ( int j = 1; j <= i; j++) {
      cout << "*";
    }
    cout <<endl;
  }
}
int main(int argc, char const *argv[]) {
  int iN;
  DisplayTriangle(GetValue(iN));
  return 0;
}
