#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    int bin = 0;
    int place = 1;
    while (n != 0)
    {
        int bit = n & 1;
        bit = bit ^ 1; // for makin 1 ->0 and 0 -> 1
        bin = bin + bit * place;
        place = place * 10;
        n = n >> 1;
    }
    // cout << bin;
    int twosComp = 0;
    int carry = 1;
    int place1 = 1;

    while (bin != 0)
    {
        int lastDig = bin % 10;
        if (lastDig == 1 && carry == 1)
        {
            twosComp = twosComp + 0 * place1;

            carry = 1;
        }
        else if (lastDig == 0 && carry == 1)
        {
            twosComp = twosComp + 1 * place1;

            carry = 0;
        }
        else
        {
            twosComp = twosComp + lastDig * place1;
        }
        place1 = place1 * 10;
        bin = bin / 10;
    }
    cout << twosComp;
    return 0;
}