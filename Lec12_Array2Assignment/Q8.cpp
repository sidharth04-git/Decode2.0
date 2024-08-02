#include<iostream>
using namespace std;
double getAverage(int arr[], int size);
int main () {
int balance[5] = {1000, 2, 3, 17, 50};
double avg;
avg = getAverage( balance[0], 5 );
cout<<"Average value is: " <<avg<<endl;
return 0;
}

// Error - in Actual Parameter we are passing an integer value(1000) and in formal Parameter we are using array to
// recieve an integer type value which will throw an argument type error