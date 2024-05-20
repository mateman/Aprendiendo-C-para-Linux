#include <iostream>   //correccion hecha al codigo original explicado en apartado de la hoja 22
using namespace std;  //correccion hecha al codigo original explicado en apartado de la hoja 23
#include "lst05-11.h"
// archivo fuente de biblioteca lst05-11.c++

int fib (int n)
{
  cout << "Procesando fib(" << n << ")... ";
  if (n < 3)
    {
      cout << "¡Regresa 1!\n";
      return 1;
    }
  else
    {
      cout << "Llama a fib(" << n-2 <<") y a fib(" << n-1 <<").\n";
      return(fib(n-2) + fib(n-1));
    }
}
