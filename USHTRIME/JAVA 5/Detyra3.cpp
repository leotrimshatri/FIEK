/*  Detyra 3   
	Funksionet si parametra të funksioneve 
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

int prodhimi(int a, int b) {
	int p = 1;
	for (int i = a; i <= b; i++) {
		p *= i;
	}
	return p;
}

int operacioni(int a, int b, int (*funksioni) (int, int)) {
	int rezultati = funksioni(a, b);
	return rezultati;
}

int main() {
	int c, d;
	cout << "Vlera e c: ";
	cin >> c;
	cout << "Vlera e d: ";
	cin >> d;

	int (*shumaPtr) (int, int) = shuma;

	cout << "Shuma: " << operacioni(c, d, shumaPtr) << endl;
	cout << "Prodhimi: " << operacioni(c, d, prodhimi) << endl;

	return 0;
}
