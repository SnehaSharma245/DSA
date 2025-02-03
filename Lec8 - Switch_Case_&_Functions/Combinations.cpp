#include <iostream>
using namespace std;
int fact(int n)
{
    if (n == 0)
    {
        return 1;
    }
    int fact = 1;
    for (int i = n; i > 0; i--)
    {
        fact = fact * i;
    }
    return fact;
}
int nCr(int n, int r)
{
    if (n < r)
    {
        cout << "n should be greater than or equal to r." << endl;
        return -1;
    }
    int ans = fact(n) / (fact(r) * fact(n - r));
    return ans;
}
int main()
{
    int n, r;
    cout << "Enter the value of n and r: ";
    cin >> n >> r;
    int ans = nCr(n, r);
    cout << ans << endl;
    return 0;
}