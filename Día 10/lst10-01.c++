// Listado 10.1 Sobrecarga de funciones
// miembro de una clase
#include <iostream>
using namespace std;  // para cout

// Declaración de la clase Rectángulo
class Rectangulo
{
  public:
    // constructores
    Rectangulo ( int ancho, int altura ) ;
    ~Rectangulo(){}
    // función DibujarFigura () sobrecargada de la clase
    void DibujarFigura () const;
    void DibujarFigura ( int unAncho, int unaAltura ) const ;
  private:
    int suAncho;
    int suAltura ;
};

//Implenentación del constructor
Rectangulo::Rectangulo ( int ancho, int altura )
{
    suAncho = ancho;
    suAltura = altura ;
}

// Función Dibujar Figuras ob recargada - no toma valores
// Dibuja con base en los valores miembro actuales de la cías
void Rectangulo::DibujarFigura() const
{
    DibujarFigura(suAncho, suAltura);
}

// Función Dibujar Figuras ob recargada - tomados valores
// dibuja la figura con base en los parámetros
void Rectangulo::DibujarFigura ( int ancho, int altura ) const
{
    for ( int i = 0; i < altura ; i++ )
    {
        for ( int j = 0; j < ancho; j++)
            {
             cout << "*" ;
            }
        cout << "\n" ;
    }
}

// Programa controlador para mostrar las funciones sobrecargadas
int main ( )
{
    // ínicializar un rectángulo con 30,5
    Rectangulo elRect ( 30 , 5);
    cout << "Dibujar Figura():\n";
    elRect.DibujarFigura();
    cout << "\nDibujar Figura ( 40 , 2): \n";
    elRect.DibujarFigura (40, 2);
    return 0;
}
