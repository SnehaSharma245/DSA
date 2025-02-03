// A B C
// D E F
// G H I

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of rows: ";
    cin >> n;
    int i = 1;
    char ch = 'A';
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << char(ch + i + j - 2) << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}