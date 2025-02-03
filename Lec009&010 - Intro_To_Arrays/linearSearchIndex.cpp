#include <iostream>
using namespace std;
int linearSearch(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[5] = {2, 5, 8, -23, 33};
    int num;
    cout << "Enter the number to search: ";
    cin >> num;
    int ans = linearSearch(arr, 5, num);
    if (ans == -1)
    {
        cout << "Number not found in the array" << endl;
    }
    else
    {
        cout << "Number found in the array at index " << ans << endl;
    }

    return 0;
}