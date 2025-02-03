#include <iostream>
using namespace std;
// calculate a^b = a*a*a*a*....till b times
int power(int a, int b)
{
    int answer = 1;

    for (int i = 1; i <= b; i++)
    {
        if (answer > INT32_MAX / a)
        {
            cout << "Answer value exceeded the range";
            return 0;
        }
        answer = answer * a;
    }
    return answer;
}
int main()
{
    int a, b;
    cout << "Enter the value of a and b: ";
    cin >> a >> b;
    int pow = power(a, b);
    cout << "The value of " << a << "^" << b << " is " << pow;
    return 0;
}