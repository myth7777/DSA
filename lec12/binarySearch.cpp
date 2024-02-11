#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int s, int e, int key)
{
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (key == arr[mid])
            return mid;
        if (key > arr[mid])
            s = mid + 1;
        if (key < arr[mid])
            e = mid - 1;
        mid = s + (e - s) / 2;
    }
    return -1;
}
int main()
{
    int arr[] = {3, 5, 9, 13, 27};
    int n = sizeof(arr) / sizeof(int);

    int s = 0;
    int e = n - 1;
    int key;
    cout << "Enter a number: ";
    cin >> key;

    int ans = binarySearch(arr, s, e, key);
    if (ans == -1)
    {
        cout << "The element is not present in the array." << endl;
    }
    else
    {
        cout << "The index for the key is: " << ans << endl;
        cout << "The position for the key is: " << ans + 1;
    }
}