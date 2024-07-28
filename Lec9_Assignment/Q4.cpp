// Write a function to count the number of digits in a number and then print the square of this number.
// Solution:
#include<iostream>
using namespace std;
int square(int n)
{
    return n*n;
}
int countDigit(int n){
    int count = 0;
    while(n!=0)
    {
        count++;
        n/=10;
    }
    return count;
}
int main()
{
    int n;
    cout<<"Enter Number : ";
    cin>>n;
    int numOfDigit = countDigit(n);
    cout<<square(numOfDigit);
}