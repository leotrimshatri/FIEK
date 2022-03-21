/* Detyra 6
	Operatori per inkrementim te vleres ku pointon pointeri
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

	(*p)++;

	cout << "Adresa e a: " << &a << endl;
	cout << "Vlera e a: " << a << endl;
	cout << "Vlera e p: " << p << endl;
	cout << "Vlera ku pointon p: " << *p << endl;
	
	return 0;
}
