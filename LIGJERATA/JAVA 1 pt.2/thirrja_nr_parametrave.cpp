// Programi class13
#include <iostream>
using namespace std;

class faktoriel //1
{
private: //pv
int m;
double x;
public: //pb
double g;
faktoriel();
faktoriel(int k);
};

int main() //2
{
faktoriel Dita;
cout<<"\nVlera e llogaritur y="
<<Dita.g;
faktoriel Nata(3);
cout<<"\nVlera e llogaritur z="
<< Nata.g
<< "\n\n";
return 0;
}

faktoriel::faktoriel() //3
{
m=3;
cout<<"\nKonstruktori i parë\n“;
cout<<"\n\nVariabla x: ";
cin>>x;
double F=1; int i;
for (i=1;i<=m;i++)
F=F*i;
g=5*x+F;
}

faktoriel::faktoriel(int k) //4
{
m=k;
cout<<"\nKonstruktori i dytë"
cout<<"\n\nVariabla x: ";
cin >> x;
double F=1; int i;
for (i=1;i<=(m+1);i++)
F=F*i;
g=x/2+F;
}
