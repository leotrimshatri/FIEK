/*
2. [15 pikë] Të krijohet funksioni me emrin Llogarit i cili si parametra merr dy numra të caktuar (p.sh. a dhe b, ku a<b) dhe si rezultatet,
përmes parametrave referent (d.m.th. referencave), kthen tri llogaritjet sipas përshkrimit në vijim:
a. [4 pikë] Shumën e gjithë numrave prej numrit a deri te numri b (duke përfshirë edhe a dhe b) të cilët janë të plotpjesëtueshëm me
numrin 5,
b. [4 pikë] Përgjigjen true/false nëse shuma e numrave a dhe b është një numër një-shifrorë ose shumë-shifrore,
c. [4 pikë] Përgjigjen true/false) nëse prodhim i numrave a dhe b tejkalon vlerën 1000,
d. [3 pikë] Funksioni main për thirrjen e funksionit Llogarit, ku vlerat a dhe b merren të çfarëdoshme (le të supozohet se numri a është
më i vogël se numri b)
*/

#include <iostream>
using namespace std;
void Llogarit(int a, int b, int &r1, bool &r2, bool &r3)
{
    r1 = 0;
    for (int i = a; i <= b; i++)
    {
        if (i % 5 == 0)
        {
            r1 = r1 + i;
        }
    }
    if (a + b > -10 && a + b < 10)
        r2 = true;
    else
        r2 = false;
    if (a * b > 1000)
        r3 = true;
    else
        r3 = false;
}
int main()
{
    int a = 2, b = 7, r1;
    bool r2, r3;
    Llogarit(a, b, r1, r2, r3);
    cout << "Shuma: " << r1 << endl;
    cout << "Shume nje shifrore: " << r2 << endl;
    cout << "Prodhimi me shume se 1000: " << r3 << endl;
    return 0;
}
