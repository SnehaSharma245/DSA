
//    1
//   121
//  12321
// 1234321

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter rows: ";
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        // print spaces
        int spaces = n - i;
        while (spaces)
        {
            cout << " ";
            spaces--;
        }
        // print first triangle
        int j = 1;

        while (j <= i)
        {
            cout << j;
            j++;
        }

        // print second triangle

        int start = i - 1;
        while (start)
        {
            cout << start;
            start--;
        }
        cout << endl;
        i++;
    }

    return 0;
}