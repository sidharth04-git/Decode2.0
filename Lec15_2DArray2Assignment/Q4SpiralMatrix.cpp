// Given a positive integer n, generate a n x n matrix filled with elements from 1 to n2 in spiral order.
#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>> generateMatrix(int n){
    vector<vector<int>> matrix(n, vector<int>(n)); 
    int minr = 0 , minc = 0;
    int maxr = n-1 , maxc = n-1;
    int a = 1;
    while(minr<=maxr && minc<=maxc){
        // RIGHT
        for(int j=minc; j<=maxc; j++){
            matrix[minr][j] = a++;
        }
        minr++;
        if(minr>maxr || minc>maxc)
            break;
        
        // BOTTOM
        for(int i=minr; i<=maxr; i++){
            matrix[i][maxc] = a++;
        }
        maxc--;
        if(minr>maxr || minc>maxc)
            break;
        
        // LEFT
        for(int j=maxc; j>=minc; j--){
            matrix[maxr][j] = a++;
        }
        maxr--;
        if(minr>maxr || minc>maxc)
            break;
        
        // UP
        for(int i=maxr; i>=minr; i--){
            matrix[i][minc] = a++;
        }
        minc++;
    }
    return matrix;

}

int main(){
    int n;
    cout<<"Enter Row / Column of Spiral Matrix : "<<endl;
    cin>>n;
    vector<vector<int>> ans = generateMatrix(n);
    // Display Matrix 
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}