#include <iostream>
using namespace std;

// Object

class Book
{
private:
    string rating;

public:
    string title;
    string author;
    int pages;
    Book(string aTitle, string aAuthor, int aPages, string aRating)
    {
        title = aTitle;
        author = aAuthor;
        pages = aPages;
        setRating(aRating);
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
    void setRating(string aRating)
    {
        if (aRating == "G" || aRating == "PG" || aRating == "PG-13" || aRating == "R" || aRating == "NR")
        {
            rating = aRating;
        }
        else
        {
            rating = "NR";
        }
    }
    string getRating()
    {
        return rating;
    }
};

int main()
{
    Book book1("Harry Potter", "JK Rowling", 500, "PG-13");

    Book book2("Lords of the Rings", "Tolkien", 700, "G");

    cout << book1.title << endl;
    cout << book1.author << endl;
    cout << book1.pages << endl;
    cout << book2.isCostly() << endl;

    cout << book1.getRating();

    return 0;
}