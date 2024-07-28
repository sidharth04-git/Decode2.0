// Given two numbers a and b, write a function to print all odd numbers between them.
#include<iostream>
using namespace std;
void printOddnumbers(int a , int b){
   if(a<b)
   {
    for(int i=a; i<=b; i++)
    {
        if(i%2!=0)
            cout<<i<<" ";
    }
   }
   else
   {
    cout<<"Invalid !";
   }

}
int main()
{
    int a,b;
    cout<<"Enter First Number : ";
    cin>>a;
    cout<<"Enter Second Number : ";
    cin>>b;
    printOddnumbers(a,b);
}