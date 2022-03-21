/* Detyra 8
	Pointer ne pointer
*/
#include <iostream>

using namespace std;

int main() {

	int a = 3;
	int& b = a;

	cout << "Adresa e a: " << &a << endl;
	cout << "Vlera e a: " << a << endl;
	cout << "Adresa e b: " << &b << endl;
	cout << "Vlera e b: " << b << endl;

	b = 6;

	cout << "Adresa e a: " << &a << endl;
	cout << "Vlera e a: " << a << endl;
	cout << "Adresa e b: " << &b << endl;
	cout << "Vlera e b: " << b << endl;
	
	return 0;
}
