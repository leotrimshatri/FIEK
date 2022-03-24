/*	Detyra 6
	Shembull me parametra si referencë
*/
#include <iostream>

using namespace std;

int shuma(int& a, int& b) {
	int s = 0;
	a += 1;
	for (int i = a; i <= b; i++)
	{
		s += i;
	}

	return s;
}

int main() {

	int c = 1;
	int d = 4;
	cout << "Shuma: " << shuma(c, d) << endl;

	return 0;
}
