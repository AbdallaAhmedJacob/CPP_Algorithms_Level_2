/*
* This program dynamically fills an array with user-inputted positive numbers
* until the user decides to stop, effectively simulating dynamic array resizing
* using a fixed-size array and a length tracker.
*/

#include <iostream>
#include <string>

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

void AddArrayElement(int Number, int arr[], int arrLength)
{
    arr[arrLength - 1] = Number;
}

void FillArrayWithNumbers(int arr[], int& arrLength)
{
    bool AddMore = true;
    do
    {
        arrLength++;
        int Num = ReadPositiveNumber("Please enter a number? ");

        AddArrayElement(Num, arr, arrLength);

        cout << "Do you want to add more numbers? [0]:No, [1]:Yes? ";
        cin >> AddMore;
    } while (AddMore);
}

void PrintArray(int arr[], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";

    cout << endl;
}

int main()
{
    int arr[100];
    int arrLength = 0;

    FillArrayWithNumbers(arr, arrLength);

    cout << "\nArray length: " << arrLength << "\n";
    cout << "Array elements: ";
    PrintArray(arr, arrLength);

    return 0;
}