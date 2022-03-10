/* Detyra 1
*	a) Te definohet klasa Personi me anetaret: numriPersonal(private), kurse emri, mbiemri si anetare protected
	b) Te definohen funksionet per percaktim dhe lexim te vleres se numrit personal
	c) Te definohet klasa Studenti e cila trashegon klasen Personi me modifikuesin e qasjes public.
	d) Klasa Studenti si anetare privat te kete: drejtimi, nota mesatare dhe id
	e) Te definohet konstruktori i klases Studenti i cili pranon si parametra: numriPersonal, emri, mbiemri, drejtimi, id dhe notaMesatare
	f) Te definohet nje funksion printoStudentin i cili printon te gjithe anetaret e klases te inicalizuar ne konstruktor
	g) Te instancohet klasa Studenti dhe te thirret funksioni printoStudentin
*/
#include <iostream>
#include <string>

using namespace std;

class Person {
private:
	int numriPersonal;
protected:
	string emri;
	string mbiemri;
	int ditelindja;

public:
	void setNumriPersonal(int numriPersonal) {
		this->numriPersonal = numriPersonal;
	}

	int getNumriPersonal() {
		return numriPersonal;
	}
};

class Studenti : public Person {
private:
	string drejtimi;
	float notaMesatare;
	int id;

public:
	Studenti() {};
	Studenti(int numriPersonal, string emri, string mbiemri, string drejtimi, int id, float notaMesatare) {
		setNumriPersonal(numriPersonal);
		this->emri = emri;
		this->mbiemri = mbiemri;
		this->drejtimi = drejtimi;
		this->id = id;
		this->notaMesatare = notaMesatare;
	}

	void printoStudentin() {
		cout << "Numri personal: " << getNumriPersonal() << endl;
		cout << "Emri: " << emri << endl;
		cout << "Mbiemri: " << mbiemri << endl;
		cout << "ID: " << id << endl;
		cout << "Drejtimi: " << drejtimi << endl;
		cout << "Nota mestare: " << notaMesatare << endl;
	}
};

int main() {

	Studenti s(12345, "Test", "Test", "Kompjuterike", 11, 8.4);

	s.printoStudentin();

	Person p;
		
	return 0;
}
