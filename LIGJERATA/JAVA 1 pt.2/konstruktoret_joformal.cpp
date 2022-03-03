//Nëse përcaktimi i vlerave të variablave në komponentet private bëhet brenda konstruktorëve, ata mund të jenë pa parametra formalë.

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
