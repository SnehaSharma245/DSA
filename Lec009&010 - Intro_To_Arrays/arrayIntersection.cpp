#include <iostream>
using namespace std;
int main()
{
    int arr1[5] = {2, 3, 4, 5, 6};
    int arr2[5] = {1, 28, 9, 20, 53};
    int flag = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (arr1[i] == arr2[j])
            {
                cout << arr1[i] << " ";
                flag = 1;
            }
        }
    }
    if (flag == 0)
    {
        cout << "Intersection of both the arrays results in an empty array." << endl;
    }
    return 0;
}