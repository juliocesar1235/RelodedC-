#include <iostream>
#include <string>

using namespace std;
class Perro{
  private:
    string nombre,raza;
  public:
    Perro(string,string);//Constructor
    ~Perro();//Destructor
    void mostrarDatos();
    void jugar();
};

//Constructor
Perro::Perro(string _nombre, string _raza){
  nombre = _nombre;
  raza = _raza;

}

//Destructor
Perro::~Perro(){
}

void Perro::mostrarDatos(){
  std::cout << "Nombre: " <<nombre<<'\n';
  std::cout << "Raza: " <<raza<<'\n';
}
void Perro::jugar(){
  std::cout << "El perro " <<nombre<<" esta jugando"<< '\n';
}

int main(int argc, char const *argv[]) {
  Perro perro1("Oso","Maltes");
  perro1.mostrarDatos();
  perro1.jugar();
  perro1.~Perro();
  return 0;
}
