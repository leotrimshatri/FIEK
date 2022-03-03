/*
3. Të krijohet programi sipas instruksioneve në vijim:
	a) Të definohet një klasë Rrethi
	b) Brenda klasës të deklarohet anëtari privat rrezja
	c) Të definohet funksioni kalkuloSiperfaqen, i cili kthen siperfaqen e rrethit për rrezen e caktuar
	d) Të definohet funksioni kalkuloPerimetrin, i cili kthen perimetrin e rrethit për rrezen e caktuar
	e) Brenda funksionit main, të krijohet një instancë e klasës Rrethi. Përmes instancës të përcaktohet rrezja e rrethit
	   dhe të printohet sipërfaqja dhe perimteri i rrethit.
*/
#include <iostream>

using namespace std;

class Rrethi {
	const double PI = 3.14;
private:
	double rrezja;

public:
	void caktoRrezen(double r) {
		rrezja = r;
	}

	double kalkuloSiperfaqen() {
		return PI * rrezja * rrezja;
	}

	double kalkuloPerimetrin() {
		return PI * 2 * rrezja;
	}
};

int main() {

	Rrethi r;
	r.caktoRrezen(4);
	cout << "Siperfaqja e rrethit: " << r.kalkuloSiperfaqen() << endl;
	cout << "Perimetri i rrethit: " << r.kalkuloPerimetrin() << endl;
 
	return 0;
}
