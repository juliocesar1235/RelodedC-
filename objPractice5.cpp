#include <iostream>
#include <string>

using namespace std;

class Persona{
  private://Atributos
    string nombre;
    int edad;
  public://Metodos
    Persona(string,int);//Constructor
    void mostrarPersona();


};
class Alumno : public Persona{
  private:
    string codigoAlumno;
    float notaFinal;
  public:
    Alumno(string,int,string,float); //Constructor de la clase alumno
    void mostrarAlumno();
};

Alumno::Alumno(string _nombre, int _edad, string _codigoAlumno,float _notaFinal) : Persona(_nombre,_edad){
  codigoAlumno = _codigoAlumno;
  notaFinal = _notaFinal;
}

//Constructor de la clase Persona(clase padre)
Persona::Persona(string _nombre, int _edad){
  nombre = _nombre;
  edad = _edad;
}

void Persona::mostrarPersona(){
  std::cout << "Nombre: " <<nombre<< '\n';
  std::cout << "Edad: " <<edad<< '\n';
}

void Alumno::mostrarAlumno(){
  mostrarPersona();
  std::cout << "codigo Alumno: " <<codigoAlumno<< '\n';
  std::cout << "Nota Final: " <<notaFinal<< '\n';
}


int main(int argc, char const *argv[]) {
  Alumno alumno1("Julio",18,"A01282575",91.75);
  alumno1.mostrarAlumno();
  return 0;
}
