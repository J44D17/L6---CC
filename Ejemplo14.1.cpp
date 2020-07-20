#include <iostream>

using namespace std;

class N //Creamos una clase llamada N
{
    private:
	int dato;

	public:
		void setDato(int _dato) {
            dato = _dato;
        }
		int getDato()  {
            return dato;
        }		
};

int main()
{
	N y; //creamos un objeto
	y.setDato(17); //lo inicializamos con (17)
	N x = std::move(y); //Creamos otro objeto y enves de copiarlo, movemos los datos del otro

	cout<<y.getDato()<<endl;

	return 0;
}
