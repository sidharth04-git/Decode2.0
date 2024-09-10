// Input a string of length less than 10 and convert it into integer without using builtin function.
#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cout<<"Enter String : ";
    getline(cin,str);
    int n = str.length();
    int x = 0;
    for(int i=0; i<n; i++){
        x *= 10;
        x += (str[i]-48);
    }
    x++;
    cout<<x;


}