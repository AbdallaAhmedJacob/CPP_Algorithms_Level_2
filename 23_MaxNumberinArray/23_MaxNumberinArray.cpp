/*
* This program fills an array with random numbers and then finds and prints
* the maximum number in that array.
* It demonstrates a fundamental algorithm for array analysis.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Generates a random number within a specified range.
int RandomNumber(int From, int To)
{
    return rand() % (To - From + 1) + From;
}

// Fills an array with a user-specified number of random integers.
void FillArrayWithRandomNumbers(int arr[100], int& arrLength)
{
    cout << "\nEnter number of elements:\n";
    cin >> arrLength;
    for (int i = 0; i < arrLength; i++)
        arr[i] = RandomNumber(1, 100);
}

// Prints all elements of an array to the console.
void PrintArray(int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";
    cout << "\n";
}

// Finds the maximum number in an array.
// It assumes the array is not empty.
int MaxNumberInArray(int Array[], int arrLength)
{
    int Max = Array[0];
    for (int i = 1; i < arrLength; i++)
    {
        if (Array[i] > Max)
            Max = Array[i];
    }
    return Max;
}

int main()
{
    srand((unsigned)time(NULL));
    int arr[100];
    int arrLength;
    FillArrayWithRandomNumbers(arr, arrLength);
    cout << "\nArray Elements: ";
    PrintArray(arr, arrLength);
    cout << "\nMax number = " << MaxNumberInArray(arr, arrLength) << endl;
    return 0;
}