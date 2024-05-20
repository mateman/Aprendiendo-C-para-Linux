// Listado 2.2 uso cout
#include <iostream>   //correccion hecha al codigo original explicado en apartado de la hoja 22
using namespace std;  //correccion hecha al codigo original explicado en apartado de la hoja 23

 int main()
 {
    cout << "Saludos a todos\n";
    cout << "Aquí hay un 5: " << 5 << " \n";
    cout << "El manipulador endl escribe una nueva linea en la pantalla";
    cout <<
            endl;
    cout << "Aquí hay un número muy grande:\t" << 70000 << endl;
    cout << "Aquí está la suma de 8 y 5:\t" << 8+5 << endl;
    cout << "Aquí hay una fracción:\t\t" << (float) 5/8 << endl;
    cout << "Y un número muy grande:\t";
    cout << (double) 7000 * 7000 <<
            endl;
    cout << "No olvide reemplazar Jesse Liberty con su nombre...\n";
    cout << "¡Jesse Liberty es un programador de C++!\n";
    return 0;
 }