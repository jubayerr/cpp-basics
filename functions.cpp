#include <iostream>
using namespace std;

// declare function
void sayHi(string name, int age);

// main function
int main()
{
    // declare variables
    string name;
    int age;
    // get user input
    cout << "Enter your name: ";
    getline(cin, name);
    // get user input
    cout << "Enter your age: ";
    cin >> age;
    // calling a function
    sayHi(name, age);

    return 0;
}

// define the function
void sayHi(string name, int age)
{
    // output
    cout << "\nHello " << name << ". you are " << age << " years old." << endl;
}