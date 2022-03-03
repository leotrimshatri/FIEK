/*
1. 
 a) Të definohet struktura Studenti me anëtarët id, emri dhe drejtimi. Tw deklarohet njw variabwl e tipit
	Studenti dhe tw lexohen vlerat pwr secilin prej anwtarwve tw strukturws nga tastiera. Nw fund tw printohen
	vlerat e lexuara nga tastiera.
 b) Të definohet klasa Studenti e cila i ka fushat e njëjta me strukturën Studenti dhe të krijohet një 
	instancë e klasës Studenti.
 c) Secilit prej anëtarëve të klasës Studenti t'i vendosen vlera përmes tastierës dhe në fund të printohen vlerat e lexuara.
*/

//a --------------------------------------------------------------------------------------------------------------------------------------------------------
#include <iostream>

using namespace std;

struct Studenti {
	unsigned int id;
	char emri[50];
	char drejtimi[50];
};

int main() {

	Studenti s1;

	cout << "ID e studentit:";
	cin >> s1.id;
	cout << "Emri i studentit: ";
	cin >> s1.emri;
	cout << "Drejtimi: ";
	cin >> s1.drejtimi;

	cout << endl << "Vlerat e lexuara: " << endl;
	cout << "ID: " << s1.id << endl;
	cout << "Emri: " << s1.emri << endl;
	cout << "Drejtimi: " << s1.drejtimi << endl;

	return 0;
}

//b -------------------------------------------------------------------------------------------------------------------------------------------------------------------
#include <iostream>

using namespace std;

struct SStudenti {
	char emri[50];
	unsigned int id;
	char drejtimi[100];
};

class CStudenti {
	char drejtimi[100];
public:
	char emri[50];
	unsigned int id;
};

int main() {

	SStudenti strukturaStudenti;

	CStudenti klasaStudenti;

	return 0;
}

//c ----------------------------------------------------------------------------------------------------------------------------------------------
#include <iostream>

using namespace std;

class Studenti {
public:
	int id;
	char emri[50];
	char drejtimi[50];
};

int main() {
	Studenti s;

	cout << "Shenoni ID: ";
	cin >> s.id;
	cout << "Shenoni emrin: ";
	cin >> s.emri;
	cout << "Shenoni drejtimin: ";
	cin >> s.drejtimi;

	cout << endl << "Vlerat e lexuara: " << endl;
	cout << "ID: " << s.id << endl;
	cout << "Emri: " << s.emri << endl;
	cout << "Drejtimi: " << s.drejtimi << endl;

	return 0;
}

/*
