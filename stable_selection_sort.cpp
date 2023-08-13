#include <iostream>
using namespace std;

// Time Complexity :
// Best Case: O(n^2)
// Worst Case: O(n^2)
// Space Complexity : O(1)
void stableSelectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int mini = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[mini])
            {
                mini = j;
            }
        }
        int minValue = arr[mini];
        while (mini > i)
        {
            arr[mini] = arr[mini - 1];
            mini--;
        }
        arr[i] = minValue;
    }
}