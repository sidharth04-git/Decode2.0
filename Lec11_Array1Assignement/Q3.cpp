// Find the minimum value out of all elements in the array.
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter Array Size : ";
    cin>>n;
    int arr[n];
    cout<<"Enter Array Element : ";
    for(int i=0; i<=n-1; i++)
    {
        cin>>arr[i];
    }
    // Method 1
    
    // int mini = INT_MAX;
    // for(int i=0; i<=n-1; i++){
    //     if(arr[i]<mini){
    //         mini = arr[i];
    //     }
    // }

    // Method 2
    int mini = arr[0];
    for(int i=1; i<=n-1; i++)
    {
        mini = min(mini,arr[i]);
    }
    cout<<"Minimum Value is "<<mini;
}