#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {1, 2, 3, 4, 3}; // elements till n-1 and one element is repeated twice, we have to find that duplicate element
    int ans = 0;

    // we take xor of all the numbers in array, duplicate one will result in 0, this means , there will be no output of duplicate element in ans
    for (int i = 0; i < 5; i++)
    {
        ans = ans ^ arr[i];
    }

    // now since all the unique elements are there and no existence of duplicate one, xor them with the numbers from 1 to n-1 will cancel each unique element and will result in the duplicate one
    for (int i = 1; i < 5; i++)
    {
        ans = ans ^ i;
    }
    cout << "Duplicate element is " << ans << endl;
    return 0;
}