// Listado4.6 - muestra el uso de la instrucción if
// con la cláusula else
#include <iostream>   //correccion hecha al codigo original explicado en apartado de la hoja 22
using namespace std;  //correccion hecha al codigo original explicado en apartado de la hoja 23

int main ()
{
    int primerNumero, segundoNumero;
    cout << " Escriba un número grande: ";
    cin >> primerNumero;
    cout << " \nEscriba un número más pequeño: ";
    cin >> segundoNumero;
    if (primerNumero >= segundoNumero)
          cout << "\n¡Gracias!\n" ;
    else
          cout << "\nOh. ¡El segundo es más grande!\n " ;
    return 0;
}
