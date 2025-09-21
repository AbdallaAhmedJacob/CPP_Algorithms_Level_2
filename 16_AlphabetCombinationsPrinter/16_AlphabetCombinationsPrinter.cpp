/*
* This program prints all possible 3-letter combinations from 'AAA' to 'ZZZ'.
* It uses three nested loops to iterate through each letter of the alphabet.
*/

#include <iostream>
#include <string>

using namespace std;

// This function prints all 3-letter combinations from 'AAA' to 'ZZZ'.
void PrintAllWordsAAAToZZZ()
{
	string Word = "";

	for (int i = 65; i <= 90; i++)
	{
		for (int j = 65; j <= 90; j++)
		{
			for (int k = 65; k <= 90; k++)
			{
				Word = ""; // It's better to clear the string at the beginning of the inner loop
				Word += char(i);
				Word += char(j);
				Word += char(k);

				cout << Word << endl;
			}
		}
	}
}

int main()
{
	PrintAllWordsAAAToZZZ();
	return 0;
}