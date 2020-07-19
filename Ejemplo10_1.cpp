//Correción de uso de referencia lvalue funcion
#include <iostream>

using namespace std;

void funcion(const int& x){
}

int main()
{
    funcion(17); 
    
    return 0;
}

