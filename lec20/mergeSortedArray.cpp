#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr1 = {1, 3, 5, 7, 9};
    int n = arr1.size();

    vector<int> arr2 = {2, 4, 6, 11};
    int m = arr2.size();

    vector<int> arr3 = {};
    int k = 0;
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            arr3.push_back(arr1[i]);
            i++;
            k++;
        }
        else
        {
            arr3.push_back(arr2[j]);
            j++;
            k++;
        }
    }
    while (i < n)
    {
        arr3.push_back(arr1[i]);
        i++;
        k++;
    }

    while (j < m)
    {
        arr3.push_back(arr2[j]);
        j++;
        k++;
    }

    cout << "\nNew Merged Array: ";
    for (int a = 0; a < arr3.size(); a++)
    {
        cout << arr3[a] << " ";
    }
}