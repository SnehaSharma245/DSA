// this is approach 2 for finding pivot element using normal graph
// the graph is divided into two parts upper and lower
// upper one has higher elements and lower one has lower elements
// the start element of upper graph will be more than all the elements of lower graph
// if it is lesser than or equal to any element, then it means that mid lies on upper graph as lower graph has lower elements so it will be more than them
//  so to move nearer to pivot, we move start to mid+1
// if any number is lesser than arr[0], it means it lies on lower graph
#include <iostream>
using namespace std;
int pivotElement(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    while (start < end)
    {
        if (arr[mid] >= arr[0])
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
    int arr[8] = {4, 5, 6, 7, 0, 1, 2, 3};
    int pivotElementNum = pivotElement(arr, 8);
    cout << "Pivot element in the given array is " << pivotElementNum << endl;
    return 0;
}