// Check if the given array is sorted or not

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter Elements : ";
   
    for(int i=0; i<=n-1; i++){
        cin>>arr[i];
    }
    bool flag = true;  // Array is sorted
    for(int i=0; i<=n-1; i++)
    {
        if(arr[i]>arr[i+1]){
            flag = false;  // Not Sorted
            break;
        }
    }
    if(flag==true)
         cout<<"Array Is Sorted";
    else
          cout<<"Array is not Sorted";
}