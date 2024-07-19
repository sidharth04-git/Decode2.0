
// Write a program to print all the ASCII values and their equivalent characters of 26 alphabets using a while loop.
// Display this GP - 3,12,48,.. upto ‘n’ terms.

// Display this AP - 4,7,10,13,16.. upto ‘n’ terms.
#include<iostream>
using namespace std;
int main()
{
    int i = 65;
    while(i<=90)
    {
        cout<<i<<" "<<(char)i<<endl;
        i++;
    }
}