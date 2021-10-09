#include <iostream>
using namespace std;

int main()
{
    string name = "Jubayer";
    string *pName = &name;
    int age = 24;
    int *pAge = &age;
    double gpa = 3.75;
    double *pGpa = &gpa;

    cout << "Name: " << pName << endl;
    cout << "Name: " << *pName << endl;
    cout << "Age: " << pAge << endl;
    cout << "Age: " << *pAge << endl;
    cout << "Gpa: " << pGpa << endl;
    cout << "Gpa: " << *pGpa << endl;

    return 0;
}