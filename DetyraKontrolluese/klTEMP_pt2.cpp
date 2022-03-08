//versioni me definicionet e funksioneve jashte klasës.

#include <iostream>
#include <list>
using namespace std;
class temperatura
{
private:
    list<int> L;

public:
    void Mbushja();
    void Shtypja();
    int Numero();
    void Zgjerimi();
};
void main()
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
void temperatura::Mbushja()
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
void temperatura::Shtypja()
{
    for (auto i = L.begin(); i != L.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;
}
int temperatura::Numero()
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
void temperatura::Zgjerimi()
{
    int s = 0, p = 1;
    for (auto i = L.begin(); i != L.end(); i++)
    {
        s += (*i); // s=s+(*i)
        p *= (*i); // p=p*(*i)
    }
    L.push_front(s);
    L.push_back(p);
}
