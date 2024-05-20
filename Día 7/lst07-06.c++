// Listado 7.6
// Muestra cómo se salta el cuerpo del
// ciclo while cuando la condición es falsa.
#include <iostream>   //correccion hecha al codigo original explicado en apartado de la hoja 22
using namespace std;  // para cout

int main()
  {
    int contador;
    cout << "¿Cuántos holas?: ";
    cin >> contador;
    while (contador > 0)
      {
        cout << "¡ Hola !\n" ;
        contador--;
      }
    cout << "Contador vale : " << contador << endl;
    return 0;
  }
