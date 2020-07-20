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

//constructor copia
N::N(N & old) {
    reset();
    copy_data(_a, old._a);
    copy_data(_b, old._b);
    copy_data(_c, old._c);
    copy_data(_d, old._d);
}

//constructor de movimiento
N::N(N && old) {
    reset();
    _a = std::move(old._a);
    _b = std::move(old._b);
    _c = std::move(old._c);
    _d = std::move(old._d);
    old.reset
}