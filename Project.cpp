#include <iostream>
#include <string>
#include <fstream>
#include <limits.h>
/*
  Analyzer.cpp
    This program gets the name of a .txt file and then asks for an option to
    Analyze in the text file, the options are to count how many lines are in
    the file, how many spaces, how many Vowels, how many consonants, count the
    number of characters in the smallest word and the greatest, count how many
    a given word is found in the file and finally to count how many paragraphs.

    Author: JulioGutierrez
    22 de noviembre de 2017, 4:00 PM
    version 4.0

*/
using namespace std;
/*
  NumLines

    This function gets the name of the file as Parameter, then opens the file
    with that name, then with a loop until the file has lines it adds to a
    counter and then display the result.

    Parameters:
       sName string with name of the file in an string
    Returns:
       None because its a void function
*/
void NumLines(string sName)
{
  //  declaring sLine variable as string
  string sLine;
  // declaring and initializing iCounter to 0
  int iCounter = 0;
  //  Declaring an object where the name of the file is store but as a char array
  ifstream fLines (sName.c_str());
  //  Condition when the file is open
  if (fLines.is_open())
  {
    //  loop when it reads a line from the file
    while (getline(fLines,sLine))
    {
      //  Adding 1 to the counter
      iCounter++;
    }
    //  Printing the result
    std::cout << iCounter << '\n';
    //  Closing the file Calling the method close
    fLines.close();
  }
}
/*
  NumSpaces

    This function gets the name of the file as Parameter, then opens the file
    with that name, when its open then check with a loop every character in
    the line is equal to a space add to a counter 1 and at last display the
    result.

    Parameters:
       sName string with name of the file in an string
    Returns:
       None, because its a void function
*/
void NumSpaces(string sName)
{
  //  declaring sLine variable as string
  string sLine;
  // declaring and initializing iCounter to 0
  int iCounter = 0;
  //  Declaring an object where the name of the file is store but as a char array
  ifstream fLines (sName.c_str());
  //  Condition when the file is open
  if(fLines.is_open())
  {
    //  loop when it reads a line from the file
    while (getline(fLines,sLine))
    {
      //  For loop from 0 to the length of the sLine
      for(int i = 0; i < sLine.length(); i++)
      {
        //  if the sLine string at i position is equal to an space, add 1
        if(sLine.at(i) == ' ')
        {
          //  Adding 1 to the counter
          iCounter++;
        }
      }
    }
    //  Printing the result
    std::cout << iCounter << '\n';
    //  Closing the file Calling the method close
    fLines.close();
  }
}
/*
  NumVowels

    This function gets the name of the file as Parameter, then opens the file
    with that name, when its open then with a for loop checks if the character
    at position i is equal to any of the the Vowels add 1 to the counter and
    display the result.

    Parameters:
       sName string with the name of the File
    Returns:
       None, because its a void function.
*/
void NumVowels(string sName)
{

  //  declaring sLine variable as string
  string sLine;
  // declaring and initializing iCounter to 0
  int iCounter = 0;
  //  Declaring an object where the name of the file is store but as a char array
  ifstream fLines (sName.c_str());
  //  Condition when the file is open
  if(fLines.is_open())
  {
    //  loop when it reads a line from the file
    while (getline(fLines,sLine))
    {
      //  For loop from 0 to the length of the sLine
      for(int i = 0; i < sLine.length(); i++)
      {
        //  If Condition when sLine at position i is equal to any Vowel
        if((sLine.at(i) == 'a' || sLine.at(i) == 'e' || sLine.at(i) == 'i' || sLine.at(i) == 'o' || sLine.at(i) == 'u') || (sLine.at(i) == 'A' || sLine.at(i) == 'E' || sLine.at(i) == 'I' || sLine.at(i) == 'O' || sLine.at(i) == 'U'))
        {
          //  Add 1 to the counter
          iCounter++;
        }
      }
    }
    //  Printing the result
    std::cout << iCounter << '\n';
    //  Closing the file Calling the method close
    fLines.close();
  }
}
/*
  NumConsonants

    This function gets the name of the file as Parameter, then opens the file
    with that name, when its open then check with a loop every character in
    the line is equal to any consonant then add 1 to a counter and finally
    display the result.

    Parameters:
       sName string with the name of the File
    Returns:
       None, because its a void function.
*/
void NumConsonants(string sName)
{

  //  declaring sLine variable as string
  string sLine;
  // declaring and initializing iCounter to 0
  int iCounter = 0;
  //  Declaring an object where the name of the file is store but as a char array
  ifstream fLines (sName.c_str());
  //  Condition when the file is open
  if(fLines.is_open())
  {
    //  loop when it reads a line from the file
    while (getline(fLines,sLine))
    {
      //  For loop from 0 to the length of the sLine
      for(int i = 0; i < sLine.length(); i++)
      {
        //  If Condition when sLine at position i is equal to a letter and not equal to a Vowel
        if((sLine.at(i) >= 'a' && sLine.at(i) <= 'z' || sLine.at(i) >= 'A' && sLine.at(i) <= 'Z') && (sLine.at(i) != 'a' && sLine.at(i) != 'e' && sLine.at(i) != 'i' && sLine.at(i) != 'o' && sLine.at(i) != 'u') && (sLine.at(i) != 'A' && sLine.at(i) != 'E' && sLine.at(i) != 'I' && sLine.at(i) != 'O' && sLine.at(i) != 'U'))
        {
          //  Adding 1 to the counter
          iCounter++;
        }
       }
     }
     //  Printing the result
     std::cout << iCounter << '\n';
     //  Closing the file Calling the method close
     fLines.close();
   }
}
/*
  MinNumChar

    This function gets the name of the file as Parameter, then opens the file
    with that name, when its open then with a for loop check if the character
    at i position is equal to a letter or a space add 1 to a counter and check
    also if its a space then check that the counter is lower than the iMin
    then the iMin is equal to the counter then Equalize the counter to 0. Finally
    display the result and close the file.

    Parameters:
       sName string with the name of the File
    Returns:
       None, because its a void function.
*/
void MinNumChar(string sName)
{
  //  declaring sLine variable as string
  string sLine;
  //  declaring and initializing iMin to the maximum integer value
  int iMin = INT_MAX;
  //  Declaring an object where the name of the file is store but as a char array
  ifstream fLines (sName.c_str());
  //  Condition when the file is open
  if(fLines.is_open())
  {
    // declaring and initializing iCounter to 0
    int iCounter = 0;
    //  loop when it reads a line from the file
    while (getline(fLines,sLine))
    {
      //  For loop from 0 to the length of the sLine
      for(int i = 0; i < sLine.length(); i++)
         {
           //  If Condition when sLine at position i is equal to a letter or equal to an space
           if (sLine.at(i) >= 'a' && sLine.at(i) <= 'z' || sLine.at(i) >= 'A' && sLine.at(i) <= 'Z' || sLine.at(i) == ' ' )
              {
                //  Adding 1 to the counter
      					iCounter++;
                //  Check if sLine at position
      					if (sLine.at(i) == ' ' )
                {
      						//  Check if the counter is lower than iMin
      						if (iCounter < iMin)
                  {
                    //  Equalizing the iMin variable to the counter value
      							iMin = iCounter;
      						}
      					  //Setting iCounter to 0
      						iCounter = 0;
      					}
      				}
         }
    }
    //  Printing the result
    std::cout << iMin-1 << '\n';
    //  Closing the file Calling the method close
    fLines.close();
  }
}
/*
  MaxNumChar

    This function gets the name of the file as Parameter, then opens the file
    with that name, when its open then with a for loop check if the character
    at i position is equal to a letter or a space add 1 to a counter and check
    also if its a space then check that the counter is lower than the iMax
    then the iMax is equal to the counter then Equalize the counter to 0. Finally
    display the result and close the file.

    Parameters:
       sName string with the name of the File
    Returns:
       None, because its a void function.
*/
void MaxNumChar(string sName)
{
  //  declaring sLine variable as string
  string sLine;
  //  declaring and initializing iMax to the minimum integer value and iCounter to 0
  int iMax = INT_MIN,iCounter = 0;
  //  Declaring an object where the name of the file is store but as a char array
  ifstream fLines (sName.c_str());
  //  Condition when the file is open
  if(fLines.is_open())
  {
    //  loop when it reads a line from the file
    while (getline(fLines,sLine))
    {
      //  For loop from 0 to the length of the sLine
      for(int i = 0; i < sLine.length(); i++)
         {
            //  If Condition when sLine at position i is equal to a letter or equal to an space
    			  if (sLine.at(i) >= 'a' && sLine.at(i) <= 'z' || sLine.at(i) >= 'A' && sLine.at(i) <= 'Z' || sLine.at(i) == ' ')
    			  {
              //  Adding 1 to the counter
    			    iCounter++;
              //  Check if sLine at position
    				  if (sLine.at(i) == ' ')
    				  {
                //  Check if the counter is greater than iMax
    					  if (iCounter > iMax)
                {
                  //  Equalizing iMax to iCounter value
    						  iMax = iCounter;
    					  }
                // Setting iCounter to 0
    					  iCounter = 0;
    				  }
    			  }
         }
      }
      //  Displaying the result
      std::cout << iMax-1 << '\n';
      //  Closing the file Calling the method close
      fLines.close();
    }
}
/*
  duplicateWord

  This function gets the name of the file as Parameter, then opens the file
  with that name, when its open then check if a word is found in the file
  with the find method if its found then add to the counter 1 and finally
  display the result and close the File.
  Parameters:
     sName string with the name of the File
  Returns:
     None, because its a void function
*/
void duplicateWord(string sName)
{
  //  declaring string variables sLine and sWord
  string sLine,sWord;
  int iCounter = 0,iFound;
  std::cin >> sWord;
  //  Declaring an object where the name of the file is store but as a char array
  ifstream fLines (sName.c_str());
  //  Condition when the file is open
  if(fLines.is_open())
  {
    //  loop when it reads a line from the file
    while (getline(fLines,sLine))
    {
     iFound = sLine.find(sWord);
     if(iFound != string::npos)
     {
       iCounter++;
     }
    }
    //  Displaying the result
    std::cout << iCounter << '\n';
    //  Closing the file Calling the method close
    fLines.close();
  }
}
/*
  NumParagraph

    This function gets the name of the file as Parameter, then opens the file
    with that name, when its open check if the line is empty with the empty method
    then add to the counter and finally display the result and close the file.

    Parameters:
       sName string with the name of the File
    Returns:
       None, because its a void function.
*/
void NumParagraph(string sName)
{
  //  declaring sLine variable as string
  string sLine;
  // declaring and initializing iCounter to 1
  int iCounter = 1;
  //  Declaring an object where the name of the file is store but as a char array
  ifstream fLines (sName.c_str());
  //  Condition when the file is open
  if(fLines.is_open())
  {
    //  loop when it reads a line from the file
    while (getline(fLines,sLine))
    {
      // if the line is empty then add to the counter
      if(sLine.empty())
       {
         // Add 1 to the counter
        iCounter ++;
       }
    }
    //  Displaying the result
    std::cout << iCounter << '\n';
    //  Closing the file Calling the method close
    fLines.close();
  }
}
/*
  main

    This function declares the iOption variable and a string variable sName
    then asks the user the name of the text file and store it in sName, then
    asks the option to Analyze the file. When a option is selected it calls
    the corresponding function with the sName string as Parameter to get the
    expected result

    Parameters:
       None

    Returns:
       returns 0 as the number of errors of the program
*/
int main(int argc, char const *argv[]) {
  int iOption;
  string sName;
  //  Calling the function get line with cin and sName as Parameters
  getline(cin, sName);
  //  Getting the value of the option
  std::cin >> iOption;
  //  Switch to run the option choose by the user
  switch (iOption) {
    // Case to check the number of lines
    case 1:
      NumLines(sName);
      break;
    //  Case to check the number of spaces
    case 2:
      NumSpaces(sName);
      break;
    //  Case to check how many Vowels are in the file
    case 3:
      NumVowels(sName);
      break;
    //  Case to check how many consonants are in the file
    case 4:
      NumConsonants(sName);
      break;
    //  Case to check how many characters is the smallest word
    case 5:
      MinNumChar(sName);
      break;
    //  Case to check how many characters is the biggest word
    case 6:
      MaxNumChar(sName);
      break;
    //  Case to check how many times is found a word in the file
    case 7:
      duplicateWord(sName);
      break;
    //  Case to check how many paragraphs have the file
    case 8:
      NumParagraph(sName);
      break;
  }
  //  return the number of errors
  return 0;
}
