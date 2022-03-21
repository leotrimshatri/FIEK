
/* Detyra 10
	Pointeret me tipe komplekse
*/
#include <iostream>

using namespace std;

class Klasa {
private:
	int a, b;

public:
	Klasa(int a, int b) {
		this->a = a;
		this->b = b;
	}

	int shuma() {
		return a + b;
	}
};

int main() {

	Klasa klasa(2, 3);
	cout << "Shuma: " << klasa.shuma() << endl;

	Klasa* klasaPtr = &klasa;
	cout << "Shuma: " << klasaPtr->shuma()<< endl;
	cout << "Shuma: " << (*klasaPtr).shuma() << endl;
	
	return 0;
}
