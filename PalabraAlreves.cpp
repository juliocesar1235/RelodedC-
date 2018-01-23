#include <iostream>
#include <string>


using namespace std;

int main(int argc, char const *argv[]) {
  string sFrase;

  getline(cin,sFrase);
  for (int i = sFrase.length()-1;i < 0; i--) {
    if(sFrase.at(i)==' '){
      sFrase.substr(i+1) = sFrase2;
    }
  }
  return 0;
}
