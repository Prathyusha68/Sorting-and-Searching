#include<iostream>
using namespace std;

int main()
{
    int arr[] = {45, 34, 67, 23, 98, 32};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n - 1; i++)
    {
        int min_idx = i;
        for (int j = i; j < n; j++)
        {
            if(arr[min_idx] > arr[j])
                min_idx = j;
        }

        if(min_idx != i)
        {
            int tmp = arr[min_idx];
            arr[min_idx] = arr[i];
            arr[i] = tmp;
        }
    }

    for (int j = 0; j < n; j++)
    {
        //cout << " arr[" << j << "] : " << arr[j];
        cout <<arr[j]<<" ";
    }

}