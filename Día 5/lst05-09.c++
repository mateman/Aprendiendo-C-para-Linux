// Listado 5.9 - muestra las funciones en linea
#include <iostream>   //correccion hecha al codigo original explicado en apartado de la hoja 22
using namespace std;  //correccion hecha al codigo original explicado en apartado de la hoja 23

inline int Duplicar(int);

int main()
  {
    int numero;

    cout << "Escriba un número con el que quiera trabajar: ";
    cin >> numero;
    cout << "\n";

    numero = Duplicar(numero);
    cout << "Número: " << numero << endl;

    numero = Duplicar(numero);
    cout << "Número: " << numero << endl;

    numero = Duplicar(numero);
    cout << "Número: " << numero << endl;
    return 0;
}

int Duplicar(int numero)
{
  return numero * 2;
}
