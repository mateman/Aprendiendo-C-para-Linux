#include <iostream>   //correccion hecha al codigo original explicado en apartado de la hoja 22
using namespace std;  //correccion hecha al codigo original explicado en apartado de la hoja 23

 int main()
 {
   const int Domingo = 0;
   const int Lunes = 1;
   const int Martes = 2;
   const int Miércoles = 3;
   const int Jueves = 4;
   const int Viernes = 5;
   const int Sabado = 6;

   int opcion;
   cout << "Escriba un dia (0-6): ";
   cin >> opcion;

   if (opcion == Domingo || opcion == Sabado)
      cout << "\niYa se le agotaron los fines de semana!\n";
   else
      cout << " \n Está bien , incluiré un dia de descanso. \n " ;
   return 0;
}
