#include<iostream>
using namespace std;
int main()
{
    float length,width;
    cout<<"Enter Lenght";
    cin>>length;
    cout<<"Enter Width";
    cin>>width;
    float area = length*width;
    float perimeter = 2*(length+width);
    if(area>perimeter)
        cout<<"Area is Greater ";
    else
        cout<<"Perimeter is Greater ";
}