/*
* This program reads a positive integer from the user and prints its digits
* from left to right. It first reverses the number and then prints the digits
* of the reversed number one by one.
*/

#include <iostream>
#include <string>

using namespace std;

// Prompts the user to enter a positive integer and validates the input.
// This function ensures the program receives a valid number.
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
// This is a helper function used to prepare the number for printing.
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

// Prints the digits of a number one by one from left to right.
// This function relies on the ReverseNumber function to get the correct order.
void PrintDigits(int Number)
{
	int Remainder = 0;

	cout << "The digits are:\n";
	while (Number > 0)
	{
		Remainder = Number % 10;
		Number /= 10;
		cout << Remainder << endl;
	}
}

int main()
{
	// The program calls functions in a sequence to read, reverse, and then print the digits.
	PrintDigits(ReverseNumber(ReadPositiveNumber("Please enter a positive number: ")));
	return 0;
}