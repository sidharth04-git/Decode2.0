#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter First Marks ";
    cin>>a;
    cout<<"Enter Second Marks ";
    cin>>b; 
    cout<<"Enter third Marks ";
    cin>>c;
    if(a<b)
    {
        if(a<c)
        {
            cout<<a<<" is least";
        }
        else
        {
            cout<<c<<" is least";
        }
    }
    else
    {
        if(b<c)
        {
            cout<<b<<" is least";
        }
        else
        {
            cout<<c<<" is least";
        }
    }
}