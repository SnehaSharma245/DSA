#include <iostream>
using namespace std;
int main()
{
    cout << "Outside infinite Loop:" << endl;
    int num = 1;
    while (1)
    {
        cout << "Inside infinite Loop:" << endl;
        switch (num)
        {
        case 1:
            cout << "1" << endl;
            cout << "Program exited and came out of infinite Loop.";
            goto returnStm;
            break;

        default:
            break;
        }
    }
returnStm:
    return 0;
}