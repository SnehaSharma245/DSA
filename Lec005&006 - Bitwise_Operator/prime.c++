#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int flag = 0;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {

            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        cout << "The number is a prime number.";
    }
    else
    {
        cout << "The number is not a prime number.";
    }
    return 0;
}