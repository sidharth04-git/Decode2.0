// WAP to find the largest three elements in the array.

#include<iostream>
#include<climits>
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
    int mx = INT_MIN;
    int smx = INT_MIN;
    int thmx = INT_MIN;
    for(int i=0; i<=n-1; i++){
        if(arr[i]>mx)
            mx = arr[i];
    }
    for(int i=0; i<=n-1; i++){
        if(arr[i]>smx && arr[i]!=mx)
            smx = arr[i];
    }
    for(int i=0; i<=n-1; i++){
        if(arr[i]>thmx && arr[i]!=mx && arr[i]!=smx)
            thmx = arr[i];
    }
    cout<<mx<<endl;
    cout<<smx<<endl;
    cout<<thmx<<endl;
}


