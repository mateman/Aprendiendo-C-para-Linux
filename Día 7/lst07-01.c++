// Listado 7.1
// Uso de ciclos con goto
#include <iostream>   //correccion hecha al codigo original explicado en apartado de la hoja 22
using namespace std;  //correccion hecha al codigo original explicado en apartado de la hoja 23

int main()
  {
        int contador = 0; // inicializar contador
ciclo:  contador ++; // principio del ciclo
        cout << "contador: " << contador << "\n";
        if (contador < 5) // evaluar el valor
          goto ciclo; // saltar al principio del ciclo
        cout << "Completo. Contador: " << contador << ".\n";
        return 0;
}
