/*
* This program generates and prints a multiplication table from 1 to 10.
* It demonstrates the use of nested loops and functions to format the output.
*/

#include <iostream>
#include <string>

using namespace std;

// Prints the header and top border of the multiplication table.
// This function is responsible for the table's visual structure.
void PrintTableHeader()
{
	cout << "\n \n \t \t \t     Multiplication Table From 1 to 10\n\n";

	cout << "\t";
	for (short i = 1; i <= 10; i++)
	{
		cout << i << "\t";
	}
	cout << endl;
	cout << endl;

	for (short i = 1; i <= 22; i++)
	{
		cout << "____";
	}
	cout << endl;
	cout << endl;
}

// Generates a column separator based on the number's width.
// This is used for consistent formatting.
string ColumSeparator(int i)
{
	if (i < 10)
		return "    |";
	else
		return "   |";
}

// Prints the multiplication table's body using nested loops.
// The outer loop iterates through rows, and the inner loop iterates through columns.
void PrintMultiplicationTable()
{
	PrintTableHeader();

	for (short i = 1; i <= 10; i++)
	{
		cout << " " << i << ColumSeparator(i) << "\t";

		for (short j = 1; j <= 10; j++)
		{
			cout << i * j << "\t";
		}
		cout << endl;
	}
}

int main()
{
	PrintMultiplicationTable();
	return 0;
}