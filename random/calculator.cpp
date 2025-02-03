#include <iostream>
using namespace std;

int main()
{
    while (1)
    {
        int p, q;
        char opt;
        cout << "Enter the first number : ";
        cin >> p;
        cout << "Enter the second number : ";
        cin >> q;
    choose_opt:
        cout << "Enter the operator [+ , - , * , / , %] : ";
        cin >> opt;

        switch (opt)
        {
        case '+':
            cout << p << " + " << q << " = " << p + q << endl;
            break;

        case '-':
            cout << p << " - " << q << " = " << p - q << endl;
            break;

        case '*':
            cout << p << " * " << q << " = " << p * q << endl;
            break;

        case '/':
            cout << p << " / " << q << " = " << p / q << endl;
            break;

        case '%':
            cout << p << " % " << q << " = " << p % q << endl;
            break;

        default:
            cout << "Please enter a valid operator." << endl;
            goto choose_opt;
        }
        cout << "Thanks for using this Calculator." << endl;
    choose:
        cout << "If you want to restart , press R , If you want to exit , press E : ";

        char choice;
        cin >> choice;

        switch (choice)
        {
        case 'R':
            cout << "Calculator is restarting..." << endl;
            break;

        case 'E':
            cout << "Exiting..." << endl;
            exit(0);

        default:
            cout << "Invalid choice" << endl;
            goto choose;
        }
    }
}