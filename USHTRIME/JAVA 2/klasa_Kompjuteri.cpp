/* Detyra 1 
	a) Të definohet klasa Kompjuteri
	b) Klasa të ketë si atribute private: procesori, memoria, brendi dhe statusi
	c) Të definohen funksionet publike për përcaktimin e vlerave të atributeve përkatëse
	d) Të definohet funksioni ndez, i cili ndryshon statusin e kompjuterit nëse ai është i ndalur
	e) Të definohet funksioni ndal, i cili ndryshon statusin e kompjuterit nëse ai është i ndezur.
	f) Të definohet një funksion i cili tregon statusin aktual të kompjuterit.
*/
 
#include <iostream>
#include <string>

using namespace std;

class Kompjuteri {
private:
	string procesori;
	string brendi;
	int memoria;
	bool statusi;
	
public:
	void percaktoVlerat() {
		cout << "Brendi: ";
		cin >> brendi;
		cout << "Procesori: ";
		cin >> procesori;
		cout << "Memoria: ";
		cin >> memoria;
		statusi = false;
	}

	void ndez() {
		if (statusi == false) {
			statusi = true;
			cout << "Kompjuteri u ndez me sukses" << endl;
		}
		else {
			cout << "Verejtje! Kompjuteri eshte i ndezur" << endl;
		}
	}

	void ndal() {
		if (statusi) {
			statusi = false;
			cout << "Kompjuteri u ndal me sukses" << endl;
		}
		else {
			cout << "Verejtje! Kompjuteri eshte i ndalur" << endl;
		}
	}

	void ndryshoStatusin() {
		// Menyra 1
		statusi = !statusi;

		// Menyra 2
		// statusi ? statusi = false : statusi = true;

		// Menyra 3
		/*if (statusi) {
			statusi = false;
		}
		else {
			statusi = true;
		}*/
	}

	bool merrStatusin() {
		return statusi;
	}

	string merrStatusinSiTekst() {
		return statusi ? "Ndezur" : "Ndalur";
	}
};

int main() {

	Kompjuteri kompjuteri;

	kompjuteri.percaktoVlerat();
	cout << "Statusi i kompjuteri: " << kompjuteri.merrStatusinSiTekst() << endl;
	kompjuteri.ndez();
	cout << "Statusi i kompjuteri: " << kompjuteri.merrStatusinSiTekst() << endl;
	kompjuteri.ndez();
	kompjuteri.ndal();
	cout << "Statusi i kompjuteri: " << kompjuteri.merrStatusinSiTekst() << endl;
	kompjuteri.ndal();

	kompjuteri.ndryshoStatusin();
	cout << "Statusi i kompjuteri: " << kompjuteri.merrStatusinSiTekst() << endl;
	kompjuteri.ndryshoStatusin();
	cout << "Statusi i kompjuteri: " << kompjuteri.merrStatusinSiTekst() << endl;

	return 0;
  }
