#include <iostream>
#include <iomanip>

using namespace std;

// a
int prodhimi(int a, int b, int c, int d) {
    int p = 1;
    for (int i = a; i <= b; i++) {
        p *= c * i + d;
    }

    return p;
}

int main()
{
    // b
    int r = 1;
    int k = 1;
    int n = 2;
    int rezultati = r + prodhimi(2, n, 3, 1) + prodhimi(k, n + 1, 2, 0);

    cout << "Rezultati: " << rezultati << endl;

    // c
    int r1 = 3;
    int k1 = 0;
    int n1 = 5;
    cout << r1 + prodhimi(2, n1, 3, 1) + prodhimi(k1, n1 + 1, 2, 0);

    return 0;
}
