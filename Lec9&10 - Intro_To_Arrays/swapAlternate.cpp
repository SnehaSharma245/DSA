#include <iostream>
using namespace std;
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i += 2)
    {
        int temp;
        temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
    }
    printArray(arr, 5);
    return 0;
}