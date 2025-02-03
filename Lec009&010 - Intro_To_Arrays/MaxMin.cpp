#include <iostream>
using namespace std;
int getMax(int arr[], int size)
{
    int maximum = INT8_MIN;
    for (int i = 0; i < size; i++)
    {
        maximum = max(maximum, arr[i]);
    }
    return maximum;
}
int getMin(int arr[], int size)
{
    int minimum = INT8_MAX;
    for (int i = 0; i < size; i++)
    {
        minimum = min(minimum, arr[i]);
    }
    return minimum;
}
int main()
{
    int size;
    cout << "Enter the number of elements: ";
    cin >> size;
    int arr[100];
    cout << "Enter the elements: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Maximum value is " << getMax(arr, size) << endl;
    cout << "Minimum value is " << getMin(arr, size) << endl;
    return 0;
}