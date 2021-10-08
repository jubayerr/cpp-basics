#include <iostream>
using namespace std;
// Arrays
int main()
{
    // declare a variable which is contain elements of an array
    int randomNums[10] = {5, 10, 20, 30, 40, 50};
    // access an element from an array
    cout << randomNums[0] << endl;
    cout << randomNums[1] << endl;
    cout << randomNums[2] << endl;
    cout << randomNums[3] << endl;
    // change an element
    randomNums[1] = 15;
    cout << randomNums[1] << endl;
    // add an element to array
    randomNums[6] = 60;
    cout << randomNums[6] << endl;

    return 0;
}