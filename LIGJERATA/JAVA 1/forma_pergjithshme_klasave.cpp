/*
Specifikuesit e qasjes së tyre, mund të jenë public, private ose protected.
Për specifikuesin protected do të bëhet fjalë më vonë.
*/

// Programi class4a __________________________________________________________________________________________________________________________________________________
#include <iostream>
using namespace std;

class Jeta
{
private:
  int m;
public:
  double a;
  void vlera(int k)
{
  m=k;
}
void shtypja()
{
  cout << "\nVlera e variablës
  private m=" << m << "\n";
  }
};

int main()
{
Jeta Dita;
Dita.vlera(77);
cout << "\nLeximi i vlerës së variablës a: ";
cin >> Dita.a; //(a-public)
Dita.shtypja();
cout << "\nVlera e variablës publike a="
<< Dita.a << "\n\n";
return 0;
} //Pra, akund në program nuk ka: “Dita.m” (m-private)

// Programi class4b ________________________________________________________________________________________________________________________________________________________
#include <iostream>
using namespace std;

class Jeta
{
private:
  int m;
public:
  double a;
  void vlera(int k)
{
  m=k;
}
void shtypja()
{
cout << "\nVlera e variablës private m=“ << m
<< "\n\nVlera e variablës publike a=" << a
<< "\n\n";
}

int main()
{
Jeta Dita;
  Dita.vlera(77);
  cout << "\nLeximi i vlerës së variablës a: ";
  cin >> Dita.a;
  Dita.shtypja();
return 0;
}

  // Programi class4c ________________________________________________________________________________________________________________________________________________________
#include <iostream>
using namespace std;

class Jeta
{
private:
int m;
public:
double a;
void vlera(int k);
void shtypja();
};
  
int main()
{
Jeta Dita;
Dita.vlera(77);
cout << "\nLeximi i vlerës së variablës a: ";
cin >> Dita.a;
Dita.shtypja();
return 0;
}
  
void Jeta::vlera(int k)
{
m=k;
}
void Jeta::shtypja()
{
cout << "\nVlera e variablës private m=" << m
<< "\n\nVlera e variablës publike a=“ << a
<< "\n\n";
}
  
