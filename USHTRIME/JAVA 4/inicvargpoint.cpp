/* Detyra 3 
	Shembull - Inicializimi i vargut permes pointerit
*/
#include <iostream>

using namespace std;

int main() {

	const int gjatesiaVargut = 5;

	int vargu[gjatesiaVargut];
	int* varguPtr = vargu;
	
	*varguPtr = 10;
	varguPtr = vargu + 1;
	*varguPtr = 20;
	varguPtr = &vargu[2];
	*varguPtr = *(varguPtr - 1) + 5;
	varguPtr = vargu;
	*(varguPtr + 3) = 35;
	varguPtr = varguPtr + 4;
	*varguPtr = 40;

	for (int i = 0; i < gjatesiaVargut; i++)
	{
		cout << vargu[i] << endl;
	}

	return 0;
}
