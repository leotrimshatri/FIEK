/*
1. [9 pikë] Realizoni kërkesat e paraqitura në vijim në lidhje me kodin e
dhënë.
a. [6 pikë] Të bëhet implementim i funksionit
shtyp_kombinimet ashtu që ta bëjë shtypjen e të gjitha
rezultateve të mundshme në varësi nga numri i golave të
shënuar. P.sh. nëse numri i golave është 5, atëherë funksioni
duhet të shtyp rezultatin si në vijim.
b. [1 pikë] Të implementohet funksioni main ?
c. [2 pikë] Të implementohet versioni i konstruktorit që
mundëson leximin e vlerave përmes tastierës.
*/

/*
#include <iostream>
#include <string>
using namespace std;
class loja
{
private:
    string nikoqiri, mysafiri;
    int numri_golave;

public:
    loja()
    {
        nikoqiri = "Liria";
        mysafiri = "Drita";
        numri_golave = 4;
    }
    void shtyp_kombinimet();
};
*/

//1a_______________________________________
void loja::shtyp_kombinimet()
{
    cout << "Kombinimet e mundeshme: \n";
    for (int i = numri_golave; i >= 0; i--)
    {
        cout << nikoqiri << " " << i << " : " << numri_golave - i << " " << mysafiri << endl;
    }
}
//1b___________________________________
void main()
{
    loja L;
    L.shtyp_kombinimet();
}
//1c________________________________________
loja(bool permes_tastieres)
{
    cout << "Cakto ekipin nikoqir: ";
    cin >> nikoqiri;
    cout << "Cakto ekipin mysafir: ";
    cin >> mysafiri;
    cout << "Cakto numrin e golave: ";
    cin >> numri_golave;
}
//Kodi komplet
#include <iostream>
#include <string>
using namespace std;
class loja
{
private:
    string nikoqiri, mysafiri;
    int numri_golave;

public:
    loja()
    {
        nikoqiri = "Liria";
        mysafiri = "Drita";
        numri_golave = 4;
    }
    loja(bool permes_tastieres)
    {
        cout << "Cakto ekipin nikoqir: ";
        cin >> nikoqiri;
        cout << "Cakto ekipin mysafir: ";
        cin >> mysafiri;
        cout << "Cakto numrin e golave: ";
        cin >> numri_golave;
    }
    void shtyp_kombinimet();
};
void main()
{
    loja L;
    L.shtyp_kombinimet();
}
void loja::shtyp_kombinimet()
{
    cout << "Kombinimet e mundeshme: \n";
    for (int i = numri_golave; i >= 0; i--)
    {
        cout << nikoqiri << " " << i << " : " << numri_golave - i << " " << mysafiri << endl;
    }
}
