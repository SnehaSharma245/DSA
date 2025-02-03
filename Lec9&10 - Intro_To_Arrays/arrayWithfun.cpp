#include <iostream>
using namespace std;
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] *= 2;
    }
}
int main()
{
    int a[4] = {2, 4, 6, 8};
    printArray(a, 4); // arrays are passed as reference , so the changes are reflected in the original array
    for (int i = 0; i < 4; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}