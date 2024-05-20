// Listado 8.9
// Muestra de un apuntador perdido
#include <iostream>
using namespace std;  // para cout

typedef unsigned short int USHORT;

int main()
{
    USHORT * aplnt = new USHORT;
    *aplnt = 10;
    cout << "*aplnt: " << *aplnt << endl;
    delete aplnt;
    long * apLong = new long;
    *apLong = 90000;
    cout << "*apLong: " << *apLong << endl;
    *aplnt = 20; // icaramba, éste fue eliminado!
    cout << "*aplnt: " << *aplnt << endl;
    cout << "*apLong: " << *apLong << endl;
    delete apLong;
    return 0;
}
