// Write a function to take the radius of a circle as an argument and return its area.

#include<iostream>
using namespace std;
float area(int radius){
    return 3.1415*radius*radius;
}

int main(){
    int radius;
    cout<<"Enter a radius : ";
    cin>>radius;
    cout << "Area of the circle is: " << area(radius) << " units square"; 
}

