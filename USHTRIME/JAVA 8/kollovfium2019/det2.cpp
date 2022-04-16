/* Detyra 2 - Kolokviumi i parë - Prill 2019
	Të krijohet një program në C++ që në hyrje merr tre numra natyror a, b dhe c dhe në dalje jep prodhimin e vetëm atyre 
numrave që janë tek dhe shumën e vetëm atyre numrave që janë çift. Llogaritja e vlerave të kërkuara duhet të bëhet 
(gjithsesi) me një funksion të veçantë me emrin ProdhimiShuma, ku vlerat e llogaritura duhet të kthehen përmes përdorimit të 
parametrave të llojit pointer. Nëse asnjëri prej numrave a, b ose c nuk është tek atëherë prodhimi le të ketë vlerën 1, ndërsa nëse 
asnjëri prej numrave nuk është çift atëherë shuma le të jetë 0. Thirrja e funksionit të kërkuara dhe shtypja e rezultateve të 
llogaritura të bëhen në funksionin main.
*/
#include <iostream>

using namespace std;

void ProdhimiShuma(int a, int b, int c, int* p, int* s) {
	*s = 0;
	*p = 1;

	if (a % 2 == 0) {
		*s += a;
	}
	else {
		*p *= a;
	}

	if (b % 2 == 0) {
		*s += b;
	}
	else {
		*p *= b;
	}

	if (c % 2 == 0) {
		*s += c;
	}
	else {
		*p *= c;
	}
	
	/*
	// Mënyrë tjetër
	int vargu[] = { a, b, c };

	for (int i = 0; i < 3; i++)
	{
		if (vargu[i] % 2 == 0) {
			*shuma += vargu[i];
		}
		else {
			*prodhimi *= vargu[i];
		}
	}*/
}

int main() {

	int a = 3, b = 2, c = 4;
	int prodhimi = 0, shuma = 0;

	ProdhimiShuma(a, b, c, &prodhimi, &shuma);

	cout << "Shuma: " << shuma << endl;
	cout << "Prodhimi: " << prodhimi << endl;

	return 0;
}
