/* Detyra 2
a) Te deklarohet nje varg me 5 anetare, inicializimi i te cilit behet ne deklarim. Te printohet 
adresa dhe vlera e secilit prej anetareve te vargut
b) Te deklarohet nje pointer, i cili si vlere merr vargun e inicalizuar me larte
c) Te printohet adresa dhe vlera e secilit element te vargut permes pointereve dhe operatorit
te dereferencimit
*/

// a
#include <iostream>

using namespace std;

int main() {

	const int gjatesiaVargut = 5;
	int vargu[gjatesiaVargut] = { 4, 1, 6, 9, 2 };

	for (int i = 0; i < gjatesiaVargut; i++)
	{
		cout << "Adresa e anetarit " << i + 1 << ": " << &vargu[i] << endl;
		cout << "Vlera e anetarit " << i + 1 << ": " << vargu[i] << endl;
	}


	return 0;
}

// b
#include <iostream>

using namespace std;

int main() {

	const int gjatesiaVargut = 5;
	int vargu[gjatesiaVargut] = { 4, 1, 6, 9, 2 };

	int* varguPtr = vargu;
	cout << "vargu: " << vargu << endl;
	cout << "varguPtr: " << varguPtr << endl;

	for (int i = 0; i < gjatesiaVargut; i++)
	{
		cout << "Adresa e anetarit " << i + 1 << ": " << &vargu[i] << endl;
		cout << "Vlera e anetarit " << i + 1 << ": " << vargu[i] << endl;
	}


	return 0;
}

//c 
#include <iostream>

using namespace std;

int main() {

	const int gjatesiaVargut = 5;
	int vargu[gjatesiaVargut] = { 4,7,9,1,5 };

	int* varguPtr = vargu;
	cout << "vargu: " << vargu << endl;
	cout << "varguPtr: " << varguPtr << endl;
	cout << "*varguPtr: " << *varguPtr << endl;

	for (int i = 0; i < gjatesiaVargut; i++)
	{
		cout << "Adresa e anetarit " << i + 1 << ": " << varguPtr + i << endl;
		cout << "Vlera e anetarit " << i + 1 << ": " << *(varguPtr + i) << endl;
	}

	return 0;
}
