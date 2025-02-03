// 3n+7 nth term?

#include <iostream>
using namespace std;
int nthTerm(int n)
{
    if (n < 0)
        return -1;
    int term = 3 * n + 7;
    return term;
}
int main()
{
    int n;
    cout << "Enter the term number: ";
    cin >> n;
    int ans = nthTerm(n);
    if (ans != -1)
    {
        cout << "The result is " << ans << endl;
    }
    else
    {
        cout << "Invalid input" << endl;
    }
    return 0;
}