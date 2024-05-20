#include <iostream>   //correccion hecha al codigo original explicado en apartado de la hoja 22
using namespace std;  //correccion hecha al codigo original explicado en apartado de la hoja 23

void miFuncion(); // prototipo

int x = 5, y = 7; // variables globales

int main()
{
    cout << "x desde la función main: " << x <<"\n";
    cout << "y desde la función main: " << y <<"\n \n";
    miFuncion();
    cout << "¡Ya salimos de miFuncion!\n\n";
    cout << "x desde la función main: " << x <<"\n";
    cout << "y desde la función main: " << y <<"\n";
    return 0;
}

void miFuncion()
 {
    int y = 10;

    cout << "x desde miFuncion: " << x << "\n";
    cout << "y desde miFuncion: " << y << "\n\n";
 }
