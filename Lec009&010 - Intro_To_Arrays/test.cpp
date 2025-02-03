#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int a[10];
    cout << a << endl; // prints the memory address of the first element of the array
    cout << a + 1 << endl;
    int b[5];
    fill(b, b + 5, 10);
    for (int i = 0; i < 5; i++)
    {
        cout << b[i] << " ";
    }
    return 0;
}