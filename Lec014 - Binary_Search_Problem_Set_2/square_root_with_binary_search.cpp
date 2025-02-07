#include <iostream>
using namespace std;
int squareRoot(int x)
{
    int start = 0, end = x;
    int mid = start + (end - start) / 2;
    int ans;
    while (start <= end)
    {
        if (mid * mid == x)
        {
            return mid;
        }
        else if (mid * mid < x)
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int main()
{
    int x;
    cout << "Enter a number: ";
    cin >> x;
    cout << squareRoot(x);
    return 0;
}