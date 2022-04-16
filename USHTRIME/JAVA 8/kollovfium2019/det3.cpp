/*  Detyra 3 - Kolokviumi i parë - Prill 2019
	Të krijohet një program në C++ i cili njëkohësisht mundëson llogaritjen e vlerës së rritur për 20% dhe vlerës së 
zbritur për 20% të një numri të dhënë x përmes tastierës. Llogaritja e vlerave të kërkuara duhet të bëhet (gjithsesi) me një 
funksion të veçantë me emrin Perqindja, ku vlerat e llogaritura duhet të kthehen përmes përdorimit të parametrave referent. 
Thirrja e funksionit të kërkuara dhe shtypja e rezultateve të llogaritura të bëhen në funksionin main.
*/
#include <iostream>

using namespace std;

void perqindja(double& vleraRritur, double& vleraZbritur) {
	int x;
	cout << "Vlera e x: ";
	cin >> x;
	double perqindja = (20 * x) / (100 * 1.0);
	vleraRritur = x + perqindja;
	vleraZbritur = x - perqindja;
}

int main() {
	double a = 1, b = 2;

	perqindja(a, b);

	cout << "Vlera e rritur: " << a << endl;
	cout << "Vlera e zbritur: " << b << endl;

	return 0;
}
