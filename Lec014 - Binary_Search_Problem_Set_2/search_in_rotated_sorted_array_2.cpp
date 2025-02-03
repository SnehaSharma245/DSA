// another approach for finding a key in rotated sorted array

#include <iostream>
using namespace std;
int searchElement(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    // choosing which side is sorted
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        // left side is sorted
        if (arr[mid] > arr[start])
        {
            if (arr[start] <= key && arr[mid] > key)
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        // right side is sorted
        else
        {
            if (arr[mid] < key && key <= arr[end])
            {
                start = mid + 1; // Target is in the right half
            }
            else
            {
                end = mid - 1; // Target is not in the right half
            }
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}

int main()
{
    int arr[8] = {4, 5, 6, 7, 0, 1, 2, 3};
    int index = searchElement(arr, 8, 5);
    cout << index << endl;

    return 0;
}