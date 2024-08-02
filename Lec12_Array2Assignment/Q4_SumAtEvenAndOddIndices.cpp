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
    int evenSum = 0;
    int oddSum = 0;
    for(int i=0; i<=n-1; i++){
        if(i%2==0)
            evenSum+=arr[i];
        else
            oddSum+=arr[i];
    }
    int ans = evenSum - oddSum;
    cout<<ans;
}