#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

/*
 * This function takes last element as pivot, places the pivot element at its correct position in sorted array,
 * and places all smaller (smaller than pivot) to left of pivot and all greater elements to right of pivot
 */
int partition(int arr[], int s, int e)
{
    // taking pivot as a end value
    int pivot = arr[e];
    int i = s;                  // taking 'i' as start index
    for (int c = s; c < e; c++) // taking 's' as a start index
    {
        // Whenever value which 'c' pointing is less than pivot, move it to left side of pivot
        if (arr[c] < pivot)
        {
            swap(&arr[c], &arr[i]);
            i++;
        }
    }

    // place pivot in correct position
    swap(&arr[i], &arr[e]);

    return i;
}

void quickSort(int arr[], int s, int e)
{
    // start value is less than end value
    if (s < e)
    {
        int pivot = partition(arr, s, e);
        quickSort(arr, s, pivot - 1);
        quickSort(arr, pivot + 1, e);
    }
}

int main()
{
    int arr[] = {5, 1, 3, 2, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    quickSort(arr, 0, n);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}