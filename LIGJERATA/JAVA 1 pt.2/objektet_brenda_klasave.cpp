// Programi classH1
#include <iostream>
using namespace std;

class Dita
{
private:
void MesazhiA();
public:
int a;
void vleraA(int x);
};
class Nata
{
private:
void MesazhiB();
Dita Alfa;
public:
int b;
void vleraB(int y);
};

int main()
{
Nata Beta;
Beta.vleraB(56);
cout << "\n\n\nProgrami kryesor"
<< "\n\nVlera e variablës b: "
<< Beta.b
<< "\n\n";
return 0;
}
void Dita::MesazhiA()
{
cout << "\nKlasa Dita\n";
}
void Dita::vleraA(int x)
{
a=x;
MesazhiA();
cout << "\nVlera e variablës a: "
<< a;
}

void Nata::MesazhiB()
{
cout << "\n\n\nKlasa Nata\n";
}
void Nata::vleraB(int y)
{
b=y;
Alfa.vleraA(78);
MesazhiB();
cout<<"\nVlera e variablës a: "
<< Alfa.a;
}
