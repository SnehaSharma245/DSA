#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v1 = {1, 2, 3, 3, 4, 5, 6};
    vector<int> v2 = {2, 2, 3, 3};
    int n = v1.size();
    int m = v2.size();
    int i = 0, j = 0;
    vector<int> intersection;
    while (i < n && j < m)
    {
        if (v1[i] < v2[j])
        {
            i++;
        }
        if (v1[i] == v2[j])
        {
            intersection.push_back(v1[i]);
            i++;
            j++;
        }
        if (v1[i] > v2[j])
        {
            j++;
        }
    }
    for (int i = 0; i < intersection.size(); i++)
    {
        cout << intersection[i] << " ";
    }

    return 0;
}