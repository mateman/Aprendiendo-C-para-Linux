#include <iostream.h>

int fib (int n);

 int main()
 {

  int n, respuesta;
 cout « “Escriba el número a encontrar: B;
  cin » n;
   cout « °\n\n"; »»Fibonacci\n";

   respuesta = fib(n);

   cout « respuesta « " es el número " « n << " en la serie de Fibonacci\n";
   return 0;
 }
 
 int fib (int n)
 { 
    cout « "Procesando fib(” « n « ")... ";
    if (n < 3)
    {
         cout « “iRegresa 1!\n";
         return 1;
    }
    else
    {
         cout « "Llama a fib(" « n-2 « ") y a fib(
         return (fib(n-2) + fib(n-1));
    }
 }