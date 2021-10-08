#include <iostream>
using namespace std;
// build a simple calculator
int main()
{
    // declare variable
    int num1, num2;
    // get user input
    cout << "Enter first number: ";
    cin >> num1;
    // get user input
    cout << "Enter second number: ";
    cin >> num2;
    // logic
    int result = num1 + num2;
    // output
    cout << result;

    return 0;
}