/*
* This program generates a specified number of unique keys, where each key
* consists of four groups of four random capital letters, separated by hyphens.
*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;


int ReadPositiveNumber(string Message)
{
    int Number = 0;
    do
    {
        cout << Message;
        cin >> Number;
    } while (Number < 1);
    return Number;
}

int RandomNumber(int From, int To)
{
    if (From > To)
        return 0;

    int randNumber = rand() % (To - From + 1) + From;
    return randNumber;
}

enum enDataType { SmallLetter = 1, CapitalLetter = 2, SpecialCharacter = 3, Digit = 4 };

char GetRandomCharacter(enDataType CharType)
{
    switch (CharType)
    {
    case enDataType::SmallLetter:
        return char(RandomNumber(97, 122));
    case enDataType::CapitalLetter:
        return char(RandomNumber(65, 90));
    case enDataType::SpecialCharacter:
        return char(RandomNumber(33, 47));
    case enDataType::Digit:
        return char(RandomNumber(48, 57));
    }
    return '\0';
}

string GetRandomWord(int WordLength)
{
    string KeyWord = "";

    for (int i = 1; i <= WordLength; i++)
    {
        KeyWord += GetRandomCharacter(enDataType::CapitalLetter);
    }
    return KeyWord;
}

void PrintKeyWord(int NumberOfKeys)
{
    cout << "\nGenerating " << NumberOfKeys << " keys:\n\n";

    for (int i = 1; i <= NumberOfKeys; i++)
    {
        cout << "Key [" << i << "]: ";
        for (int j = 1; j <= 4; j++)
        {
            cout << GetRandomWord(4);
            if (j < 4)
                cout << "-";
        }
        cout << endl;
    }
}

int main()
{
    srand((unsigned)time(NULL));

    PrintKeyWord(ReadPositiveNumber("How many keys do you want to generate?\n"));

    return 0;
}