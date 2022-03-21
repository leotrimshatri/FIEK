/* Detyra 1
1. Te deklarohet nje variabel int me emrin a
2. Vlera e variables a te lexohet permes tastieres
3. Te deklarohet nje variabel int me emrin b
4. Te deklarohet nje pointer me emrin c, i cili per vlere merr adresen e variables b
5. Te shkruhen komandat ashtu qe vlera e variables b, te percaktohet permes pointerit c, 
ku vlera e b duhet te jete katrori i vleres a
*/

#include <iostream>
#include <string>

using namespace std;

int main() {

	int a, b;
	int* c = &b;

	cout << "Vlera e a: ";
	cin >> a;

	*c = a * a;
	
	// b = a * a;   Percaktimi direkt i vleres b

	cout << "a: " << a << endl;
	cout << "b: " << b << endl;
	cout << "c: " << *c << endl;
	
	return 0;
}
