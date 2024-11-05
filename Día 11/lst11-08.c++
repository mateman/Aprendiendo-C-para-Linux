//Listado 11.8 Uso de métodos virtuales
#include <iostream>
using namespace std;  // para cout

class Mamifero
{
public:
        Mamifero() : suEdad(1)
            { cout << "Constructor de Mamífero.. \n "; }
        virtual ~Mamifero()
            { cout << "Destructor de Mamífero.. \n"; }
        void Mover() const
            { cout << "Mamífero se mueve un paso\n" ; }
        virtual void Hablar() const
            { cout << "¡Mamífero habla!\n"; }
protected:
        int suEdad;
};

class Perro : public Mamifero
{
public:
        Perro()
            { cout << "Constructor de Perro...\n"; }
        virtual ~Perro()
            { cout << "Destructor de Perro...\n"; }
        void MoverCola()
            { cout << "Moviendo la cola...\n"; }
        void Hablar()const
            { cout << "¡Guau!\n"; }
        void Mover()const
            { cout << "Perro se mueve 5 pasos...\n"; }
};

int main()
{
  Mamifero * apPerro = new Perro;
  apPerro->Mover();
  apPerro->Hablar();
  return 0;
}
