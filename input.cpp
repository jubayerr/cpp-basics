#include <iostream>
using namespace std;
// Getting User Input
int main()
{
    // declare variable
    string name;
    int age;
    // get user input
    cout << "Enter your name: ";
    getline(cin, name);
    // get user input
    cout << "Enter your age: ";
    cin >> age;
    // print output
    cout << "Hello, " << name << "." << endl;
    cout << "You are " << age << " years old." << endl;

    return 0;
}