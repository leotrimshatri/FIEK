/*
[5 pikë] Të krijohet një program në gjuhën programuese C++, i cili mundëson mbushjen e një rreshti me prioritet
(priority_queue) me dhjetë numra të cilët përdoruesi i programit t’i jep përmes tastierës. Më pastaj, të shkruhet kodi që shtypë në
ekran tre numrat me vlerat më të mëdha që janë vendosur në rreshtin me prioritet. (Për krijimin e strukturës së të dhënave
priority_queue të përdoret libraria <queue> nga Standard Template Library (STL) e gjuhës programuese C++).
*/

#include <iostream>
#include <queue>
using namespace std;
void main()
{
    priority_queue<int> pq;
    for (int i = 1; i <= 10; i++)
    {
        int numri;
        cout << "Cakto numrin " << i << ": ";
        cin >> numri;
        pq.push(numri);
    }
    cout << "Tre numrat me te mdhenje: ";
    for (int i = 1; i <= 3; i++)
    {
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl;
}
