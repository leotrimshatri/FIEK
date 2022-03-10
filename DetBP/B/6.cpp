#include <iostream>
#include <iomanip>

using namespace std;

inline double convert(double m) {
	return m * 100;
}

int main()
{
	double numri;
	char perseritja;

	fillimi:
	cout << "Shenoni nje numer: ";
	cin >> numri;
	cout << "Gjatesia e lexuar ne metra: " << numri << endl;
	cout << "Gjatesia e lexuar ne centimetra: " << convert(numri) << endl;

pyetja:
	cout << "Deshironi te perserisni ekzekutimin: ";
	cin >> perseritja;

	if (perseritja == 'P' || perseritja == 'p') {
		goto fillimi;
	}
	else if (perseritja != 'J' && perseritja != 'j') {
		goto pyetja;
	}
	
	return 0;
}
