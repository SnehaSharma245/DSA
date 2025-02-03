// // 1
// // 23
// // 345
// // 4567

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n, i = 1;
//     cout << "Enter the number of rows: ";
//     cin >> n;
//     while (i <= n)
//     {
//         int j = 1;
//         int count = i;
//         while (j <= i)
//         {
//             cout << count << " ";
//             count++;
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
//     return 0;
// }

// --------------Another Method ------------------------
#include <iostream>
using namespace std;
int main()
{
    int n, i = 1;
    cout << "Enter the number of rows: ";
    cin >> n;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << i + j - 1 << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}