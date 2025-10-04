/*
* This program implements the Linear Search algorithm to find the first position
* and order of a specific number within an array of random integers.
*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int RandomNumber(int From, int To)
{
    return rand() % (To - From + 1) + From;
}


void FillArrayWithRandomNumbers(int arr[], int& arrLength)
{
    cout << "\nEnter number of elements:\n";
    cin >> arrLength;

    for (int i = 0; i < arrLength; i++)
        arr[i] = RandomNumber(1, 100);
}

void PrintArray(int arr[], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";

    cout << endl;
}


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

int FindNumberPositionInArray(int arr[], int Num, int arrLength)
{
    for (int i = 0; i < arrLength; i++)
        if (arr[i] == Num)
            return i;

    return -1;
}

int main()
{
    int arr[100];
    int arrLength;

    srand((unsigned)time(NULL));

    FillArrayWithRandomNumbers(arr, arrLength);

    cout << "Array 1 elements:\n";
    PrintArray(arr, arrLength);

    int NumSearch = ReadPositiveNumber("Please enter number to search for?\n");

    cout << "Number you are looking for is: " << NumSearch << "\n";

    int Position = FindNumberPositionInArray(arr, NumSearch, arrLength);

    if (Position >= 0)
    {
        cout << "The number found at position : " << Position << "\n";
        cout << "The number found at order    : " << Position + 1 << endl;
    }
    else
        cout << "The number is not found :-( " << endl;

    return 0;
}