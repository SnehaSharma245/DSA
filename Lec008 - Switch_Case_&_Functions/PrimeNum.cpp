#include <iostream>
using namespace std;
bool checkPrime(int n)
{
    int flag = 0;
    if (n == 2)
    {
        return true;
    }
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
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    if (checkPrime(n))
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    return 0;
}