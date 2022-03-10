#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a, b, c;
    int max = 0, min = 0;
    cout << "Jepni vleren per a: ";
    cin >> a;
    cout << "Jepni vleren per b: ";
    cin >> b;
    cout << "Jepni vleren per c: ";
    cin >> c;

    if (a > b && a > c) {
        max = a;
    }
    else if (b > a && b > c) {
        max = b;
    }
    else {
        max = c;
    }
	
    if (a < b && a < c) {
        min = a;
    }
    else if (b < a && b < c) {
        min = b;
    }
    else {
        min = c;
    }
    int sum = a + b + c;
    int width = sum > 10 ? 8 : sum;
    cout << setw(width) << setfill('@') << sum << endl;
    cout << "Max: " << hex << max << endl;
    cout << "Min: " << hex << min << endl;
    return 0;
}
