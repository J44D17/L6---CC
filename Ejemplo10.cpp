//Error de uso de referencia lvalue funcion
#include <iostream>

using namespace std;

void funcion(int& x){
}

int main()
{
    funcion(17); 
    
    return 0;
}

