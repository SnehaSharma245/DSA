#include <iostream>
using namespace std;
int main()
{
    int a = 1, b = 2;
    if (a++ && --b)
    {
        cout << "Inside if";
    }
    else
    {
        cout << "Inside else";
    }
    return 0;
}