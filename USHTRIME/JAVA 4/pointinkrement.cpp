/* Detyra 5 
	Operatori per inkrementim te pointerit
*/
#include <iostream>

using namespace std;

int main() {

	int a = 3;
	int* p = &a;

	cout << "Adresa e a: " << &a << endl;
	cout << "Vlera e a: " << a << endl;
	cout << "Vlera e p: " << p << endl;
	cout << "Vlera ku pointon p: " << *p << endl;

	*p++;

	cout << "Adresa e a: " << &a << endl;
	cout << "Vlera e a: " << a << endl;
	cout << "Vlera e p: " << p << endl;
	cout << "Vlera ku pointon p: " << *p << endl;
	
	return 0;
}
