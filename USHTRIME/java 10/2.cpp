#include <iostream>
#include <iomanip>
#include <list>
#include <stack>
#include <queue>
using namespace std;
class Listat
{
    list<int> lista1;
    list<int> lista2;
    queue<int> queue1;
    stack<int> stack1;

public:
    void Mbushja()
    {
        int vlera;
        for (int i = 0; i < 6; i++)
        {
            cout << "V[" << i + 1 << "]=";
            cin >> vlera;
            lista1.push_back(vlera * 2);
            lista2.push_front(vlera * 3);
        }
    }
    void Shtypja(list<int> lista)
    {
        for (auto it = lista1.begin(); it != lista1.end(); it++)
        {
            cout << it << " ";
        }
        cout << "-------------------" << endl;
        for (auto it = lista2.begin(); it != lista2.end(); it++)
        {
            cout <<it << " ";
        }
    }
    void VendosNeStack()
    {
        for (auto it = lista1.begin(); it != lista1.end(); it++)
        {
            stack1.push(it);
        }
        while (!stack1.empty())
        {
            cout << " " << stack1.top();
            stack1.pop();
        }
    }
    void GhysmeRreshti()
    {

        for (int i = 0; i < lista2.size() / 2; i++)
        {
            lista2.pop_back();
        }

        for (auto it = lista2.begin(); it != lista2.end(); it++)
        {
            queue1.push(it);
        }
        while (!queue1.empty())
        {
            cout << " " << queue1.front();
            queue1.pop();
        }
    }
};

int main()
{
    Listat t;
    list<int> lista;
    cout << "---------------------------" << endl;
    t.Mbushja();
    cout << "-------------------------" << endl;
    t.Shtypja(lista);
    cout << "-------------------------" << endl;
    t.VendosNeStack();
    cout << "-------------------------" << endl;
    t.GhysmeRreshti();
    cout << "-------------------------" << endl;
}
