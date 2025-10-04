/*
* This program fills an array with random numbers and then copies only the odd numbers
* to a second array, demonstrating conditional array copying and dynamic sizing.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int RandomNumber(int From, int To)
{
    return rand() % (To - From + 1) + From;
}

void FillArrayWithRandomNumbers(int arr[100], int& arrLength)
{
    cout << "\nEnter number of elements:\n";
    cin >> arrLength;

    for (int i = 0; i < arrLength; i++)
        arr[i] = RandomNumber(1, 100);
}

void CopyOddNumbers(int arrOdd[], int& arrOddLength, int arr[], int arrLength)
{
    arrOddLength = 0;

    for (int i = 0; i < arrLength; i++)
    {
        if (arr[i] % 2 != 0)
        {
            arrOdd[arrOddLength] = arr[i];
            arrOddLength++;
        }
    }
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
    int arrOdd[100];
    int arrLength = 0;
    int arrOddLength = 0;

    FillArrayWithRandomNumbers(arr, arrLength);

    cout << "\nArray 1 Elements :\n";
    PrintArray(arr, arrLength);

    CopyOddNumbers(arrOdd, arrOddLength, arr, arrLength);

    cout << "\nArray odd numbers : \n";
    PrintArray(arrOdd, arrOddLength);

    return 0;
}