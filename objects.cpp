#include <iostream>
using namespace std;

// Object

class Book
{
public:
    string title;
    string author;
    int pages;
    Book(string aTitle, string aAuthor, int aPages)
    {
        title = aTitle;
        author = aAuthor;
        pages = aPages;
    }
    bool isCostly()
    {
        if (pages >= 600)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    Book book1("Harry Potter", "JK Rowling", 500);

    Book book2("Lords of the Rings", "Tolkien", 700);

    cout << book1.title << endl;
    cout << book1.author << endl;
    cout << book1.pages << endl;
    cout << book2.isCostly() << endl;

    return 0;
}