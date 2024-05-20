// Muestra de las variables
#include <iostream>   //correccion hecha al codigo original explicado en apartado de la hoja 22
using namespace std;  //correccion hecha al codigo original explicado en apartado de la hoja 23

int main()
{
    unsigned short int Ancho = 5, Longitud;
    Longitud = 10;

    // crear una variable de tipo unsigned short e inicializarla con el
    // resultado de la multiplicación de Ancho por Longitud
    unsigned short int Area = (Ancho * Longitud);

    cout << "Ancho: " << Ancho << "\n";
    cout << "Longitud: " << Longitud << endl;
    cout << "Area: " << Area << endl;
    return 0;
}
