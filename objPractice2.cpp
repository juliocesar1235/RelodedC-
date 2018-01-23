#include <iostream>
#include <string>

using namespace std;

class Fecha{
  private://Atributos
    int dia,mes,anio;
  public://Metodos
    Fecha(int,int,int); //Constructor 1
    Fecha(long); //Constructor2
    void mostrarFecha();



};
//Constructor1
Fecha::Fecha(int _dia, int _mes, int _anio){
  anio = _anio;
  mes = _mes;
  dia = _dia;
}
//Constructor2
Fecha::Fecha(long fecha){
  anio = int(fecha/10000); //Extraer el anio
  mes = int((fecha-anio*10000)/100); //Extraer el mes
  dia = int (fecha-anio*10000-mes*100); //Extraer el dia

}
void Fecha::mostrarFecha(){
  std::cout << "La fecha es :" <<dia<<"/"<<mes<<"/"<<anio<<'\n';
}
int main(int argc, char const *argv[]) {
  Fecha hoy(18,12,2017);
  Fecha ayer(20171217);
  hoy.mostrarFecha();
  ayer.mostrarFecha();
  return 0;
}
