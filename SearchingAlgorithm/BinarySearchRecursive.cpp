#include <iostream>
using namespace std;

int binarySearch(int arr[], int l, int r, int key)
{
    if (r >= l)
    {
        int m = l + (r - l) / 2;
        if (arr[m] == key)
            return m;
        else if (key < arr[m])
            return binarySearch(arr, l, m - 1, key);
        else if (key > arr[m])
            return binarySearch(arr, m + 1, r, key);
    }

    return -1;
}
int main()
{
    int arr[] = {2, 3, 6, 9, 14};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 9;

    int ans = binarySearch(arr, 0, n - 1, key);

    if (ans == -1)
        cout << "Key " << key << " not found";
    else
        cout << "Key " << key << " found at " << ans;
}