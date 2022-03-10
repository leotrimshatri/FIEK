// Programi F234R
#include <iostream>
using namespace std;

void Fuqia234(int x, int &x2, int &x3, int &x4);

int main()
{
    int x, x2, x3, x4;
    cout << "\nLlogarisim fuqine e 2,3, dhe 4 ";
    cout << "\nVlera x: ";
    cin >> x;
    Fuqia234(x, x2, x3, x4);
    cout << "\nx^2=" << x2
         << "\nx^3=" << x3
         << "\nx^4=" << x4
         << "\n";
    return 0;
}

void Fuqia234(int x, int &x2, int &x3,
              int &x4)

{
    x2 = x * x;
    x3 = x2 * x;
    x4 = x3 * x;
    return;
}
