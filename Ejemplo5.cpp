//Ejemplo de función que retorna rvalue
#include <iostream>

using namespace std;

int getValue(){
    return 17;    //esta función retorna un rvalue
}
 int main(){

    getValue() = 100; 

     return 0;
 }