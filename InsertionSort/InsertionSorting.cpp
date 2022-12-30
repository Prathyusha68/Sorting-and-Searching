#include<iostream>
using namespace std;

int main()
{
    int arr[] = {23, 45, 62, 18, 91, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while((j >= 0) && (key < arr[j]))
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }  
}