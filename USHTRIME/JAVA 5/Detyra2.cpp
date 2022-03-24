/*  Detyra 2  
	Pointerët në funksione
*/
#include <iostream>

using namespace std;

int shuma(int a, int b) {
	int s = 0;

	for (int i = a; i <= b; i++) {
		s += i;
	}

	return s;
}

int main() {
	int c, d;
	cout << "Vlera e c: ";
	cin >> c;
	cout << "Vlera e d: ";
	cin >> d;

	int (*shumaPtr) (int, int) = shuma;

	cout << "Shuma: " << shuma(c, d) << endl;
	cout << "Shuma: " << shumaPtr(c, d) << endl;

	return 0;
}
