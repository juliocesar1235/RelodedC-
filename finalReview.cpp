#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int main(int argc, char const *argv[]) {
  string sWord = "abacaba";
  bool bPal = true;
  int iCounter = sWord.length() - 1;
  for (int i = 0; i < sWord.length()/2; i++) {
    if(sWord.at(i) != sWord.at(iCounter)){
      bPal = false;
    }
    iCounter--;
  }
  if(bPal == true){
    std::cout << "yes" << '\n';
  }
  else{
    std::cout << "no" << '\n';
  }
  return 0;
}
