/*
MaxTickets.cpp

This program takes in the amount of money multiple shows made and then calculate which day(s) and show(s)
was/were the one(s) who made the most money

Nestor Rubio
01/11/2017
VERSION 1.0
*/


#include<iostream>
#include<limits.h>
using namespace std;

 int const iMAXROWS = 50;
 int const iMAXCOLS = 10;
/*
 GetValues

 This Funciton takes in the number of days(rows) and number of shows per day(columns) aswell
 as the number of tickets sold each shows

 PARAMETERS:
 	iMat, the matrix to input the values
 	&iNR, reference parameter to register number of rows
 	&iNC, reference parameter to get number of columns
 */
void GetValues(int iMat[][iMAXCOLS], int &iNd, int &iNm)
{
     //GETTING NUMBER OF VALUES OF ROWS
      cin >> iNd;

     //GETTING NUMBER OF VALUES OF COLUMNS
       cin >> iNm;

	//Validates number of rows and columns to input values into matrix
    if((iNd > 0 && iNd <= iMAXROWS) && (iNm > 0 && iNm <= iMAXCOLS))
    {
        for(int i = 0; i < iNd; i++)
        {
            for(int j = 0; j < iNm; j++)
            {
                cin >> iMat[i][j];  //stores value in respective coordinate
            }
        }
    }
}
/*
Display

This function displays the maximum and minimum amount of products created by machines each day

PARAMETERS:
    iMat, values of each machine each day
    iNd, number of days
    iNm, number of machines
RETURNS:
    NONE
*/
void Display(int iMat[][iMAXCOLS], int iNd, int iNm)
{
 	int iMax = INT_MIN; //establishes the maximum value as tha minimum
 	int iMin = INT_MAX; //establishes the minimum value as the maximum

 	//loop to compare values and determine min and max amount of products
 	for(int i = 0; i < iNd; i++)
    {
     	for(int j = 0; j < iNm; j++)
        {
         	if(iMat[i][j] > iMax)
               {
                	iMax = iMat[i][j];//establishes current values as maximum
               }
            if(iMat[i][j] < iMin)
               {
                iMin = iMat[i][j]; //establishes current value as minimum
               }
        }
        cout << iMin << iMax << endl;   //displays max and min for current day
    }
}

/*
main

This fucntion takes in the number of days and machines that produced per day and compares to determine
minimum and maximum produced product per day adn displays those values

PARAMETERS:
    NONE
RETURNS:
    0
*/
int main()
{
  	int iMat[iMAXROWS][iMAXCOLS];//to store values for matrix
 	int iNd; //to store # of days
 	int iNm; //to store # of machines

 	GetValues(iMat, iNd, iNm); //calls get values function
 	Display(iMat, iNd, iNm); //Calls display function

 return 0; //returns 0
}
