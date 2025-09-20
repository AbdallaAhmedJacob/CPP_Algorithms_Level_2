/*
* This program checks if a number entered by the user is a palindrome number.
* A palindrome number reads the same forwards and backward.
* The program uses a helper function to reverse the number for comparison.
*/

#include <iostream>
#include <string>

using namespace std;

// Prompts the user to enter a positive integer and validates the input.
// This ensures the program receives a valid number for processing.
int ReadPositiveNumber(string Message)
{
    int Number = 0;
    do
    {
        cout << Message << "\n";
        cin >> Number;
    } while (Number < 1);

    return Number;
}

// Reverses a number by extracting its digits and building a new number.
// This is a helper function used for checking if the number is a palindrome.
int ReverseNumber(int Number)
{
    int Remainder = 0;
    int ReversedNumber = 0;

    while (Number > 0)
    {
        Remainder = Number % 10;
        Number /= 10;
        ReversedNumber = ReversedNumber * 10 + Remainder;
    }
    return ReversedNumber;
}

// Checks if a number is a palindrome by comparing it to its reversed version.
bool IsPalindromeNumber(int Number)
{
    // The core logic is to compare the original number with its reversed counterpart.
    return Number == ReverseNumber(Number);
}

// Prints the final result to the console, indicating if the number is a palindrome.
void PrintResult(int Number)
{
    if (IsPalindromeNumber(Number))
        cout << "Yes, it's a palindrome number." << endl;
    else
        cout << "No, it's not a palindrome number." << endl;
}

int main()
{
    int Number = ReadPositiveNumber("Please enter a positive number: ");
    PrintResult(Number);
    return 0;
}