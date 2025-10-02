/*
* This program demonstrates element-wise addition of two arrays of the same length.
* It fills two arrays with random numbers, calculates the sum of corresponding
* elements, and stores the results in a third array.
*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

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

// Generates a random number within a specified range [From, To].
int RandomNumber(int From, int To)
{
    return rand() % (To - From + 1) + From;
}

// Fills an array with a specified number of random integers.
void FillArrayWithRandomNumbers(int arr[], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
        arr[i] = RandomNumber(1, 100);
}

// Prints all elements of an array to the console.
void PrintArray(int arr[], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";
    cout << "\n";
}

// Calculates the element-wise sum of two source arrays and stores it in a destination array.
void SumOf2Arrays(int arrSum[], int arrSource1[], int arrSource2[], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        arrSum[i] = arrSource1[i] + arrSource2[i];
    }
}


int main()
{
    srand((unsigned)time(NULL));

    // Read and fill Array 1
    int arr1[100];
    int arrLength = ReadPositiveNumber("\nEnter number of elements:\n");
    FillArrayWithRandomNumbers(arr1, arrLength);

    // Read and fill Array 2
    int arr2[100];
    FillArrayWithRandomNumbers(arr2, arrLength);

    // Calculate the sum
    int arrSum[100];
    SumOf2Arrays(arrSum, arr1, arr2, arrLength);

    // Print Results
    cout << "\nArray 1 elements:\n";
    PrintArray(arr1, arrLength);

    cout << "\nArray 2 elements:\n";
    PrintArray(arr2, arrLength);

    cout << "\nSum of Array 1 and Array 2 elements (Array Sum):\n";
    PrintArray(arrSum, arrLength);
    return 0;
}