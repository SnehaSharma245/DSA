#include <iostream>
using namespace std;
int setBits(int a, int b)
{
    int count = 0;
    while (a != 0 || b != 0)
    {
        if (a & 1)
        {
            count++;
        }
        if (b & 1)
        {
            count++;
        }
        a = a >> 1;
        b = b >> 1;
    }
    return count;
}
int main()
{
    int a, b;
    cout << "Enter the value of a and b: ";
    cin >> a >> b;
    int count = setBits(a, b);
    cout << "The total number of setBits in a and b is " << count << endl;
    return 0;
}