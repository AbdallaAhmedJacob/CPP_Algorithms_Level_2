/*
* This program demonstrates the concept of function chaining by copying array
* elements using an 'AddArrayElement' helper function, which simulates adding
* elements to a dynamic-like array structure.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int RandomNumber(int From, int To)
{
    return rand() % (To - From + 1) + From;
}

void AddArrayElement(int Number, int arr[], int& arrLength)
{
    arr[arrLength] = Number;
    arrLength++;
}

void FillArrayWithRandomNumbers(int arr[], int& arrLength)
{
    cout << "\nEnter number of elements:\n";
    cin >> arrLength;

    for (int i = 0; i < arrLength; i++)
        arr[i] = RandomNumber(1, 100);
}

void CopyArrayUsingAddArrayElement(int arrSource[], int arrDestination[], int arrLength, int& arrDestinationLength)
{
    for (int i = 0; i < arrLength; i++)
        AddArrayElement(arrSource[i], arrDestination, arrDestinationLength);
}

void PrintArray(int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";

    cout << "\n";
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[100];
    int arr2[100];
    int arrLength = 0;

    FillArrayWithRandomNumbers(arr, arrLength);

    cout << "\nArray 1 Elements :\n";
    PrintArray(arr, arrLength);

    int arr2Length = 0;

    CopyArrayUsingAddArrayElement(arr, arr2, arrLength, arr2Length);

    cout << "\nArray 2 Elements after copy: \n";
    PrintArray(arr2, arr2Length);

    return 0;
}