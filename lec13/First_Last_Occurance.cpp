#include <bits/stdc++.h>
using namespace std;

#include <vector>
using namespace std;
int firstOcc(vector<int> &arr, int n, int key)
{

    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {

        if (arr[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (key > arr[mid])
        { // Right me jao
            s = mid + 1;
        }
        else if (key < arr[mid])
        { // left me jao
            e = mid - 1;
        }

        mid = s + (e - s) / 2;
    }
    return ans;
}

int lastOcc(vector<int> &arr, int n, int key)
{

    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {

        if (arr[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (key > arr[mid])
        { // Right me jao
            s = mid + 1;
        }
        else if (key < arr[mid])
        { // left me jao
            e = mid - 1;
        }

        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
    vector<int> arr = {2, 4, 3, 3, 3, 13, 27};
    int n = arr.size();

    int key;
    cout << "Enter the element to search for: ";
    cin >> key;

    int fo = firstOcc(arr, n, key);
    int lo = lastOcc(arr, n, key);
    cout << "First Occurance of " << key << " is at " << fo << endl;
    cout << "Last Occurance of " << key << " is at " << lo << endl;

    cout << "Total number of occurance of " << key << " is " << (lo - fo + 1) << endl;
}