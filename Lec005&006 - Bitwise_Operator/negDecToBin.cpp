#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter a negative number: ";
    cin >> n;
    int posNum = abs(n);
    int place = 1;
    int bin = 0;
    while (posNum != 0)
    {
        int bit = posNum & 1;
        bit = bit ^ 1;
        bin = bin + bit * place;
        place *= 10;
        posNum = posNum >> 1;
    }
    // cout << "The complement of positive number of negative number in binary form is: " << bin << endl;
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
