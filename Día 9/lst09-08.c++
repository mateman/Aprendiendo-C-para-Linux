//Listado 9.8 Regreso de varios valores de
// na función por medio de apuntadores
#include <iostream>
using namespace std;  // para cout

short Factor(int n, int * apAlCuadrado, int * apAlCubo);

int main()
{
  int numero, alcuadrado, alcubo;
  short error;
    cout << "Escriba un número (0 - 20) ";
    cin >> numero;
    error = Factor( numero, &alcuadrado, &alcubo);
    if (!error)
    {
         cout << "numero: " << numero << "\n" ;
         cout << "alcuadrado: " << alcuadrado << "\n" ;
         cout << "alcubo: " << alcubo << "\n";
    }
    else
         cout << "¡Se encontró un error!\n" ;
    return 0;
}

short Factor( int n, int * apAlCuadrado, int * apAlCubo)
{
  short Valor = 0;
    if (n > 20)
        Valor=1;
    else
    {
        *apAlCuadrado = n * n;
        *apAlCubo = n * n * n;
        Valor=0;
    }
    return Valor;
}
