/*  Detyra 1  
	a)	Të deklarohet funksioni shuma me dy pointer parametra, a dhe b, të tipit integjer.
	b)	Për rastin kur a është numër më i madh se b, shuma të kthehet -1.
	c)	Brenda trupit të funksionit të shkruhet kodi për llogaritjen e shumës së numrave duke filluar prej a deri në b dhe të kthehet rezultati i arritur
	d)	Brenda funksionit main të deklarohen dy variabla integjer, vlerat e të cilave lexohen përmes tastierës
	e)	Të thirret funksioni shuma, duke i kaluar si argumente variablat e deklaruara në pikën d dhe të printohet rezultati i kthyer
	f)	Të modifikohet funksioni shuma ashtë që tipi kthyes të jetë pointer
*/
#include <iostream>

using namespace std;

int shuma(int* a, int* b) {
	if (*a > *b) {
		return -1;
	}

	int s = 0;

	for (int i = *a; i <= *b; i++) {
		s += i;
	}

	return s;
}

int main() {
	int c, d;
	cout << "Vlera e c: ";
	cin >> c;
	cout << "Vlera e d: ";
	cin >> d;

	cout << "Shuma: " << shuma(&c, &d) << endl;

	return 0;
}

// 1-f
#include <iostream>

using namespace std;

int* shuma(int* a, int* b) {
	int s = 0;
	if (*a > *b) {
		s = -1;
		return &s;
	}

	for (int i = *a; i <= *b; i++) {
		s += i;
	}

	return &s;
}

int main() {
	int c, d;
	cout << "Vlera e c: ";
	cin >> c;
	cout << "Vlera e d: ";
	cin >> d;

	cout << "Shuma: " << *shuma(&c, &d) << endl;

	return 0;
}
