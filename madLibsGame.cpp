#include <iostream>
using namespace std;

int main()
{
    // declare variables
    string color, pluralNoun, celebrity;
    //  get user input
    cout << "Enter a color name: ";
    getline(cin, color);
    //  get user input
    cout << "Enter a plural noun: ";
    getline(cin, pluralNoun);
    //  get user input
    cout << "Enter a celebrity name: ";
    getline(cin, celebrity);
    // output the story
    cout << "\nRoses are " << color << endl;
    cout << pluralNoun << " are blue" << endl;
    cout << "I love " << celebrity << endl;

    return 0;
}