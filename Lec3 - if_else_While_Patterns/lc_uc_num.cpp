#include <iostream>
using namespace std;
int main()
{
    char a;
    cout << "Enter a value: ";
    cin >> a;
    if (a >= 47 && a <= 57)
    {
        cout << "Entered value is number";
    }
    else if (a >= 65 && a <= 90)
    {
        cout << "Entered value is in uppercase";
    }
    else if (a >= 97 && a <= 122)
    {
        cout << "Entered value is in lowercase";
    }
    return 0;
}