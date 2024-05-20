// Listado 7.7
// Muestra del ciclo do...while
#include <iostream>   //correccion hecha al codigo original explicado en apartado de la hoja 22
using namespace std;  // para cout

int main()
{
  int contador;
  cout << "¿Cuántos holas?: ";
  cin >> contador;
  do
    {
    cout << "Hola\n";
    contador-- ;
    } while (contador >0 );
  cout << "Contador vale: " << contador << endl;
  return 0;
}
