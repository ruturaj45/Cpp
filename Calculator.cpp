#include <iostream>
#include <conio.h>
using namespace std;

int main()
{

    int a, b;
    double c;
    char op;

    cout << "Enter the value of A : ";
    cin >> a;
    cout << "\nEnter the operator ( + , - , * , / , % ) : ";
    cin >> op;
    cout << "\nEnter the value of B : ";
    cin >> b;

    switch (op)
    {
    case '+':
        c = a + b;
        cout << endl
             << a << " + " << b << " = " << c;
        break;

    case '-':
        c = a - b;
        cout << endl
             << a << " - " << b << " = " << c;
        break;

    case '*':
        c = a * b;
        cout << endl
             << a << " * " << b << " = " << c;
        break;

    case '/':
        if (b == 0)
        {
            cout << "\nCannot devide by zero.";
        }
        else
        {
            c = a / b;
            cout << endl
                 << a << " / " << b << " = " << c;
        }
        break;
    case '%':
        c = a % b;
        cout << endl
             << a << " % " << b << " = " << c;
        break;

    default:
        cout << endl
             << "Invalid!!!Wrong operator";
    }
    getch();
    return 0;
}