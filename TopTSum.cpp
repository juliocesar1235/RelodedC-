#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {

  int n;
  std::cin >> n;
  int sum = 0;
  if(n >= 0){
  //for (int ;i=1; i<=n i++){
    //sum += i;
    //}
    sum = n*(n+1)/2;
}
else{
  /*for (int i = 1; i >= n; i--) {
    sum += i;
  }*/
  sum = ((n*(n-1)/2)-1)*-1;
}
std::cout << sum << '\n';

  return 0;
}
