// Programi class5a INICIALIZIMI PERMES LEXIMIT
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
};

int main()
{
Jeta Dita;
Dita.leximi();
cout << "\nLeximi i vlerës së variablës a: ";
cin >> Dita.a;
Dita.shtypja();
return 0;
}

void Jeta::leximi()
{
cout << "\nLeximi i vlerës së variablës m: ";
cin >> m;
}
void Jeta::shtypja()
{
cout << "\nVlera e variablës private m=" << m
<< "\n\nVlera e variablës publike a=“ << a
<< "\n\n";
}


// Programi class5a INICIALIZIMI gjate DEKLARIMIT TE OBJEKTEVE
// Programi class5b
#include <iostream>
using namespace std;

class Jeta
{
public:
int m;
double a;
void shtypja();
};

int main()
{
Jeta Dita={77,44.56};
Dita.shtypja();
return 0;
}

void Jeta::shtypja()
{
cout << "\nVlera e variablës private m="
<< m
<< "\n\nVlera e variablës publike a="
<< a
<< "\n\n";
}
