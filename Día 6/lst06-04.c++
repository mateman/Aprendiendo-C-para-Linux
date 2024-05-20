// Muestra de la declaración de un constructor y
//un destructor para la clase Gato
//include <iostream.h>
#include <iostream>   //correccion hecha al codigo original explicado en apartado de la hoja 22
using namespace std;  //correccion hecha al codigo original explicado en apartado de la hoja 23

class Gato                      // empieza la declaración de la clase
{
  public:                       // empieza la sección pública
        Gato(int edadlnicial);  // constructor
        ~Gato();                // destructor
        int ObtenerEdad();      // método de acceso
        void AsignarEdad(int edad); //método de acceso
        void Maullar();         // empieza la sección privada
  private:                      // variable miembro
        int suEdad;
};

// constructor de Gato,

Gato::Gato(int edadlnicial)
{
    suEdad = edadlnicial;
}

Gato::~Gato()                 // destructor, no realiza ninguna acción
{
}

// ObtenerEdad, método de acceso público
// regresa el valor de su miembro suEdad
int Gato::ObtenerEdad()
{
    return suEdad;
}

// Definición de AsignarEdad, método
//de acceso público

void Gato::AsignarEdad(int edad)
{
  // asignar a la variable miembro suEdad el
  // valor pasado por el parámetro edad
  suEdad = edad;
}

// definición del método Maullar
// regresa: void
// parámetros: Ninguno
// acción: Imprime "miau" en la pantalla
void Gato::Maullar()
{
    cout << "Miau.\n";
}

// crear un gato, asignar un valor a su edad, hacer que
// maúlle, que nos diga su edad, y que vuelva a maullar.
int main()
{
    Gato Pelusa(5);
    Pelusa.Maullar();
    cout << "Pelusa es un gato que tiene ";
    cout << Pelusa.ObtenerEdad() << " años de edad.\n";
    Pelusa.Maullar();
    Pelusa.AsignarEdad(7);
    cout << "Ahora Pelusa tiene " ;
    cout << Pelusa.ObtenerEdad() << " años de edad.\n";
    return 0;
}
