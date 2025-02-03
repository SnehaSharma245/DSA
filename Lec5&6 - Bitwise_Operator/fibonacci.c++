#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int a = 0;
    int b = 1;
    cout << a << " " << b << " ";
    for (int i = 3; i <= n; i++)
    {
        // cout << a << " " << b << " ";
        int nextNum = a + b;
        cout << nextNum << " ";
        a = b;
        b = nextNum;
    }
    return 0;
}