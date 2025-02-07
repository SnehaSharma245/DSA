#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {1, 1, 3, 4, 3};
    int ans = 0;
    // a xor a = 0
    // duplicate elements will cancel each other resulting in unique one
    for (int i = 0; i < 5; i++)
    {
        ans = ans ^ arr[i];
    }
    cout << ans;
    return 0;
}