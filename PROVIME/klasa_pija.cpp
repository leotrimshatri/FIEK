/*
1. [20 pikë] Të krijohet një program në gjuhën programuese C++, i cili përmban klasën me emrin Pija, si dhe funksionin main sipas
përshkrimit dhe kërkesave në vijim:
a) [1 pikë] Variablat e klasës me qasje private: Emri, Sasia dhe Nr_Perberesve (max. 15),
b) [2 pikë] Konstruktori i parë që mundëson inicializimin e vlerave të anëtarëve të të dhënave të klasës Pija përmes tastierës (duke
përdorur cin>>),
c) [5 pikë] Funksioni Shtyp1( ) që shtypë emrin e pijes me vija ndërmjet shkronjave/simboleve (p.sh. nëse emri i pijes është
“Fanta” atëherë funksioni do të shtypë “F-a-n-t-a”,
d) [5 pikë] Funksioni Shtyp2(int x) që shtypë sasinë e pijes te zvogëluar për x%, ku x është një numër që i jepet funksionit si
parametër,
e) [5 pikë] Funksioni Shtyp3( ) që tregon nëse numri përbërësve është numër njëshifror apo dyshifror (të supozohet se numri i
përbërësve nuk mund të jetë më shumë se 15),
[2 pikë] Funksionin main, ku duhet të krijohet objekti me emërtimin P nga klasa Pija dhe të thirren të gjitha funksionet e krijuara për të
shfaqur në ekran vlerat e llogaritura nga funksionet e klasës në fjalë.
*/

#include <iostream>
#include <string>
using namespace std;
class pija
{
private:
    string emri;
    double sasia;
    int nr_perbersve;

public:
    pija()
    {
        cout << "Jepeni emrin: ";
        cin >> emri;
        cout << "Jepeni sasine: ";
        cin >> sasia;
        cout << "Sa eshte numri i perbersve: ";
        cin >> nr_perbersve;
    }
    void shtyp1()
    {
        cout << "Emri: ";
        for (int i = 0; i < emri.size(); i++)
        {
            cout << emri[i];
            if (i < emri.size() - 1)
                cout << '-';
        }
        cout << endl;
    }
    void shtyp2(int x)
    {
        double sasia_zvogluar = sasia * (1 - x / 100.0);
        cout << "Sasia e zvogluar:" << sasia_zvogluar << endl;
    }
    void shtyp3()
    {
        if (nr_perbersve < 10)
        {
            cout << "Numri i perberesve eshte njeshifror\n";
        }
        else
        {
            cout << "Numri i perberesve eshte dyshifror\n";
        }
    }
};
void main()
{
    pija P;
    P.shtyp1();
    P.shtyp2(20);
    P.shtyp3();
}
