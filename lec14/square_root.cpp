#include <bits/stdc++.h>
using namespace std;

int squareRootInt(int n)
{
    int s = 0;
    int e = n - 1;
    long long int mid = s + (e - s) / 2;
    long long int ans = -1;
    if (n == 0 || n == 1)
        return n;

    while (s <= e)
    {
        long long int squ = mid * mid;
        if (squ == n)
        {
            return mid;
        }
        else if (squ > n)
        {
            e = mid - 1;
        }
        else
        {
            ans = mid;
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
double morePrecise(int n, int precision, int tempSol)
{
    double factor = 1;
    double ans = tempSol;
    for (int i = 0; i < precision; i++)
    {
        factor = factor / 10;
        for (double j = 0; j * j < n; j = j + factor)
        {
            ans = j;
        }
    }
    return ans;
}
int main()
{
    int x;
    cout << "Enter the number: ";
    cin >> x;
    int tempSol = squareRootInt(x);
    cout << "The square root of the number(integer) is: " << squareRootInt(x) << endl;
    cout << "The PRECISE square root of the number is: " << morePrecise(x, 3, tempSol);
}