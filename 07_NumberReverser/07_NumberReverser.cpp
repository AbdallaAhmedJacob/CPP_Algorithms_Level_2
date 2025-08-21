/*
* This program reads a positive integer from the user and returns its reverse.
* The logic uses a loop to extract digits and reconstruct the number in reverse order.
*/

#include <iostream>
#include <string>

using namespace std;

// Prompts the user to enter a non-negative integer and validates the input.
// This function ensures the program receives a valid number.
unsigned ReadPositiveNumber(string Message)
{
    int Number;
    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number < 0);

    return Number;
}

// Reverses a number by extracting its digits and building a new number.
// The core logic multiplies the reversed part by 10 and adds the next digit.
int ReverseNumber(int Number)
{
    int Remainder;
    int ReversedNumber = 0;

    while (Number > 0)
    {
        Remainder = Number % 10;
        Number /= 10;

        ReversedNumber = ReversedNumber * 10 + Remainder;
    }
    return ReversedNumber;
}

int main()
{
    cout << "The reversed number is: " << ReverseNumber(ReadPositiveNumber("Please enter a non-negative number:")) << endl;
    return 0;
}