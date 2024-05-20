// Listado 4.7 - una instrucción if
// compleja
#include <iostream>   //correccion hecha al codigo original explicado en apartado de la hoja 22
using namespace std;  //correccion hecha al codigo original explicado en apartado de la hoja 23

 int main()
 {
      // Pedir dos números
      // Asignar los números a primerNumero y segundoNumero
      //Si primerNumero es mayor que segundoNumero,
      // ver si primerNumero es un múltiplo de segundoNumero
      //Si esto sucede, ver si son el mismo número

      int primerNumero, segundoNumero;
      cout << "Escriba dos números.\nPrimero: ";
      cin >> primerNumero;
      cout << "\nSegundo: ";
      cin >> segundoNumero;
      cout << "\n\n";

      if (primerNumero >= segundoNumero)
      {
          if ((primerNumero % segundoNumero) == 0) // ¿es primerNumero múltiplo de segundoNumero?
          {
              if (primerNumero == segundoNumero)
                  cout << "¡Son iguales!\n";
              else
                  cout << " ¡El primer número es multiplo del segundo!\n";
          }
          else
              cout << " ¡El primer numero no es multiplo del segundo\n";
      }
      else
          cout << "¡Hey! ¡El segundo es mas grande!\n";
      return 0;
}
