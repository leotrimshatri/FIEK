/*
1. [5 pikë] Të krijohet një program në gjuhën programuese C++, i cili përmban klasën me emrin Vetura, si dhe funksionin main
sipas përshkrimit dhe kërkesave në vijim:
a) [0.5 pikë] Variablat e klasës me qasje private: Emri_Prodhuesit, Nr_Kilometrave dhe Viti_Prodhimit,
b) [0.5 pikë] Konstruktori i parë që mundëson inicializimin e vlerave të anëtarëve të të dhënave të klasës Vetura përmes
tastierës (duke përdorur cin>>),
c) [1 pikë] Funksioni F1( ) që shtypë gjysmën e parë të shkronjave (simboleve) të emrit të prodhuesit,
d) [1 pikë] Funksioni F2( ) që konverton dhe shtypë numrin e kilometrave nga njësia kilometër në njësinë milje nëse
1milje=1.609km,
e) [1.5 pikë] Funksioni F3( ) që shtypë në ekran të gjitha vitet nga viti i prodhimit deri të viti 2019 (p.sh. nëse viti i
prodhimit është 2015, atëherë në ekran shtypet lista e viteve “2015, 2016, 2017, 2018, 2019”),
f) [0.5 pikë] Funksionin main, ku duhet të krijohet objekti me emërtimin Vet nga klasa Vetura dhe të thirren të gjitha
funksionet e krijuara për të shfaqur në ekran vlerat e llogaritura nga funksionet e klasës në fjalë.
*/

#include <iostream>
#include <string>
using namespace std;
class Vetura
{
private:
    string emri_prodhuesit;
    int nr_kilometrave, viti_prodhimit;

public:
    Vetura()
    {
        cout << "Cili eshte emri i prodhuesit: ";
        cin >> emri_prodhuesit;
        cout << "Sa eshte numri i kilometrave te kaluara: ";
        cin >> nr_kilometrave;
        cout << "Cili eshte viti i prodhimit: ";
        cin >> viti_prodhimit;
    }
    void F1()
    {
        for (int i = 0; i < emri_prodhuesit.size() / 2; i++)
        {
            cout << emri_prodhuesit[i];
        }
        cout << endl;
    }
    void F2()
    {
        double milje = nr_kilometrave / 1.609; // pasi 1milje=1.609km
        cout << "Milje: " << milje << endl;
    }
    void F3()
    {
        for (int i = viti_prodhimit; i <= 2019; i++)
        {
            cout << i << " ";
        }
    }
};
void main()
{
    Vetura Vet;
    Vet.F1();
    Vet.F2();
    Vet.F3();
}
