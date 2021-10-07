#include <iostream>
using namespace std;

int main()
{
    // declare a variable which is contain a string
    string domainName = "JubayerWeb";
    // get string length
    cout << domainName.length() << endl;
    // print every character of a string by loop
    for (int i = 0; i <= domainName.length(); i++)
    {
        cout << domainName[i] << endl;
    }
    // replace a character
    domainName[0] = 'Z';
    cout << domainName << endl;
    // find a characther
    cout << domainName.find("Web", 0) << endl;
    // substring (take character)
    cout << domainName.substr(7, 3) << endl;
    return 0;
}