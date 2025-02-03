// A
// B C
// C D E

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;
    int i = 1;
    int ch = 'A';
    while (i <= n)
    {
        int j = 1;
        while (j <= i)

        {
            cout << char(ch + i + j - 2) << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}