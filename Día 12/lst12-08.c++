//Listado 12.8 búferes de arreglos de tipo char
#include <iostream>
using namespace std;  // para cout

int main()
{
  char bufer[ 80 ];

  cout << "Escriba la cadena: ";
  cin >> bufer;
  cout << "Aqui está el búfer: " << bufer << endl ;
  return 0;
}
