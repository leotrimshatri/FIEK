#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	const int rendi = 5;
	int A[rendi][rendi] = {};

	for (int i = 0; i < rendi; i++)
	{
		for (int j = 0; j < rendi; j++) {
			if (i == j || i + j == rendi - 1) {
				A[i][j] = 1;
			};
		}
	}

	for (int i = 0; i < rendi; i++)
	{
		for (int j = 0; j < rendi; j++) {
			cout << setw(3) << A[i][j];
		}
		cout << endl;
	}
	cout << endl;
	
	return 0;
}
