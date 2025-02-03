#include <iostream>
using namespace std;
int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int even[6] = {4, 6, 8, 10, 32, 56};
    int odd[5] = {2, 5, 8, 10, 44};

    int evenIndex = binarySearch(even, 6, 32);
    cout << "32 found at index " << evenIndex << endl;
    int oddIndex = binarySearch(odd, 5, 2);
    cout << "2 found at index " << oddIndex << endl;

    int notFoundNum = binarySearch(even, 6, 11);
    if (notFoundNum)
    {
        cout << "11 not found" << endl;
    }
    return 0;
}