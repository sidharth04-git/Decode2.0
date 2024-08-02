// Find the difference between the sum of elements at even indices to the sum of elements at odd
// indices.

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Size : ";
    cin>>n;
    int arr[n];
    cout<<"Enter Elements : ";
    for(int i=0; i<=n-1; i++){
        cin>>arr[i];
    }
    for(int i=0; i<=n-1; i++){
        if(i%2!=0)
            arr[i] = arr[i]*2;
        else
            arr[i]+=10;
    }
    for(int i=0; i<=n-1; i++){
        cout<<arr[i]<<" ";
    }
    
}