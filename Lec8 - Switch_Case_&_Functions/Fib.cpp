#include <iostream>
using namespace std;
int fibTerm(int n)
{
    int n1 = 0;
    int n2 = 1;
    int temp = 0;
    for (int i = 2; i <= n; i++)
    {
        temp = n1 + n2;
        n1 = n2;
        n2 = temp;
    }
    return temp;
}
int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << "The number at " << n << "th term is " << fibTerm(n);
    return 0;
}