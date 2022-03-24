/*	Detyra 8 
	Matricat referente
	a)	Të deklarohet një matricë katrore e rendit 3x3 dhe të incializohet në deklarim
	b)	Të llogaritet shuma e anëtarëve të matricës së deklaruar, të cilët gjenden në diagonale
	c)	Të krijohet një referencë për matricën e deklaruar në pikën a)
	d)	Anëtarëve të matricës referente që gjenden në diagonale të ju dyfishohet vlera
	e)  Të llogaritet shume e anëtarëve të matricës së deklaruar në pikën a), të cilët gjenden në diagonale
*/
#include <iostream>

using namespace std;

int main() {

	const int rendi = 3;
	int matrica[rendi][rendi] = {
		{1, 2, 3},
		{1, 2, 3},
		{1, 2, 3}
	};

	int shumaNeDiagonale = 0;
	for (int i = 0; i < rendi; i++)
	{
		for (int j = 0; j < rendi; j++)
		{
			if (i == j) {
				shumaNeDiagonale += matrica[i][j];
			}
		}
	}

	cout << "Shuma ne diagonale: " << shumaNeDiagonale << endl;	

	int(&matricaRef)[rendi][rendi] = matrica;
	for (int i = 0; i < rendi; i++)
	{
		for (int j = 0; j < rendi; j++)
		{
			if (i == j) {
				matricaRef[i][j] = matrica[i][j] * 2;
			}
		}
	}

	shumaNeDiagonale = 0;
	for (int i = 0; i < rendi; i++)
	{
		for (int j = 0; j < rendi; j++)
		{
			if (i == j) {
				shumaNeDiagonale += matrica[i][j];
			}
		}
	}

	cout << "Shuma ne diagonale: " << shumaNeDiagonale << endl;

	return 0;
}
