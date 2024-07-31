// Find the second largest element in the given Array in one pass.
#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Size : ";
    cin>>n;
    int arr[n];
    cout<<"Enter Elements : ";
    for(int i=0; i<=n-1; i++)
    {
        cin>>arr[i];
    }
    int max = INT_MIN;
    int smax = INT_MIN;
    for(int i=0; i<=n-1; i++)
    {
        if(arr[i]>max){
            smax = max;
            max = arr[i];
        }
    }
    cout<<"Largest Element : "<<max<<endl;
    cout<<"Second Largest Element : "<<smax;
}