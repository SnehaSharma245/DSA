// approach of finding the key in sorted rotated array
// first we find the pivot element of array where the transition occurs.(minimum element)
// then we choose which line in the graph to search for
// if key lies between start of first line and before pivot, it means it lies on first line
//  key>arr[start] -> it lies on first line
// else on second line
// apply binary search function on the choosen line

#include <iostream>
using namespace std;
int pivotElement(int arr[], int size)
{
    int start = 0, end = size - 1;
    int mid = start + (end - start) / 2;
    while (start < end)
    {
        if (arr[mid] >= arr[0])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    return start;
}
int binarySearch(int arr[], int key, int start, int end)
{

    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}
int searchElement(int arr[], int size, int key)
{
    // check for non rotated sorted array
    if (arr[0] <= arr[size - 1])
    {
        return binarySearch(arr, key, 0, size - 1);
    }
    int pivot = pivotElement(arr, size);
    // cout << pivot << endl;
    int start = 0, end = size - 1;

    if (arr[pivot] == key)
    {
        return pivot;
    }
    else if (arr[0] <= key)
    {
        // int sizeDec = (pivot - 1) - start;
        return binarySearch(arr, key, start, pivot - 1);
    }
    else
    {
        // int sizeInc = end - pivot + 1;
        return binarySearch(arr, key, pivot, end);
    }
}
int main()
{
    int arr[8] = {4, 5, 6, 7, 0, 1, 2, 3};
    int key;
    cout << "Enter a key to search: ";
    cin >> key;
    int arr2[4] = {2, 3, 5, 8};
    int result = searchElement(arr, 8, key);
    if (result != -1)
    {
        cout << "Element " << key << " found at index " << result << endl;
    }
    else
    {
        cout << "Element " << key << " not found in array" << endl;
    }
    return 0;
}