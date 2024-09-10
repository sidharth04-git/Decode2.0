#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(string str){
    int n = str.length();
    int i = 0;
    int j = n-1;
    bool flag = true; // palindrome hai
    while(i<=j){
        if(str[i]!=str[j])
            return false;
        i++;
        j--;
    }
    
    return true;
}
int main(){
    string str;
    cout<<"Enter String : ";
    getline(cin,str);
    if(isPalindrome(str))
        cout<<"String is Palindrome";
    else
        cout<<"String is not Palindrome";
    
}