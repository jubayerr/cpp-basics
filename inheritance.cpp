#include <iostream>
#include <string>
using namespace std;

// Base class
class Book
{
public:
    string title = "Lords of the Rings";
    void price()
    {
        cout << "120 \n";
    }
};

// Derived class
class OldBook : public Book
{
public:
    string title = "Harry Potter.";
};

int main()
{
    OldBook myBook;

    cout << myBook.title << endl;
    myBook.price();
    return 0;
}
