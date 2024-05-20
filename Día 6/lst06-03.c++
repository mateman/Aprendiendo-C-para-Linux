// Muestra de la declaración de una clase y
// la definición de los métodos de la clase,
#include <iostream>   //correccion hecha al codigo original explicado en apartado de la hoja 22
using namespace std;  //correccion hecha al codigo original explicado en apartado de la hoja 23

class Gato      // empieza la declaración de la clase
{
  public:
      int ObtenerEdad();
      void AsignarEdad(int edad);
      void Maullar();
  private:
      int suEdad;
};

// ObtenerEdad, método de acceso público
// regresa el valor de la propiedad suEdad
int Gato::ObtenerEdad()
{
      return suEdad;
}

// definición de AsignarEdad, método
// de acceso público
// da un valor a la propiedad suEdad
void Gato::AsignarEdad(int edad)
{
      // dar a la variable miembro suEdad el
      // valor pasado por el parámetro edad
      suEdad = edad;
}

// definición del método Maullar
// regresa : void
// parámetros: Ninguno
// acción: Imprime "miau" en la pantalla
void Gato::Maullar()
{
      cout << "Miau.\n";
}

// crear un gato, asignar un valor a su edad, hacer que
// maúlle, que nos diga su edad y que vuelva a maullar.
int main()
  {
    Gato Pelusa;
    Pelusa.AsignarEdad(5);
    Pelusa.Maullar();
    cout << "Pelusa es un gato que tiene ";
    cout << Pelusa.ObtenerEdad() << " años de edad.\n";
    Pelusa.Maullar();
    return 0;
  }
