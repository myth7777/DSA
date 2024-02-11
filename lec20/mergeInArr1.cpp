#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr1 = {1, 3, 5, 7, 9};
    int n = arr1.size();

    vector<int> arr2 = {2, 4, 6, 11};
    int m = arr2.size();

    cout << "\nNew Merged Array: ";
    for (int a = 0; a < arr1.size(); a++)
    {
        cout << arr1[a] << " ";
    }
}