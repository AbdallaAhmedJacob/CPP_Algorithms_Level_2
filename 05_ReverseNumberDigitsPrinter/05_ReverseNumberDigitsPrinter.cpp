/*
* This program reads a positive integer from the user and prints its digits
* in reverse order. It demonstrates how to extract digits from a number
* using a while loop and the modulo operator.
*/

#include <iostream>
#include <string>

using namespace std;

// Prompts the user to enter a positive integer and validates the input.
// This ensures that the program receives a valid number.
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

// Prints the digits of a number in reverse order.
// The logic relies on a loop that repeatedly gets the last digit
// using the modulo operator (%) and then removes it using integer division (/).
void PrintDigits(int Number)
{
    int Remainder;

    cout << "The digits in reverse order are:\n";
    while (Number > 0)
    {
        Remainder = Number % 10;
        cout << Remainder << endl;
        Number = Number / 10;
    }
}

int main()
{
    PrintDigits(ReadPositiveNumber("Please enter a positive number:"));
    return 0;
}