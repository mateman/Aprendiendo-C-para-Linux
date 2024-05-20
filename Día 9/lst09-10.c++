//Listado 9.10
// Paso de apuntadores a objetos
#include <iostream>
using namespace std;  // para cout

class GatoSimple
{
public:
    GatoSimple (); //constructor
    GatoSimple (GatoSimple &) ; // constructor de copia
    ~GatoSimple(); // destructor
};

GatoSimple::GatoSimple()
{
    cout << "Constructor de GatoSimple...\n";
}

GatoSimple::GatoSimple(GatoSimple &)
{
    cout << "Constructor de copia de GatoSimple...\n" ;
}

GatoSimple::~GatoSimple()
{
    cout << "Destructor de GatoSimple...\n" ;
}

    GatoSimple FuncionUno(GatoSimple elGato);
    GatoSimple * FuncionDos(GatoSimple * elGato);

int main()
{
    cout << "Crear un gato...\n";
    GatoSimple Pelusa;
    cout << "Llamando a Funcionllno...\n";
    FuncionUno(Pelusa);
    cout << "Llamando a FuncionDos...\n";
    FuncionDos(&Pelusa);
    return 0;
}

// Funcionllno, pasa por valor
GatoSimple FuncionUno(GatoSimple elGato)
{
    cout << "Funcionllno. Regresando...\n";
    return elGato;
}

// FuncionDos, pasa por referencia
GatoSimple * FuncionDos(GatoSimple * elGato)
{
    cout << "FuncionDos. Regresando...\n";
    return elGato;
}
