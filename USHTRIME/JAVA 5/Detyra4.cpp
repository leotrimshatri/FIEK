
/* Detyra 4 
	Referencat konstante
 */
 #include <iostream>

using namespace std;

int main() {

	int a = 1;
	const int& b = a;

	cout << "a: " << a << endl;
	cout << "b: " << b << endl;

	a = 7;

	cout << "a: " << a << endl;
	cout << "b: " << b << endl;

	return 0;
}
