/*
* This program fills an array with random numbers, identifies the prime numbers
* within it, and copies only those prime numbers into a second array.
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

bool PrimeNumber(int Number)
{
    if (Number <= 1)
        return false;

    for (int i = 2; i <= round(sqrt(Number)); i++)
    {
        if (Number % i == 0)
            return false;
    }
    return true;
}

void CopyPrimeNumberInArray(int arr2[], int& arrLength2, int arr[], int arrLength)
{
    arrLength2 = 0;

    for (int i = 0; i < arrLength; i++)
    {
        if (PrimeNumber(arr[i]))
        {
            arr2[arrLength2] = arr[i];

            arrLength2++;
        }
    }
}

int main()
{
    int arr[100];
    int arr2[100];
    int arrLength;
    int arrLength2 = 0;

    srand((unsigned)time(NULL));

    FillArrayWithRandomNumbers(arr, arrLength);
    cout << "Array 1 elements: ";

    PrintArray(arr, arrLength);

    cout << "\nPrime number in array2: ";
    CopyPrimeNumberInArray(arr2, arrLength2, arr, arrLength);

    PrintArray(arr2, arrLength2);

    return 0;
}