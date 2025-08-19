/*
* This program checks if a number entered by the user is a perfect number.
* A perfect number is a positive integer that is equal to the sum of its proper positive divisors.
*/

#include <iostream>
#include <string>

using namespace std;

// Prompts the user to enter a positive number and validates the input.
// This function ensures the program works with a valid number for calculation.
int ReadPositiveNumber(string Message)
{
    int Number;
    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number < 1);

    return Number;
}

// Checks if the number is a perfect number by summing its proper divisors.
// It iterates from half the number down to 1 for efficiency.
bool IsPerfectNumber(int Number)
{
    int Sum = 0;

    // We only need to check for divisors up to half the number.
    for (int Counter = Number / 2; Counter >= 1; Counter--)
    {
        if (Number % Counter == 0)
        {
            Sum += Counter;
        }
    }

    return (Number == Sum);
}

// Prints the result, indicating whether the number is perfect or not.
void PrintResult(int Number)
{
    if (IsPerfectNumber(Number))
    {
        cout << Number << " is a perfect number." << endl;
    }
    else
    {
        cout << Number << " is not a perfect number." << endl;
    }
}

int main()
{
    int Number = ReadPositiveNumber("Please enter a positive number:");
    PrintResult(Number);
    return 0;
}