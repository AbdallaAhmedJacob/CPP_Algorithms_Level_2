/*
* This program fills an array with random numbers, identifies the prime numbers
* within it, and copies only those prime numbers into a second array.
* It demonstrates the critical concept of conditional array copying.
*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cmath>

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
    cout << "\n";
}

bool CheckPrimeNumber(int Number)
{
    if (Number <= 1)
        return false;

    int Limit = round(sqrt(Number));

    for (int i = 2; i <= Limit; i++)
    {
        if (Number % i == 0)
            return false;
    }
    return true;
}

void CopyOnlyPrimeNumbers(int arrSource[], int arrLength, int arrDestination[], int& arrDestinationLength)
{
    arrDestinationLength = 0;

    for (int i = 0; i < arrLength; i++)
    {
        if (CheckPrimeNumber(arrSource[i]))
        {
            arrDestination[arrDestinationLength] = arrSource[i];
            arrDestinationLength++;
        }
    }
}

int main()
{
    srand((unsigned)time(NULL));

    int arrSource[100], arrLength;
    FillArrayWithRandomNumbers(arrSource, arrLength);

    cout << "Array 1 elements: ";
    PrintArray(arrSource, arrLength);

    int arrDestination[100], arrDestinationLength = 0;

    CopyOnlyPrimeNumbers(arrSource, arrLength, arrDestination, arrDestinationLength);

    cout << "\nPrime numbers in Array 2: ";
    PrintArray(arrDestination, arrDestinationLength);

    return 0;
}