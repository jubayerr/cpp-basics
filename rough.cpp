#include <iostream>

using namespace std;

// calculator

int main()
{
    int firstNum, secondNum;
    string op;

    // user input first number
    cout << "Enter first number: " << endl;
    cin >> firstNum;
    // user input operator
    cout << "Enter operator: " << endl;
    cin >> op;
    // user input second number
    cout << "Enter second number: " << endl;
    cin >> secondNum;
    // logic
    int result;

    if (op == "+")
    {
        result = firstNum + secondNum;
    }
    else if (op == "-")
    {
        result = firstNum - secondNum;
    }
    else if (op == "*")
    {
        result = firstNum * secondNum;
    }
    else if (op == "/")
    {
        result = firstNum / secondNum;
    }
    else
    {
        cout << "Invalid operator!";
    }

    // output
    cout << "Result is " << result << endl;

    return 0;
}