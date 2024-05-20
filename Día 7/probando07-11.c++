// Listado 7.11
// Ciclos for coninstrucciones nulas
#include <iostream>   //correccion hecha al codigo original explicado en apartado de la hoja 22
using namespace std;  // para cout

int main()
{


    for( int contador = 0; contador < 5, cout << "\nContador: " << contador << ".\n"; contador++, cout << "!Haciendo un ciclo!   " );

    return 0;
}
