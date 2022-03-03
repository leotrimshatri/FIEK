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

