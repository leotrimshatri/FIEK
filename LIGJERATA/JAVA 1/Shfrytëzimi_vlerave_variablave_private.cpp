/*
Qasja direkte në program te variablat të cilat brenda klasës janë deklaruar si
private nuk lejohet. Për shfrytëzimin e tyre, brenda klasës duhet të definohen
funksione të veçanta, të deklaruara si publike, përmes së cilave mundësohet
marrja e vlerave të variablave në fjalë.

Gjatë kësaj funksionet mund të jenë pa parametra formal ose
me parametra referent. (Referencat do të shpjegohen me vonë).
*/

// Programi class5b
#include <iostream>
using namespace std;
class Jeta
{
private:
int m;
public:
double a;
void leximi();
void shtypja();
int merre();
};


int main( )
{
int k;
Jeta Dita;
Dita.leximi();
cout << "\nVariabla a: ";
cin >> Dita.a;
k=Dita.merre();
cout << "\nVariabla private m="
<< k << "\n";
Dita.shtypja();
return 0;
}

void Jeta::leximi()
{
cout << "\nLeximi i variablës m: ";
cin >> m;
}
void Jeta::shtypja()
{
cout << "\nVlera e variablës
publike a=" << a << "\n\n";
}
int Jeta::merre()
{
return m;
}
