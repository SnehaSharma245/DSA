#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {3, 1, 4, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count == 1)
        {
            cout << "Unique element is " << arr[i] << endl;
        }
    }
    return 0;
}