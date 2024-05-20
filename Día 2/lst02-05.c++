#include <iostream>   //correccion hecha al codigo original explicado en apartado de la hoja 22
using namespace std;  //correccion hecha al codigo original explicado en apartado de la hoja 23

int Suma (int x, int y)
{
    cout << "En Suma()), se recibieron " << x << " y " << y << "\n";
    return (x+y);
}

int main()
{
    cout << "¡Estoy en main()!\n";
    int a, b, c;
    cout << "Escriba dos números: ";
    cin >> a;
    cin >> b;
    cout << "\nLlamando a Suma()\n";
    c=Suma(a,b);
    cout << "\nDe regreso en main().\n";
    cout << "c contiene el número " << c;
    cout << "\nSaliendo...\n\n";
    return 0;
}