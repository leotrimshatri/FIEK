#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const int rendi = 3;
    int A[rendi][rendi] = {};
    int fillimi = rendi * rendi;

    for (int i = 0; i < rendi; i++)
    {
        for (int j = 0; j < rendi; j++)
        {
            A[i][j] = fillimi;
            fillimi--;
        }
    }

    for (int i = 0; i < rendi; i++)
    {
        for (int j = 0; j < rendi; j++)
        {
            cout << setw(3) << A[i][j];
        }
        cout << endl;
    }

    cout << endl;

    return 0;
}
