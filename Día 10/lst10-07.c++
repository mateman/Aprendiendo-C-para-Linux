// Listado 10.7
// La clase Contador
#include <iostream>
using namespace std;  // para cout

class Contador
{
public:
    Contador ();
     ~Contador(){}
     int ObtenerSuVal() const
        { return suVal; }
     void AsignarSuVal ( int x );
     void Incremento()
        {++suVal; }
private:
      int suVal;
};

Contador::Contador():
  suVal(0)
  {}

int main()
{
  Contador i;
  cout << "El valor de i es ";
  cout << i.ObtenerSuVal() << endl;
  i.Incremento(); 
  cout << "El valor de i es ";
  cout << i.ObtenerSuVal() << endl;
  return 0;
}
