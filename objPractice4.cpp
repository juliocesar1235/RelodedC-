#include <iostream>
#include <string>

using namespace std;

class Punto{
  private: //Atributes
    int x,y;
  public://Metodos
    Punto();
    void setPunto(int,int);
    int getPuntoX();
    int getPuntoY();
};

Punto::Punto(){
}
void Punto::setPunto(int _x,int _y){
    x = _x;
    y = _y;
}

int Punto::getPuntoX(){
  return x;
}
int Punto::getPuntoY(){
  return y;
}
int main(int argc, char const *argv[]) {
  Punto punto1;

  punto1.setPunto(15,10);
  std::cout << punto1.getPuntoX() << '\n';
  std::cout << punto1.getPuntoY() << '\n';
  return 0;
}
