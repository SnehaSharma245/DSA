#include <iostream>
using namespace std;
int main()
{
    int a = 2;
    int b = 4;
    cout << (a & b) << " : a&b" << endl;
    cout << (a | b) << " : a|b" << endl;
    cout << (~a) << " : ~a" << endl;
    cout << (~b) << " : ~b" << endl;
    cout << (a ^ b) << " : a^b" << endl;
    return 0;
}