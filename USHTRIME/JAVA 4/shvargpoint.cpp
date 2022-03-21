// Detyra 4 - Shembull me varg dhe pointer 
#include <iostream>

using namespace std;

int main() {

	const int gjatesiaVargut = 4;

	int vargu[gjatesiaVargut] = { 7, 4, -1, 3 };
	int* ptr1 = vargu + 1;
	int* ptr2 = vargu + 3;

	cout << *ptr1 + *(ptr2 - 1);
	
	return 0;
}
