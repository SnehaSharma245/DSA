// take input n and find sum of all even numbers upto n
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int i = 0, sum = 0;
    while (i <= n)
    {
        if (i % 2 == 0)
        {
            sum += i;
        }
        i++;
    }
    cout << "The sum of all even numbers upto " << n << " is: " << sum;
    return 0;
}