// Write a program to print the elements of both the diagonals in a square matrix.
#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter Row /Column  : ";
    cin>>m;
    int arr[m][m];
    cout<<"Enter Matrix Elements : "<<endl;
    for(int i=0; i<=m-1; i++){
        for(int j=0; j<=m-1; j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;

    // Diagnols

    for(int i=0; i<=m-1; i++){
        for(int j=0; j<=m-1; j++){
            if((i==j) || (i+j==m-1)){
                cout<<arr[i][j]<<" ";
            }
            else{
                cout<<" "<<" ";
            }
        }
        cout<<endl;
    }

}