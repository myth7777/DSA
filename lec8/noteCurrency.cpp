#include<bits/stdc++.h>
using namespace std;

int main()
{
    int amount;
    int rem;
    cout<<"Enter the amount: ";
    cin>>amount;

    int n100=0, n50=0, n20=0, n10=0, n1=0;

    while(amount!=0)
    {
        switch(amount)
        {
            case 100:
                n100++;
                amount=amount-100;
                break;
            
            case 50:
                n50++;
                amount = amount-50;
                break;
            
            case 20:
                n20++;
                amount-=20;
                break;
            
            case 10:
                n10++;
                amount-=10;
                break;
            
            case 1:
                n1++;
                amount-=1;
                break;

            default:
                cout<<"INVALID!";
                return 1;
        }
    }
    cout << "Number of notes:\n";
    cout << "100: " << n100 << " notes\n";
    cout << "50: " << n50 << " notes\n";
    cout << "20: " << n20 << " notes\n";
    cout << "10: " << n10 << " notes\n";
    cout << "1: " << n1 << " notes\n";
}