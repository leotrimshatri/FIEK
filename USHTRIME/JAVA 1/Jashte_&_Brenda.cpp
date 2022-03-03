// Detyra 3 - forma tjetër. Deklarimi i prototipit të funksionit brenda klasës kurse definimi jashtë saj.
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

	double kalkuloSiperfaqen();
	double kalkuloPerimetrin();
};

double Rrethi::kalkuloPerimetrin() {
	return PI * 2 * rrezja;
}

double Rrethi::kalkuloSiperfaqen() {
	return PI * rrezja * rrezja;
}

int main() {

	Rrethi r;
	r.caktoRrezen(4);
	cout << "Siperfaqja e rrethit: " << r.kalkuloSiperfaqen() << endl;
	cout << "Perimetri i rrethit: " << r.kalkuloPerimetrin() << endl;
 
	return 0;
}

/*
