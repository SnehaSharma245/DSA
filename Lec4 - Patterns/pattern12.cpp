// ABC
// ABC
// ABC

#include <iostream>
using namespace std;
int main()
{
    int n, i = 1;
    cout << "Enter the number of rows: ";
    cin >> n;
    char ch = 'A';
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << char(ch + j - 1) << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}