#include <iostream>
#include <iomanip>
using namespace std;
typedef int Info;

struct Elem
{
    Elem* link;
    Info info;
};

void Insert2(Elem*& L, Elem*& T)
{
    if (T->link != L)
    {
        T = T->link;
        Insert2(L, T);
    }
}

void Insert1(Elem*& L, Info value)
{
    Elem* tmp = new Elem;
    tmp->info = value;
    if (L != NULL)
    {
        Elem* T = L;
        Insert2(L, T);
        T->link = tmp;
    }
    else
    {
        L = tmp;
    }
    tmp->link = L;
}

void Print2(Elem* L, Elem* first)
{
    if (L->link != first)
    {
        L = L->link;
        cout << setw(4) << L->info;
        Print2(L, first);
    }
}

void Print1(Elem* L)
{
    if (L == NULL)
        return;
    Elem* first = L;
    cout << setw(4) << L->info;
    Print2(L, first);
    cout << endl;
}

void Change2(Elem* L, Elem* first, int i)
{
    if (L->link != first)
    {
        if (i % 2 != 0)
        {
            swap(L->info, L->link->info);
        }
        else
            if (L->link == first)
            {
                L = L->link;
            }
        L = L->link;
        Change2(L, first, ++i);
    }
}

void Change1(Elem* L)
{
    if (L == nullptr)
        return;
    Elem* first = L;
    Change2(L, first, 1);
}
