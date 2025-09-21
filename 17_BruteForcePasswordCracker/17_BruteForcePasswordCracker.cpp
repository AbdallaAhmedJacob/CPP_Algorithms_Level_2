/*
* This program demonstrates a simple brute-force attack by trying all possible 3-letter
* combinations to find a user-provided password.
* It's for educational purposes to show how weak passwords can be easily cracked.
*/

#include <iostream>
#include <string>

using namespace std;

string ReadPassword(string Message)
{
	string Password;
	cout << Message << "\n";
	getline(cin, Password);
	return Password;
}

int CalculateTrials(string Password)
{
	string Attempt = "";
	int TrialCount = 0;

	for (int i = 65; i <= 90; i++)
	{
		for (int j = 65; j <= 90; j++)
		{
			for (int k = 65; k <= 90; k++)
			{
				Attempt = char(i);
				Attempt += char(j);
				Attempt += char(k);

				TrialCount++;

				cout << "Trial [" << TrialCount << "] : " << Attempt << endl;

				if (Attempt == Password)
				{
					return TrialCount;
				}
			}
		}
	}
	return 0;
}

int main()
{
	string UserPassword = ReadPassword("Please enter a 3-Letter Password (all capital letters)?");

	int Trials = CalculateTrials(UserPassword);

	if (Trials > 0)
	{
		cout << "\n============================================\n";
		cout << "Password found after " << Trials << " trial(s)." << endl;
		cout << "============================================\n";
	}
	else
	{
		cout << "The password could not be found with this tool." << endl;
	}

	return 0;
}