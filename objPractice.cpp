#include <iostream>
#include <string>

using namespace std;
class Persona{
  private:
    //Atributes
    int age;
    string name;
  public:
    //methods
    Persona(int,string); // Constructor
    void read();
    void run();
};
//Constructor works to initialize the Atributes
Persona::Persona(int _age,string _name){
  age = _age;
  name = _name;
}
void Persona::read(){
  std::cout << "Soy " << name <<" y leo como entrenar a un elefante"<<'\n';
}
void Persona::run(){
  std::cout << "Soy " <<name<<" y estoy corriendo en el gimnasio 30 min a mis "<<age<<" años"<< '\n';
}
int main(int argc, char const *argv[]) {
  Persona p1 = Persona(18,"Julio");
  Persona p2(19,"Maria");
  Persona p3(19,"Juan");
  p1.read();
  p2.run();
  p3.read();
  p3.run();

  return 0;
}
