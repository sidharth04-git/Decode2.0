// Input a string of size n and update all the odd positions in the string to character ‘#’. Consider
// 0-based indexing.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter lenght ";
    cin>>n;
    string s = "";
    cout<<"Enter Elements in String ";
    for(int i=0; i<=n-1; i++){
        char ch;
        s.push_back(ch);
    }
    // Algo
    for(int i=0; i<=n-1; i++){
        if(i%2!=0){
            str[i] = '#';
        }
    }
     for(int i=0; i<=n-1; i++){
        cout<<str[i]<<" ";
    }
    
}