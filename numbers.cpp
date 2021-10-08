#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // basic math
    cout << 5 + 5 << endl;
    cout << 5 - 2 << endl;
    cout << 5 * 5 << endl;
    cout << 5 / 5 << endl;
    cout << 5 % 2 << endl;
    cout << 5 + 5 * 2 << endl;
    cout << (5 + 5) * 2 << endl;
    // shortcut match operator
    int myNum = 10;
    myNum++;
    double dNum = 5.50;
    dNum--;
    // shortcut math operator output
    cout << myNum << endl;
    cout << dNum << endl;
    // shortcut operator
    cout << "shotcut operator" << endl;
    cout << (myNum += 20) << endl;
    cout << (myNum -= 10) << endl;
    cout << (myNum *= 2) << endl;
    cout << (myNum /= 5) << endl;
    // decimal and float number
    cout << "decimal and float number" << endl;
    cout << (10 / 3) << endl;
    cout << (10.0 / 3.0) << endl;

    // math operation
    cout << "math operation" << endl;
    // power
    cout << pow(2, 5) << endl;
    // square root
    cout << sqrt(36) << endl;
    // round a number
    cout << round(3.6) << endl;
    cout << round(3.5) << endl;
    cout << round(3.2) << endl;
    // floor
    cout << floor(4.9) << endl;
    cout << floor(4.5) << endl;
    // return maximum number
    cout << fmax(4, 5) << endl;
    // return minimum number
    cout << fmin(4, 5) << endl;

    return 0;
}