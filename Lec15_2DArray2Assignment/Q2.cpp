// Write a program to rotate the matrix by 90 degrees anti-clockwise.

#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter Row : ";
    cin>>m;
    int arr[m][m];
    cout<<"Enter Elements : "<<endl;
    for(int i=0; i<=m-1; i++){
        for(int j=0; j<=m-1; j++){
            cin>>arr[i][j];
        }
    }

    cout<<endl;

    // Transpose 

    for(int i=0; i<=m-1; i++){
        for(int j=i+1; j<=m-1; j++){
           swap(arr[i][j] , arr[j][i]);
        }
    }
    
    for(int i=0; i<=m-1; i++){
        for(int j=0; j<=m-1; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    // Anti-Clock wise rotation 
    // outer loop denote column

    for(int k=0; k<m; k++){
        // Reverse the kth column
        int i=0; 
        int j = m-1;
        while(i<=j){
            swap(arr[i][k] , arr[j][k]);
            i++;
            j--;
        }
    }

    // Display 

     for(int i=0; i<=m-1; i++){
        for(int j=0; j<=m-1; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

// 3 6 9
// 2 5 8
// 1 4 7