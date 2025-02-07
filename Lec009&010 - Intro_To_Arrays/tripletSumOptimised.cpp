#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// You are given an array/list ARR consisting of N integers. Your task is to find all the distinct triplets present in the array which adds up to a given number K.
//  An array is said to have a triplet {ARR[i], ARR[j], ARR[k]} with sum = 'K' if there exists three indices i, j and k such that i!=j, j!=k and i!=j and ARR[i] + ARR[j] + ARR[k] = 'K'.
vector<vector<int>> tripletSum(vector<int> &arr, int n, int K)
{
    vector<vector<int>> ans;
    // Sorting simplifies the process of finding triplets by allowing us to avoid duplicates and use a structured search.
    sort(arr.begin(), arr.end());
    for (int i = 0; i < n - 2; i++)
    {
        // Skips duplicate elements for the first element to avoid duplicate triplets.
        if (i > 0 && arr[i] == arr[i - 1])
            continue;
        int left = i + 1, right = n - 1;
        while (left < right)
        {
            int sum = arr[i] + arr[left] + arr[right];
            if (sum == K)
            {
                vector<int> temp = {arr[i], arr[left], arr[right]};
                ans.push_back(temp);
                // Skips duplicate values for arr[left] and arr[right] to avoid duplicate triplets.
                // will point to last duplicate element
                while (left < right && arr[left] == arr[left + 1])
                    left++;
                while (left < right && arr[right] == arr[right - 1])
                    right--;
                // shift left and right to the element corresponding next to duplicate
                left++;
                right--;
            }
            else if (sum < K)
            {
                left++;
            }
            else
            {
                right--;
            }
        }
    }
    return ans;
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    int n = arr.size();
    int K = 9;
    vector<vector<int>> ans = tripletSum(arr, n, K);
    cout << "Distinct triplets which add up to " << K << " are: " << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}