/* Detyra 5
*	a) Te definohet klasa Produkti me anetaret privat: id, emri, cmimiPaTVSH, TVSH, sasia, cmimiMeTVSH, totalMeTVSH dhe totalPaTVSH
*	b) Permes konstruktorit te inicializohen me vlera anetaret privat ne vijim: id, emri, cmimiPaTVSH, sasia, TVSH
*	c) Vlerat e cmimiMeTVSH, totalMeTVSH dhe totalPaTVSH, te kalkulohen varesisht nga vlerat e anterave perkates privat
*	d) Te deklarohet prototipi i funksionit printoProduktin
*	e) Te definohet funksioni printoProduktin jashte klases, i cili printon vlerat e secilit anetar privat te klases
*	f) Te krijohet nje instance e klases Produkti dhe te thirret funksioni printoProduktin
*/
#include <iostream>
#include <string>

using namespace std;

class Produkti {
private:
	unsigned int id;
	string emri;
	float cmimiPaTVSH;
	float TVSH;
	unsigned short int sasia;
	float cmimiMeTVSH;
	float totalMeTVSH;
	float totalPaTVSH;

public:
	Produkti(int id, string emri, float cmimiPaTVSH, float TVSH, int sasia) {
		this->id = id;
		this->emri = emri;
		this->cmimiPaTVSH = cmimiPaTVSH;
		this->TVSH = TVSH;
		this->sasia = sasia;
		this->cmimiMeTVSH = cmimiPaTVSH + ((cmimiPaTVSH * TVSH) / 100);
		this->totalPaTVSH = cmimiPaTVSH * sasia;
		this->totalMeTVSH = cmimiMeTVSH * sasia;
	}

	void printoProduktin();
};

void Produkti::printoProduktin() {
	cout << "ID: " << id << endl;
	cout << "Emri: " << emri << endl;
	cout << "Sasia: " << sasia << endl;
	cout << "TVSH: " << TVSH << "%"<< endl;
	cout << "Cmimi pa TVSH: " << cmimiPaTVSH << endl;
	cout << "Cmimi me TVSH: " << cmimiMeTVSH << endl;
	cout << "Total pa TVHS: " << totalPaTVSH << endl;
	cout << "Total me TVSH: " << totalMeTVSH << endl;
} 

int main() {

	Produkti p(1, "Test", 10, 10, 2);

	p.printoProduktin();

	return 0;
}
