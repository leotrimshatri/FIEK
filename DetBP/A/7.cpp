#include <iostream>
#include <iomanip>

using namespace std;

struct Ekipi {
    // a
    char emri[50];
    int numriLojtareve;
    char rezultatet[6];

    // b
    int piket() {
        int totali = 0;
        for (int i = 0; i < 6; i++) {
            if (rezultatet[i] == 'F') {
                totali += 3;
            }
            else if (rezultatet[i] == 'B') {
                totali += 1;
            }
        }

        return totali;
    }
};

int main()
{
    // c
    Ekipi e = { "Prishtina", 23, {'F', 'F', 'H', 'B', 'B', 'F'} };

    // d
    cout << "Numri i pikeve te fituara nga ekipi " 
        << e.emri 
        << " eshte: " 
        << e.piket() 
        << endl;

    return 0;
}
