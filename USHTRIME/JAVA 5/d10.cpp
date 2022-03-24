/*	Detyra 9   
	Objektet referente
	a)	Të definohet klasa Telefoni me këta anëtarë: emri, memoria dhe viti i prodhimit(private)
	b)	Inicializimi i anëtarëve privat të bëhet përmes konstruktorit
	c)	Të definohet një funksion vjetërsia, i cili kalkulon vjetërsinë e telefonit.
	d)	Brenda funksionit main të deklarohet një instancë e klasës Telefoni dhe të thirret funksioni vjetërsia
	e)	Të deklarohet një referencë e instancës së krijuar në pikën d)
	f)	Të thirret funksioni vjetërsia përmes referencës së definuar.
*/
#include <iostream>

using namespace std;

class Telefoni {
private:
	string emri;
	int memoria;
	int vitiProdhimit;
public:
	Telefoni(string emri, int memoria, int vitiProdhimit) {
		this->emri = emri;
		this->memoria = memoria;
		this->vitiProdhimit = vitiProdhimit;
	}

	void setVitiProdhimit(int vitiProdhimit) {
		this->vitiProdhimit = vitiProdhimit;
	}

	int vjetersia() {
		return 2022 - vitiProdhimit;
	}
};

int main() {

	Telefoni telefoni("Samsung", 2017);
	cout << "Vjetersia: " << telefoni.vjetersia() << endl;

	Telefoni& telefoniRef = telefoni;
	cout << "Vjetersia: " << telefoniRef.vjetersia() << endl;

	telefoniRef.setVitiProdhimit(2020);
	cout << "Vjetersia: " << telefoni.vjetersia() << endl;
	cout << "Vjetersia: " << telefoniRef.vjetersia() << endl;

	return 0;
}
