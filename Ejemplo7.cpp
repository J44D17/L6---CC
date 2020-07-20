//Pasar de lvalue a rvalue
#include <iostream>

using namespace std;

int main(){

    int x = 300;
    int y= 400;
    int z = x + y; // "x" y "y" son rvalue ahora
}