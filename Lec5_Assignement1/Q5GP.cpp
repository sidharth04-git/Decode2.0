// Display this GP - 3,12,48,.. upto ‘n’ terms.

// Display this AP - 4,7,10,13,16.. upto ‘n’ terms.
#include<iostream>
using namespace std;
int main()
{
    int n,a;
    cout<<"Enter n : ";
    cin>>n;
    a = 3;
    for(int i=1; i<=n; i++)
    {
        cout<<a<<" ";
        a*=4;
    }
}