// Programi classR1
#include <iostream>
using namespace std;

class brinjet
{
private:
double a,b;
public:
void vlerat(double x,double y);
void shtypja();
};


int main()
{
brinjet kater1,kater2;
kater1.vlerat(7.5,4.2);
cout << "\nVlerat origjinale";
kater1.shtypja();
kater2=kater1;
cout << "Vlerat e kopjuara";
kater2.shtypja();
return 0;
}

void brinjet::vlerat(double x,double y)
{
a=x;
b=y;
}
void brinjet::shtypja()
{
cout << "\n\n a=" << a
<< "\n b=“ << b
<< "\n\n";
}
