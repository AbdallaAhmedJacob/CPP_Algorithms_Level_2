/*
* This program prints all prime numbers from 1 up to a user-specified number (N).
* It includes a function to check if a number is prime and a loop to print the results.
*/

#include <iostream>
#include <string>
#include <cmath> // for sqrt() and round()

using namespace std;

// Prompts the user to enter a positive integer and validates the input.
// This ensures that the program receives a valid number to work with.
int ReadNumber(string Message)
{
    int Number = 0;
    do
    {
        cout << Message << "\n";
        cin >> Number;
    } while (Number < 1);

    return Number;
}

// Checks if a given number is a prime number.
// A prime number is a natural number greater than 1 that is not a product of two smaller natural numbers.
// This function efficiently checks for divisibility to determine primality.
bool IsPrimeNumber(int Number)
{
    if (Number <= 1)
        return false;

    // An optimization: we only need to check for divisors up to the square root of the number.
    for (int i = 2; i <= round(sqrt(Number)); i++)
    {
        if (Number % i == 0)
        {
            return false;
        }
    }

    return true;
}

// Iterates from 1 up to a given number and prints all prime numbers found.
// This function combines the input, primality check, and output logic.
void PrintResult(int Number)
{
    cout << "\nPrime Numbers from 1 to " << Number << " are:\n";
    for (int i = 1; i <= Number; i++)
    {
        if (IsPrimeNumber(i))
            cout << i << "   ";
    }
    cout << endl;
}

int main()
{
    PrintResult(ReadNumber("Please enter a positive number:"));
    return 0;
}