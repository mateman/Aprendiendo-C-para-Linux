// Listado 5.4 - muestra de variables
// que tienen alcance de bloque
#include <iostream>   //correccion hecha al codigo original explicado en apartado de la hoja 22
using namespace std;  //correccion hecha al codigo original explicado en apartado de la hoja 23

void miFunc();

int main()
  {
    int x = 5;
    cout << "\nEn main x vale: " << x;

    miFunc();

    cout << "\nDe regreso en main, x vale: " << x << endl;
    return 0;
  }

void miFunc()
{

  int x = 8;
  cout << "\nEn miFunc, la variable local x vale: " << x << endl;
  {
    cout << "\nEn el bloque de miFunc, x vale: " << x;
    int x = 9;
    cout << "\nLa misma variable local x vale: " << x;
  }

  cout << "\nFuera del bloque, en miFunc, x vale: " << x << endl;
}
