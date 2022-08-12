#include <iostream>
using namespace std;

void bubbleSort(int *arr, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void bubbleSortOptimized(int *arr, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        bool flag = false;
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                flag = true;
            }
        }
        if (flag == false)
        {
            break;
        }
    }
}

int main()
{
    int arr[] = {64, 25, 12, 22, 11};
    int size = 5;

    bubbleSort(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << ' ';
    }
}