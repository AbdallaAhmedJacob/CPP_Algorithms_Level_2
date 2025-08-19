/*
* This program prints all perfect numbers from 1 up to a user-specified number (N).
* It includes a function to check if a number is perfect and a loop to print the results.
*/

#include <iostream>
#include <string>

using namespace std;

// Prompts the user to enter a positive integer and validates the input.
// This function ensures the program works with a valid number.
unsigned ReadPositiveNumber(string Message)
{
    int Number = 0;
    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number < 1);

    return Number;
}

// Checks if a given number is a perfect number by summing its proper divisors.
// The loop iterates from half the number down to 1 for efficiency.
bool IsPerfectNumber(unsigned Number)
{
    unsigned Sum = 0;

    for (unsigned Counter = (Number / 2); Counter >= 1; Counter--)
    {
        if (Number % Counter == 0)
        {
            Sum += Counter;
        }
    }

    return (Number == Sum);
}

// Iterates from 1 up to a given number and prints all perfect numbers found.
// This function combines the input, perfect number check, and output logic.
void PrintResult(int Number)
{
    cout << "\nPerfect Numbers up to " << Number << " are:\n";
    for (int i = 1; i <= Number; i++)
    {
        if (IsPerfectNumber(i))
        {
            cout << i << endl;
        }
    }
}

int main()
{
    unsigned Number = ReadPositiveNumber("Please enter a positive number:");
    PrintResult(Number);
    return 0;
}