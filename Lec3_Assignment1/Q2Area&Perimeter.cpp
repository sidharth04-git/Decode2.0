#include<iostream>
using namespace std;
int main()
{
    int r,area,p;
    cout<<"Enter Radius : ";
    cin>>r;
    area = 3.1415*r*r;
    p = 2*3.1415*r;
    if(area>p)
        cout<<"Area is Larger ";
    else 
        cout<<"Perimeter is Larger ";
}