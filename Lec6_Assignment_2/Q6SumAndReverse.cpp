// WAP to print the sum of a given number and its reverse.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Number ";
    cin>>n;
    int rev = 0;
    int a = n;
    int last_digit = 0;
    while(n>0)
    {
        rev *= 10;
        last_digit = n%10;
        rev += last_digit;
        n /= 10;
    }
    cout<<a+rev;
}
