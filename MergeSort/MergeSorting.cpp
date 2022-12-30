#include <iostream>
using namespace std;

void mergeIt(int arr[], int l, int m, int r)
{
    int leftArrSize = m - l + 1;
    int rightArrSize = r - m;

    int leftArr[leftArrSize], rightArr[rightArrSize];

    // fill leftArr and right Arr
    for (int i = 0; i < leftArrSize; i++)
        leftArr[i] = arr[l + i];

    for (int j = 0; j < rightArrSize; j++)
        rightArr[j] = arr[m + 1 + j];

    // Copy small values of leftArr and rightArr to main array arr[]
    int i = 0, j = 0, k = l;
    while ((i < leftArrSize) && (j < rightArrSize))
    {
        if (leftArr[i] < rightArr[j])
            arr[k++] = leftArr[i++];
        else
            arr[k++] = rightArr[j++];
    }

    // fill left over values of leftArr or rightArr to main array arr[], if any.
    while (i < leftArrSize)
        arr[k++] = leftArr[i++];
    while (j < rightArrSize)
        arr[k++] = rightArr[j++];
}

void divideIt(int arr[], int l, int r)
{
    if (l == r)
        return;

    int m = l + (r - l) / 2;

    divideIt(arr, l, m);
    divideIt(arr, m + 1, r);
    mergeIt(arr, l, m, r);
}

void mergeSort(int arr[], int l, int r)
{
    divideIt(arr, l, r);
}

int main()
{
    int arr[] = {5, 3, 2, 1, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    mergeSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}