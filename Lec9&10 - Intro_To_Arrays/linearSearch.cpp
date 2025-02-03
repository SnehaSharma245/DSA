#include <iostream>
using namespace std;
bool linearSearch(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int arr[5] = {2, 5, 8, -23, 33};
    int num;
    cout << "Enter the number to search: ";
    cin >> num;
    bool ans = linearSearch(arr, 5, num);
    if (ans)
    {
        cout << "Number found in the array" << endl;
    }
    else
    {
        cout << "Number not found in the array" << endl;
    }

    return 0;
}