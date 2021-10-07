#include <iostream>
using namespace std;

int main()
{
    bool isMale = true;
    bool isStudent = true;

    if (isMale && isStudent)
    {
        cout << "You are Welcome!" << endl;
    }
    else if (isMale && !isStudent)
    {
        cout << "You are in the waiting list!" << endl;
    }
    else if (!isMale && isStudent)
    {
        cout << "We will consider this." << endl;
    }
    else
    {
        cout << "Sorry! You are not welcome!." << endl;
    }

    return 0;
}