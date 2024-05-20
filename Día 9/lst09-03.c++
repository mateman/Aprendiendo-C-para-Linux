// Listado 9.3
// Reasignacion de una referencia
#include <iostream>
using namespace std;  // para cout

int main ()
{
    int intUno;
    int & rUnaRef = intUno;

    intUno = 5;
    cout << "intUno:\t\t" << intUno << endl;
    cout << "rUnaRef:\t" << rUnaRef << endl;
    cout << "&intUno:\t" << &intUno << endl;
    cout << "&rUnaRef:\t" << &rUnaRef << endl;
    int intDos = 8;
    rUnaRef = intDos; // ¡no es lo que usted piensa!
    cout << "\nintUno:\t\t" << intUno << endl;
    cout << "intDos:\t\t" << intDos << endl;
    cout << "rUnaRef:\t" << rUnaRef << endl;
    cout << "&intUno:\t" << &intUno << endl;
    cout << "&intDos:\t" << &intDos << endl ;
    cout << "&rUnaRef:\t" << &rUnaRef << endl;
    return 0;
}
