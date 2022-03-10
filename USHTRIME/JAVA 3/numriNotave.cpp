/* Detyra 3
*	a) Te deklarohet konstanta globale numriNotave me vlere 5
*	b) Te definohet klasa Student me anetaret privat: id, emri, mbiemri, drejtimi dhe vargu per ruajtjen e notave me gjatesi sa konstanta numriNotave
*	c) Te definohet konstruktori me parametra permes te cilit inicializohen anetaret privat te klases
*	d) Te definohet funksioni lexoNotat i cili lexon notat e studentit permes tastieres
*	e) Te definohet funksioni notaMaksimale, i cili kthen noten me te larte te studentit
*	f) Te definohet funksioni notaMinimale, i cili kthen noten me te ulet te studentit
*	g) Te definohet funksioni notaMesatare, i cili kthen noten mesatare te studentit
*	h) Te definohet funksioni printoTeDhenat, i cili printon id, emrin, mbiemrin dhe drejtimin e studentit
*	i) Brenda funksionit main, te deklarohet instanca e klases Studenti, pastaj te thirren funksionet printoTeDhenat dhe lexoNotat
*	j) Brenda funksionit main, te prinotohet nota minimale, nota maksimale dhe nota mesatare e studentit
*/
#include <iostream>
#include <string>

using namespace std;

const int numriNotave = 5;

class Student {
private:
	int id;
	string emri;
	string mbiemri;
	string drejtimi;
	int notat[numriNotave];

public:
	Student(int id, string emri, string mbiemri, string drejtimi) {
		this->id = id;
		this->emri = emri;
		this->mbiemri = mbiemri;
		this->drejtimi = drejtimi;
	}

	void lexoNotat() {
		for (int i = 0; i < numriNotave; i++)
		{
			cout << "Nota " << i + 1 << ": ";
			cin >> notat[i];
		}
	}

	int notaMaksimale() {
		int notaMax = notat[0];
		for (int i = 1; i < numriNotave; i++) {
			if (notaMax < notat[i]) {
				notaMax = notat[i];
			}
		}

		return notaMax;
	}

	int notaMinimale() {
		int notaMin = notat[0];
		for (int i = 1; i < numriNotave; i++) {
			if (notaMin > notat[i]) {
				notaMin = notat[i];
			}
		}

		return notaMin;
	}

	float notaMesatare() {
		int shuma = 0;
		for (int i = 0; i < numriNotave; i++) {
			shuma += notat[i];
		}

		return shuma * 1.0 / numriNotave;
	}

	void printoTeDhenat() {
		cout << "ID: " << id << endl;
		cout << "Emri: " << emri << endl;
		cout << "Mbiemri: " << mbiemri << endl;
		cout << "Drejtimi: " << drejtimi << endl;
	}
};

int main() {

	Student s(1, "Test", "Test", "Kompjuterike");
	s.printoTeDhenat();
	s.lexoNotat();
	cout << "Nota minimale: " << s.notaMinimale() << endl;
	cout << "Nota maksimale: " << s.notaMaksimale() << endl;
	cout << "Nota mesatare: " << s.notaMesatare() << endl;
	
	return 0;
}

/*
	Menyre tjeter________________________________________________________________________________________________________________________________________________________________
	- Thirrja e metodes lexoNotat brenda konstruktorit te klases Studenti
*/
#include <iostream>
#include <string>

using namespace std;

const int numriNotave = 5;

class Studenti {
private:
	int id;
	string emri;
	string mbiemri;
	string drejtimi;
	int notat[numriNotave];

	void lexoNotat() {
		for (int i = 0; i < numriNotave; i++)
		{
			cout << "Nota " << i + 1 << ": ";
			cin >> notat[i];
		}
	}

public:
	Studenti(int id, string emri, string mbiemri, string drejtimi) {
		this->id = id;
		this->emri = emri;
		this->mbiemri = mbiemri;
		this->drejtimi = drejtimi;
		this->lexoNotat();
	}

	int notaMaksimale() {
		int max = notat[0];
		for (int i = 1; i < numriNotave; i++)
		{
			if (max < notat[i]) {
				max = notat[i];
			}
		}

		return max;
	}

	int notaMinimale() {
		int min = notat[0];
		for (int i = 1; i < numriNotave; i++)
		{
			if (min > notat[i]) {
				min = notat[i];
			}
		}

		return min;
	}

	double notaMesatare() {
		int shuma = 0;
		for (int i = 0; i < numriNotave; i++)
		{
			shuma = shuma + notat[i];
		}

		return shuma * 1.0 / numriNotave;
	}

	void printoTeDhenat() {
		cout << "ID: " << id << endl;
		cout << "Emri: " << emri << endl;
		cout << "Mbiemri: " << mbiemri << endl;
		cout << "Drejtimi: " << drejtimi << endl;
	}
};

int main() {

	Studenti s(1, "Test", "Test", "Kompjuterike");
	s.printoTeDhenat();

	cout << "Nota minimale: " << s.notaMinimale() << endl;
	cout << "Nota maksimale: " << s.notaMaksimale() << endl;
	cout << "Nota mesatare: " << s.notaMesatare() << endl;

	return 0;
}
