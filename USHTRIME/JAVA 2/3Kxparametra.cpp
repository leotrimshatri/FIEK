/* Detyra 3 
*	a) Konstruktori pa parametra
*	b) Inicializimi i anetareve privat permes konstruktorit pa parametra
*	c) Inicializimi i anetareve privat permes konstruktorit me parametra
*	d) Mbingarkimi i konstruktoreve
*/
 
// a ______________________________________________________________________________________________________________________________________________________________________
#include <iostream>
#include <string>

using namespace std;

class Pika {
private:
	int a;
	int b;
	
public:
	Pika() {
		cout << "Konstruktori pa parametra" << endl;
	}
};

int main() {

	Pika p;

	return 0;
}

// b ______________________________________________________________________________________________________________________________________________________________________
#include <iostream>
#include <string>

using namespace std;

class Pika {
private:
	int a;
	int b;
	
public:
	Pika() {
		cout << "Konstruktori pa parametra" << endl;
		cout << "a: ";
		cin >> a;
		cout << "b: ";
		cin >> b;
	}

	int shuma() {
		return a + b;
	}
};

int main() {

	Pika p;

	cout << "Shuma: " << p.shuma();

	return 0;
}

// c ______________________________________________________________________________________________________________________________________________________________________
#include <iostream>
#include <string>

using namespace std;

class Pika {
private:
	int a;
	int b;
	
public:
	Pika(int a, int b) {
		cout << "Konstruktori me parametra" << endl;
		this->a = a;
		this->b = b;
	}

	int shuma() {
		return a + b;
	}
};

int main() {

	Pika p(4, 1);

	cout << "Shuma: " << p.shuma();

	return 0;
}

// d ______________________________________________________________________________________________________________________________________________________________________
#include <iostream>
#include <string>

using namespace std;

class Pika {
private:
	int a;
	int b;
	
public:
	Pika() {
		cout << "Konstruktori pa parametra" << endl;
		cout << "a: ";
		cin >> a;
		cout << "b: ";
		cin >> b;
	}

	Pika(int a, int b) {
		cout << "Konstruktori me parametra" << endl;
		this->a = a;
		this->b = b;
	}

	int shuma() {
		return a + b;
	}
};

int main() {

	Pika p(4, 1);

	cout << "Shuma: " << p.shuma() << endl;

	Pika pika2;
	cout << "Shuma: " << pika2.shuma() << endl;

	return 0;
}
