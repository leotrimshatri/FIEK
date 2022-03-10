//1. [20 pikë] [4 Pikë] Të krijohet/deklarohet klasa Garuesi { ID, Emri, Mbiemri, Piket[5], pMes( ), shtyp( ) }, me kërkesat si në vijim:
//a. [4 pikë] Konstruktori i klasës që përmes tastierës mundëson vendosjen(leximin) e të dhënave. (Vektori Piket[ ] përdoret për të ruajtur pikët e secilit garues për 5 garat ku merr pjesë).
//b. [4 pikë] Funksioni pMes() që kthen mesataren e pikëve të garuesit,
//c. [4 pikë] Funksioni me emrin shtyp( ) që tregon (shtypë) të dhënat e garuesit,
//d. [4 pikë] Funksionin kryesor main( ) ku krijohen dy objekte nga klasa Garuesi me emrat G1 dhe G2 dhe për garuesin me mesatare më të madhe thirret funksioni shtyp( ) për shtypjen e të dhënave si garues fitues.

//Detyra 1 - Klasa Garuesi

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Garuesi
{
private:
    string ID;
    string Emri;
    string Mbiemri;
    int Pike[5];
    //Funksionet
public:
    Garuesi();
    void lexo();   //Leximi i të dhënave të Garuesit
    void shtyp();  //Shtypja e të dhënave të Garuesit
    double pMes(); //Pikët mesatare të Garuesit
};

int main()
{
    Garuesi G1, G2;
    cout << "\nFituesi:\n";
    if (G1.pMes() > G2.pMes())
        G1.shtyp();
    else
        G2.shtyp();
    cout << "\n\n";
    return 0;
}
//Konstruktori - Regjistrimi i të dhënave të Garuesit

Garuesi::Garuesi()
{
    cout << "Jepni te dhenat per Garuesin:\n";
    cout << "-------------------------------------\n";
    cout << "ID : ";
    cin >> ID;
    cout << "Emri : ";
    cin >> Emri;
    cout << "Mbiemri : ";
    cin >> Mbiemri;
    cout << "Piket :\n";
    for (int i = 0; i < 5; i++)
    {
        cout << "Pike[" << i + 1 << "]=";
        cin >> Pike[i];
    }
    cout << "-------------------------------------\n";
}
//Shtypja e të dhënave të Garuesit

void Garuesi::shtyp()
{
    cout << "\nTe dhenat per Garuesin:\n";
    cout << "-------------------------------------\n";
    cout << "ID : " << ID << "\n";
    cout << "Emri : " << Emri << "\n";
    cout << "Mbiemri : " << Mbiemri << "\n";
    cout << "Piket : ";
    for (int i = 0; i < 5; i++)
        cout << Pike[i] << " ";
    cout << "\nMesatarja : " << pMes() << "\n";
    cout << "-------------------------------------\n";
}

//Mesatarja e pikëve pMes()
double Garuesi::pMes()
{
    double s = 0;
    for (int i = 0; i < 5; i++)
        s = s + Pike[i];
    return s / 5;
}
