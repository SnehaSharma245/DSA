#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int targetSum;
    cout << "Enter the target sum: ";
    cin >> targetSum;
    int visited[8] = {0};
    for (int i = 0; i < n; i++)
    {
        if (visited[i])
            continue;
        for (int j = i + 1; j < n; j++)
        {
            if (i != j && arr[i] + arr[j] == targetSum)
            {
                cout << "Pair is (" << arr[i] << " , " << arr[j] << ")" << endl;
                visited[j] = 1;
            }
            visited[i] = 1;
        }
    }
    return 0;
}