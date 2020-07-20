#include <iostream>

using namespace std;

class N{
    public:
        N(){
            cout<<"Constructor por defecto"<<endl;
        }
        N(const N&){
            cout<<"Constructor de copia"<<endl;
        }
        N(const N&&){
            cout<<"Constructor de movimiento"<<endl;
        }

};

int main(){

    N a;
    N b = a;

    return 0;
}