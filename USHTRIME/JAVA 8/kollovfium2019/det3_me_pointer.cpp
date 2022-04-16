// Detyra 3 me pointer
#include <iostream>
#include <queue>
#include <cstdlib>

using namespace std;


void Perqindja(double* vleraRritur, double* vleraZbritur) {
	int x;
	cout << "Vlera e x: ";
	cin >> x;

	double a = (20.0 * x) / 100;

	*vleraRritur = x + a;
	*vleraZbritur = x - a;
}


int main() {

	double a, b = 1;

	Perqindja(&a, &b);

	cout << "Vlera e rritur: " << a << endl;
	cout << "Vlera e zbritur: " << b << endl;

	return 0;
}
