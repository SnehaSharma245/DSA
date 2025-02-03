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
    int arr[6] = {0, 1, 3, 2, 2, 1};
    int peakElement = peakIndex(arr, 6);
    cout << peakElement << endl;
    return 0;
}