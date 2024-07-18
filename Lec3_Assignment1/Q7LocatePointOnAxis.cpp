// Given a point (x, y), write a program to find out if it lies on the x-axis, y-axis or at the origin, viz. (0, 0).
// Input 1: 2 0
// Output 1: the point lies on the x - axis.
#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<"Enter x - coodinate ";
    cin>>x;
    cout<<"Enter y - coodinate ";
    cin>>y;
    if(x==0 && y==0)
        cout<<"Origin";
    else if(x==0)
        cout<<"y - Axis";
    else if(y==0)
        cout<<"x - Axis";
    else if(x>0 && y>0)
        cout<<"First Quadrant";
    else if(x<0 && y>0)
        cout<<"Second Quadrant";
    else if(x<0 && y<0)
        cout<<"Third Quadrant";
    else if(x>0 && y<0)
        cout<<"Fourth Quadrant";
}