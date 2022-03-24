
/*	Detyra 5  
	Referencat si parametra të funksioneve
	a) Kalimi i argumenteve si vlera
	b) Kalimi i argumenteve si referencë
	c) Shembull me parametra si vlerë dhe si referencë
*/

//a_________________________________________________________________________________________________________________________________________________
#include <iostream>

using namespace std;

void funksioni(int a) {
	cout << "Vlera e a ne fillim te funksionit: " << a << endl;
	a = a + 10;
	cout << "Vlera e a ne fund te funksionit: " << a << endl;
}

int main() {

	int b = 1;
	cout << "Vlera e b para thirrjes se funksionit: " << b << endl;
	funksioni(b);
	cout << "Vlera e b pas thirrjes se funksionit: " << b << endl;

	return 0;
}

//b_________________________________________________________________________________________________________________________________________________
#include <iostream>

using namespace std;

void funksioni(int& a) {
	cout << "Vlera e a ne fillim te funksionit: " << a << endl;
	a = a + 10;
	cout << "Vlera e a ne fund te funksionit: " << a << endl;
}

int main() {

	int b = 1;
	cout << "Vlera e b para thirrjes se funksionit: " << b << endl;
	funksioni(b);
	cout << "Vlera e b pas thirrjes se funksionit: " << b << endl;

	return 0;
}

//c _________________________________________________________________________________________________________________________________________________
#include <iostream>

using namespace std;

void funksioni(int& a, int b) {
	cout << "Vlera e a ne fillim te funksionit: " << a << endl;
	cout << "Vlera e b ne fillim te funksionit: " << b << endl;
	a = a + 10;
	b = b + a;
	cout << "Vlera e a ne fund te funksionit: " << a << endl;
	cout << "Vlera e b ne fund te funksionit: " << b << endl;

}

int main() {

	int b = 1;
	int c = 3;
	cout << "Vlera e b para thirrjes se funksionit: " << b << endl;
	cout << "Vlera e c para thirrjes se funksionit: " << c << endl;
	funksioni(b, c);
	cout << "Vlera e b pas thirrjes se funksionit: " << b << endl;
	cout << "Vlera e c pas thirrjes se funksionit: " << c << endl;

	return 0;
}
