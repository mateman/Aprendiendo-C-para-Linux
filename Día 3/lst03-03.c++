// *****************
// M uestra de l a p a la b ra reservada typedef
#include <iostream>   //correccion hecha al codigo original explicado en apartado de la hoja 22
using namespace std;  //correccion hecha al codigo original explicado en apartado de la hoja 23
typedef unsigned short int USHORT;  //typedef definido

 int main()
 {
    USHORT Ancho = 5;
    USHORT Longitud;
    Longitud = 10;
    USHORT Area = Ancho * Longitud;
    cout << "Ancho : " << Ancho << "\n" ;
    cout << "Longitud : " << Longitud << endl;
    cout << "Area: " << Area << endl ;
    return 0;
 }
