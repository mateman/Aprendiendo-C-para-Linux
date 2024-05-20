// Listado4.2 - muestra la resta
// y el desbordamiento de enteros
#include <iostream>   //correccion hecha al codigo original explicado en apartado de la hoja 22
using namespace std;  //correccion hecha al codigo original explicado en apartado de la hoja 23

 int main()
 {

 unsigned int diferencia;
 unsigned int numeroGrande = 100;
 unsigned int numeroChico = 50;

 diferencia = numeroGrande - numeroChico;
 cout << "La diferencia es: " << diferencia ;
 diferencia = numeroChico - numeroGrande;
 cout << " \nAhora la diferencia es: " << diferencia << endl;

 return 0;

}
