#include <iostream>
#include <math.h>
using namespace std;
int Fun1(double dA){
return dA*3-4;
}


double Fun3(double da,double db,double dx, double dh, double dg){
  double dm;
  if(db != 0 && dh-dg != 0 || (da/db-dx)/(dh-dg) >= 0 ){
    dm = sqrt((da/db-dx)/dh-dg);
      return dm;
  }else{
    std::cout << "data error" << '\n';
    return 0;
  }



}

int main()
{
  double da,db,dx,dh,dg;
  std::cout << "a: ";
  cin>>da;
  std::cout << "b: ";
  cin>>db;
  std::cout << "x: ";
  cin>>dx;
  std::cout << "h: ";
  cin>>dh;
  std::cout << "g: ";
  cin>>dg;
  Fun3(da,db,dx,dh,dh);

/*if (db != 0 && dh-dg != 0 || (da/db-dx)/(dh-dg)>= 0){
  std::cout << Fun3 << '\n';
}else{
  std::cout << "data error" << '\n';
  return 0;
}
*/


  /*if(12>14||13<15&&7>8|7>=14)
  {
      if (3%4>=4%3) {
        std::cout << "a" << '\n';
      }else{
        std::cout << "b" << '\n';
      }
  }else{
    if (4%5>=5%4) {
      std::cout << "c" << '\n';
    }else{
      std::cout << "d" << '\n';
    }
  }
  std::cout << Fun1(5) << '\n';
  std::cout << Fun1(Fun1(5)) << '\n';
*/
    return 0;
}
