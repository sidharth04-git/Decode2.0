//    *
//   **
//  ***
// ****
//  ***
//   **
//    *

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n : ";
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n-i; j++)
        {
            cout<<"  ";
        }
        for(int k=1; k<=i; k++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
                            // For 2nd Half
    n-=1;

       for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<"  ";
        }
        for(int k=1; k<=n-i+1; k++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

}