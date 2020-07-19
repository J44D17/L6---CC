//Ejemplo de función que retorna rvalue
#include <iostream>

using namespace std;
int global = 100;
int &getGlobal(){
    return global;    
}
int main(){

    getGlobal() = 200; 

     return 0;
 }
