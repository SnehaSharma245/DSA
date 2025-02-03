#include <iostream>
#include <math.h>
using namespace std;

int decToBin(int n)
{
    int bin = 0;
    int place = 1;

    while (n != 0)
    {
        int rem = n % 2;
        n = n / 2;
        bin = bin + rem * place;
        place = place * 10;
    }

    return bin;
}

int main()
{
    int n;
    cout << "Enter a decimal number: ";
    cin >> n;
    int bin = decToBin(n);
    cout << endl;
    cout << "The binary number is " << bin << endl;
    return 0;
}
