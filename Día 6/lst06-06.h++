// lst06-06.hpp
#include <iostream>   //correccion hecha al codigo original explicado en apartado de la hoja 22
using namespace std;  // para cout

class Gato
{
  public:
      Gato (int edadInicial);
      ~Gato();
      int ObtenerEdad() const { return suEdad;}       // ¡en linea!
      void AsignarEdad (int edad) { suEdad = edad; }  // ¡en linea!
      void Maullar() const { cout << "Miua.\n";}      // ¡en linea!
  private:
      int suEdad;
};
