/*	Detyra 8	
	Fushat referente
	a)	Të definohet një funksion printoVargun i cili printon anëtarët e një vargu përmes pointerit
	b)	Brenda funksionit main të deklarohet një varg me gjatësi 5 dhe të inicializohet me vlera në deklarim
	c)	Të thirret funksioni printoVargun për vargun e deklaruar
	d)	Të deklarohet një referencë për vargun e deklaruar në pikën b)
	e)	Të thirret funksioni printoVargun për referencën e krijuar
	f)	Të modifikohet vlera e referencës në pozitën 3 me një vlerë sipas dëshirës
	g)	Të thirret funksioni printoVargun për vargun e deklaruar në pikën b) dhe për referencën e tij
*/
#include <iostream>

using namespace std;

void printoVargun(int* varguPtr, int gjatesia) {
	for (int i = 0; i < gjatesia; i++)
	{
		cout << *(varguPtr + i) << " ";
	}

	cout << endl;
}

int main() {

	const int gjatesiaVargut = 5;
	int vargu[gjatesiaVargut] = { 1, 3, 5, 7, 9 };
	printoVargun(vargu, gjatesiaVargut);

	int(&varguRef)[gjatesiaVargut] = vargu;
	printoVargun(varguRef, gjatesiaVargut);

	varguRef[2] = 20;
	printoVargun(vargu, gjatesiaVargut);
	printoVargun(varguRef, gjatesiaVargut);

	return 0;
}
