/*
2. 	Të definohet klasa Lenda e cila përmban një anëtar privat për numrin e kredive. Caktimi i vlerës së kredive të bëhet përmes një funksioni
	caktoKredite, kurse leximi i vlerës të bëhet përmes një funksioni tjetër lexoKredite. Brenda funksionit main të krijohet një instancë
	e klasës Lenda, përmes së cilës caktohet numri i kredive dhe në fund printohet numri i kredive të caktuara paraprakisht.
*/

#include <iostream>

using namespace std;

class Lenda {
private:
	int numriKredive;

public:
	void caktoNrKredive(int n) {
		numriKredive = n;
	}

	int lexoNrKredive() {
		return numriKredive;
	}
};

int main() {

	Lenda l;

	l.caktoNrKredive(5);
	cout << "Numri i kredive: " << l.lexoNrKredive() << endl;

	return 0;
}
