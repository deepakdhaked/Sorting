#include <iostream>
using namespace std;

// Time Complexity : O(N^2)
// Space Complexity : O(1)
// Unstable Sorting Algorithm
void selectionSort(int *arr, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int mini = i;

        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[mini])
            {
                mini = j;
            }
        }
        swap(arr[i], arr[mini]);
    }
}

int main()
{
    int arr[] = {64, 25, 12, 22, 11};
    int size = 5;

    selectionSort(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << ' ';
    }
}
