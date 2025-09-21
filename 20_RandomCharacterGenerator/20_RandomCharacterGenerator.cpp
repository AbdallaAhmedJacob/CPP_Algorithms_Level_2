/*
* This program generates and prints random characters based on a specified type.
* It utilizes an enum to define character types (lowercase, uppercase, special, or digit)
* and a switch statement to handle the generation logic for each type.
*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

// Generates a random number within a specified range [From, To].
int RandomNumber(int From, int To)
{
    if (From > To)
    {
        return 0;
    }

    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

// Defines the types of characters that can be generated.
enum enDataType { SmallLetter = 1, CapitalLetter = 2, SpecialCharacter = 3, Digit = 4 };

// Returns a random character based on the specified character type.
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
    return '\0'; // Return null character if no case is matched.
}

int main()
{
    srand((unsigned)time(NULL));

    cout << "Random small letter: " << GetRandomCharacter(enDataType::SmallLetter) << endl;
    cout << "Random capital letter: " << GetRandomCharacter(enDataType::CapitalLetter) << endl;
    cout << "Random special character: " << GetRandomCharacter(enDataType::SpecialCharacter) << endl;
    cout << "Random digit: " << GetRandomCharacter(enDataType::Digit) << endl;

    return 0;
}