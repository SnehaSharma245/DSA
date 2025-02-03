#include <iostream>
using namespace std;
int main()
{
    int arr[8] = {1, 2, 3, 4, 4, 5, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int visited[8] = {0};
    for (int i = 0; i < n; i++)
    {
        if (visited[i])
        {
            continue;
        }
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                visited[j] = 1;
            }
        }
        if (count > 1)
        {
            cout << "Duplicate element is " << arr[i] << " and it appears " << count << " times." << endl;
        }
    }
    return 0;
}