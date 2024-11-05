//Listado 12.9 uso de cin.get()
#include <iostream>
using namespace std;  // para cout

int main()
{
  char bufer[ 80 ];
  cout << "Escriba la cadena: ";
  cin.get (bufer, 79 ); // llegar hasta 79 o a newline
  cout << "Aqui está el búfer: " << bufer << endl;
  return 0;
}
