#include <bits/stdc++.h>
using namespace std;

void insertionSort(vector<int> &arr)
{
    int n = arr.size();

    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        for (; j >= 0; j--)
        {
            if (arr[j] > temp)
            {
                // shift to right
                arr[j + 1] = arr[j];
            }
            else
            {
                // stop
                break;
            }
        }
        arr[j + 1] = temp;
    }
}
int main()
{
    vector<int> arr = {10, 1, 7, 4, 8, 2, 11};
    cout << "Given array:" << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    insertionSort(arr);
    cout << "Sorted array:" << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}