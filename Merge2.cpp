#include <iostream>
using namespace std;
/*
 GetValues

 This function gets the n value from the user and stores it in a variable, also
 makes a loop to asked n numbers and stores them in an array of integers

 Parameters
  iArrValues integer array to store n numbers from the user

 Returns
    iN which is an integer value from the user
*/
int GetValues(int iArrValues[])
{
  int iN;
  //  Getting the iN value from the user
  std::cin >> iN;

  //  Condition if iN is greater than 0 and iN is lower than 16
  if (iN > 0 && iN<11)
  {
      //  For loop from 0 to iN
    for (int i = 0; i < iN; i++)
    {
      //  Getting the values from the user and store them in an array
      std::cin >> iArrValues[i];
    }
  }
  return iN;
}
/*
  Display

*/
void Display(int iArrValues1[],int iArrValues2[], int iN, int iN2) {
  int iTemp = 0;
  if((iN > 0 && iN < 11) && (iN2 > 0 && iN2 < 11)){

    for (int i = 0; i < iN; i++) {

      while ((iArrValues1[i] > iArrValues2[iTemp])) {
        std::cout << iArrValues2[iTemp] << '\n';
        iTemp++;
      }
      std::cout << iArrValues1[i] << '\n';
    }
    while (iTemp < iN2){
        cout << iArrValues2[iTemp] << endl;
        iTemp++;
      }

  }
}
int main(int argc, char const *argv[]) {
  int iArrValues1[10],iArrValues2[10],iN,iN2;
  iN = GetValues(iArrValues1);
  iN2 = GetValues(iArrValues2);
  Display(iArrValues1,iArrValues2,iN,iN2);

  return 0;
}
