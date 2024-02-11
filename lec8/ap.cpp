#include <bits/stdc++.h>
using namespace std;
void pass_by_reference(int &n)
{
    n++;
    cout << "on pass by reference, n is " << n << endl;
}
void pass_by_value(int n)
{
    n++;
    cout << "on pass by value, n is " << n << endl;
}
int main()
{
    int n;
    cin >> n;

    pass_by_value(n);
    cout << "after passing by value number is " << n << endl;

    pass_by_reference(n);
    cout << "after passing by reference, number is " << n << endl;

    return 0;
}