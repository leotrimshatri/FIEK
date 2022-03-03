// Programi class12a

include <iostream>
using namespace std;

class Omega
{
private:
int n,k;
double x,a;
public:
double y;
Omega();
};

int main()
{
Omega Delta;
cout << "\nVlera e llogaritur y="
<< Delta.y << "\n\n";
return 0;
}

Omega::Omega()
{
cout << "\nVlerat inicializuese"
<< "\n\nVariabla n: ";
cin >> n;
cout << "\nVariabla x: "; cin >> x;
cout << "\nVariabla a: "; cin >> a;
cout << "\nVariabla k: "; cin >> k;
int i;
double s=0;
for (i=1;i<=(n+1);i++)
s=s+(2*i+a);
y=3*x+k*s;
}
