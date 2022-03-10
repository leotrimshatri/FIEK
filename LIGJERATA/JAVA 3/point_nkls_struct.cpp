// Programi structP1b
#include <iostream>
using namespace std;
struct brinjet
{
    double a, b;
};
int main()
{
    brinjet D;
    brinjet *kater;
    kater = &D;
    (*kater).a = 8;
    (*kater).b = 5;

    cout << "\nVlerat e variablave të strukturës"
         << "\n\nVlera e brinjës a: "
         << (*kater).a;
    cout << "\nVlera e brinjës b: "
         << (*kater).b
         << "\n\n";
    return 0;
}

//-------------------------------------------------------------------------------------------------------------

// Programi structP1b
#include <iostream>
using namespace std;
class brinjet
{
public:
    double a, b;
};
int main()
{
    brinjet D;
    brinjet *kater;
    kater = &D;
    kater->a = 8; //(*kater).a=8;
    kater->b = 5; //(*kater).b=5;
    cout << "\nVlerat e variablave të strukturës"
         << "\n\nVlera e brinjës a: "
         << kater->a;
    ;
    cout << "\nVlera e brinjës b: "
         << kater->b
         << "\n\n";
    return 0;
}

//________________________________________________________________________________________________________

// Programi classP2b
#include <iostream>
using namespace std;
class Jeta
{
private:
    int m;

public:
    double a;
    void vlera(int k)
    {
        m = k;
    }
    void shtypja()
    {
        cout << "\nVlera e variablës private m=" << m << "\n";
    }
};

int main()
{
    Jeta Dita;
    Jeta *p;
    p = &Dita;
    (*p).vlera(77); //p->vlera(77);
    cout << "\nLeximi i vlerës së variablës a: ";
    cin >> (*p).a;  //cin>>p->a;
    (*p).shtypja(); //p->shtypja();
    cout << "\nVlera e variablës publike a="
         << (*p).a << "\n\n"; //<< p->a
    return 0;
}
