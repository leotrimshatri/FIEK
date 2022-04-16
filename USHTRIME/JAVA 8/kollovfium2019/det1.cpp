/* Detyra 1 - Kolokviumi i parë - Prill 2019
	Të krijohet një program në gjuhën programuese C++, i cili përmban klasën me emrin Vetura, si dhe funksionin main 
sipas përshkrimit dhe kërkesave në vijim:
	a) Variablat e klasës me qasje private: Emri_Prodhuesit, Nr_Kilometrave dhe Viti_Prodhimit,
	b) Konstruktori i parë që mundëson inicializimin e vlerave të anëtarëve të të dhënave të klasës Vetura përmes 
	tastierës (duke përdorur cin>>),
	c) Funksioni F1( ) që shtypë gjysmën e parë të shkronjave (simboleve) të emrit të prodhuesit,
	d) Funksioni F2( ) që konverton dhe shtypë numrin e kilometrave nga njësia kilometër në njësinë milje nëse 
	1milje=1.609km,
	e) Funksioni F3( ) që shtypë në ekran të gjitha vitet nga viti i prodhimit deri të viti 2019 (p.sh. nëse viti i 
	prodhimit është 2015, atëherë në ekran shtypet lista e viteve “2015, 2016, 2017, 2018, 2019”),
	f) Funksionin main, ku duhet të krijohet objekti me emërtimin Vet nga klasa Vetura dhe të thirren të gjitha 
	funksionet e krijuara për të shfaqur në ekran vlerat e llogaritura nga funksionet e klasës në fjalë.
*/
#include <iostream>

using namespace std;

class Vetura {
private:
	string prodhuesi;
	int kilometrat;
	int vitiProdhimit;
public:
	Vetura() {
		cout << "Prodhuesi: ";
		cin >> prodhuesi;
		cout << "Kilometrat: ";
		cin >> kilometrat;
		cout << "Viti i prodhimit: ";
		cin >> vitiProdhimit;
	}

	void f1() {
		for (int i = 0; i < prodhuesi.length()/2; i++)
		{
			cout << prodhuesi[i];
		}
		cout << endl;
	}

	void f2() {
		cout << "Miljet: " << kilometrat / 1.609 << endl;
	}

	void f3() {
		for (int i = vitiProdhimit; i <= 2022; i++)
		{
			cout << i << " ";
		}
		cout << endl;
	}
};

int main() {

	Vetura vet;

	vet.f1();
	vet.f2();
	vet.f3();

	return 0;
}
