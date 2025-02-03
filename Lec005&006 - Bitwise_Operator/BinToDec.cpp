#include <iostream>
using namespace std;
#include <math.h>
int main()
{
    int n;
    cout << "enter a binary number: ";
    cin >> n;
    int dec = 0;
    int i = 0;
    while (n != 0)
    {
        int dig = n % 10;
        if (dig == 1)
        {
            dec = dec + pow(2, i);
        }
        n = n / 10;
        i++;
    }
    cout << dec;
    return 0;
}