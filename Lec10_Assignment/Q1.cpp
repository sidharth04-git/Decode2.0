// Write a program to find the product of two numbers using pointers.

#include<iostream>
using namespace std;
void product(int* ptr1 , int* ptr2){  
    cout<<"Product is "<<(*ptr1 )* (*ptr2);
}
int main()
{
    int a,b;
    cout<<"Enter First Number : ";
    cin>>a;
    cout<<"Enter Second Number : ";
    cin>>b;
    int* ptr1 = &a;
    int* ptr2 = &b;
    product(ptr1,ptr2);
}