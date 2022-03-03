/*
  Pas definimit të një klase kompjuteri nuk rezervon vende në memorie për
komponentet që përfshihen brenda klasës, pavarësisht se deklarohen tipet e
variablave përkatëse. Por, me klasën krijohet një tip i ri, i cili pastaj mund të
shfrytëzohet për deklarimin e objekteve të asaj klase.

Definimi i klasës tregon vetëm se si duket objekti, kurse pas deklarimit në
program, krijohet objekti ose siç thuhet, krijohet instanca e klasës.
*/

// Programi class2
#include <iostream>
using namespace std;

class person
{
public:
char emri[15],qyteti[10];
int viti;
};

int main()
{
person studenti;
}
