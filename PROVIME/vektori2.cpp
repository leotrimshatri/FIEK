/*
[8 pikë] Të shkruhet një program në C++ i cili për një varg/vektor të dhënë A[m] numëron se sa anëtarë të tij janë numra një-shifrorë e
sa numra shumë-shifrorë. Numërimi i numrave një-shifrorë dhe shumë-shifrorë të bëhet përmes një funksioni me prototipin
void Numero(int A[], int m, int &nj, int &sh), ashtu që vlerat e llogaritura të kthehen përmes parametrave referentë nj dhe sh. Në
funksionin main të deklarohet vektori A me vlera të çfarëdoshme dhe të thirret funksioni Numero për të bërë numërimin e anëtarëve
një-shifrorë dhe shumë-shifrorë. Pas thirrjes së funksionit, vlerat e llogaritura të shtypen si vlera dalëse të programit.
*/

#include <iostream>
using namespace std;
void Numero(int A[], int m, int *nj, int *sh)
{
    *nj = 0;
    *sh = 0;
    for (int i = 0; i < m; i++)
    {
        if (A[i] > -10 && A[i] < 10)
            (*nj)++;
        else
            (*sh)++;
    }
}
void main()
{
    const int m = 7;
    int A[m] = {5, 10, 55, -6, 11, -19, -5};
    int nj, sh;
    Numero(A, m, &nj, &sh);
    cout << "Numeri i anetareve nje-shifrore: " << nj << endl;
    cout << "Numeri i anetareve shume-shifrore: " << sh << endl;
}
