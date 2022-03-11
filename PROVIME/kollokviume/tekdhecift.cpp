/*
2. [6 pikë] Të krijohet një program në C++ që në hyrje merr tre numra natyror a, b dhe c dhe në dalje jep prodhimin e vetëm atyre
numrave që janë tek dhe shumën e vetëm atyre numrave që janë çift. Llogaritja e vlerave të kërkuara duhet të bëhet
(gjithsesi) me një funksion të veçantë me emrin ProdhimiShuma, ku vlerat e llogaritura duhet të kthehen përmes përdorimit të
parametrave të llojit pointer. Nëse asnjëri prej numrave a, b ose c nuk është tek atëherë prodhimi le të ketë vlerën 1, ndërsa nëse
asnjëri prej numrave nuk është çift atëherë shuma le të jetë 0. Thirrja e funksionit të kërkuara dhe shtypja e rezultateve të
llogaritura të bëhen në funksionin main.
*/

#include <iostream>
using namespace std;
void ProdhimiShuma(int a, int b, int c, int *p, int *s)
{
    *p = 1;
    *s = 0;
    if (a % 2 != 0)
        *p = (*p) * a;
    else
        *s = (*s) + a;
    if (b % 2 != 0)
        *p = (*p) * b;
    else
        *s = (*s) + b;
    if (c % 2 != 0)
        *p = (*p) * c;
    else
        *s = (*s) + c;
}
int main()
{
    int a, b, c, p, s;
    cout << "Cakto a, b dhe c: ";
    cin >> a >> b >> c;
    ProdhimiShuma(a, b, c, &p, &s);
    cout << "Prodhimi: " << p << endl;
    cout << "Shuma: " << s << endl;
}
