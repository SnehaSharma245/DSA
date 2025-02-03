#include <iostream>
using namespace std;
int main()
{
    int count = 1, n, i = 1;
    cout << "Enter the number of rows: ";
    cin >> n;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << " " << count << " ";
            count++;
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}