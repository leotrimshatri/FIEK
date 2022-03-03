/*
4. Të krijohet programi sipas instruksioneve në vijim:
	a) Të definohet një klasë me emrin Klasa
	b) Brenda klasës të deklarohen dy anëtarë privat, tipi i të cilëve përcaktohet sipas dëshirës 
	c) Të definohet funksioni lexo, i cili lexon vlerat e dy anëtarëve privat nga tastiera
	d) Të deklarohet prototipi i funksionit printo, kurse definimi i tij të bëhet jashtë klasës. Funksioni duhet që të
	   printoj vlerat e dy anëtarëve privat të klasës.
	e) Brenda funksionit main, të krijohet një instancë e klasës Klasa. Përmes instancës të thirren dy funksionet e definuara.
*/

#include <iostream>

using namespace std;

class Klasa {
private:
	int a;
	char b;

public:
	void lexo() {
		cout << "Vlera e a: ";
		cin >> a;
		cout << "Vlera e b: ";
		cin >> b;
	}

	void printo() {
		cout << "a: " << a << endl;
		cout << "b: " << b << endl;
	}
};


int main() {

	Klasa k;

	k.lexo();
	k.printo();

	return 0;
}

// Inicializim nga funksioni main, në rastin kur anëtarët janë publik. ------------------------------------------------------------------------------------------------------------------
#include <iostream>

using namespace std;

class Klasa {
public:
	int a;
	char b;

	void printo() {
		cout << "a: " << a << endl;
		cout << "b: " << b << endl;
	}
};


int main() {

	Klasa k;

	k.a = 3;
	k.b = 'a';
	
	k.printo();

	return 0;
}

// Formë tjetër e inicializimit
#include <iostream>

using namespace std;

class Klasa {
public:
	int a;
	char b;

	void printo() {
		cout << "a: " << a << endl;
		cout << "b: " << b << endl;
	}
};


int main() {

	Klasa k = { 3, 'a'};
	
	k.printo();

	return 0;
}

// Caktimi i vlerave përmes një funksioni publik caktoVlerat. ------------------------------------------------------------------------------------------------------------------
#include <iostream>

using namespace std;

class Klasa {
private:
	int a;
	char b;
	
public:
	void caktoVlerat(int c, char d) {
		a = c;
		b = d;
	}

	void printo() {
		cout << "a: " << a << endl;
		cout << "b: " << b << endl;
	}
};

int main() {

	Klasa k;
	k.caktoVlerat(3, 'a');
	k.printo();

	return 0;
}
