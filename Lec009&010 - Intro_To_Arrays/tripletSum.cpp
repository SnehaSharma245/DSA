#include <iostream>
using namespace std;
int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    int targetSum;
    cout << "Enter the target sum: ";
    cin >> targetSum;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (arr[i] + arr[j] + arr[k] == targetSum)
                {
                    cout << "(" << arr[i] << " , " << arr[j] << " , " << arr[k] << " )" << endl;
                }
            }
        }
    }
    return 0;
}