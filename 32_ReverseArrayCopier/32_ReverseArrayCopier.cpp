/*
* This program demonstrates copying elements from one array to a second array
* in reverse order.
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

    cout << "\n";
}

void CopyArrayInReverseOrder(int arrSource[], int arrDestination[], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
        arrDestination[i] = arrSource[arrLength - 1 - i];
}


int main()
{
    int arr[100];
    int arr2[100];
    int arrLength;

    srand((unsigned)time(NULL));

    FillArrayWithRandomNumbers(arr, arrLength);
    cout << "Array 1 elements:\n";
    PrintArray(arr, arrLength);


    CopyArrayInReverseOrder(arr, arr2, arrLength);

    cout << "Array 2 elements after copying array 1 in reversed order:\n";
    PrintArray(arr2, arrLength);

    return 0;
}