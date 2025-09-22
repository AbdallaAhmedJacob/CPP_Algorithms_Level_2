/*
* This program generates a specified number of keys. Each key is a string composed
* of four groups of four random capital letters, separated by hyphens.
* It's a great example of building a complex feature from smaller, reusable functions.
*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

// Defines the types of characters that can be generated.
enum enCharType { SmallLetter = 1, CapitalLetter = 2, SpecialCharacter = 3, Digit = 4 };

// Generates a random number within a specified range [From, To].
int RandomNumber(int From, int To)
{
    return rand() % (To - From + 1) + From;
}

// Returns a random character based on the specified character type.
char GetRandomCharacter(enCharType CharType)
{
    switch (CharType)
    {
    case enCharType::SmallLetter:
        return char(RandomNumber(97, 122));
    case enCharType::CapitalLetter:
        return char(RandomNumber(65, 90));
    case enCharType::SpecialCharacter:
        return char(RandomNumber(33, 47));
    case enCharType::Digit:
        return char(RandomNumber(48, 57));
    }
    return '\0';
}

// Prompts the user to enter a positive number and validates the input.
int ReadPositiveNumber(string Message)
{
    int Number = 0;
    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}

// Generates a random word of a specified length and character type.
string GenerateWord(enCharType CharType, short Length)
{
    string Word;
    for (int i = 1; i <= Length; i++)
    {
        Word = Word + GetRandomCharacter(CharType);
    }
    return Word;
}

// Generates a complete key in the format XXXX-XXXX-XXXX-XXXX.
string GenerateKey()
{
    string Key = "";
    Key = GenerateWord(enCharType::CapitalLetter, 4) + "-";
    Key = Key + GenerateWord(enCharType::CapitalLetter, 4) + "-";
    Key = Key + GenerateWord(enCharType::CapitalLetter, 4) + "-";
    Key = Key + GenerateWord(enCharType::CapitalLetter, 4);
    return Key;
}

// Prints a specified number of generated keys to the console.
void GenerateKeys(short NumberOfKeys)
{
    cout << "\nGenerating " << NumberOfKeys << " keys:\n\n";
    for (int i = 1; i <= NumberOfKeys; i++)
    {
        cout << "Key [" << i << "] : ";
        cout << GenerateKey() << endl;
    }
}

int main()
{
    srand((unsigned)time(NULL));
    GenerateKeys(ReadPositiveNumber("Please enter how many keys to generate?"));
    return 0;
}