#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double temperatura;
    double shuma = 0;
    const int numriDiteve = 4;

    for (int i = 0; i < 4; i++) {
        cout << "Shenoni temperaturen per diten " << i + 1 <<": ";
        cin >> temperatura;
        shuma += ((temperatura - 32) * 5) / 9;
    }

    cout << "Temperatura mesatare: " << shuma / numriDiteve << endl;

    return 0;
}
