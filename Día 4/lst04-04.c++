// Listado 4.4 - muestra el uso de
// los operadores de incremento de
// prefijo y posfijo
#include <iostream>   //correccion hecha al codigo original explicado en apartado de la hoja 22
using namespace std;  //correccion hecha al codigo original explicado en apartado de la hoja 23

int main()
{
    int miEdad = 39; // inicializar dos variables de tipo entero
    int suEdad = 39;
    cout << "Yo tengo: " << miEdad << " años.\n";
    cout << "Usted tiene: " << suEdad << " años \n";
    miEdad++; // incremento mediante posfijo
    ++suEdad; // incremento mediante prefijo
    cout << "Pasa un año...\n";
    cout << "Ahora tengo: " << miEdad << " años.\n";
    cout << "Usted tiene: " << suEdad << " años\n";
    cout << "Pasa otro año\n";
    cout << "Ahora tengo: " << miEdad++ << " años.\n";
    cout << "Usted tiene: " << ++suEdad << " años\n";
    cout << "Imprimamos eso de nuevo.\n";
    cout << "Yo tengo: " << miEdad << " años.\n";
    cout << "Usted tiene: " << suEdad << " años\n";
    return 0;
}
