/*
Komponenteve të klasës mund t'u qasemi pasi të jetë deklaruar objekti përkatës.
*/

// Programi class3
#include <iostream>
using namespace std;

class person
{
public:
char emri[15],
char qyteti[10];
int viti;
};

int main()
{
person studenti;

cout << "\nTë dhënat nga tastiera\n\n";
cout << "Emri .....: "; cin >> studenti.emri;
cout << "Qyteti ...: "; cin >> studenti.qyteti;
cout << "Viti .....: "; cin >> studenti.viti;
cout << "\n\nTë dhënat e lexuara\n";
cout << "\nEmri .....: " << studenti.emri;
cout << "\nQyteti ...: " << studenti.qyteti;
cout << "\nViti .....: " << studenti.viti
<< "\n\n";

  return 0;

}
