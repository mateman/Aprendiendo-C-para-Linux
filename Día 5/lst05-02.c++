#include <iostream>   //correccion hecha al codigo original explicado en apartado de la hoja 22
using namespace std;  //correccion hecha al codigo original explicado en apartado de la hoja 23

float Convertir(float);
int main()
{
  float TempFar;
  float TempCen;

  cout << "Escriba la temperatura en grados Fahrenheit: ";
  cin >> TempFar;

  TempCen = Convertir(TempFar);

  cout << "\nAquí está la temperatura en grados centígrados: ";
  cout << TempCen << endl;
  return 0;
}

float Convertir(float TempFar)
{
  float TempCen;

  TempCen = ((TempFar - 32) * 5) / 9;
  return TempCen;
}
