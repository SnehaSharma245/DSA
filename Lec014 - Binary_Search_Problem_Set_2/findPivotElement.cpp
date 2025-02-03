// this code is to find the pivot element by peak element approach, we will first find the peak element and the next one will automatically be the pivot element, ie, the minimum one
#include <iostream>
using namespace std;
int pivotElement(int arr[], int size)
{
    int start = 0, end = size - 1;
    int mid = start + (end - start) / 2;
    while (start < end)
    {
        //`mid` should be updated after modifying `start` or `end` to ensure it reflects the updated search range and avoids premature or incorrect condition checks.
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
    return arr[mid + 1];
}
int main()
{
    // rotated sorted array
    // rotated by 4
    // till 7 in increasing order
    // then in decreasing
    // pivot element in this is 0, which is minimum element.
    // it too forms a mountain array -> first decreasing then increasing
    int array1[8] = {4, 5, 6, 7, 0, 1, 2, 3};
    int pivotElementNumber = pivotElement(array1, 8);
    cout << "pivot element is " << pivotElementNumber << endl;
    return 0;
}