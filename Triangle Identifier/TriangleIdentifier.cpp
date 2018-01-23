/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
  TriangleIdentifier.cpp
 
  This program is used to identify the type of triangle with the 3 sides that
  is asked to the user,
 
  Author: juliogutierrez
  28 de agosto de 2017, 04:00 PM
  version 2.0
 */

#include <cstdlib>
#include <iostream>


using namespace std;

/*
 * 
 */
/*
 GetdA
    
 This function ask for the user the value of a and also store it in a variable.
  
 Parameters: 
    No parameters
 Returns:     
    dAVar the value within dAVar which is the value of a
 */
double GetSideA()
{
    double dAVar;   //  defining a variable to store a
    
    //  getting the value of a
    cout << "Insert the value of a side" << endl;
    cin >> dAVar;
    return dAVar;   //  returning the value of a
}
double GetSideB()
{
    double dBVar;   //  defining a variable to store b
    
    //  getting the value of b
    cout << "Insert the value of a side" << endl;
    cin >> dBVar;
    return dBVar;   //  returning the value of b
}
double GetSideC()
{
    double dCVar;   //  defining a variable to store c
    
    //  getting the value of c
    cout << "Insert the value of c side" << endl;
    cin >> dCVar;
    return dCVar;   //  returning the value of c
}


   
/*
 display 

 This function validates the sides of the triangle and prints a message of what
 type of triangle is, depending of values of the sides

 Parameters:
    dA to store the value of a side
    dB to store the value of b side
    dC to store the value of c side
 Returns:
    Is a void function, does not return anything
*/
void Display(double dA,double dB,double dC)
{
    
    /*
     condition that if the a side is equal to b and c side is equal to a then
     print a message that is a equilateral triangle   
    */
    if(dA == dB && dC==dA)
    {
        /*
         condition that if the a side is equal to b and c side is equal to a then
         print a message that is a equilateral triangle   
        */
        cout<<"Type: " << endl;
        cout<<"Triangle equilateral";
    }
    /*
     condition that if the a side is equal to b OR c side is equal to a OR 
     b is equal to c then print a message  that is a triangle isosceles   
    */
    else if(dA == dB ||  dC == dA || dB == dC ){
        cout<<"Type: " << endl;
        cout<<"Triangle isosceles";
    }
    //  No sides equal then print that is scalene
    else{
        cout<<"Type: " << endl;
        cout<<"Triangle scalene";
    }
}
/*
 main
  
 Prompt the values of a, b and c to identify the 
  
 Parameters:
    none
 Returns:
    an integer value that is the number of errors (0 = none)
 */

int main(int argc, char** argv) {
    cout<<"Triangle calculator";
    //  Declaring the variables of this scope for a, b , c
    double dA;
    double dB;
    double dC;
    
    //  Getting the values for a, b and c
    dA = GetSideA();
    dB = GetSideB();
    dC = GetSideC();
    
    /*  
     displaying the type of triangle that is and use a, b, c as parameters
     to validate in the function 
    */
    
    Display(dA,dB,dC);

    return 0;
}

