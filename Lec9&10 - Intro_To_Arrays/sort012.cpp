#include <iostream>
using namespace std;
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[9] = {0, 0, 1, 2, 0, 1, 2, 1, 0};
    cout << "Unsorted Array: " << endl;
    printArray(arr, 9);
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << endl;
    cout << "Sorted Array: " << endl;

    int low = 0;
    int high = n - 1;
    int mid = (low + high) / 2;
    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
            swap(arr[low], arr[mid]);
            low++;
        }
        else if (arr[mid] == 1)
        {
            mid++;
        }
        else if (arr[mid] == 2)
        {
            swap(arr[mid], arr[high]);
            high--;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}