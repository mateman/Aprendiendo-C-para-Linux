// Listado 7.3
// Instrucciones while complejas
#include <iostream>   //correccion hecha al codigo original explicado en apartado de la hoja 22
using namespace std;  // para cout

int main()
{
  unsigned short chico ;
  unsigned long grande;
  const unsigned short MAXCHICO=65535;

  cout << "Escriba un número chico: ";
  cin >> chico;
  cout << "Escriba un número grande: ";
  cin >> grande;

  cout << " chico :" << chico << "...";
  // para cada iteración, evaluar tres condiciones
  while ( chico < grande && grande > 0 && chico < MAXCHICO)
  {
    if (chico % 5000 == 0) // escribir un punto cada 5 mil lineas
        cout << " .";
    chico++;
    grande-=2;
  }

  cout << "\nChico: " << chico << " Grande: " << grande << endl;
  return 0;
}
