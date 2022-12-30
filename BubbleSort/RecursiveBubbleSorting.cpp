#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    if((n == 0)||(n == 1))
        return;

    bool isSwapped = false;
    for (int i = 0; i < n - 1; i++)
    {
        if(arr[i] > arr[i+1])
        {
            int tmp = arr[i + 1];
            arr[i + 1] = arr[i];
            arr[i] = tmp;
            isSwapped = true;
        }
    }
    if (!isSwapped)
        return;

    bubbleSort(arr, n - 1);
}
int main()
{
    int arr[] = {34, 54, 23, 87, 92, 20, 4, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
}