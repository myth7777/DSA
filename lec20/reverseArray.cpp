#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {2, 3, 4, 5, 6, 7};
    int n = arr.size();

    cout << "Original Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < n / 2; i++)
    {
        swap(arr[i], arr[n - i - 1]);
    }

    cout << "\nReversed Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}