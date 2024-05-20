// Listado 7.11
// Ciclos for coninstrucciones nulas
#include <iostream>   //correccion hecha al codigo original explicado en apartado de la hoja 22
using namespace std;  // para cout

int main()
{
    int contador = 0;

    for( ; contador < 5; )
      {
          contador++;
          cout << "!Haciendo un ciclo!   ";
      }
    cout << "\nContador: " << contador << ".\n";
    return 0;
}
