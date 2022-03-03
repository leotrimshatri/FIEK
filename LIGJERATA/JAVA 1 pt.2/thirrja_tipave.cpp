//Programi class14
#include <iostream>
using namespace std;

class Shuma
{
private:
int n;
public:
double s;
Shuma(double a);
Shuma(int a);
};

int main()
{
char v[]="-------------";
double y;
cout<<"\nObjekti Alfa\n"
<<v;
Shuma Alfa(0.5);
y=3*Alfa.s;
cout<<"\nVlera e llogaritur y="
<<y;
double z;
cout<<"\n\nObjekti Beta\n"
<<v;
Shuma Beta(3);
z=2*Beta.s;
cout<<"\nVlera e llogaritur z="
<<z << "\n\n";
return 0;
}

Shuma::Shuma(double a)
{
cout << "\n\nVariabla n: ";
cin >> n;
int i; s=0;
for (i=1;i<=n;i++)
s=s+(a*i+1);
}
Shuma::Shuma(int a)
{
cout << "\n\nVariabla n: ";
cin >> n;
int i; s=0;
for (i=1;i<=(n+1);i++)
s=s+(a*i+4);
}
