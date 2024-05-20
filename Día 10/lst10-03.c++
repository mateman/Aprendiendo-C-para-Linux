// Listado 10.3
// Sobrecarga de constructores
#inelude <iostream>
using namespace std;  // para cout

class Rectángulo
{
public:
Rectangulo ();
Rectangulo ( int ancho, int longitud );
~Rectángulo() {}
int ObtenerAncho() const
{ return suAncho; }
int ObtenerLongitud () const
{ return suLongitud; }
private:
int suAncho;
int suLongitud;
};

Rectangulo::Rectangulo()
{
suAncho = 5;
suLongitud = 10;
}
Rectangulo::Rectangulo ( int ancho, int longitud)
{
suAncho = ancho;
suLongitud = longitud;
}
int main()
{
Rectángulo Rectl ;
cout « "Ancho de Rectl:
cout « Rectl.ObtenerAncho() << endl;
cout « "Longitud de Rectl:
cout « Rectl.ObtenerLongitud() << endl;
int unAncho, unaLongitud;
cout « "Escriba un ancho: ";
cin » unAncho;
cout « "\nEscriba una longitud: " ;
cin » unaLongitud;
Rectángulo Rect2(unAncho, unaLongitud);
cout « "\nAncho de Rect2: “;
cout « Rect2.0btenerAncho() << endl;
cout « "Longitud de Rect2: ";
cout « Rect2.0btenerLongitud( ) « endl;
return 0;
