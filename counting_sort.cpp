#include <iostream>
using namespace std;

int getMaxElement(int arr[], int n)
{
    int max_element = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max_element)
        {
            max_element = arr[i];
        }
    }
    return max_element;
}

// Time Complexity : O(M + N), where M = maximum element of array, N = size of array.
// Space Complexity : O(M).
void countSort(int arr[], int n)
{
    // get maximum element of array.
    int max_element = getMaxElement(arr, n);

    // allocate memory in heap.
    int *count = (int *)malloc((max_element + 1) * sizeof(int));

    // initialize all values of count array to zero.
    int i, index;
    for (i = 0; i <= max_element; i++)
    {
        count[i] = 0;
    }

    // store frequency of all array element in count array.
    for (i = 0; i < n; i++)
    {
        count[arr[i]]++;
    }

    // fill array in sorted order according to their frequency.
    i = 0;
    index = 0;
    while (i <= max_element)
    {
        if (count[i] > 0)
        {
            arr[index] = i;
            count[i]--;
            index++;
        }
        else
        {
            i++;
        }
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ' ';
    }
    cout << endl;
}

int main()
{
    int arr[] = {3, 6, 2, 6, 9, 97, 5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Before Sorting : ";
    printArray(arr, n);

    countSort(arr, n);

    cout << "After Sorting : ";
    printArray(arr, n);
}