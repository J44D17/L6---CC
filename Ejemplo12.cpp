//Ejemplo básico de Referencia rvalue
#include <iostream>

using namespace std;

int main()
{
    int&& x = 5 ; //creando una referencia rvalue con una temporal que es 5
    x = 10;
    cout << x << '\n';
 
    return 0;
}
