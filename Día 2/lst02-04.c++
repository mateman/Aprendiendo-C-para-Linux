#include <iostream>   //correccion hecha al codigo original explicado en apartado de la hoja 22
using namespace std;  //correccion hecha al codigo original explicado en apartado de la hoja 23

// función FuncionDeMuestra
// imprime un mensaje útil

void FuncionDeMuestra()
{
cout << "Estamos dentro de FuncionDeMuestra\n";
}

// función main - imprime un mensaje y luego
// llama a FuncionDeMuestra, luego imprime
// un segundo mensaje.

 int main()
 {
    cout << "Estamos dentro de main\n" ;
    FuncionDeMuestra();
    cout << "Estamos de regreso en main\n";
    return 0;
 }