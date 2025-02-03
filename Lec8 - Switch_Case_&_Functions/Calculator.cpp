#include <iostream>
using namespace std;
int main()
{
    int a, b;
    char op;
    int choice;
    while (1)
    {
        cout << "Enter number a: " << endl;
        cin >> a;
        cout << "Enter number b:" << endl;
        cin >> b;
        cout << "Enter operation to be performed(+,-,*,/,%): ";
        cin >> op;
        if (op != '+' && op != '-' && op != '*' && op != '/' && op != '%')
        {
            cout << "Invalid operation, please enter a valid operator." << endl;
            continue;
        }
        switch (op)
        {
        case '+':
            cout << a << " + " << b << " = " << a + b << endl;
            break;
        case '-':
            cout << a << " - " << b << " = " << a - b << endl;
            break;
        case '*':
            cout << a << " * " << b << " = " << a * b << endl;
            break;
        case '/':
            cout << a << " / " << b << " = " << a / b << endl;
            break;
        case '%':
            cout << a << " % " << b << " = " << a % b << endl;
            break;

        default:
            break;
        }
    choice:
        cout << "Press 1 to enter numbers again or press 0 to end the calculatios: ";
        cin >> choice;
        switch ((int)choice)
        {
        case 1:
            break;
        case 0:
            cout << "Thank You";
            exit(0);
        default:
            cout << "Invalid choice, please enter 1 or 0" << endl;
            goto choice;
        }
    }
    return 0;
}