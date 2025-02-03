#include <iostream>
using namespace std;
int main()
{
    int n, i = 1, count = 1;
    cout << "Enter number of rows: ";
    cin >> n;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << count << " ";
            count++;
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}