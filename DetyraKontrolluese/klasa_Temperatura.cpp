/*
Të krijohet një program në gjuhën programuese C++ i cili përmban klasën Temperatura, si dhe funksionin
main sipas përshkrimit dhe kërkesave në vijim:

a. [1 pikë] Në pjesën private, klasa Temperatura duhet të përmbaj një listë të lidhur për numra të plotë
që deklarohet prej strukturës së të dhënave <list> nga libraria STL (Standard Template Library) dhe
e kam emrin L,

b. [12 pikë] Në pjesën publike, klasa Temperatura duhet të përmbaj funksionet si në vijim si në vijim:
                
                i. [3 pikë] Funksioni Mbushja që mundëson mbushjen e listës L me 7 numra të cilët
                përdoruesi i jep përmes tastierës. Numrat që futën në listë mund të jenë vetëm prej vlerës
                5 deri në 20, andaj nëse përdoruesi jep një numër jashtë këtij diapazoni, duhet të paraqitet
                mesazhi përkatës për futje të serishme të vlerës.
                
                ii. [3 pikë] Funksioni Shtypja që mundëson shtypjen e numrave që gjendën në listën L,
                
                iii. [3 pikë] Funksioni Numerimi që mundëson numërimin numrave dyshifror që gjendën në
                listën L,
                
                iv. [3 pikë] Funksioni Zgjerimi që zgjeron listën L edhe me dy anëtar shtesë, ku anëtari i
                parë paraqet shumën e anëtarëve të deritanishëm në listë, ndërsa anëtari i dytë parqet
                prodhimin e anëtarëve të deritanishëm. Anëtari i shumës le të shtohet në fillim të listës,
                ndërsa anëtari i prodhimit le të shtohet në fund të listes.

c. [2 pikë] Funksionin main, ku krijohet një objekt nga klasa temparatura dhe thirrën të gjitha
funksionet e klasës për t’i shtypur rezultatet e llogaritura.
*/
#include <iostream>
#include <list>
using namespace std;

class temperatura
{
private:
    list<int> L;

public:
    void Mbushja()
    {
        for (int i = 1; i <= 7; i++)
        {
            int n;
            cout << "Cakto nje vlere n per anetarin i=" << i << "; n=";
            cin >> n;
            if (n >= 5 && n <= 20)
            {
                L.push_back(n);
            }
            else
            {
                cout << "\nGabim! Vlera n duhet te jete mes 5 dhe 20 (5<=n<=20).\n";
                i--;
                continue;
            }
        }
        cout << endl;
    }
    void Shtypja()
    {
        for (auto i = L.begin(); i != L.end(); i++)
        {
            cout << *i << " ";
        }
        cout << endl;
    }
    int Numero()
    {
        int k = 0;
        for (auto i = L.begin(); i != L.end(); i++)
        {
            if (*i >= 10)
            {
                k++;
            }
        }
        return k;
    }
    void Zgjerimi()
    {
        int s = 0, p = 1;
        for (auto i = L.begin(); i != L.end(); i++)
        {
            s += (*i);
            p *= (*i);
        }
        L.push_front(s);
        L.push_back(p);
    }
};

int main()
{
    temperatura t;
    t.Mbushja();
    cout << "Lista: ";
    t.Shtypja();
    cout << "Numri i anetareve dyshifror: " << t.Numero() << endl;
    ;
    t.Zgjerimi();
    cout << "Lista pas zgjerimit: ";
    t.Shtypja();
    system("Pause");
}
