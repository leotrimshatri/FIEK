// Programi class10b

#include <iostream>
using namespace std;

class kater
{
private:
double a,b,s,p;
public:
kater(double x,double y);
void llogaritja();
void shtypja();
};

int main()
{
double x,y;
cout<<"\nVlerat e lexuara"
<<"\n\nBrinja a: ";
cin >> x;
cout<<"\nBrinja b: ";
cin >> y;
// Objekti Omega
kater Omega(x,y);
Omega.llogaritja();
Omega.shtypja();
return 0;
}

kater::kater(double x,double y)
{
a=x;
b=y;
}
void kater::llogaritja()
{
s=a*b;
p=2*(a+b);
return;
}
void kater::shtypja()
{
cout << "\nVlerat e llogaritura"
<< "\n\nSipërfaqja s=" << s
<< "\n\nPerimetri p=“ << p
<< "\n\n";
}
