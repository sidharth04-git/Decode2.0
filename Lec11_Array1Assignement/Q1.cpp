// Calculate the product of all the elements in the given array.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Size : ";
    cin>>n;
    int arr[n];
    cout<<"Enter Elements : ";
    for(int i=0; i<=n-1; i++)
    {
        cin>>arr[i];
    }
    int product = 1;
    for(int i=0; i<=n-1; i++)
    {
        product*=arr[i];
    }
    cout<<product;
}