// Input a string of even length and reverse the second half of the string.
#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cout<<"Enter String ";
    getline(cin,str);
    int n = str.length();
    // reverse(str.begin()+n/2 , str.end());  // Using Built-in Fn.
    int i = n/2; // middle idx
    int j = n-1; // last idx
    while(i<=j){
        swap(str[i] , str[j]);
        i++;
        j--;
    }
    cout<<str;
}