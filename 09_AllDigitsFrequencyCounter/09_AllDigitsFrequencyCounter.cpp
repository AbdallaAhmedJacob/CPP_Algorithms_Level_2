/*
* This program counts the frequency of each digit (0-9) within a positive integer.
* It iterates through each digit and calls a helper function to count its occurrences in the number.
*/

#include <iostream>
#include <string>

using namespace std;

// Prompts the user for a positive number and validates the input.
// This function ensures a valid number is provided for the main program logic.
int ReadPositiveNumber(string Message)
{
    int Number = 0;
    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);

    return Number;
}

// Counts the frequency of a specific digit within a given number.
// The function uses a loop to extract each digit and compare it.
int CountDigitFrequency(short DigitToCheck, int Number)
{
    int Freq = 0;
    int Remainder = 0;

    // Use a copy of the number to avoid modifying the original argument.
    int TempNumber = Number;

    while (TempNumber > 0)
    {
        Remainder = TempNumber % 10;
        TempNumber = TempNumber / 10;

        if (DigitToCheck == Remainder)
        {
            Freq++;
        }
    }
    return Freq;
}

// Prints the frequency of all digits (0-9) that appear in the number.
// It uses a loop and calls CountDigitFrequency for each digit.
void PrintAllDigitsFrequency(int Number)
{
    cout << "\nAll digits frequency for number " << Number << " are:\n";

    for (int i = 0; i < 10; i++)
    {
        short DigitFrequency = CountDigitFrequency(i, Number);

        if (DigitFrequency > 0)
        {
            cout << "Digit " << i << " Frequency is "
                << DigitFrequency << " Time(s).\n";
        }
    }
}

int main()
{
    int Number = ReadPositiveNumber("Please enter a positive number:");
    PrintAllDigitsFrequency(Number);
    return 0;
}