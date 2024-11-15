class Gato
{
public:
static int ObtenerCuantos () { return CuantosGatos; }
prívate:
static int CuantosGatos;
};
int Gato::CuantosGatos =0;
int main()
{
int cuantos;
Gato elGato;                       // definir un gato
cuantos = elGato.ObtenerCuantos(); // acceso a través de un objeto
cuantos = Gato::ObtenerCuantos();  // acceso sin un objeto
}
