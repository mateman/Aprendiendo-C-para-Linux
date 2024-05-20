// Listado 5.5 - muestra de parámetros pasados por valor
// este es copia del ejericio 5 del día 5
#include <iostream>
using namespace std;  // para cout

void intercambiar ( int x, int y);

int main()
{
  int x = 5, y = 10;
    cout << "main(). Antes del intercambio, x: " << x << "\t y: " << y << "\n";
    intercambiar(x,y);
    cout << "main(). Después del intercambio, x: " << x << "\t y: " << y << "\n";
    return  0;
}

void intercambiar ( int x, int y)
{
  int temp;
    cout << "Intercambia(). Antes del intercambio, x: " << x << "\t y: " << y << "\n";
    temp = x;
    x = y;
    y = temp;
    cout << "Intercambiar(). Después del intercambio, x: " << x << "\t y: " << y << "\n";
}
