#include<bits/stdc++.h>
using namespace std;

void swap(int* a, int* b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void heapify(int arr[], int N, int i)
{
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if((left < N) && (arr[left] > arr[largest]))
        largest = left;
    if((right < N) && (arr[right] > arr[largest]))
        largest = right;

    if(largest != i)
    {
        swap(&arr[largest], &arr[i]);
        heapify(arr, N, largest);
    }
}

void heapSort(int arr[], int N)
{
    for (int i = N / 2 - 1; i >= 0; i--)
        heapify(arr, N, i);

    for (int i = N - 1; i >= 0; i--)
    {
        swap(&arr[0], &arr[i]);
        heapify(arr, i, 0);
    }
}

int main()
{
    int arr[] = {1,3,5,4,6,13,10,9,8,15,17};
    int N = sizeof(arr) / sizeof(arr[0]);

    heapSort(arr, N);

    for (int i = 0; i < N; i++)
        cout << arr[i] << " ";
}