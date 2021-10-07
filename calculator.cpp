#include <iostream>
using namespace std;
// build a better calculator
int main()
{
    // declare variable
    int num1, num2;
    char op;
    int result;
    // get user input
    cout << "Enter first number: ";
    cin >> num1;
    // get user input
    cout << "Enter any operator: ";
    cin >> op;
    // get user input
    cout << "Enter second number: ";
    cin >> num2;
    // logic
    if (op == '+')
    {
        result = num1 + num2;
    }
    else if (op == '-')
    {
        result = num1 - num2;
    }
    else if (op == '*')
    {
        result = num1 * num2;
    }
    else if (op == '/')
    {
        result = num1 / num2;
    }
    else
    {
        cout << "Invalid Operator!" << endl;
    }

    // output
    cout << result;

    return 0;
}