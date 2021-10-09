#include <iostream>
using namespace std;
// 2D Arrays and Nested for loop
int main()
{
    // 2 dimensional array
    int numberGrid[3][2] = {
        {2, 4},
        {3, 5},
        {4, 6},
    };
    //  Nested for loop
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << numberGrid[i][j];
        }
        cout << endl;
    }

    return 0;
}