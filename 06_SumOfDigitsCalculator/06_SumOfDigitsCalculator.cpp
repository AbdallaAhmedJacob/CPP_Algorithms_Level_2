/*
* This program calculates and prints the sum of the digits of a number
* entered by the user. It uses a loop and mathematical operations to
* extract and sum each digit.
*/

#include <iostream>
#include <string>

using namespace std;

// Prompts the user to enter a positive integer and validates the input.
// This function ensures the program receives a valid number.
unsigned ReadPositiveNumber(string Message)
{
    int Number;
    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number < 1);

    return Number;
}

// Calculates the sum of the digits of a number.
// The logic relies on a loop that repeatedly adds the last digit to a sum
// and then removes the last digit until the number becomes zero.
int SumOfDigits(int Number)
{
    int Sum = 0;
    int Remainder;

    while (Number > 0)
    {
        Remainder = Number % 10;
        Sum += Remainder;
        Number = Number / 10;
    }
    return Sum;
}

// Prints the final result to the console.
void PrintResult(string Message, int Number)
{
    cout << Message << Number << endl;
}

int main()
{
    int Sum = SumOfDigits(ReadPositiveNumber("Please enter a positive number:"));
    PrintResult("\nSum of Digits = ", Sum);
    return 0;
}