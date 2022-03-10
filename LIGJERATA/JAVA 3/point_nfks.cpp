#include <iostream>
using namespace std;

void jeta(double x);
void dita(double x);
void nata(double x);

int main()
{
    int i;
    void (*a[3])(double) = {jeta, dita, nata};
    for (i = 0; i <= 2; i++)
        (*a[i])(5.6);
    cout << "\n";
    return 0;
}

void jeta(double x)
{
    cout << "\nThirrja e funksionit jeta"
         << "\nVlera e llogaritur y=" << 2 * x + 1 << "\n";
    return;
}
void dita(double x)
{
    cout << "\nThirrja e funksionit dita"
         << "\nVlera e llogaritur z=" << x + 2 << "\n";
    return;
}
void nata(double x)
{
    cout << "\nThirrja e funksionit nata"
         << "\nVlera e llogaritur v=" << 4 * x + 3 << "\n";
    return;
}
