#include <iostream>
using namespace std;
int main()
{
    int a = 15;
    int b = 16;
    int right1 = a >> 1;
    cout << right1 << ": right1" << endl;
    ;
    int left1 = a << 1;
    cout << left1 << ": left1" << endl;
    ;
    int right2 = b >> 1;
    cout << right2 << ": right2" << endl;
    ;
    int left2 = b << 1;
    cout << left2 << ": left2" << endl;
    ;

    int right3 = b >> 2;
    cout << right3 << ": right3" << endl;
    ;
    return 0;
}