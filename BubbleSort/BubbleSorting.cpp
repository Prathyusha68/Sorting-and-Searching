#include<iostream>
using namespace std;

int main()
{
    int arr[] = {45, 32, 19, 39, 10, 5, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    bool  isSwapped;
    for (int i = 0; i < n-1; i++)
    {
        isSwapped = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                int tmp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = tmp;
                isSwapped = true;
            }
        }
        if (isSwapped == false)
             break;
    }

    for (int i = 0; i < n; i++)
    {
        //cout << " arr[" << i << "] : " << arr[i];
        cout <<arr[i]<<" ";
    }
}