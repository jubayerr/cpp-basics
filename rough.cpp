#include <iostream>

using namespace std;

// sum of two numbers

int main()
{
    int firstNum, secondNum, result;

    // user input first number
    cout << "Enter first number: " << endl;
    cin >> firstNum;
    // user input second number
    cout << "Enter second number: " << endl;
    cin >> secondNum;
    // logic
    result = firstNum + secondNum;
    // output
    cout << "Sum of two number is " << result << endl;

    return 0;
}