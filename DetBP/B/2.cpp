#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
	const int numrat = 4;
	int A[4];
	int shuma = 0;

	for (int i = 0; i < numrat; i++) {
		do {
			cout << "Shenoni nje numer te plote dyshifror: ";
			cin >> A[i];
		} while (A[i] < 10 || A[i] > 99);

		if (A[i] < 0) {
			A[i] = pow(A[i], 2);
		}

		shuma += A[i];
	}

	cout << setw(6) << setprecision(4) << setfill('#') << shuma / 4.0 << endl;

	return 0;
}
