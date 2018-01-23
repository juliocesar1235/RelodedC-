#include <iostream>
#include <math.h>

bool isPallindrome(string s){
  int lo = 0, hi = s.length()-1;
  while (lo<hi) {
    if (s[lo]!=s[hi])
      return false;
      lo++;
      hi-;
  }
  return true;
}
int main(int argc, char const *argv[]) {
  isPallindrome("abacaba");
  return 0;
}
