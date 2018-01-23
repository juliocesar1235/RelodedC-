// Example program
#include <iostream>
#include <limits.h>
using namespace std;
int const iMAXROWS = 10;
int const iMAXCOLUMNS = 5;
void GetValues(int iMat[][iMAXCOLUMNS], int &iN, int &iN2)
{
    // getting number of elements
    cout << "enter number of rows : ";
    cin >> iN;
    // validating
    while (iN < 1 || iN > iMAXROWS)
    {
        cout << "ERROR value must be 1 - " << iMAXROWS << " , enter again"<< endl;
        cin >> iN;
    }
    // getting number of elements
    cout << "enter number of columns : ";
    cin >> iN2;
    while (iN2 < 1 || iN2 > iMAXCOLUMNS)
    {
        cout << "ERROR value must be 1 - " << iMAXCOLUMNS << " , enter again"<< endl;
        cin >> iN2;
    }
    for  (int i= 0; i < iN; i++)
    {
      for (int j = 0; j < iN2; j++) {
        cout << "Enter elements " << "(" <<i+1<< "," << j+1<<")" <<":"  ;
        cin >> iMat[i][j];
      }
    }
}
void DispValues(int iMat[][iMAXCOLUMNS], int iN, int iN2)
{
    // loop to display every element in the array
    for  (int i= 0; i < iN; i++)
    {
        for (int j = 0; j<iN2; j++) {
          std::cout << iMat[i][j] << '\t';
        }
    }
    std::cout <<'\n';
}

int Maximum(int iMat[][iMAXCOLUMNS], int iN,int iN2)
{
    // variable to get the maximum initialized to the minimum possible value
    int iMax = iMat[0][0];
    // compare to everyone
    for (int i = 0;i<iN;i++) {
      for (int j = 0; j<iN2;j++) {
        if(iMat[i][j]>iMax){
          iMax = iMat[i][j];
        }
      }
    }
    return iMax;
}

int Minimum(int iMat[][iMAXCOLUMNS], int iN,int iN2)
{
    // variable to get the minimym initialized to the Maximum possible value
    int iMin = iMat[0][0];;
    // compare to everyone
    for (int i = 0;i<iN;i++) {
      for (int j = 0; j<iN2;j++) {
        if(iMat[i][j]<iMin){
          iMin = iMat[i][j];
        }
      }
    }
    return iMin;
}

double Average(int iMat[][iMAXCOLUMNS], int iN,int iN2)
{
    //initializing total to zero
    double dTot = 0;
    int iCounter = 0;
    // adding everyone
    for  (int i= 0; i < iN; i++)
    {
        for (int j = 0; j<iN2; j++) {
          dTot += iMat[i][j];
          iCounter++;
        }
    }
    return dTot /iCounter ;
}


int main()
{
    int iMat[iMAXROWS][iMAXCOLUMNS];
    int iN,iN2;
    GetValues(iMat, iN,iN2);
    DispValues(iMat, iN,iN2);
    cout << "Maximum = " << Maximum(iMat, iN, iN2) << endl;
    cout << "Minimum = " << Minimum(iMat, iN, iN2) << endl;
    cout << "Average = " << Average(iMat, iN, iN2) << endl;
    return 0;
}
