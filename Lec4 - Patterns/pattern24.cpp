#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of rows: ";
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        // print first triangle
        int j = 1;

        while (j <= (n - i + 1))
        {
            cout << j;

            j++;
        }

        // print star 1st triangle
        int star = i - 1;
        while (star)
        {
            cout << "*";
            star--;
        }

        // print second star triangle
        int star2 = i - 1;
        while (star2)
        {
            cout << "*";
            star2--;
        }

        // print second number triangle
        int j2 = 1;
        int start2 = n - i + 1;
        while (j2 <= (n - i + 1))
        {
            cout << start2;
            start2--;
            j2++;
        }
        cout << endl;
        i++;
    }

    return 0;
}