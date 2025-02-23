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
    //start by allocating a book to student 1
    int studentCount = 1;
    int pageSum = 0;
    for (int i = 0; i < n; i++)
    {
        // if by adding the next book's pages, the number of pages gets increased by more than the expected result's value, move to next student and start allocating the books from that part only to next student
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
            pageSum = arr[i];
        }
    }
    return true;
}
int findPages(vector<int> &arr, int n, int m)
{

    // it uses the concept of minimizing the search space
    //start hoga max value in array kyuki ek student aisa hoga hi jiske paas vo book aayegi jisme max pages honge, to min no. of max pages mein min value us max paged book ki hogi
    //aur max value ja sakti hai sabhi books ke pages ka sum

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
        //if ths solution is possible , then it can be possible that there is a solution below that possible answer, above all will be an answer but they will have max value more than this
        if (isPossible(arr, n, m, mid))
        {
            end = mid - 1;
            ans = mid;
        }
        //if the books are remaining after allocating to each and every student, this means that we have to increase the value of mid representing the min number of max pages allocated to each student

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