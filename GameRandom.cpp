#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
using namespace std;

int main(int argc, char const *argv[]) {
  //The seed
  srand(time(NULL));
  //Variables to store the random number and guess and counter of tries
  int iRand, iGuess, iCounter;
  //  Generate the random number and store it in a variable
  iRand = rand() % 100 + 1;
  //  Initializing the counter
  iCounter = 0;
  //Get guess from the user
  std::cout << "Enter your guess" <<'\n';
  std::cin >> iGuess;
  //  Count the first try
  iCounter++;

  //  To validate if the number guess is equal to the random number
    while (iGuess != iRand)
    {

      if (iGuess > iRand)
      {
        std::cout << "You are ahead of the number, try again!!" << '\n';
        std::cout << "Enter your guess" <<'\n';
        std::cin >> iGuess;
        iCounter++;
      }
      else if (iGuess < iRand)
      {
        std::cout << "You are less of the number, try again!!" << '\n';
        std::cout << "Enter your guess" <<'\n';
        std::cin >> iGuess;
        iCounter++;
      }
      else
      {
        std::cout << "You have a negative num or bigger than 100" << '\n';
        std::cout << "Enter your guess" <<'\n';
        std::cin >> iGuess;
        iCounter++;
      }
    }
    if(iCounter > 10)
    {
      std::cout << "Congrats Tryhard  " <<"Tries: "<<iCounter<< '\n'; ;
    }
    else if (iCounter < 10)
    {
      std::cout << "Congrats Pro  " <<"Tries: "<<iCounter<< '\n'; ;
    }
    else
    {
      std::cout << "One in a million, Congrats" << '\n';
      std::cout << "you win nothing" << '\n';
    }
  return 0;
}
