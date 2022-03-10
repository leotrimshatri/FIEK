/* Detyra 2
*	a) Te definohet klasa Studenti me anetaret privat: id, emri, mbiemri dhe drejtimi
	b) Brenda klases Studenti te definohet klasa Fakulteti me anetaret privat: id dhe emri
	c) Brenda klases Fakulteti te definohet konstruktori i cili inicalizon anetaret privat te klases Fakulteti
	d) Brenda klases Fakulteti te deklarohet prototipi i funksionit printoKodin, kurse definimi i tij te behet jashte klasave. Funksioni
	ka per detyre te printoje mesazhin 'Kodi i fakultetit: <ID>-<EMRI>'
	e) Klases Student t'i shtohet si anetar privat edhe nje instance e klases Fakulteti. 
	f) Te definohet konstruktori i klases me Student me keta parametra: id, emri, mbiemri, drejtimi, fakultetiId, emriFakultetit
	g) Brenda klases Student te definohet funksioni printoTeDhenat i cili printon te dhenat e klases Student dhe therret funksionin
	printoKodin te klases Fakulteti
	h) Brenda funksionit main te krijohet nje instance e klases Student dhe te thirret funksioni printoTeDhenat
	i) Brenda funksionit main te krijohet nje instance e klases Fakulteti dhe te thirret funksioni printoKodin
*/
#include <iostream>
#include <string>

using namespace std;

class Student {
private:
	int id;
	string emri;
	string mbiemri;
	string drejtimi;

public: 
	class Fakulteti {
	private:
		int id;
		string emri;
	public:
		Fakulteti() {

		}

		Fakulteti(int id, string emri) {
			this->id = id;
			this->emri = emri;
		}

		void printoKodin();
	};

private:
	Fakulteti f;

public:
	Student(int id, string emri, string mbiemri, string drejtimi, int fakultetiId, string emriFakultetit) {
		f = Fakulteti(fakultetiId, emriFakultetit);
		this->id = id;
		this->emri = emri;
		this->mbiemri = mbiemri;
		this->drejtimi = drejtimi;
	}

	void printoTeDhenat() {
		cout << "ID: " << id << endl;
		cout << "Emri: " << emri << endl;
		cout << "Mbiemri: " << mbiemri << endl;
		cout << "Drejtimi: " << drejtimi << endl;
		f.printoKodin();
	}
};

void Student::Fakulteti::printoKodin() {
	cout << "Kodi i fakultetit: " << id << "-" << emri << endl;
}

int main() {
	
	Student s(1, "Test", "Test", "Kompjuterike", 6, "FIEK");
	s.printoTeDhenat();

	Student::Fakulteti fakulteti(1, "FIEK");
	fakulteti.printoKodin();
	
	return 0;
}

/* Menyre tjeter______________________________________________________________________________________________________________________________________________________________
	Perdorimi i konstruktorit pa parametra ne nenklasen Fakulteti
*/
#include <iostream>
#include <string>

using namespace std;

class Studenti {
private:
	int id;
	string emri;
	string mbiemri;
	string drejtimi;

public:
	class Fakulteti {
	private:
		int id;
		string emri;
	public:
		Fakulteti() {
			cout << "Te dhenat e fakultetit: " << endl;
			cout << "ID: ";
			cin >> id;
			cout << "Emri: ";
			cin >> emri;
		}

		void printoKodin();
	};

	Fakulteti f;
public:
	Studenti(int id, string emri, string mbiemri, string drejtimi) {
		this->id = id;
		this->emri = emri;
		this->mbiemri = mbiemri;
		this->drejtimi = drejtimi;
	}

	void printoTeDhenat() {
		cout << "ID: " << id << endl;
		cout << "Emri: " << emri << endl;
		cout << "Mbiemri: " << mbiemri << endl;
		cout << "Drejtimi: " << drejtimi << endl;
		f.printoKodin();
	}
};

void Studenti::Fakulteti::printoKodin() {
	cout << "Kodi i fakultetit: " << id << " - " << emri << endl;
}

int main() {

	Studenti s(1, "Test", "Test", "Kompjuterike");
	s.printoTeDhenat();

	return 0;
}
