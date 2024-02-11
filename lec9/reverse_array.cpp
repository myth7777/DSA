#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {2, 56, -9, 43, 99, 23};
    int n;
    n = sizeof(arr) / sizeof(int);

    cout << "Original array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    for (int i = 0; i < n / 2; i++)
    {
        swap(arr[i], arr[n - i - 1]);
    }

    cout << "Reversed array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    // cout << "Reversed array: ";
    // for (int i = n - 1; i >= 0; i--)
    // {
    //     cout << arr[i] << " ";
    // }
}