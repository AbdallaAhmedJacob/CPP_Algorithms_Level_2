/*
* This program prints a letter pyramid pattern based on a number from the user.
* It uses nested loops and ASCII conversion to print letters from 'A' to 'Z'.
*/

#include <iostream>
#include <string>

using namespace std;

// Prompts the user to enter a number within a specified range and validates the input.
int ReadNumberBetween(string Message, int From, int To)
{
	int Number = 0;
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number < From || Number > To);

	return Number;
}

// Prints a pyramid pattern using letters.
// The outer loop controls the rows (from 'A' to the user-specified letter).
// The inner loop prints the corresponding letter for the current row.
void PrintInvertedLetterPattern(int Number)
{
	for (int i = 1; i <= Number; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << char(i + 64);
		}
		cout << endl;
	}
}


int main()
{
	PrintInvertedLetterPattern(ReadNumberBetween("Please enter a number between 1 and 26:", 1, 26));
	return 0;
}