// Listado4.10 - Muestra el uso del operador condicional
//
#include <iostream>   //correccion hecha al codigo original explicado en apartado de la hoja 22
using namespace std;  //correccion hecha al codigo original explicado en apartado de la hoja 23

int main()
{
  int x, y, z;
  cout << " Escriba dos números.\n" ;
  cout << " Primero: ";
  cin >> x;
  cout << "\n Segundo: ";
  cin >> y;
  cout << "\n";
  if (x > y)
      z = x;
  else
      z = y;
  cout << "Usando if (x > y)\t";
  cout << "z: " << z;
  cout << "\n";

  z = (x > y) ? x : y;
  cout << "Usando z = (x > y) ? x : y\t";
  cout << "z: " << z;
  cout << "\n";
  return 0;
}
