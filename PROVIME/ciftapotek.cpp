/*
2. [8 pikë] Të shkruhet një program në C++ i cili mundëson leximin e dy vlerave të plota a dhe b nga tastiera. Si rezultat, programi duhet të
shtyp informatat si në vijim, në lidhje me vlerat e dhëna përmes tastierës:
a. [3 pikë] Të tregoj, për secilën prej dy vlerave, nëse janë çift apo tek,
b. [2 pikë] Të shtyp në konzolën dalëse adresat në regjistrin e memories të secilës prej dy vlerave,
c. [3 pikë] Të tregoj se cila prej vlerave e ka numrin e regjistrit të adresës para tjetrës (p.sh. nëse adresa e vlerës a është “009DF9B8”,
ndërsa adresa e vlerës b është “009DF9AC”, atëherë duhet të shtypet informata se adresa e vlerës së parë (“009DF9B8”) është
pas adresës së vlerës së dytë (“009DF9AC”).
*/

#include <iostream>
using namespace std;
void main()
{
    int a, b;
    cout << "Cakto a: ";
    cin >> a;
    cout << "Cakto b: ";
    cin >> b;
    if (a % 2 == 0)
        cout << "Numri " << a << " eshte cift\n";
    else
        cout << "Numri " << a << " eshte tek\n";
    if (b % 2 == 0)
        cout << "Numri " << b << " eshte cift\n";
    else
        cout << "Numri " << b << " eshte tek\n";
    cout << "Adresa e numrit " << a << " eshte " << &a << endl;
    cout << "Adresa e numrit " << b << " eshte " << &b << endl;
    if (&a < &b)
        cout << "Adresa e numrit " << a << " eshte para adreses se numrit " << b << endl;
    else
        cout << "Adresa e numrit " << a << " eshte pas adreses se numrit " << b << endl;
}
