// ABC
// DEF
// GHI

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    int i = 1;
    char ch = 'A';
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << ch;
            ch = char(ch + 1);
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}