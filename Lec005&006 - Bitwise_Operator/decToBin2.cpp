#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the decimal number: ";
    cin >> n;
    int bin = 0;
    int place = 1;
    while (n != 0)
    {
        int bit = n & 1;
        bin = bin + bit * place;
        place = place * 10;
        n = n >> 1;
    }
    cout << "The binary number is " << bin << endl;
    return 0;
}