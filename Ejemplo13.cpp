//referencia rvalue con funciones

#include <iostream>

using namespace std;

void fun(const int &lvr) {
	cout << "referencia lvalue a constante\n";
}
void fun(int &&rvr) {
	cout << "referencia rvalue \n";
}
int main()
{
	int x = 5;
	fun(x); // l-value argument llama al lvalue de la funcion

	fun(5); // r-value argument llama al rvalue de lafunction
 
	return 0;
}