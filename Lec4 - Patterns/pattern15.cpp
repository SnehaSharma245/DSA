// A
// B B
// C C C
// D D D D

#include <iostream>
using namespace std;
int main()
{
    int n, i = 1;
    cout << "enter number: ";
    cin >> n;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << char('A' + i - 1);
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}