#include <iostream>
using namespace std;
int getSum(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}
int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int arr[100];
    cout << "Enter array elements: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "The sum of elements in the entered array is : " << getSum(arr, size) << endl;
    return 0;
}