#include <iostream>
using namespace std;
long long int intSquareRoot(int x)
{
    int s = 0;
    int e = x;
    int ans = -1;
    long long int mid = s + (e - x) / 2;
    while (s <= e)
    {
        long long int square = mid * mid;
        if (square == x)
        {
            return mid;
        }
        else if (square < x)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
double morePrecision(int n, int precision, int tempSol)
{
    double factor = 1;
    double ans = tempSol;
    for (int i = 0; i < precision; i++)
    {
        // 0.1 add in first loop
        // 0.01 add in second loop
        // 0.001 add in third loop
        //  and so on....
        factor = factor / 10;

        for (double j = ans; j * j < n; j = j + factor)
        {
            ans = j;
        }
    }
    return ans;
}
int main()
{
    int x;
    cout << "Enter a number: ";
    cin >> x;
    long long int intSol = intSquareRoot(x);
    double doubleSol = morePrecision(x, 3, intSol);
    cout << "Square root with more precision is " << doubleSol << endl;
    return 0;
}