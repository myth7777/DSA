#include <bits/stdc++.h>
using namespace std;
int pivotIndex(int arr[], int n)
{
    int s, e, mid;
    s = 0;
    e = n - 1;
    mid = s + (e - s) / 2;

    while (s < e)
    {
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}
int main()
{
    int arr[] = {3, 7, 9, 1, 2};
    int n = 5;
    int ans = pivotIndex(arr, n);
    cout << "Pivot Index is: " << ans << endl;
}