/*
* This program removes duplicate elements from a source array and copies only the
* distinct elements into a new destination array.
*/

#include <iostream>

using namespace std;

void ArrayList(int Array[])
{
    Array[0] = 10;
    Array[1] = 10;
    Array[2] = 10;
    Array[3] = 50;
    Array[4] = 50;
    Array[5] = 70;
    Array[6] = 70;
    Array[7] = 10;
    Array[8] = 70;
    Array[9] = 90;
}

bool IsNumberInArray(int arr[], int arrLength, int Value)
{
    for (int i = 0; i < arrLength; i++)
        if (arr[i] == Value)
            return true;

    return false;
}

void CopyArrayDistinct(int arrDistinct[], int& arrDistinctLength, int arr[], int arrLength)
{
    arrDistinctLength = 0;

    for (int i = 0; i < arrLength; i++)
        if (!IsNumberInArray(arrDistinct, arrDistinctLength, arr[i]))
        {
            arrDistinct[arrDistinctLength] = arr[i];
            arrDistinctLength++;
        }
}

void PrintArray(int arr[], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";

    cout << "\n";
}

int main()
{
    int arr[100];
    const int arrLength = 10;
    int arrDistinct[100];
    int arrDistinctLength = 0;

    ArrayList(arr);

    cout << "\nArray 1 Elements :\n";
    PrintArray(arr, arrLength);

    CopyArrayDistinct(arrDistinct, arrDistinctLength, arr, arrLength);

    cout << "\nArray Distinct numbers : \n";
    PrintArray(arrDistinct, arrDistinctLength);

    return 0;
}