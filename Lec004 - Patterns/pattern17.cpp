// D
// C D
// B C D
// A B C D

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        char ch = 'A' + n - i;
        while (j <= i)
        {
            cout << ch << " ";
            ch = char(ch + 1);
            j++;
        }
        cout << "\n";
        i++;
    }

    return 0;
}