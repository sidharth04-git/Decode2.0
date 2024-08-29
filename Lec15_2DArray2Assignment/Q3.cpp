// Write a program to print the matrix in wave form.
// Input :

// 1 2 3
// 4 5 6
// 7 8 9
// Output : 7 4 1 2 5 8 9 6 3
#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter Row : ";
    cin>>m;
    cout<<"Enter Column : ";
    cin>>n;
    int arr[m][n];
    cout<<"Enter Elements : ";
    for(int i=0; i<=m-1; i++){
        for(int j=0; j<=n-1; j++){
            cin>>arr[i][j];
        }
    }

    // Spiral
    
    for(int j=0; j<=n-1; j++){
        if(j%2==0){
            for(int i=m-1; i>=0; i--){
                cout<<arr[i][j]<<" ";
            }
        }
        else{
            for(int i=0; i<=m-1; i++){
                cout<<arr[i][j]<<" ";
            }
        }
    }
}