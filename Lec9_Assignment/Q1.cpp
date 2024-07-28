// Write a function to print squares of first n natural numbers, taking n as argument to the function
#include<iostream>
using namespace std;

int square(int x)
{
    return x*x;
}

void firstNsquare(int n)
{
    for(int i=1; i<=n; i++)
    {
        cout<<i<<" "<<square(i)<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter a Number : ";
    cin>>n;
    firstNsquare(n); 
}