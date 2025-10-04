/*
* This program demonstrates how to check for the existence of a specific number
* in an array using a dedicated boolean function that relies on the Linear Search
* position function.
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
    cout << "\nEnter number of elements: \n";
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

bool IsNumberInArray(int arr[], int Num, int arrLength)
{
    return FindNumberPositionInArray(arr, Num, arrLength) != -1;
}

int main()
{
    int arr[100];

    srand((unsigned)time(NULL));

    int arrLength = 0;

    FillArrayWithRandomNumbers(arr, arrLength);

    cout << "Array 1 elements:\n";
    PrintArray(arr, arrLength);

    int NumSearch = ReadPositiveNumber("Please enter number to search for?\n");

    cout << "Number you are looking for is: " << NumSearch << "\n";


    if (IsNumberInArray(arr, NumSearch, arrLength))
        cout << "The number is found :-) " << endl;
    else
        cout << "The number is not found :-( " << endl;

    return 0;
}