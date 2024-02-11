#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 3, 56, 70, 9};
    int sum = 0;

    for (int i = 0; i < (sizeof(arr) / sizeof(int)); i++)
    {
        sum = sum + arr[i];
    }
    cout << "Sum is : " << sum << endl;
}