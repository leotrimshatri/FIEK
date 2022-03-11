/*
3. [4 pikë] Të krijohet një program në C++ i cili njëkohësisht mundëson llogaritjen e vlerës së rritur për 20% dhe vlerës së
zbritur për 20% të një numri të dhënë x përmes tastierës. Llogaritja e vlerave të kërkuara duhet të bëhet (gjithsesi) me një
funksion të veçantë me emrin Perqindja, ku vlerat e llogaritura duhet të kthehen përmes përdorimit të parametrave referent.
Thirrja e funksionit të kërkuara dhe shtypja e rezultateve të llogaritura të bëhen në funksionin main.
*/

#include <iostream>
using namespace std;
void Perqindja(int x, double &me_rritje, double &me_zbritje)
{
    me_rritje = x * 1.2;  // ose x+ x*0.2
    me_zbritje = x * 0.8; // ose x- x*0.2
}
void main()
{
    int x;
    double me_rritje, me_zbritje;
    cout << "Cakto x: ";
    cin >> x;
    Perqindja(x, me_rritje, me_zbritje);
    cout << "Vlera e rritur: " << me_rritje << endl;
    cout << "Vlera e zbritur: " << me_zbritje << endl;
}
