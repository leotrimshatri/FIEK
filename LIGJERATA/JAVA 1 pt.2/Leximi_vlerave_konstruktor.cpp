// Programi class10a
#include <iostream>
using namespace std;
class kater
{
private:
double a,b,s,p;
public:
kater();
void llogaritja();
void shtypja();
};
int main()
{
kater Omega;
Omega.llogaritja();
Omega.shtypja();
return 0;
}

kater::kater()
{
cout << "\nVlerat e lexuara"
<< "\n\nBrinja a: ";
cin >> a;
cout << "\nBrinja b: ";
cin >> b;
}

void kater::llogaritja()
{
s=a*b;
p=2*(a+b);
}

void kater::shtypja()
{
cout << "\nVlerat e llogaritura"
<< "\n\nSipërfaqja s=" << s
<< "\n\nPerimetri p=“ << p
<< "\n\n";
}
