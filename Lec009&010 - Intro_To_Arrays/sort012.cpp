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
    int arr[7] = {2, 2, 2, 1, 1, 1, 0};
    cout << "Unsorted Array: " << endl;
    printArray(arr, 7);
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << endl;
    cout << "Sorted Array: " << endl;
    // low: Points to the beginning of the array where the next 0 will be placed.
    // high: Points to the end of the array where the next 2 will be placed.
    // mid: Iterates through the array to inspect elements.
    int low = 0;
    int high = n - 1;
    int mid = 0;
    // The loop continues until mid exceeds high, ensuring every element is processed.
    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if (arr[mid] == 1)
        {
            mid++;
        }
        // Swap it with the element at the high pointer.
        // Decrement high (move the pointer backward to place the next 2).
        // Do not increment mid immediately, as the swapped element (from high) needs to be checked.
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