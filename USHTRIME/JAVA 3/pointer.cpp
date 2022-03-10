/* Detyra 4
* Address-of operatori
*/
#include <iostream>
#include <string>

using namespace std;

int main() {

	int a = 5;
	int b = 20;

	cout << "Vlera e variables a: " << a << endl;
	cout << "Adresa e variables a: " << &a << endl;
	cout << "Vlera e variables b: " << b << endl;
	cout << "Adresa e variables b: " << &b << endl;

	return 0;
}

/*
	Detyra 5
	Deklarimi dhe inicializimi i pointerit
*/
#include <iostream>
#include <string>

using namespace std;

int main() {
	int a = 5;
	int* b = &a;

	cout << "Vlera e variables a: " << a << endl;
	cout << "Adresa e variables a: " << &a << endl;
	cout << "Vlera e pointerit b: " << b << endl;
	cout << "Vlera ku pointon b: " << *b << endl;

	return 0;
}

/*
	Detyra 6
	Percaktimi i vlerave per variablat e pa-inicalizuara permes pointerit
*/
#include <iostream>
#include <string>

using namespace std;

int main() {
	int a, b;
	int* p;

	p = &a;
	*p = 10;

	p = &b;
	*p = 20;

	cout << "*p: " << *p << endl;
	cout << "p: " << p << endl;
	cout << "a: " << a << endl;
	cout << "&a: " << &a << endl;
	cout << "b: " << b << endl;
	cout << "&b: " << &b << endl;

	return 0;
}
