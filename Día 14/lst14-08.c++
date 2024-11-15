// Listado 14.8 Sin apuntadores a funciones
#include <iostream>
using namespace std;  // para cout

void Cuadrado (int&,int&);
void Cubo (int&, int&);
void Intercambiar (int&, int &);
void ObtenerValores(int&, int&);
void ImprimirValores(void (*)(int&, int&),int&, int&);

int main()
{
  int valUno=1, valDos=2;
  int opcion;
  bool fSalir = false;
  void (*apFunc)(int&, int&);
  while (fSalir == false)
  {
    cout << "(0)Salir (1)Cambiar Valores (2)Cuadrado (3)Cubo (4)Intercambiar: ";
    cin >> opcion;
    switch (opcion)
    {
      case 1:apFunc = ObtenerValores; break;
      case 2:apFunc = Cuadrado; break;
      case 3:apFunc = Cubo; break;
      case 4:apFunc = Intercambiar; break;
      default: fSalir = true; break;
    }
    if (fSalir == true)
      break;
    ImprimirValores (apFunc, valUno, valDos);
  }
  return 0;
}

void ImprimirValores(void (*apFunc)(int&, int&),int& x, int& y)
{
  cout << "x: " << x << " y: " << y << endl;
  apFunc(x,y);
  cout << "x: " << x << " y: " << y << endl;
}

void Cuadrado (int & rX, int & rY)
{
  rX *= rX;
  rY *= rY;
}

void Cubo (int & rX, int & rY)
{
  int tmp;
  tmp = rX;
  rX *= rX;
  rX = rX * tmp;
  tmp = rY;
  rY *= rY;
  rY = rY * tmp;
}

void Intercambiar (int & rX, int & rY)
{
  int temp;
  temp = rX;
  rX = rY;
  rY = temp;
}

void ObtenerValores (int & rValUno, int & rValDos)
{
  cout << "Nuevo valor para valUno: ";
  cin >> rValUno;
  cout << "Nuevo valor para valDos: ";
  cin >> rValDos;
}
