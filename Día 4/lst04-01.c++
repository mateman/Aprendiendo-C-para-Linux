#include <iostream>   //correccion hecha al codigo original explicado en apartado de la hoja 22
using namespace std;  //correccion hecha al codigo original explicado en apartado de la hoja 23

 int main()
 {
   int a=0, b=0, x=0, y=35;
   cout << "a: " << a << " b: " << b;
   cout << " x: " << x << " y: " << y << endl ;
   a = 9;
   b = 7;
   y = x = a+b;
   cout << "a: " << a << " b: " << b;
   cout << " x: " << x << " y: " << y << endl;
   return 0;
}
