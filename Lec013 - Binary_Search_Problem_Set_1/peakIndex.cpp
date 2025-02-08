#include <iostream>
using namespace std;
int peakIndex(int arr[], int size)
{
    int start = 0, end = size - 1;
    int mid = start + (end - start) / 2;

    while (start < end)
    {
        if (arr[mid] < arr[mid + 1])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    return arr[mid];
}
int main()
{
    int arr[10] = {0, 1, 2, 3, 4, 3, 2, 1, 0, 0};
    int peakElement = peakIndex(arr, 10);
    cout << peakElement << endl;
    return 0;
}