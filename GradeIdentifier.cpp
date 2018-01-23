#include <iostream>
#include <math.h>
using namespace std;

char GradeLetter(int iGrade){
  char CLetter;
  if(iGrade > 95){
    CLetter = 'A';
  }
  else if(iGrade > 80){
    CLetter = 'B';
  }
  else if(iGrade > 70){
    CLetter = 'C';
  }
  else if(iGrade > 60){
    CLetter = 'D';
  }else{
    CLetter = 'E';
  }
  return CLetter;
}
int main(int argc, char const *argv[]) {
  int grade;
  std::cout << "Your grade" << '\n';
  cin>>grade;
  std::cout <<GradeLetter(grade)<< '\n';
  return 0;
}
