/*
Të krijohet një program në gjuhën programuese C++ i cili përmban klasën me emërtimin Telefoni, si
dhe funksionin main sipas përshkrimit dhe kërkesave në vijim:

a. [1 pikë] Variablat private të klasës me emërtimet prodhuesi, kapaciteti_memorik,
numri_i_aplikacioneve dhe vektorin Perdorimi (i cila shërben për të ruajtur shënimet e
kohës së përdorimit të telefonit për 7 ditë të javës)

b. [2 pikë] Konstruktori i klasës për leximin nga tastiera të shënimeve për telefonin (d.m.th.
prodhuesi, kapaciteti memorik, numri i aplikacioneve dhe shënimet e përdorimit të telefonit
për 7 ditë të javës),

c. [3 pikë] Funksioni FillimiFundi për kthimin e shkronjës së parë dhe të fundit të emërtimit të
prodhuesit, me që rast shkronjat kthehen përmes parametrave të llojit pointer,

d. [3 pikë] Funksioni Numerimi për numërimin e ditëve për të cilat përdorimi i telefonit ka qenë
më shumë se dy orë. Kalimi në unazë nëpër secilin anëtarë të vektorit të bëhet përmes
përdorimit të adresave përkatës duke përdorur pointerët (dhe jo përmes përdorimit të
indeksave përkatës të anëtarëve të vektorit).

e. [4 pikë] Funksioni MaxMin për gjetjen e kohës minimale dhe maksimale të përdorimit të
telefonit, ku vlerat maksimale dhe minimale funksioni i kthen përmes përdorimit të
parametrave të llojit referent,

f. [2 pikë] Funksioni main, ku duhet të krijohet objekti me emërtimin T nga klasa Telefoni dhe
variablat e nevojshme për të thirrur funksionet e krijuara të klasës, në mënyrë që të shfaqen
në ekran vlerat e llogaritura sipas kërkesave të paraqitur më sipër.
*/

/*
Versionet nëpër grupe:
- Student {ID, Emri, Mbiemri, Drejtimi, Notat[5] dhe funksionet Mesatarja( ) dhe
NrProvimeveTeDhena( )}.
- Nxenes{Nr, Emri, Mbiemri, Klasa, Notat[10] dhe funksionet NotaMesatare( ), NrNotave5( )}
- Qyteti { ID, Emri, Temp10Dite[10], TempMesatare( ), SaDiteMbi20Grade( ) ose TempMax(
)}
- Aktori { ID, Emri, Mbiemri, NrRoleveGjate5Viteve[5], Mesatarja( ),
SaHereMbi3RoleGjateVitit( ) }
- Klienti { ID, Emri, Mbiemri, Gjendja12Muaj[12], Mesatarja( ), MuajMax( )}
- Punetori {ID, Emri, Mbiemri, Pagat[12], Mesatarja( ), PagaMax/Min ( ) ose PagaMax( )}, etj.
*/


#include <iostream>
#include <string>
using namespace std;
const int m = 7;

class Telefoni
{
private:
    string prodhuesi;
    int kapaciteti_memorik;
    int nr_aplikacioneve;
    int Perdorimi[m];

public:
    Telefoni()
    {
        cout << "Caktoni prodhuesin: ";
        cin >> prodhuesi;
        cout << "Caktoni kapacitetin e memories (GB): ";
        cin >> kapaciteti_memorik;
        cout << "Caktoni numrin e aplikaconeve: ";
        cin >> nr_aplikacioneve;
        cout << "Shenimet e perdorimit te telefonit gjate nje jave:\n";
        for (int i = 0; i < m; i++)
        {
            cout << "Dita " << i + 1 << ": ";
            cin >> Perdorimi[i];
        }
    }
    void FillimiFundi(char *fillimi, char *fundi)
    {
        *fillimi = prodhuesi[0];
        *fundi = prodhuesi[prodhuesi.size() - 1];
    }
    int Numerimi()
    {
        int k = 0;
        int *p = Perdorimi;
        for (int i = 0; i < m; i++)
        {
            if (*(p + i) > 2)
            {
                k++;
            }
        }
        return k;
    }
    void MaxMin(int &max, int &min)
    {
        max = Perdorimi[0];
        min = Perdorimi[0];

        for (int i = 0; i < m; i++)
        {
            if (Perdorimi[i] > max)
            {
                max = Perdorimi[i];
            }
            if (Perdorimi[i] < min)
            {
                min = Perdorimi[i];
            }
        }
    }
};
void main()
{
    Telefoni T;
    char fillimi, fundi;
    int max, min;
    T.FillimiFundi(&fillimi, &fundi);
    T.MaxMin(max, min);
    cout << "Shkronja e pare e prodhuesit: " << fillimi << endl;
    cout << "Shkronja e fundit e prodhuesit: " << fundi << endl;
    cout << "Numri i diteve te perdorimit me me shume se dy ore: " << T.Numerimi()
         << endl;
    cout << "Koha maksimale: " << max << endl;
    cout << "Koha minimale: " << min << endl;
}
