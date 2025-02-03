#include <iostream>
using namespace std;
int firstOcc(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }
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
    return ans;
}
int lastOcc(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }
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
    return ans;
}
int totalOcc(int firstOcc, int lastOcc)
{
    return lastOcc - firstOcc + 1;
}
int main()
{
    int even[8] = {0, 0, 1, 1, 1, 4, 5, 5};
    int odd[9] = {0, 0, 1, 1, 1, 4, 5, 5, 5};
    int evenFirstOcc = firstOcc(even, 8, 1);
    int oddFirstOcc = firstOcc(odd, 9, 5);
    cout << "Even First Occurrence of 1 is " << evenFirstOcc << endl;
    cout << "Odd First Occurrence of 5 id " << oddFirstOcc << endl;
    int evenLastOcc = lastOcc(even, 8, 1);
    int oddLastOcc = lastOcc(odd, 9, 5);
    cout << "Even Last Occurrence of 1 is " << evenLastOcc << endl;
    cout << "Odd Last Occurrence of 5 is " << oddLastOcc << endl;
    ;
    cout << "Even Total Occurrence of 1 is " << totalOcc(evenFirstOcc, evenLastOcc) << endl;
    cout << "Odd Total Occurrence of 5 is " << totalOcc(oddFirstOcc, oddLastOcc) << endl;

    return 0;
}