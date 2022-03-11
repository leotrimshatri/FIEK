/*
Detyra 2
[15 pikë] Të shkruhet një program në C++ i cili për një varg/vektor të dhënë A[m] (ku m është numër tek) e llogaritë shumën e anëtarit të
parë, anëtarit në mes dhe anëtarit në fund të vargut, si dhe prodhimin e anëtarit të dytë dhe atij të parafundit të vargut. Llogaritja e
shumës dhe prodhimit të bëhet përmes një funksioni me prototipin void GjetjaShP(int A[], int m, int *shuma, int *prodhimi), ashtu që
vlerat e llogaritura të kthehen përmes variablave të llojit pointer shuma dhe prodhimi. Në funksionin main të deklarohet vektori A me
vlera të çfarëdoshme dhe të thirret funksioni GjetjaShP për të gjetur vlerat e shumës dhe prodhimit. Pas thirrjes së funksionit, vlerat e
llogaritura të shtypen si vlera dalëse të programit.
*/

#include <iostream>
using namespace std;
void GjetjaShP(int A[], int m, int *shuma, int *prodhimi)
{
    *shuma = A[0] + A[m / 2] + A[m - 1];
    *prodhimi = A[1] * A[m - 2];
}
void main()
{
    const int m = 7;
    int A[m] = {4, 2, 3, 1, 6, 4, 3};
    int s, p;
    GjetjaShP(A, m, &s, &p);
    cout << "Shuma: " << s << endl;
    cout << "Prodhimi: " << p << endl;
}
