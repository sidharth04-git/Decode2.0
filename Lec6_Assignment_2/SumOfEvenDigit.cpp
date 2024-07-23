// WAP to print the sum of all the even digits of a given number.

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a Number ";
    cin>>n;
    int EvenSum = 0;
    int lastdigit = 0;
    while(n>0)
    {
        lastdigit = n%10;
        if(lastdigit%2==0)
        {
            EvenSum+=lastdigit;
        }
        n/=10;
    }
    cout<<EvenSum;
}
