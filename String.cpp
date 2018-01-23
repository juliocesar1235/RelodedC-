#include <iostream>
#include <string>
using namespace std;
int main(){
  string sValue;
  std::cout << "Enter your name" << '\n';
  //cin >> sValue; Wrong use of getting this object
  getline(cin, sValue);
  std::cout << "Your name is " << sValue <<"!"<<'\n';
  std::cout << "iT has " <<sValue.length()<< '\n';
  std::cout << "The third character " <<sValue.at(2)<< '\n';
  sValue.append(" -Hi there-");
  std::cout << "Your name is " << sValue <<"!"<<'\n';
  std::cout << "iT has " <<sValue.length()<< '\n';
  sValue.insert(0, "Hello!");
  
  return 0;
}
