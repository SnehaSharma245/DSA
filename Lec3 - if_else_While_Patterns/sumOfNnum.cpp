#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;
    int sum = 0;
    int i = 0;
    while (i <= n)
    {
        sum += i;
        i++;
    }
    cout << "The sum of first " << n << " numbers is " << sum;
    return 0;
}