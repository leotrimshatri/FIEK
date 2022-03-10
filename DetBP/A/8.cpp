#include <iostream>
// b
#define TRE 3

using namespace std;

int main()
{
    const int perseritjet = 7;
    int numri, numratCift = 0, plotePjestueshemMe3 = 0, i = 0;

    while (i < perseritjet) {
        cout << "Shenoni nje numer te plote: ";
        cin >> numri;

        // a
        if (numri > 0) {
            cout << "Pozitiv" << endl;
        }
        else if (numri < 0) {
            cout << "Negativ" << endl;
        }

        // c
        if (numri % TRE == 0) {
            plotePjestueshemMe3++;
        }

        // d
        if (numri % 2 == 0) {
            numratCift += 1;
        }
        
        i = i + 1;
    }

    // c
    cout << "Numrat e plotepjestueshem me 3: " << plotePjestueshemMe3 << endl;
    // d
    cout << "Numrat cift: " << numratCift << endl;

    return 0;
}
