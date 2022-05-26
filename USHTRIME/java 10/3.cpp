#include <iostream>
#include <iomanip>
using namespace std;
class Studenti
{
    int id;
    string emri;
    string drejtmimi;
    double notamesatare;

public:
    Studenti(int id, string emri, string drejtimi, double notamesatare)
    {
        this->drejtmimi = drejtimi;
        this->emri = emri;
        this->id = id;
        this->notamesatare = notamesatare;
    }
    void notaMesatare(double &m)
    {
        m = notamesatare;
    }
    string drejtimiIstudentit()
    {
        stringdrejtimiptr;
        drejtimiptr = drejtmimi;
        return drejtimiptr;
    }
    void Printo()
    {
        cout << "Id i studentit:" << id << endl;
        cout << "Emri i studentit:" << emri << endl;
        cout << "Drejtimi i studentit:" << drejtmimi << endl;
        cout << "Nota mesatare e studentit:" << notamesatare << endl;
    }
};
int main()
{
    Studenti s{123, "Klajdi", "Fiek", 10.0};
    cout << endl;
    s.Printo();
    int nr;
    double notamesref;
    for (int i = 0; i < 3; i++)
    {

        cout << "Zgjedhja :";
        cin >> nr;
        switch (nr)
        {
        case 1:
            cout <<s.drejtimiIstudentit() << endl;
            break;
        case 2:
            s.notaMesatare(notamesref);
            cout << notamesref << endl;
            break;
        default:
            cout << "Operacion i panjohur" << endl;
        }
    }
} 
