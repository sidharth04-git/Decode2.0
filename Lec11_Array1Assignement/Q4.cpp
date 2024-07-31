// Given an array, predict if the array contains duplicates or not.
 #include<iostream>
 using namespace std;
 int main()
 {
    int n;
    cout<<"Enter Size : ";
    cin>>n;
    int arr[n];
    bool flag = false;  // No Duplicate is Present
    cout<<"Enter Elements : ";
    for(int i=0; i<=n-1; i++)
    {
        for(int j=i+1; j<=n-1; j++)
        {
            if(arr[i]==arr[j]){
                flag = true; // Duplicate is Present
                break;
            }
        }
        if(flag==true)
            break;
    }
    if(flag==true)
        cout<<"Duplicate is Present";
    else
        cout<<"Duplicate is not Present";
 }