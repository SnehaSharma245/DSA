#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int findMax(vector<int> &arr)
{
    int max = *max_element(arr.begin(), arr.end());
    return max;
}
bool isPossible(vector<int> arr, int n, int m, int mid)
{
    int studentCount = 1;
    int pageSum = 0;
    for (int i = 0; i < n; i++)
    {
        if (pageSum + arr[i] <= mid)
        {
            pageSum += arr[i];
        }
        else
        {
            studentCount++;
            if (studentCount > m || arr[i] > mid)
            {
                return false;
            }
        }
    }
    return true;
}
int findPages(vector<int> &arr, int n, int m)
{
    int max = findMax(arr);
    int start = max;
    int size = arr.size();
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    int end = sum;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (isPossible(arr, n, m, mid))
        {
            end = mid - 1;
            ans = mid;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int main()
{
    vector<int> arr = {25, 46, 28, 49, 24};
    cout << findMax(arr);
    cout << endl;
    // cout << arr.size();
    cout << findPages(arr, 5, 4);
    return 0;
}