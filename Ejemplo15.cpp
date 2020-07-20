#include <iostream>

using namespace std;

class N{
    private:
        int x;
    public:
        N(int _x){
            x=_x;
        }
};

N retornar(N r){ //construimos un objeto r para que lo reciba la función
    return r;
}

int main(){

    N objeto(4); //se construye un objeto

    N b = retornar(objeto);  //constructor de copia 

    return 0;
}
