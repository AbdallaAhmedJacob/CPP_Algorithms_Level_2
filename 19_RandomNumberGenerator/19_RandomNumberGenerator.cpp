/*
* This program generates and prints random numbers within a user-defined range.
* It demonstrates the use of the `rand()` and `srand()` functions for number generation.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Generates a random number within a specified range [From, To].
// Returns 0 if the 'From' value is greater than the 'To' value.
int RandomNumber(int From, int To)
{
    if (From > To)
    {
        return 0;
    }

    // The core formula for generating a random number in a range.
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

int main()
{
    // Initializes the random number generator using the current time as a seed.
    // This should be called only once at the beginning of the program.
    srand((unsigned)time(NULL));

    cout << "Random numbers in different ranges:\n";
    cout << "Range [5, 10]    : " << RandomNumber(5, 10) << endl;
    cout << "Range [1, 100]   : " << RandomNumber(1, 100) << endl;
    cout << "Range [1, 1000]  : " << RandomNumber(1, 1000) << endl;
    cout << "Range [10k, 1B]  : " << RandomNumber(10000, 1000000000) << endl;

    return 0;
}