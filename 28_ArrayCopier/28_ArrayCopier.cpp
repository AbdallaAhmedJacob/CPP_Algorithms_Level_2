/*
* This program demonstrates how to copy all elements from one array (source)
* to another array (destination) using a simple iteration loop.
* This is a fundamental operation in array management in C++.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Generates a random number within a specified range [From, To].
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

// Copies all elements from a source array to a destination array.
void CopyArray(int arrSource[], int arrDestination[], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        arrDestination[i] = arrSource[i];
    }
}

// Prints all elements of an array to the console.
void PrintArray(int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";
    cout << "\n";
}

int main()
{
    // Ensure that the random seed is initialized only once.
    srand((unsigned)time(NULL));

    int arrSource[100], arrLength;
    FillArrayWithRandomNumbers(arrSource, arrLength);

    cout << "\nSource Array Elements: \n";
    PrintArray(arrSource, arrLength);

    int arrDestination[100];
    CopyArray(arrSource, arrDestination, arrLength);

    cout << "\nDestination Array Elements after copy: \n";
    PrintArray(arrDestination, arrLength);
    return 0;
}