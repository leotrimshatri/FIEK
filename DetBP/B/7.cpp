#include <iostream>
#include <iomanip>

using namespace std;

struct Ekipi {
	char emri[50];
	int numriLojtareve;
	int piket;
};

Ekipi piketMax(Ekipi ekipet[], int nrEkipeve) {
	int max = ekipet[0].piket;
	Ekipi e = ekipet[0];
	for (int i = 1; i < nrEkipeve; i++) {
		if (ekipet[i].piket > max) {
			max = ekipet[i].piket;
			e = ekipet[i];
		}
	}

	return e;
}

int main()
{
	const int nrEkipeve = 3;
	Ekipi ekipet[nrEkipeve] = {};

	for (int i = 0; i < nrEkipeve; i++) {
		cout << "Shenoni emrin e ekipit " << i + 1 << ": ";
		cin >> ekipet[i].emri;
		cout << "Shenoni numrin e lojtareve te ekipit " << i + 1 << ": ";
		cin >> ekipet[i].emri;
		cout << "Shenoni numrin e pikeve te ekipit " << i + 1 << ": ";
		cin >> ekipet[i].emri;
	}

	Ekipi ekipiMax = piketMax(ekipet, nrEkipeve);

	cout << "Ekipi me me se shumti pike: " << ekipiMax.emri << endl;
	
	return 0;
}
