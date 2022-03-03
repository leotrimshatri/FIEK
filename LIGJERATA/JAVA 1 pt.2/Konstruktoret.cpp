/*
Me qëllim të inicializimit të variablave të cilat përfshihen në
komponentet e klasës, brenda saj definohen funksione të veçanta, të
cilat njihen si konstruktorë.

Këto funksione ekzekutohen automatikisht në momentin kur në
program deklarohen objektet përkatëse të klasave në fjalë.

Konstruktorët dallohen nga funksionet e zakonshme brenda klasës,
sepse:
- kanë emra të njëjtë me klasat
- para emrave të tyre nuk shënohet asgjë
- te return nuk shënohet asgjë.
*/

#include <iostream>
using namespace std;
class Alfa
{
private:
int m_nID;
public:
Alfa() //Konstruktori
{
cout << “Konstruktori: Alfa "<<endl;
}
};

int main()
{
Alfa Alfa1;
return 0;
}

//Konstuktoret pa parametra formal__________________________________________________________________________________________________________________________________________
// Programi class9

#include <iostream>
using namespace std;

class rrethi
{
private:
double pi,r,s,p;
public:
rrethi(); //konstruktori
void rrezja(double x);
void llogaritja();
void shtypja();
};

int main()
{
rrethi Alfa;
double x;
cout<<"\nRrezja e rrethit x: ";
cin>>x;
Alfa.rrezja(x);
Alfa.llogaritja();
Alfa.shtypja();
return 0;
}
rrethi::rrethi()
{
pi=3.1415926;
}

void rrethi::rrezja(double x)
{
r=x;
}
void rrethi::llogaritja()
{
s=pi*r*r;
p=2*pi*r;
}

void rrethi::shtypja()
{
cout<<"\nVlerat e llogaritura"
<<"\n\nSipërfaqja s="
<< s
<< "\n\nPerimetri p="
<< p
<< "\n\n";
}
