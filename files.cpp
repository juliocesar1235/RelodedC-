#include <iostream>
#include <string>
#include <fstream>
/*
 Files.cpp

 This program asks the user for a .txt name file which that name is store in an
 string to then coverted into a character array. Then open the file and if its
 open count the lines in the .txt file.
 Author: JulioGutierrez
 9 de noviembre de 2017, 11:00 AM
 version 2.0
*/
using namespace std;
/*
  main

  In this function gets declare the strings variables sValue and sLine then
  a counter. Then calls the getLine function to get the name of the file then
  an object store the name of the file as an array of characters to open the file
  and check how many lines with a loop. Finally closing the file with a method.

  Parameters:
     None

   Returns:
      returns 0 as the number of errors of the program
*/
int main(int argc, char const *argv[]) {
  //  declaring sValue and sLine as strings
  string sValue;
  string sLine;
  // declaring and initializing iCounter to 0
  int iCounter = 0;
  //  Calling the function with both Parameters cin and sValue
  getline(cin, sValue);
  //  Declaring an object where the name of the file is store but as a char array
  ifstream fLines (sValue.c_str());
  //  Condition when the file is open
  if (fLines.is_open())
  {
    //  loop when it reads a line from the file
    while (getline(fLines,sLine))
    {
      //  Adding 1 to the counter
      iCounter++;
    }
    //  Closing the file Calling the function close
    fLines.close();
    //  Printing the result
    std::cout << iCounter << '\n';
  }
  // Returning the number of errors
  return 0;
}
