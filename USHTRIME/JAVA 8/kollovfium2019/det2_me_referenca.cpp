/* Detyra 2 me referenca */
#include <iostream>

using namespace std;

void ProdhimiShuma(int a, int b, int c, int& p, int& s) {
	s = 0;
	p = 1;

	if (a % 2 == 0) {
		s += a;
	}
	else {
		p *= a;
	}

	if (b % 2 == 0) {
		s += b;
	}
	else {
		p *= b;
	}

	if (c % 2 == 0) {
		s += c;
	}
	else {
		p *= c;
	}
}

int main() {

	int a = 3, b = 2, c = 4;
	int prodhimi = 0, shuma = 0;

	ProdhimiShuma(a, b, c, prodhimi, shuma);

	cout << "Shuma: " << shuma << endl;
	cout << "Prodhimi: " << prodhimi << endl;

	return 0;
}
