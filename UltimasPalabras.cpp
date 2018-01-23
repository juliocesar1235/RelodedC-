#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[]) {
  string sFrase;
  getline(cin,sFrase);
  int iLength = sFrase.length()-1,iCounter = 0;
  for(int i = sFrase.length()-1; iCounter < 2;i--){
    if(sFrase.at(i) == ' '){
      iCounter++;
    }
    iLength--;
  }
  std::cout << sFrase.substr(iLength+2) << '\n';
  return 0;
}
