/*  Detyra 4 - Kolokviumi i parë - Prill 2019
	Të krijohet një program në gjuhën programuese C++, i cili mundëson mbushjen e një rreshti me prioritet 
(priority_queue) me dhjetë numra të cilët përdoruesi i programit t’i jep përmes tastierës. Më pastaj, të shkruhet kodi që shtypë në 
ekran tre numrat me vlerat më të mëdha që janë vendosur në rreshtin me prioritet. (Për krijimin e strukturës së të dhënave 
priority_queue të përdoret libraria <queue> nga Standard Template Library (STL) e gjuhës programuese C++).
*/
#include <iostream>
#include <queue>

using namespace std;

int main() {
	
	priority_queue<int> pQueue;

	int value;
	for (int i = 0; i < 10; i++)
	{
		cout << "Vlera per queue: ";
		cin >> value;
		pQueue.push(value);
	}

	for (int i = 0; i < 3; i++)
	{
		cout << pQueue.top() << " ";
		pQueue.pop();
	}

	return 0;
}
