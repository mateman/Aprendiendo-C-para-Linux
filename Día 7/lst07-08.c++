// Listado 7.8
// Uso de ciclos con while
#include <iostream>   //correccion hecha al codigo original explicado en apartado de la hoja 22
using namespace std;  // para cout

int main()
 {
    int contador = 0;
    while (contador < 5)
      {
        contador++;
        cout << "¡Haciendo un ciclo!  ";
      }
   cout << "\nContador : " << contador << ". \n";
   return 0;
}
