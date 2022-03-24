/*	Detyra 7 	
	Ruajtja e rezultatit të funksionit në referenca
*/
#include <iostream>

using namespace std;

void operacionet(int& a, int& b, int& rezultati, int& prodhimi) {
	int s = 0;
	a += 1;
	for (int i = a; i <= b; i++)
	{
		s += i;
	}

	rezultati = s;

	int p = 1;
	for (int i = a; i <= b; i++)
	{
		p *= i;
	}

	prodhimi = p;
}


int main() {

	int c = 1;
	int d = 4;
	int res;
	int prodhimi;
	operacionet(c, d, res, prodhimi);
	cout << "Shuma: " << res << endl;
	cout << "Prodhimi: " << prodhimi << endl;

	return 0;
}
