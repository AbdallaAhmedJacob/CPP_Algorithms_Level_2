/*
* This program reads a user-defined number of elements into an array,
* then counts the frequency of a specific number within that array.
* It's a great example of basic array manipulation and counting.
*/

#include <iostream>
#include <string>

using namespace std;

// Prompts the user to enter a positive number and validates the input.
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

// Reads elements from the user and fills the array.
void ReadArray(int arr[100], int& arrLength)
{
    cout << "\nEnter number of elements: \n";
    cin >> arrLength;
    cout << "\nEnter array elements: \n";
    for (int i = 0; i < arrLength; i++)
    {
        cout << "Element [" << i + 1 << "] : ";
        cin >> arr[i];
    }
    cout << endl;
}

// Prints the elements of an array.
void PrintArray(int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

// Counts how many times a specific number is repeated in an array.
int TimesRepeated(int Number, int arr[100], int arrLength)
{
    int count = 0;
    for (int i = 0; i < arrLength; i++)
    {
        if (Number == arr[i])
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int arr[100];
    int arrLength;
    int NumberToCheck;

    ReadArray(arr, arrLength);

    cout << "\nOriginal array: ";
    PrintArray(arr, arrLength);

    NumberToCheck = ReadPositiveNumber("Please enter number to check: ");

    cout << "\nNumber " << NumberToCheck << " is repeated ";
    cout << TimesRepeated(NumberToCheck, arr, arrLength) << " time(s)\n";
    return 0;
}