/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 File:   Top Tec Model.cpp
 This program is used to identify the type of triangle with the 3 sides that
 is asked to the user,

 Author: juliogutierrez
 Created on 30 de agosto de 2017, 09:42 PM
 version 2.0
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 GetGender

 This function ask for the user their gender with only one character F or M.

 Parameters:
    No parameters
 Returns:
    cGender the character that is the gender of the user
 */

char GetGender()
{
    char cGender;   //  defining the variable to store one character
    // getting the character
    cout << "Insert gender (M) or (F) " << endl;
    cin >> cGender;

    return cGender;   //  returning the character
}
/*
 GetWeight

 This function ask for the user for their weight in only integers.

 Parameters:
    No parameters
 Returns:
    iWeight the value of the weight of the user
 */

int GetWeight()
{
    int iWeight;   //  defining the variable to store the weight

    // getting the the value of the weight
    cout << "Insert weight (only integers) " << endl;
    cin >> iWeight;

    return iWeight;   //  returning the value of the weight
}
/*
 GetHeight

 This function ask for the user for their height in with decimals.

 Parameters:
    No parameters
 Returns:
    iHeight the value of the height of the user
 */
double GetHeight()
{
    double dHeight;   //  defining the variable to store the height of the user

    // getting the value of the height
    cout << "Insert your height " << endl;
    cin >> dHeight;

    return dHeight;   //  returning the value of the height
}
/*
 Pass

 This function validates if the user pass or not pass acording to the values
 got from the user with a boolean value.

 Parameters:
    cGender the character of the gender
    iweight the value of the weight
    dheight the value of the height

 Returns:
    bVar the value of true or false

 */

bool Pass(char cGender, int iweight, double dheight ){
    //  initialize the bool variable to false
    bool bVar = false;

    //  Conditional of gender, weight and height for male
    if ((cGender == 'm' || cGender == 'M') && iweight <= 75 && dheight >= 1.75){
        bVar = true;

          }

    //  Conditional of gender, weight and height for female
    else if((cGender == 'f' || cGender == 'F') && iweight < 65 && dheight >= 1.70){
        bVar = true;
    }

    //  No pass the condition
    else{
        bVar = false;
    }

    //  Return the boolean value
    return bVar;

}

/*
 main

 Prompt the values of gender, weight and height then validate with the boolean
 function to check if the people can pass the conditions.

 Parameters:
    none
 Returns:
    an integer value that is the number of errors (0 = none)
 */

int main(int argc, char** argv) {
    //  Var to store the weight
    int iweight;
    //  Var to store the gender
    char cGender;
    //  Var to store the height
    double dheight;

    cout<<"Welcome to Top tec Model audition"<< endl;


    //  Get the values of gender, weight and height
    cGender = GetGender();
    iweight = GetWeight();
    dheight = GetHeight();

    //  Conditional for the pass or not pass calling the Function pass
    if(Pass(cGender,iweight,dheight)){
        cout<<"YOU ARE IN";
    }
    else{
        cout<<"YOU ARE OUT";
    }

    //  number of errors return
    return 0;
}
