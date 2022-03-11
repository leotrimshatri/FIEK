/*
1. [8 pikë] Të krijohet një program në gjuhën programuese C++, i cili përmban klasën me emrin Dora, si dhe funksionin main sipas
përshkrimit dhe kërkesave në vijim:
a) [1 pikë] Ndryshoret e klasës me qasje private: GishtiMadh, GishtiTregues, GishtiMesem, GishtiUnazes dhe GishtiVogel (ku secila
prej ndryshoreve parqet gjatësinë e gishtit përkatës në njësinë centimetër (cm)),
b) [1 pikë] Konstruktori i parë që mundëson inicializimin e vlerave të gjatësive të gishtave të dorës përmes tastierës (duke përdorur
cin>>),
c) [1 pikë] Funksioni LlogaritMesataren( ) që llogaritë dhe shtypë gjatesine mesatare të gishtave të dorës,
d) [2 pikë] Funksioni TregoShumen( ) që tregon nëse shuma e gjatësisë së të gjithë gishtërinjve tejkalon vlerën prej 50cm,
e) [2 pikë] Funksioni TregoBarazine ( ) që tregon nëse gjatësia e gishtit të vogël është sa 80% e gjatësisë së gishtit të unazes,
f) [1 pikë] Funksionin main, ku duhet të krijohet objekti me emrin D nga klasa Dora dhe të thirren të gjitha funksionet e krijuara për
të shfaqur në ekran vlerat e llogaritura nga funksionet e klasës në fjalë.
*/

#include <iostream>
using namespace std;
class Dora
{
private:
    double GishtiMadh, GishtiTregues, GishtiMesem, GishtiUnazor, GishtiVogel;

public:
    Dora()
    {
        cout << "Cakto gjatesine e gishtit te madhe: ";
        cin >> GishtiMadh;
        cout << "Cakto gjatesine e gishtit tregues: ";
        cin >> GishtiTregues;
        cout << "Cakto gjatesine e gishtit te mesem: ";
        cin >> GishtiMesem;
        cout << "Cakto gjatesine e gishtit unazor: ";
        cin >> GishtiUnazor;
        cout << "Cakto gjatesine e gishtit te vogel: ";
        cin >> GishtiVogel;
    }
    void LlogaritMesataren()
    {
        double mes = (GishtiMadh + GishtiTregues + GishtiMesem + GishtiUnazor + GishtiVogel) /

                     5;

        cout << "Mesatarja: " << mes << endl;
    }
    void TregoShumen()
    {
        double s = (GishtiMadh + GishtiTregues + GishtiMesem + GishtiUnazor + GishtiVogel);
        if (s > 50)
            cout << "Gjatesia e te gjithe gishtrinjeve kalon vlern 50." << endl;
        else
            cout << "Gjatesia e te gjithe gishtrinjeve nuk kalon vlern 50." << endl;
    }
    void TregoBarazine()
    {
        if (GishtiVogel == 0.8 * GishtiUnazor)
            cout << "Gishti i vogel eshte baraz me 80% e gishtit unazor." << endl;
        else
            cout << "Gishti i vogel nuk eshte baraz me 80% e gishtit unazor." << endl;
    }
};
void main()
{
    Dora D;
    D.LlogaritMesataren();
    D.TregoShumen();
    D.TregoBarazine();
}
