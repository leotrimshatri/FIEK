/*
1. [18 pikë] Të krijohet klasa me emrin EURO2020 e cila përmban vektorin dhe funksionet si në vijim:
a. [2 pikë] Vektori me emrin MoshaMes i cili përdoret për të ruajtur moshën mesatare të futbollistëve të 24 kombëtareve që janë
pjesëmarrëse në kampionat,
b. [2 pikë] Konstruktori i klasës që, përmes tastierës mundëson vendosjen e vlerave të moshave mesatare të kombëtareve në vektorin
MoshaMes,
c. [4 pikë] Funksioni me emrin MoshaMesMinimale që tregon (shtypë?) se cila është mosha mesatare minimale e një kombëtareje në
kampionat,
d. [4 pikë] Funksioni me emrin Dallimi që tregon se sa është dallimi (diferenca) në mes të moshës mesatare minimale dhe asaj
maksimale në kuadër të kombëtareve pjesëmarrëse në kampionat,
e. [4 pikë] Funksioni me emrin Mbi28 që tregon se sa është numri i kombëtareve që kanë moshën mesatare mbi moshën 28 vjeçare,
f. [2 pikë] Funksionin main ku krijohet një objket nga klasa EURO2020 me emrin KE dhe thirren të gjitha funksionet e krijuara.
*/

#include <iostream>
using namespace std;
const int m = 24;
class EURO2020
{
private:
    double MoshaMes[m];

public:
    EURO2020()
    {
        cout << "Cakto moshat mesatare te kombetareve: " << endl;
        for (int i = 0; i < m; i++)
        {
            cout << "Cakto moshen mesatare te kombetares " << i + 1 << ": ";
            cin >> MoshaMes[i];
        }
    }
    double MoshaMesMinimale()
    {
        double min = MoshaMes[0];
        for (int i = 1; i < m; i++)
        {
            if (MoshaMes[i] < min)
            {
                min = MoshaMes[i];
            }
        }
        return min;
    }
    double MoshaMesMaksimale()
    {
        double max = MoshaMes[0];
        for (int i = 1; i < m; i++)
        {
            if (MoshaMes[i] > max)
            {
                max = MoshaMes[i];
            }
        }
        return max;
    }
    double Dallimi()
    {
        double d = MoshaMesMaksimale() - MoshaMesMinimale();
        return d;
    }
    int Mbi28()
    {
        int k = 0;
        for (int i = 0; i < m; i++)
        {
            if (MoshaMes[i] > 28)
            {
                k++;
            }
        }
        return k;
    }
};
int main()
{
    EURO2020 KE;
    cout << "Mosha minimale: " << KE.MoshaMesMinimale() << endl;
    cout << "Dallimi: " << KE.Dallimi() << endl;
    cout << "Mbi 28: " << KE.Mbi28() << endl;
    return 0;
}

//_______________________________________________________________________________________________________________________________________________________________________________
//Versioni me definicionin e funksioneve jashtë klases:
#include <iostream>
using namespace std;
const int m = 24;
class EURO2020
{
private:
    double MoshaMes[m];

public:
    EURO2020();
    double MoshaMesMinimale();
    double MoshaMesMaksimale();
    double Dallimi();
    int Mbi28();
};
int main()
{
    EURO2020 KE;
    cout << "Mosha minimale: " << KE.MoshaMesMinimale() << endl;
    cout << "Dallimi: " << KE.Dallimi() << endl;
    cout << "Mbi 28: " << KE.Mbi28() << endl;
    return 0;
}
//Konstruktori
EURO2020::EURO2020()
{
    cout << "Cakto moshat mesatare te kombetareve: " << endl;
    for (int i = 0; i < m; i++)
    {
        cout << "Cakto moshen mesatare te kombetares " << i + 1 << ": ";
        cin >> MoshaMes[i];
    }
}
double EURO2020::MoshaMesMinimale()
{
    double min = MoshaMes[0];
    for (int i = 1; i < m; i++)
    {
        if (MoshaMes[i] < min)
        {
            min = MoshaMes[i];
        }
    }
    return min;
}
double EURO2020::MoshaMesMaksimale()
{
    double max = MoshaMes[0];
    for (int i = 1; i < m; i++)
    {
        if (MoshaMes[i] > max)
        {
            max = MoshaMes[i];
        }
    }
    return max;
}
double EURO2020::Dallimi()
{
    double d = MoshaMesMaksimale() - MoshaMesMinimale();
    return d;
}
int EURO2020::Mbi28()
{
    int k = 0;
    for (int i = 0; i < m; i++)
    {
        if (MoshaMes[i] > 28)
        {
            k++;
        }
    }
    return k;
}

//____________________________________________________________________________________________________________________________________________________________________
#include <iostream>
using namespace std;
const int m = 24;

class EURO2020
{
private:
    double MoshaMes[m];

public:
    EURO2020()
    {
        cout << "Cakto moshat mesatare te kombetareve: " << endl;
        for (int i = 0; i < m; i++)
        {
            cout << "Cakto moshen mesatare te kombetares " << i + 1 << ": ";
            cin >> MoshaMes[i];
        }
    }
    void MoshaMesMinimale()
    {

        double min = MoshaMes[0];
        for (int i = 1; i < m; i++)
        {
            if (MoshaMes[i] < min)
            {
                min = MoshaMes[i];
            }
        }
        cout << "Min: " << min <<”\n”;
    }
    double MoshaMesMaksimale()
    {

        double max = MoshaMes[0];
        for (int i = 1; i < m; i++)
        {
            if (MoshaMes[i] > max)
            {
                max = MoshaMes[i];
            }
        }
        cout << "Max: " << max <<”\n”;
        ;
    }
    void Dallimi()
    {
        double min = MoshaMes[0];
        double max = MoshaMes[0];
        for (int i = 1; i < m; i++)
        {
            if (MoshaMes[i] < min)
            {
                min = MoshaMes[i];
            }
            if (MoshaMes[i] > max)
            {
                max = MoshaMes[i];
            }
        }
        cout << "Dallimi Max-Min=" << max - min << "\n";
    }
    void Mbi28()
    {
        int k = 0;
        for (int i = 0; i < m; i++)
        {
            if (MoshaMes[i] > 28)
            {
                k++;
            }
        }
        Cout << k;
    }
};
int main()
{
    EURO2020 KE;
    KE.MoshaMesMaksimale;
    KE.Dallimi();
    KE.Mbi28();
    return 0;
}
