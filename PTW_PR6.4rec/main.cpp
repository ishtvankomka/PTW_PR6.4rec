#include <iostream>
#include <iomanip>
#include "Elem.h"
using namespace std;

int main()
{
    Elem* L = NULL;
    int n, a;
    cout << "Enter quantity: "; cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "a = "; cin >> a;
        Insert1(L, a);
    }
    Print1(L);
    Change1(L);
    Print1(L);
}
