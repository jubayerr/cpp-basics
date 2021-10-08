#include <iostream>
using namespace std;
// Guessing Game
int main()
{
    // declare variables
    int secretNum = 7;
    int guess;
    int guessCount = 0;
    int guessLimit = 3;
    bool outOfGuess = false;
    // logic
    while (secretNum != guess && !outOfGuess)
    {
        if (guessCount < guessLimit)
        {
            // get user input
            cout << "Guess a number: " << endl;
            cin >> guess;
            guessCount++;
        }
        else
        {
            outOfGuess = true;
        }
    }
    // output
    if (outOfGuess)
    {
        cout << "You Lose!" << endl;
    }
    else
    {
        cout << "You Win!" << endl;
    }

    return 0;
}