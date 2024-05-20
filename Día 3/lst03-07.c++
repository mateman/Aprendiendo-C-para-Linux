#include <iostream>   //correccion hecha al codigo original explicado en apartado de la hoja 22
using namespace std;  //correccion hecha al codigo original explicado en apartado de la hoja 23

 int main()
 {
    enum Dias { Domingo, Lunes, Martes,
              Miércoles, Jueves, Viernes, Sabado };
    int opcion;
    cout << "Escriba un dia (0-6): ";
    cin >> opcion;
    if (opcion == Domingo || opcion == Sabado)
      cout << "\n¡Ya se le agotaron los fines de semana!\n";
    else
      cout << "\nEstá bien, incluiré un dia de descanso.\n";
    return 0;
}
