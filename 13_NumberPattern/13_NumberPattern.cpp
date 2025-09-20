/*
* This program prints a pattern of numbers in a pyramid shape.
* It uses nested loops where the outer loop controls the rows
* and the inner loop prints the numbers for each row.
*/

#include <iostream>
#include <string>

using namespace std;

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

void PrintNumberPattern(int Number)
{
	for (int i = 1; i <= Number; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << i;
		}
		cout << endl;
	}
}

int main()
{
	PrintNumberPattern(ReadPositiveNumber("Please enter a positive number?"));
	return 0;
}