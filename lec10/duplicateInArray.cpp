#include <bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            if ((arr[i] ^ arr[j]) == 0)
                return arr[i];
        }
    }
}
int main()
{
    vector<int> arr = {1, 2, 3, 3, 3, 4, 5};
    int ans = findDuplicate(arr);
    cout << "The duplicate element is: " << ans;
}