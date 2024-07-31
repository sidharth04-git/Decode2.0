// WAP to find the smallest missing positive element in the sorted Array that contains only
// positive elements.
 #include<iostream>
 using namespace std;
 int main()
 {
    int n;
    cout<<"Enter Size : ";
    cin>>n;
    int arr[n];
    bool flag = false; // no smallest +ve missing element
    cout<<"Enter Elements : ";
    for(int i=0; i<=n-1; i++)
    {
        cin>>arr[i];
    }
    for(int i=0; i<=n-1; i++){
        if(arr[i]!=i+1){
            flag = true;
            cout<<i+1;
            break;
        }
    }
    if(flag==false)
        cout<<"No Smallest Positive Element is missing";
 }
