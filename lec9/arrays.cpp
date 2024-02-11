#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[10] = {};

    cout << sizeof(arr) << endl;
    cout << sizeof(int) << endl;

    cout << sizeof(arr) / sizeof(int) << endl;

    for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        cout << arr[i] << " ";
    }
}