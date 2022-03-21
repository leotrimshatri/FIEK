/* Detyra 7
	Pointeret dhe konstantet
*/
#include <iostream>

using namespace std;

int main() {

	int a;
	int b = 7;

	const int* p = &b;
	a = *p + 2;

	cout << "a: " << a << endl;
	cout << "b: " << b << endl;
	cout << "*p: " << *p << endl;

	b = 11;

	cout << "a: " << a << endl;
	cout << "b: " << b << endl;
	cout << "*p: " << *p << endl;

	p = &a;

	cout << "a: " << a << endl;
	cout << "b: " << b << endl;
	cout << "*p: " << *p << endl;
	
	return 0;
}
