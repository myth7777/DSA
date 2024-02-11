#include <bits/stdc++.h>
using namespace std;

int main()
{
    int key, n;
    int arr[] = {1, 5, 67, 89, 92, 12, 11};

    cout << "Enter the key" << endl;
    cin >> key;
    n = sizeof(arr) / sizeof(int);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            cout << "The position of the element in the array: " << i + 1;
            return 0;
        }
    }
    cout << "Element is not in the array";
}