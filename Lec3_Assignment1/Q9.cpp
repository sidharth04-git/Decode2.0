// Write a C++ program to input any character and check whether it is the alphabet, digit or special
// character.
#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter Character ";
    cin>>ch;
    if(ch>='A' && ch<='Z' || ch>='a' && ch<='z')
        cout<<"Character is Alphabet";
    else if(ch>='0' && ch<='9')
        cout<<"Character is Digit";
    else
        cout<<"Character is Special Characater";
    
}