// Listado 7.2
// Uso de ciclos con while

#include <iostream>   //correccion hecha al codigo original explicado en apartado de la hoja 22
using namespace std;  //correccion hecha al codigo original explicado en apartado de la hoja 23

int main()
  {
      int contador = 0; // inicializar la condición

      while( contador < 5) // evaluar que la condición aun sea verdadera
        {
            contador++; // cuerpo del ciclo
            cout << "contador: " << contador << "\n" ;
        }
      cout « "Completo. Contador: " << contador << " .\n" ;
      return 0;

}
