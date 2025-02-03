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

    return 0;
}