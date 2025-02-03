#include <iostream>
using namespace std;
int main()
{
    int totalAmount;
    cout << "Enter the total amount of money you have: ";
    cin >> totalAmount;
    int RsHun, RsFif, RsTwen, RsTen, RsFive, RsOne;
    switch (1)
    {
    case 1:
        RsHun = totalAmount / 100;
        totalAmount = totalAmount % 100;

    case 2:
        RsFif = totalAmount / 50;
        totalAmount = totalAmount % 50;

    case 3:
        RsTwen = totalAmount / 20;
        totalAmount = totalAmount % 20;

    case 4:
        RsTen = totalAmount / 10;
        totalAmount = totalAmount % 10;
    case 5:
        RsFive = totalAmount / 5;
        totalAmount = totalAmount % 5;
    case 6:
        RsOne = totalAmount / 1;
        totalAmount = totalAmount % 1;
    }
    cout << "Rs. 100 note(s) : " << RsHun << endl;
    cout << "Rs. 50 note(s) : " << RsFif << endl;
    cout << "Rs. 20 note(s) : " << RsTwen << endl;
    cout << "Rs. 10 note(s) : " << RsTen << endl;
    cout << "Rs. 5 note(s) : " << RsFive << endl;
    cout << "Rs. 1 note(s) : " << RsOne << endl;
    return 0;
}