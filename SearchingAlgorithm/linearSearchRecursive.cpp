#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int key)
{
    if(n < 0)
        return -1;
    else if(arr[n] == key)
        return n;
    else
        return linearSearch(arr, n - 1, key);

}
int main()
{
    int arr[] = {5, 1, 3, 2, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 2;

    int ans = linearSearch(arr, n - 1, key);
    if (ans == -1)
        cout
            << "Key " << key << " not found";
    else
        cout << "Key " << key << " found at "<<ans;
}