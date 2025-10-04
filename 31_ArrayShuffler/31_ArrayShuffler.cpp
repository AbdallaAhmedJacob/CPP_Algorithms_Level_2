/*
* This program implements an array shuffling algorithm.
* It fills an array with a sequential range of numbers and then randomly
* rearranges the order of those elements using a series of swaps.
*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

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

int RandomNumber(int From, int To)
{
    return rand() % (To - From + 1) + From;
}

void FillArrayFrom0ToNMinus1(int arr[], int N)
{
    for (int i = 0; i < N; i++)
        arr[i] = i;
}

void PrintArray(int arr[], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";
    cout << "\n";
}

void Swap(int& A, int& B)
{
    int Temp = A;
    A = B;
    B = Temp;
}

void ShuffleArray(int arr[], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        int RandomIndex1 = RandomNumber(0, arrLength - 1);
        int RandomIndex2 = RandomNumber(0, arrLength - 1);

        Swap(arr[RandomIndex1], arr[RandomIndex2]);
    }
}

int main()
{
    int arr[100];

    srand((unsigned)time(NULL));

    int arrLength = ReadPositiveNumber("\nEnter array length:\n");

    FillArrayFrom0ToNMinus1(arr, arrLength);

    cout << "\nArray elements before shuffle:\n";
    PrintArray(arr, arrLength);

    ShuffleArray(arr, arrLength);

    cout << "\nArray after shuffle:\n";
    PrintArray(arr, arrLength);

    return 0;
}