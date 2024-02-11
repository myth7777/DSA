#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {1, 3, 6, 7, 5, 8};
    int n = arr.size();

    int start = 0, end = n - 1;

    cout << "Original Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

    cout << "\nReversed Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}